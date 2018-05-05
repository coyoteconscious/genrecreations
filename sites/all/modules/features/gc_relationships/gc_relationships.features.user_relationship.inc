<?php
/**
 * @file
 * gc_relationships.features.user_relationship.inc
 */

/**
 * Implements hook_user_relationships_default_relationships().
 */
function gc_relationships_user_relationships_default_relationships() {
  $relationships = array();

  // Exported user_relationship style: connection.
  $relationships['connection'] = array(
    'machine_name' => 'connection',
    'name' => 'Connection',
    'plural_name' => 'connections',
    'is_oneway' => 0,
    'is_reciprocal' => 0,
    'requires_approval' => 1,
    'expires_val' => 0,
    'reverse_name' => '',
    'name_capitalized' => 'Connection',
    'plural_name_capitalized' => 'Connections',
    'reverse_name_capitalized' => '',
    'reverse_plural_name' => '',
    'reverse_plural_name_capitalized' => '',
  );

  // Exported user_relationship style: following.
  $relationships['following'] = array(
    'machine_name' => 'following',
    'name' => 'Follower',
    'plural_name' => 'people you are following',
    'is_oneway' => 1,
    'is_reciprocal' => 1,
    'requires_approval' => 0,
    'expires_val' => 0,
    'reverse_name' => 'follower',
    'name_capitalized' => 'Following',
    'plural_name_capitalized' => 'Following',
    'reverse_name_capitalized' => 'Followerr',
    'reverse_plural_name' => 'followers',
    'reverse_plural_name_capitalized' => 'Followers',
  );

  return $relationships;
}
