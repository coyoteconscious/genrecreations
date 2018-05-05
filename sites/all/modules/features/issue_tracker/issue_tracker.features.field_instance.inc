<?php
/**
 * @file
 * issue_tracker.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function issue_tracker_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_issue_tracker-comment_body'.
  $field_instances['comment-comment_node_issue_tracker-comment_body'] = array(
    'bundle' => 'comment_node_issue_tracker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-issue_tracker-field_description'.
  $field_instances['node-issue_tracker-field_description'] = array(
    'bundle' => 'issue_tracker',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please be sure to describe your issue clearly - if it is a bug, please include where on the site you found it (copy and paste the url where you found the problem, if possible), and steps to reproduce it.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_description',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 10,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-issue_tracker-field_issue_type'.
  $field_instances['node-issue_tracker-field_issue_type'] = array(
    'bundle' => 'issue_tracker',
    'default_value' => array(
      0 => array(
        'value' => 'Bug Report',
      ),
    ),
    'deleted' => 0,
    'description' => 'Bug Reports are for situations where the software does not work as was intended, or functionality is broken.
Feature Requests are for situations where the software works as designed, but the design can be improved.
Support Requests are for situations where you aren\'t sure how something should work, or you need help or instruction.
Other is for everything else, or when you aren\'t sure.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_issue_type',
    'label' => 'Issue Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-issue_tracker-field_priority'.
  $field_instances['node-issue_tracker-field_priority'] = array(
    'bundle' => 'issue_tracker',
    'default_value' => array(
      0 => array(
        'value' => 'Normal',
      ),
    ),
    'deleted' => 0,
    'description' => 'Critical is used to designate broken functionality that makes something unusable (e.g. data loss, data corruption).
Major is used for issues which have significant repercussions, but do not render the whole system unusable.
Normal is the default priority applied.
Minor is when there is no urgency to solve the issue.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_priority',
    'label' => 'Priority',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-issue_tracker-field_screenshot'.
  $field_instances['node-issue_tracker-field_screenshot'] = array(
    'bundle' => 'issue_tracker',
    'deleted' => 0,
    'description' => 'If reporting a bug or error, it is better to include the _text_ of any error messages in the description field. Also, if you are giving a screenshot of an error, please don\'t crop away the url bar in the image. If you have something in your browser\'s bookmarks bar, please hide the bookmarks bar before taking your screenshot, rather than cropping the image so the url bar doesn\'t appear.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_screenshot',
    'label' => 'Screenshot',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'issue-tracker',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '1 MB',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-issue_tracker-field_status'.
  $field_instances['node-issue_tracker-field_status'] = array(
    'bundle' => 'issue_tracker',
    'default_value' => array(
      0 => array(
        'value' => 'Open',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bug Reports are for situations where the software does not work as was intended, or functionality is broken.
Feature Requests are for situations where the software works as designed, but the design can be improved.
Support Requests are for situations where you aren\'t sure how something should work, or you need help or instruction.
Other is for everything else, or when you aren\'t sure.');
  t('Comment');
  t('Critical is used to designate broken functionality that makes something unusable (e.g. data loss, data corruption).
Major is used for issues which have significant repercussions, but do not render the whole system unusable.
Normal is the default priority applied.
Minor is when there is no urgency to solve the issue.');
  t('Description');
  t('If reporting a bug or error, it is better to include the _text_ of any error messages in the description field. Also, if you are giving a screenshot of an error, please don\'t crop away the url bar in the image. If you have something in your browser\'s bookmarks bar, please hide the bookmarks bar before taking your screenshot, rather than cropping the image so the url bar doesn\'t appear.');
  t('Issue Type');
  t('Please be sure to describe your issue clearly - if it is a bug, please include where on the site you found it (copy and paste the url where you found the problem, if possible), and steps to reproduce it.');
  t('Priority');
  t('Screenshot');
  t('Status');

  return $field_instances;
}
