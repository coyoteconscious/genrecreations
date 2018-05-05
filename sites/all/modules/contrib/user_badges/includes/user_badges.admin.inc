<?php
/**
 * @file
 * Contains administrative UI for User Badge.
 */

/**
 * Implements hook_form().
 */
function user_badge_form($form, &$form_state, $user_badge = NULL) {
  $form = array();

  $form['name'] = array(
    '#title' => t('Badge Name'),
    '#type' => 'textfield',
    '#default_value' => isset($user_badge->name) ? check_plain($user_badge->name) : '',
    '#description' => t('Name assigned to this user badge'),
    '#required' => TRUE,
    '#maxlength' => 255,
  );

  $form['weight'] = array(
    '#title' => t('Badge Weight'),
    '#type' => 'weight',
    '#default_value' => isset($user_badge->weight) ? $user_badge->weight : '0',
    '#description' => t('Name assigned to this user badge'),
    '#required' => TRUE,
    '#delta' => 5,
  );

  field_attach_form('user_badge', $user_badge, $form, $form_state);

  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => isset($user_badge->bid) ? t('Update User Badge') : t('Save User Badge'),
    ),
    'delete_link' => array(
      '#markup' => isset($user_badge->bid) ? l(t('Delete'),
        'admin/content/user_badge/manage/' . $user_badge->bid .
        '/delete',
        array(
          'attributes' => array(
            'id' => array('user-badge-delete-' . $user_badge->bid),
            'class' => array('button remove'),
          ),
          'query' => array('destination' => 'admin/content/user_badge'),
        )) : '',
    ),
  );
  return $form;
}

/**
 * Implements hook_form_validate().
 */
function user_badge_form_validate($form, &$form_state) {
}

/**
 * Implements hook_form_submit().
 */
function user_badge_form_submit($form, &$form_state) {
  $user_badge = entity_ui_form_submit_build_entity($form, $form_state);
  $user_badge->save();
  drupal_set_message(t('@name user badge has been saved.', array('@name' => $user_badge->name)));
  $form_state['redirect'] = 'user-badge/' . $user_badge->bid;
}

/**
 * Confirmation before bulk deleting user badge.
 */
function user_badges_bulk_delete($form, &$form_state, $bids) {
  $bids = explode('|', $bids);
  $user_badges = user_badge_load_multiple($bids);
  $form = array();
  $form_state['bids'] = $bids;
  $variables = array(
    'type' => 'ul',
    'items' => array(),
    'title' => '',
    'attributes' => array(),
  );
  foreach ($user_badges as $user_badge) {
    $variables['items'][] = check_plain($user_badge->name);
  }
  $form['summary'] = array(
    '#markup' => theme_item_list($variables),
  );
  return confirm_form($form, t('Delete these user badges?'), 'admin/content/user_badge', t('Are you sure you want to delete these user badges?'), t('Delete all'), t('Cancel'));
}
/**
 * Implements hook_submit().
 */
function user_badges_bulk_delete_submit($form, &$form_state) {
  $bids = $form_state['bids'];
  user_badge_delete_multiple($bids);
  drupal_set_message(t('User Badges deleted'));
  drupal_goto('admin/content/user_badge');
}

/**
 * Form builder: roles form.
 */
function user_badges_roles_form($form, &$form_state) {
  // No badges for the anonymous role.
  $roles = user_roles(TRUE);
  $role_badges = user_badges_get_roles(NULL, array('returnbadges' => TRUE));

  $form['user_badges_role'] = array(
    '#type' => 'fieldset',
    '#title' => t('Role Badges'),
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
    '#tree' => TRUE,
    '#weight' => 10,
  );
  // Determine which selector type the user wants to use to set badges
  // from their settings.
  // If the user wants to use the drop-down selector,
  // display that if there are records in the db.
  if (variable_get('user_badges_selector_type', 1) == 0) {

    // First, load all the available badges from the database
    // by calling the following helper function.
    $result = user_badges_load_badges();

    // Display the drop-down only if we get any records.
    if (count($result)) {
      foreach ($result as $badge) {
        $options[$badge->bid] = t('Badge') . ' ' . $badge->bid . ' ' . '-' . ' ' . check_plain($badge->name);
      }

      $form['user_badges_blocked_badge'] = array(
        '#type' => 'select',
        '#title' => t('Blocked user'),
        '#empty_option' => '- None -',
        '#options' => $options,
        '#default_value' => variable_get('user_badges_blocked_badge', '0'),
        '#weight' => 0,
      );

      $user_badge_roles = variable_get('user_badges_role', 0);
      foreach ($roles as $rid => $role) {
        $default = '';
        if (isset($user_badge_roles[$rid]) && $user_badge_roles[$rid]) {
          $default = $user_badge_roles[$rid];
        }
        $form['user_badges_role'][$rid] = array(
          '#type' => 'select',
          '#title' => check_plain($role),
          '#empty_option' => '- None -',
          '#options' => $options,
          '#default_value' => $default,
        );
      }
    }
  }
  // Else, if the user wants to use the autocomplete or
  // if there are no records in the db, display that.
  else {
    $default = '';
    $user_badge = user_badge_load(variable_get('user_badges_blocked_badge', 0));
    if ($user_badge) {
      $default = check_plain($user_badge->name) . ' (' . $user_badge->bid . ')';
    }
    $form['user_badges_blocked_badge'] = array(
      '#type' => 'textfield',
      '#title' => t('Blocked user'),
      '#size' => 40,
      '#maxlength' => 255,
      '#autocomplete_path' => 'entityreference/autocomplete/single/user_badge_badges/user/user/',
      '#default_value' => $default,
      '#weight' => 0,
    );

    $user_badge_roles = variable_get('user_badges_role', 0);
    foreach ($roles as $rid => $role) {
      $default = '';
      if (isset($user_badge_roles[$rid]) && $user_badge_roles[$rid]) {
        $user_badge = user_badge_load($user_badge_roles[$rid]);
        if ($user_badge) {
          $default = check_plain($user_badge->name) . ' (' . $user_badge->bid . ')';
        }
      }
      $form['user_badges_role'][$rid] = array(
        '#type' => 'textfield',
        '#title' => check_plain($role),
        '#maxlength' => 255,
        '#autocomplete_path' => 'entityreference/autocomplete/single/user_badge_badges/user/user/',
        '#default_value' => $default,
      );
    }
  }

  $form['#submit'][] = 'user_badges_roles_form_add_badges_submit';

  return system_settings_form($form);
}

/**
 * Submit for add badges to corresponding users.
 */
function user_badges_roles_form_add_badges_submit($form, &$form_state) {
  $values = $form_state['values'];
  $blocked = $values['user_badges_blocked_badge'];
  $roles = $values['user_badges_role'];
  if ($blocked) {
    user_badges_add_role_based_badge($blocked, FALSE, TRUE);
  }
  foreach ($roles as $rid => $bid) {
    if ($bid) {
      user_badges_add_role_based_badge($bid, $rid);
    }
    else {
      $remove_badges[] = $rid;
    }
  }

  user_badges_ensure_old_roles_badges_removed($roles, $blocked);
}

/**
 * Validation function for user_badges_roles_form.
 */
function user_badges_roles_form_validate($form, &$form_state) {
  $array = array('user_badges_blocked_badge' => $form_state['values']['user_badges_blocked_badge']) + $form_state['values']['user_badges_role'];
  $errors = FALSE;
  foreach (array_count_values($array) as $key => $count) {
    if ($key && $count > 1) {
      form_set_error('', t("You shouldn't use same badge for more than one role (or for blocked user and one role)"));
      $errors = TRUE;
      break;
    }
  }

  if (!$errors && variable_get('user_badges_selector_type', 1)) {
    $values = &$form_state['values'];
    if ($values['user_badges_blocked_badge']) {
      $parts = explode('(', $values['user_badges_blocked_badge']);
      $values['user_badges_blocked_badge'] = substr(end($parts), 0, -1);
    }
    foreach ($values['user_badges_role'] as $key => &$value) {
      $parts = explode('(', $value);
      $value = substr(end($parts), 0, -1);
    }
  }
}

/**
 * Form for general module settings.
 */
function user_badges_settings_form($form, &$form_state) {
  $noyes = array(t('No'), t('Yes'));

  /*$form['user_badges_showblocked'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Only show blocked user badge'),
    '#default_value' => variable_get('user_badges_showblocked', 0),
    '#description' => t('If checked, only the badge associated to blocked users will be shown, overriding other badges the user eventually has as well as any other settings.') . ' ' .
    t('Note that if there is no badge associated to blocked users, no badges will appear.') . ' ' .
    t('This option only acts on blocked users and has no repercussions on active user badges.'),
    '#attributes' => array('class' => array('container-inline')),
  );*/

  $form['user_badges_userweight'] = array(
    '#type' => 'radios',
    '#options' => $noyes,
    '#title' => t('Allow users to reorder badges'),
    '#default_value' => variable_get('user_badges_userweight', 0),
    '#description' => t('If checked, users will have the ability to reweight their badges in their profile, enabling them to set what order their badges display, and also which badges will display if a limit is set above.') . ' ' .
    t('Note that you can make individual badges exempt from this function, allowing you to force them to the top or bottom of the list by giving them a very high or low weight value.'),
    '#attributes' => array('class' => array('container-inline')),
  );

  $form['user_badges_selector_type'] = array(
    '#type' => 'select',
    '#options' => array(
      0 => t('drop-down multi-select'),
      1 => t('autocomplete'),
    ),
    '#title' => t('Selector to set a badge'),
    '#default_value' => variable_get('user_badges_selector_type', 1),
    '#description' => t('Select which type of selector to use to set a badge.'),
    '#attributes' => array('class' => array('container-inline')),
  );

  return system_settings_form($form);
}

/**
 * Validate user_badges_settings_form input.
 */
function user_badges_settings_form_validate($form, $form_state) {
}
