<?php
/**
 * @file
 * gc_user_configuration.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function gc_user_configuration_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: founding member.
  $roles['founding member'] = array(
    'name' => 'founding member',
    'weight' => 4,
  );

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => 3,
  );

  return $roles;
}
