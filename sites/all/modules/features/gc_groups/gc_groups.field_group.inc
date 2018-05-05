<?php
/**
 * @file
 * gc_groups.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gc_groups_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|group|publisher|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'group';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_publisher_information';
  $field_group->data = array(
    'label' => 'Group Content',
    'weight' => '9',
    'children' => array(),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-htab',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|group|publisher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher_home|group|publisher|default';
  $field_group->group_name = 'group_publisher_home';
  $field_group->entity_type = 'group';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_publisher_information';
  $field_group->data = array(
    'label' => 'Home',
    'weight' => '7',
    'children' => array(
      0 => 'field_description',
      1 => 'field_publisher_website',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Home',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-publisher-home field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_publisher_home|group|publisher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher_information|group|publisher|default';
  $field_group->group_name = 'group_publisher_information';
  $field_group->entity_type = 'group';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Publisher Information',
    'weight' => '1',
    'children' => array(
      0 => 'group_publisher_links',
      1 => 'group_publisher_home',
      2 => 'group_content',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-publisher-information field-group-htabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_publisher_information|group|publisher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher_links|group|publisher|default';
  $field_group->group_name = 'group_publisher_links';
  $field_group->entity_type = 'group';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_publisher_information';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '8',
    'children' => array(
      0 => 'field_links',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_publisher_links|group|publisher|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publisher_signup|group|publisher|default';
  $field_group->group_name = 'group_publisher_signup';
  $field_group->entity_type = 'group';
  $field_group->bundle = 'publisher';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Signup',
    'weight' => '2',
    'children' => array(
      0 => 'membership_actions',
    ),
    'format_type' => 'hidden',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(),
    ),
  );
  $field_groups['group_publisher_signup|group|publisher|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Group Content');
  t('Home');
  t('Links');
  t('Publisher Information');
  t('Signup');

  return $field_groups;
}
