<?php
/**
 * @file
 * gc_groups.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function gc_groups_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'group-member-field_description'.
  $field_instances['group-member-field_description'] = array(
    'bundle' => 'member',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'group',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'group-member-field_header_image'.
  $field_instances['group-member-field_header_image'] = array(
    'bundle' => 'member',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'group',
    'field_name' => 'field_header_image',
    'label' => 'Header Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'group-member-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '1mb',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'group-publisher-field_description'.
  $field_instances['group-publisher-field_description'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the description of your publishing organization. It will be visible to everyone on your publisher\'s space.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'group',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'group-publisher-field_links'.
  $field_instances['group-publisher-field_links'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may add links here to other important places having to do with your publishing organization. This can be any permanent or semi-permanent link that isn\'t covered under some other field. Please don\'t use this field to create links to everything in your catalog.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'group',
    'field_name' => 'field_links',
    'label' => 'Links',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'group-publisher-field_publisher_logo'.
  $field_instances['group-publisher-field_publisher_logo'] = array(
    'bundle' => 'publisher',
    'deleted' => 0,
    'description' => 'Use this field to upload your company logo, if you have one. It will be visible both on your publisher\'s space, and in listings elsewhere on the site.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'group',
    'field_name' => 'field_publisher_logo',
    'label' => 'Publisher Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 16,
      'file_directory' => 'publisher/publisher-logos',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'group-publisher-field_publisher_website'.
  $field_instances['group-publisher-field_publisher_website'] = array(
    'bundle' => 'publisher',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use this field to provide a direct link to your company website. It can be a standalone website (preferably), or a link to your presence on social media.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'url',
        'settings' => array(
          'nofollow' => FALSE,
          'trim_length' => 80,
        ),
        'type' => 'url_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'group',
    'field_name' => 'field_publisher_website',
    'label' => 'Publisher Website',
    'required' => 0,
    'settings' => array(
      'title_fetch' => 1,
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'url',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'url_external',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Header Image');
  t('Links');
  t('Publisher Logo');
  t('Publisher Website');
  t('This is the description of your publishing organization. It will be visible to everyone on your publisher\'s space.');
  t('Use this field to provide a direct link to your company website. It can be a standalone website (preferably), or a link to your presence on social media.');
  t('Use this field to upload your company logo, if you have one. It will be visible both on your publisher\'s space, and in listings elsewhere on the site.');
  t('You may add links here to other important places having to do with your publishing organization. This can be any permanent or semi-permanent link that isn\'t covered under some other field. Please don\'t use this field to create links to everything in your catalog.');

  return $field_instances;
}
