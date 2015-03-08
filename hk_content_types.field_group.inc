<?php
/**
 * @file
 * hk_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function hk_content_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_akkordeon|node|apartment|default';
  $field_group->group_name = 'group_akkordeon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_text';
  $field_group->data = array(
    'label' => 'Akkordeon',
    'weight' => '3',
    'children' => array(
      0 => 'group_lage',
      1 => 'group_sonstiges',
    ),
    'format_type' => 'accordion',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-akkordeon field-group-accordion',
        'effect' => 'bounceslide',
      ),
    ),
  );
  $export['group_akkordeon|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_card_content|node|objekt|teaser';
  $field_group->group_name = 'group_card_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_project_card';
  $field_group->data = array(
    'label' => 'card-content',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'node_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'card-content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-card-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_card_content|node|objekt|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_basis|node|objekt|form';
  $field_group->group_name = 'group_ht_basis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basisdaten',
    'weight' => '0',
    'children' => array(
      0 => 'field_bezirk',
      1 => 'field_kategorie2',
      2 => 'field_objektid_nunumeric',
      3 => 'field_ansprechpartner',
      4 => 'field_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-basis field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_basis|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_bilder|node|objekt|form';
  $field_group->group_name = 'group_ht_bilder';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bilder',
    'weight' => '3',
    'children' => array(
      0 => 'field_object_images',
      1 => 'field_objektfotos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-bilder field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_bilder|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_merkmale|node|objekt|form';
  $field_group->group_name = 'group_ht_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '2',
    'children' => array(
      0 => 'field_bautraeger',
      1 => 'field_bezugsfrei_ab',
      2 => 'field_developer',
      3 => 'field_heating_type',
      4 => 'field_heizung',
      5 => 'field_moving_in_from',
      6 => 'field_no_of_floors',
      7 => 'field_rent_commission',
      8 => 'field_sale_commission',
      9 => 'field_status_quo',
      10 => 'field_zustand',
      11 => 'field_year_built',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-merkmale field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_merkmale|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ht_texte|node|objekt|form';
  $field_group->group_name = 'group_ht_texte';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Texte',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_lage',
      2 => 'field_object_description',
      3 => 'field_object_location',
      4 => 'field_object_other',
      5 => 'field_sonstiges',
      6 => 'field_topobjekt',
      7 => 'field_wohnungsbeschreibung',
      8 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ht-texte field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_ht_texte|node|objekt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lage|node|apartment|default';
  $field_group->group_name = 'group_lage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Lage',
    'weight' => '7',
    'children' => array(
      0 => 'field_apart_location',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-lage field-group-accordion-item',
      ),
    ),
  );
  $export['group_lage|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|apartment|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '23',
    'children' => array(
      0 => 'field_apart_bathrooms',
      1 => 'field_apart_category',
      2 => 'field_apart_floor',
      3 => 'field_apart_hoa_fee',
      4 => 'field_apart_price_parking',
      5 => 'field_apart_sleeping_rooms',
      6 => 'field_moving_in_from',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'classes' => 'group-merkmale',
        'element' => 'table',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_merkmale|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_merkmale|node|objekt|default';
  $field_group->group_name = 'group_merkmale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Merkmale',
    'weight' => '2',
    'children' => array(
      0 => 'field_bezirk',
      1 => 'field_bezugsfrei_ab',
      2 => 'field_developer',
      3 => 'field_heating_type',
      4 => 'field_moving_in_from',
      5 => 'field_no_of_floors',
      6 => 'field_objektid_nunumeric',
      7 => 'field_rent_commission',
      8 => 'field_status_quo',
      9 => 'taxonomy_vocabulary_8',
      10 => 'field_year_built',
      11 => 'field_address',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Merkmale',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-merkmale',
        'wrapper' => 'aside',
      ),
    ),
  );
  $export['group_merkmale|node|objekt|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_card|node|objekt|teaser';
  $field_group->group_name = 'group_project_card';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Card',
    'weight' => '0',
    'children' => array(
      0 => 'field_object_images',
      1 => 'title',
      2 => 'group_card_content',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Card',
      'instance_settings' => array(
        'classes' => 'group-project-card clearfix',
        'element' => 'article',
        'show_label' => '0',
        'label_element' => 'div',
        'attributes' => '',
      ),
    ),
  );
  $export['group_project_card|node|objekt|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sonstiges|node|apartment|default';
  $field_group->group_name = 'group_sonstiges';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_akkordeon';
  $field_group->data = array(
    'label' => 'Sonstiges',
    'weight' => '8',
    'children' => array(
      0 => 'field_apart_other',
    ),
    'format_type' => 'accordion-item',
    'format_settings' => array(
      'label' => 'Sonstiges',
      'instance_settings' => array(
        'classes' => 'group-sonstiges field-group-accordion-item',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sonstiges|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|apartment|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'apartment';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '4',
    'children' => array(
      0 => 'field_apart_description',
      1 => 'group_akkordeon',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_text|node|apartment|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|objekt|default';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'objekt';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Text',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_object_description',
      2 => 'field_object_location',
      3 => 'field_object_other',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Text',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text',
        'wrapper' => 'article',
      ),
    ),
  );
  $export['group_text|node|objekt|default'] = $field_group;

  return $export;
}
