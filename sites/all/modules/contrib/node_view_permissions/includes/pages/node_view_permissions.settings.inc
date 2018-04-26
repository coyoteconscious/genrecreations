<?php

/**
 * Page callback. 
 */
function node_view_permissions_settings_page_form($form, &$form_state) {
  $form['description'] = array(
    '#type' => 'item',
    '#markup' => t('Select content types configurable by extra permissions "View own content" and "View any content".'),
  );
  foreach (node_type_get_types() as $type => $info) {
    $form['node_view_permissions_' . $type] = array(
      '#type' => 'checkbox',
      '#title' => $info->name,
      '#default_value' => node_view_permissions_check_node_type_activation($type),
      '#access' => user_access('administer site configuration'),
    );
  }

  $form['node_grants'] = array(
    '#type' => 'fieldset',
    '#title' => t('Node Grants'),
    '#description' => t('Additinal options when node grants are in use.'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#access' => user_access('administer site configuration'),
    '#disabled' => !(bool)count(module_implements('node_grants')),
  );

  $form['node_grants']['node_view_permissions_override'] = array(
    '#type' => 'checkbox',
    '#title' => t('Override node grants by other modules'),
    '#description' => t('When used in conjunction with modules implementing node grants, do you want this module\'s permissions to override the others.'),
    '#default_value' => isset($form_state['values']['node_view_permissions_override']) ? $form_state['values']['node_view_permissions_override'] : variable_get('node_view_permissions_override', FALSE),
    '#disabled' => !(bool)count(module_implements('node_grants')),
  );
    
  $form = system_settings_form($form);
  $form['#submit'][] = 'node_view_permissions_settings_page_form_submit';
  return $form;
}

/**
 * Submit handler. 
 */
function node_view_permissions_settings_page_form_submit($form, &$form_state) {
  if (count(module_implements('node_grants'))) {
    node_access_needs_rebuild(TRUE);
  }
}
