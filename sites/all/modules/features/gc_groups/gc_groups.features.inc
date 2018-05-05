<?php
/**
 * @file
 * gc_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gc_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_group_role().
 */
function gc_groups_default_group_role() {
  $items = array();
  $items['group_admin'] = entity_import('group_role', '{
    "type" : "",
    "name" : "group_admin",
    "label" : "Group Admin",
    "global" : "1",
    "permissions" : [
      "access member overview",
      "access member pages",
      "access member metadata",
      "edit own membership",
      "edit group",
      "join group",
      "join group form",
      "request membership",
      "request membership form",
      "leave group",
      "view group",
      "view members",
      "add member",
      "invite members by user",
      "invite members by mail",
      "manage mail invitations",
      "view article node",
      "create article node",
      "update own article node",
      "update any article node",
      "delete own article node",
      "view page node",
      "create page node",
      "update own page node",
      "update any page node",
      "delete own page node",
      "view review node",
      "create review node",
      "update own review node",
      "update any review node",
      "delete own review node"
    ],
    "weight" : "10",
    "rdf_mapping" : []
  }');
  $items['moderator'] = entity_import('group_role', '{
    "type" : "",
    "name" : "moderator",
    "label" : "Group Moderator",
    "global" : "1",
    "permissions" : [
      "access member overview",
      "access member pages",
      "access member metadata",
      "edit own membership",
      "leave group",
      "view group",
      "view members",
      "add member",
      "invite members by user",
      "invite members by mail",
      "manage mail invitations",
      "view article node",
      "create article node",
      "update own article node",
      "delete own article node",
      "view page node",
      "view review node",
      "update own review node",
      "delete own review node"
    ],
    "weight" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_group_type().
 */
function gc_groups_default_group_type() {
  $items = array();
  $items['administrative'] = entity_import('group_type', '{
    "name" : "administrative",
    "label" : "Administrative",
    "anonymous_permissions" : [],
    "outsider_permissions" : [],
    "member_permissions" : [],
    "config" : { "creator_roles" : [ "group_admin" ] },
    "weight" : "0",
    "rdf_mapping" : [],
    "roles" : []
  }');
  $items['member'] = entity_import('group_type', '{
    "name" : "member",
    "label" : "Member",
    "anonymous_permissions" : [],
    "outsider_permissions" : [ "request membership", "view group" ],
    "member_permissions" : [
      "leave group",
      "access member overview",
      "access member pages",
      "edit own membership",
      "view group",
      "view members",
      "view article node",
      "create article node",
      "update own article node",
      "view page node",
      "view post node",
      "create post node",
      "update own post node",
      "view review node",
      "create review node",
      "update own review node"
    ],
    "config" : { "creator_roles" : [ "group_admin" ] },
    "weight" : "0",
    "rdf_mapping" : [],
    "roles" : []
  }');
  $items['publisher'] = entity_import('group_type', '{
    "name" : "publisher",
    "label" : "Publisher",
    "anonymous_permissions" : [ "view group", "view members" ],
    "outsider_permissions" : [ "view page node", "view post node", "view group", "view members" ],
    "member_permissions" : [
      "access member overview",
      "access member pages",
      "edit own membership",
      "view group",
      "view members",
      "view page node",
      "view post node"
    ],
    "config" : { "creator_roles" : [ "group_admin" ] },
    "weight" : "0",
    "rdf_mapping" : [],
    "roles" : [
      {
        "type" : "publisher",
        "name" : "publisher_admin",
        "label" : "Publisher Admin",
        "global" : "0",
        "permissions" : [
          "access member overview",
          "access member pages",
          "access member metadata",
          "edit own membership",
          "edit group",
          "leave group",
          "view group",
          "view members",
          "add member",
          "view page node",
          "create page node",
          "update own page node",
          "update any page node",
          "view post node",
          "create post node",
          "update own post node",
          "update any post node"
        ],
        "weight" : "0",
        "rdf_mapping" : []
      },
      {
        "type" : "publisher",
        "name" : "publisher_staff",
        "label" : "Publisher Staff",
        "global" : "0",
        "permissions" : [],
        "weight" : "0",
        "rdf_mapping" : []
      },
      {
        "type" : "publisher",
        "name" : "publisher_contributors",
        "label" : "Publisher Contributors",
        "global" : "0",
        "permissions" : [],
        "weight" : "0",
        "rdf_mapping" : []
      },
      {
        "type" : "publisher",
        "name" : "publisher_moderator",
        "label" : "Publisher Moderator",
        "global" : "0",
        "permissions" : [
          "access member overview",
          "access member pages",
          "access member metadata",
          "leave group",
          "view group",
          "view members",
          "invite members by user",
          "invite members by mail",
          "manage mail invitations",
          "view post node",
          "create post node",
          "update own post node",
          "update any post node"
        ],
        "weight" : "0",
        "rdf_mapping" : []
      }
    ]
  }');
  return $items;
}
