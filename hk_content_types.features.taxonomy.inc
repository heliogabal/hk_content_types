<?php
/**
 * @file
 * hk_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function hk_content_types_taxonomy_default_vocabularies() {
  return array(
    'heating_type' => array(
      'name' => 'Heating type',
      'machine_name' => 'heating_type',
      'description' => 'Is being used in the object content type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'status_quo' => array(
      'name' => 'Status quo',
      'machine_name' => 'status_quo',
      'description' => 'Is being used in the object content type to describe the maintenance state of the object',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'vocabulary_3' => array(
      'name' => 'Boroughs',
      'machine_name' => 'vocabulary_3',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_bezirke',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'vocabulary_5' => array(
      'name' => 'Fittings',
      'machine_name' => 'vocabulary_5',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'vocabulary_6' => array(
      'name' => 'Apartment type',
      'machine_name' => 'vocabulary_6',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_wohnungstyp',
      'weight' => -6,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'vocabulary_8' => array(
      'name' => 'Category',
      'machine_name' => 'vocabulary_8',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'features_kategorie_test',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
