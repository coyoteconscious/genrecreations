<?php
/**
 * @file
 * gc_user_configuration.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gc_user_configuration_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_details|user|user|form';
  $field_group->group_name = 'group_account_details';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_your_account';
  $field_group->data = array(
    'label' => 'Account Details',
    'weight' => '8',
    'children' => array(
      0 => 'account',
      1 => 'timezone',
      2 => 'locale',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_account_details|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_communication|user|user|form';
  $field_group->group_name = 'group_communication';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_your_account';
  $field_group->data = array(
    'label' => 'Privacy & Permissions',
    'weight' => '7',
    'children' => array(
      0 => 'user_relationships_ui_settings',
      1 => 'contact',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_communication|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_edit_your_account|user|user|form';
  $field_group->group_name = 'group_edit_your_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Edit Your Account',
    'weight' => '0',
    'children' => array(
      0 => 'group_account_details',
      1 => 'group_communication',
      2 => 'group_personal',
      3 => 'group_titles_interests',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Edit Your Account',
      'instance_settings' => array(
        'id' => '',
        'classes' => '',
      ),
    ),
  );
  $field_groups['group_edit_your_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|user|user|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_your_account';
  $field_group->data = array(
    'label' => 'Personal',
    'weight' => '4',
    'children' => array(
      0 => 'field_gender',
      1 => 'field_birthdate',
      2 => 'field_tagline',
      3 => 'picture',
      4 => 'field_user_picture',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_personal|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_titles_interests|user|user|form';
  $field_group->group_name = 'group_titles_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_edit_your_account';
  $field_group->data = array(
    'label' => 'Titles and Interests',
    'weight' => '5',
    'children' => array(
      0 => 'field_personal_tags',
      1 => 'field_genres',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_titles_interests|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Account Details');
  t('Edit Your Account');
  t('Personal');
  t('Privacy & Permissions');
  t('Titles and Interests');

  return $field_groups;
}
