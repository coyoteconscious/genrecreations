<?php
/**
 * @file
 * gc_site_config.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function gc_site_config_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'coyoteconscious@gmail.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
