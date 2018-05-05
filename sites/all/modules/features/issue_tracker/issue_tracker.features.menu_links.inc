<?php
/**
 * @file
 * issue_tracker.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function issue_tracker_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer_issue-tracker:issue-tracker.
  $menu_links['menu-footer_issue-tracker:issue-tracker'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'issue-tracker',
    'router_path' => 'issue-tracker',
    'link_title' => 'Issue Tracker',
    'options' => array(
      'identifier' => 'menu-footer_issue-tracker:issue-tracker',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: navigation_bugsissues:issue-tracker.
  $menu_links['navigation_bugsissues:issue-tracker'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'issue-tracker',
    'router_path' => 'issue-tracker',
    'link_title' => 'Bugs/Issues',
    'options' => array(
      'attributes' => array(
        'title' => 'Report bugs, make formal feature requests, make reports about the site itself.',
      ),
      'identifier' => 'navigation_bugsissues:issue-tracker',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_create-issue:node/add/issue-tracker.
  $menu_links['navigation_create-issue:node/add/issue-tracker'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/issue-tracker',
    'router_path' => 'node/add/issue-tracker',
    'link_title' => 'Create Issue',
    'options' => array(
      'attributes' => array(
        'title' => 'Issue Tracker content is used to report bugs and issues, make feature requests, or report problems with the site itself.',
      ),
      'identifier' => 'navigation_create-issue:node/add/issue-tracker',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'navigation_bugsissues:issue-tracker',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Bugs/Issues');
  t('Create Issue');
  t('Issue Tracker');

  return $menu_links;
}
