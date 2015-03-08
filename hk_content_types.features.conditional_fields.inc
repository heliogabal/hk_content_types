<?php
/**
 * @file
 * hk_content_types.features.conditional_fields.inc
 */

/**
 * Implements hook_conditional_fields_default_fields().
 */
function hk_content_types_conditional_fields_default_fields() {
  $items = array();

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_garage_stellplatz_preis',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_hausgeld',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_kaufpreis',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_gs_miete',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_heizkosten',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_heizkosten_nk',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_kaltmiete',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_kaution',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_nebenkosten',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_provision',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_m_warmmiete',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 67,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'einzelwohnung',
    'dependent' => 'field_provision',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
        3 => 3,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'effect' => 'show',
      'effect_options' => NULL,
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'objekt',
    'dependent' => 'field_bautraeger',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 68,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'objekt',
    'dependent' => 'field_heizung',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 68,
        3 => 270,
        4 => 448,
        5 => 272,
        6 => 406,
        7 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'objekt',
    'dependent' => 'field_m_provision',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'objekt',
    'dependent' => 'field_provision',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 68,
        3 => 270,
        4 => 448,
        5 => 272,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_badezimmer',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 68,
        3 => 272,
        4 => 406,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_garage_stellplatz_preis',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_hausgeld',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 270,
        3 => 448,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_haustiere',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_kaufpreis',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 270,
        3 => 448,
        4 => 272,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_kaufpreis_pro_qm',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 68,
        3 => 270,
        4 => 448,
        5 => 272,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_gs_miete',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_heizkosten',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_heizkosten_nk',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_kaltmiete',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_kaution',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_nebenkosten',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 270,
        1 => 448,
        2 => 406,
        3 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_m_warmmiete',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
        1 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_mieteinnahmen',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 66,
        1 => 448,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_nutzflaeche',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 270,
        1 => 448,
        2 => 272,
        3 => 271,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_rendite',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 66,
        1 => 270,
        2 => 448,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_schlafzimmer',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 68,
        3 => 272,
        4 => 406,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_vermietet',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 270,
        3 => 448,
        4 => 272,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_warmmieteinnahmen',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 66,
        1 => 448,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_wbs',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 406,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  $items[] = array(
    'entity' => 'node',
    'bundle' => 'wohnung',
    'dependent' => 'field_wohnflaeche',
    'dependee' => 'field_kategorie2',
    'options' => array(
      'values_set' => 2,
      'values' => array(
        0 => 65,
        1 => 66,
        2 => 68,
        3 => 272,
        4 => 406,
      ),
      'effect' => 'fade',
      'effect_options' => array(
        'speed' => 200,
      ),
      'element_view' => array(
        2 => 0,
        5 => 5,
      ),
      'element_edit' => array(
        1 => 0,
        2 => 2,
      ),
      'selector' => '',
      'state' => 'visible',
      'condition' => 'value',
      'value' => array(),
      'value_form' => array(),
      'element_view_per_role' => 0,
      'element_view_roles' => array(),
      'element_edit_per_role' => 0,
      'element_edit_roles' => array(),
      'grouping' => 'AND',
    ),
  );

  return $items;
}
