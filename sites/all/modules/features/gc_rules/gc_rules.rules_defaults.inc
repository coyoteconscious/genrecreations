<?php
/**
 * @file
 * gc_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function gc_rules_default_rules_configuration() {
  $items = array();
  $items['rules_create_member_group_for_user'] = entity_import('rules_config', '{ "rules_create_member_group_for_user" : {
      "LABEL" : "Create Member Group for User",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "entity_create" : {
            "USING" : { "type" : "group" },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : { "data" : [ "entity-created:group-type" ], "value" : "member" } },
        { "data_set" : {
            "data" : [ "entity-created:title" ],
            "value" : "[account:name]\\u0027s Space"
          }
        },
        { "entity_save" : { "data" : [ "entity-created" ], "immediate" : "1" } },
        { "entity_create" : {
            "USING" : { "type" : "group_membership" },
            "PROVIDE" : { "entity_created" : { "group_membership_created" : "Created group_membership" } }
          }
        },
        { "data_set" : {
            "data" : [ "group-membership-created:group" ],
            "value" : [ "entity-created" ]
          }
        },
        { "data_set" : { "data" : [ "group-membership-created:user" ], "value" : [ "account" ] } },
        { "data_set" : {
            "data" : [ "group-membership-created:roles:0" ],
            "value" : "group_admin"
          }
        },
        { "entity_save" : { "data" : [ "group-membership-created" ], "immediate" : "1" } },
        { "data_set" : {
            "data" : [ "account:field-member-group" ],
            "value" : [ "entity-created" ]
          }
        }
      ]
    }
  }');
  return $items;
}
