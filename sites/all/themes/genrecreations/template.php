<?php
// Genrecreations based on sky by Adaptivethemes.com

/**
 * Override or insert variables into the html template.
 */
function genrecreations_preprocess_html(&$vars) {
  global $theme_key;
  $theme_name = $theme_key;

  // Add a class for the active color scheme
  if (module_exists('color') && function_exists('get_color_scheme_name')) {
    $class = check_plain(get_color_scheme_name($theme_name));
    $vars['classes_array'][] = 'color-scheme-' . drupal_html_class($class);
  }

  // Add class for the active theme
  $vars['classes_array'][] = drupal_html_class($theme_name);

  // Browser sniff and add a class, unreliable but quite useful
  // $vars['classes_array'][] = css_browser_selector();

  // Add theme settings classes
  $settings_array = array(
    'box_shadows',
    'body_background',
    'menu_bullets',
    'menu_bar_position',
    'content_corner_radius',
    'tabs_corner_radius',
  );
  foreach ($settings_array as $setting) {
    $vars['classes_array'][] = at_get_setting($setting);
  }

}

/**
 * Override or insert variables into the html template.
 */
function genrecreations_process_html(&$vars) {
  // Hook into the color module.
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Override or insert variables into the page template.
 */
function genrecreations_preprocess_page(&$vars) {
  if ($vars['page']['footer'] || $vars['page']['four_first']|| $vars['page']['four_second'] || $vars['page']['four_third'] || $vars['page']['four_fourth']) {
    $vars['classes_array'][] = 'with-footer';
  }
}

/**
 * Override or insert variables into the page template.
 */
function genrecreations_process_page(&$vars) {
  // Hook into the color module.
  if (module_exists('color')) {
    _color_page_alter($vars);
  }
  if (arg(0)=="user" || arg(0)=="users" ){
    unset ($vars['page']['content']['system_main']['user_picture']);
  }
}

/**
 * Override or insert variables into the block template.
 */
function genrecreations_preprocess_block(&$vars) {
  if ($vars['block']->module == 'superfish' || $vars['block']->module == 'nice_menu') {
    $vars['content_attributes_array']['class'][] = 'clearfix';
  }
  if (!$vars['block']->subject) {
    $vars['content_attributes_array']['class'][] = 'no-title';
  }
  if ($vars['block']->region == 'menu_bar' || $vars['block']->region == 'top_menu') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Override or insert variables into the node template.
 */
function genrecreations_preprocess_node(&$vars) {
  // Add class if user picture exists
  if(!empty($vars['submitted']) && $vars['display_submitted']) {
    if ($vars['user_picture']) {
      $vars['header_attributes_array']['class'][] = 'with-picture';
    }
  }
}

/**
 * Override or insert variables into the comment template.
 */
function genrecreations_preprocess_comment(&$vars) {
  // Add class if user picture exists
  if ($vars['picture']) {
    $vars['header_attributes_array']['class'][] = 'with-user-picture';
  }
}


/**
 * Process variables for region.tpl.php
 */
function genrecreations_process_region(&$vars) {
  // Add the click handle inside region menu bar
  if ($vars['region'] === 'menu_bar') {
    $vars['inner_prefix'] = '<h2 class="menu-toggle"><a href="#">' . t('Menu') . '</a></h2>';
  }
}

/**
 * Implements hook_user_view().
 */
function genrecreations_user_view($account, $view_mode) {
  if (variable_get('statuses_profile', 1) && $view_mode == 'full') {
    $value = theme('statuses_form_display', array('recipient' => $account, 'type' => 'user'));
    // Don't show this section if there's nothing there or the user doesn't have permission to see it.
    if (empty($value)) {
      return;
    }
    if (!isset($account->content['statuses'])) {
      $account->content['statuses'] = array();
    }
    $account->content['statuses'] += array(
      '#type' => 'user_profile_category',
      '#attributes' => array('class' => array('statuses-profile-category')),
      '#weight' => -5,
      '#title' => t('Status Messages'),
    );
    $account->content['statuses']['status'] = array(
      '#type' => 'user_profile_item',
      '#title' => '',
      '#markup' => $value,
      '#attributes' => array('class' => array('statuses profile')),
    );
  }
}

function _genrecreations_field__field_guidelines($variables) {
  $output = '';
  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  // Render the items.
  $output .= '<div class="field-items"' . $variables['content_attributes'] . '>';
  foreach ($variables['items'] as $delta => $item) {
    $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
    $inner_output = '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
    $item_data = reset($item['entity']['paragraphs_item']);
    //$field_value_subject = field_get_items('paragraphs_item', $item_data['#entity'], 'field_subject');
    $field_value_subject = magic_field_values('paragraphs_item', $item_data['#entity'], 'field_subject');
    $output .= _gctweaks_wrap_in_collapsible($inner_output, $field_value_subject['0']['value'], TRUE);
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';
  return $output;
}

function _gctweaks_wrap_in_collapsible($content, $title='hide/show', $collapsed=false) {
  if (module_exists('ctools')) {
    return theme('ctools_collapsible',
      array(
        'handle' => $title,
        'content' => $content,
        'collapsed' => $collapsed
      )
    );
  }
}

/* get the values out of a field */
function magic_field_values($entity_type, $entity, $field_name, $delta = null) {
  $field_items = field_get_items($entity_type, $entity, $field_name);
  /* if a delta value is supplied, render that item otherwise, send the lot
  back. */
  if (isset($delta)) {
    return field_view_value($entity_type, $entity, $field_name, $field_items[$delta]);
  }
  else {
    return $field_items;
  }
}
