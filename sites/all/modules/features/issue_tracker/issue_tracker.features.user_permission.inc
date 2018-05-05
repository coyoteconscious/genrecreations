<?php
/**
 * @file
 * issue_tracker.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function issue_tracker_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'change_issue_status'.
  $permissions['change_issue_status'] = array(
    'name' => 'change_issue_status',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
    ),
    'module' => 'gctweaks',
  );

  // Exported permission: 'create issue_tracker content'.
  $permissions['create issue_tracker content'] = array(
    'name' => 'create issue_tracker content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any issue_tracker content'.
  $permissions['delete any issue_tracker content'] = array(
    'name' => 'delete any issue_tracker content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own issue_tracker content'.
  $permissions['delete own issue_tracker content'] = array(
    'name' => 'delete own issue_tracker content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any issue_tracker content'.
  $permissions['edit any issue_tracker content'] = array(
    'name' => 'edit any issue_tracker content',
    'roles' => array(
      'administrator' => 'administrator',
      'moderator' => 'moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own issue_tracker content'.
  $permissions['edit own issue_tracker content'] = array(
    'name' => 'edit own issue_tracker content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
