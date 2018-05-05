<?php
/**
 * @file
 * gc_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function gc_content_types_taxonomy_default_vocabularies() {
  return array(
    'hashtags' => array(
      'name' => 'Hashtags',
      'machine_name' => 'hashtags',
      'description' => 'Contains #hashtags used in Statuses.',
      'hierarchy' => 0,
      'module' => 'statuses_tags',
      'weight' => -9,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'post_categories' => array(
      'name' => 'Post Categories',
      'machine_name' => 'post_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
