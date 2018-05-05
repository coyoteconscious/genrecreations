<?php
/**
 * @file
 * gc_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gc_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gc_content_types_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Articles are intended for items of general interest or education. Treat them like your very own newspaper or magazine articles.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'issue_tracker' => array(
      'name' => t('Issue Tracker'),
      'base' => 'node_content',
      'description' => t('Issue Tracker content is used to report bugs and issues, make feature requests, or report problems with the site itself.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'post' => array(
      'name' => t('Post'),
      'base' => 'node_content',
      'description' => t('Use posts for anything not covered by another content type. They can be used for press releases, general updates, announcements, or whatever you like.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'publisher_information' => array(
      'name' => t('Publisher Information'),
      'base' => 'node_content',
      'description' => t('This is specialized content for publishers to use for announcements, calls for submissions, guidelines, and events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'review' => array(
      'name' => t('Review'),
      'base' => 'node_content',
      'description' => t('For reviews of books, art, media, movies, or other creative works.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
