<?php
/**
 * @file
 * issue_tracker.features.inc
 */

/**
 * Implements hook_views_api().
 */
function issue_tracker_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function issue_tracker_node_info() {
  $items = array(
    'issue_tracker' => array(
      'name' => t('Issue Tracker'),
      'base' => 'node_content',
      'description' => t('Issue Tracker content is used to report bugs and issues, make feature requests, or report problems with the site itself.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
