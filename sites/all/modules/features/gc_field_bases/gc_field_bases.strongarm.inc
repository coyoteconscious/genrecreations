<?php
/**
 * @file
 * gc_field_bases.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gc_field_bases_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_interests_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_interests_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_people_tags_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_people_tags_pattern'] = $strongarm;

  return $export;
}
