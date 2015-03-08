<?php
/**
 * @file
 * hk_content_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function hk_content_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_flag_merken' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'adresse' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:14:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:1;s:19:"override_title_text";s:6:"<none>";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'apartmentkarte' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:12:"attachment_1";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:1;s:19:"override_title_text";s:6:"<none>";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'apartment_characteristics' => array(
      'weight' => '12',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:0:{}s:4:"type";s:11:"views_panes";s:7:"subtype";s:22:"apartment-panel_pane_1";}',
        'load_terms' => 0,
        'ft' => array(
          'func' => 'theme_field',
          'lbw' => 1,
        ),
      ),
    ),
    'thumbslider' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:1;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:0:"";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"apartment";}',
        'load_terms' => 0,
        'ft' => array(),
      ),
    ),
    'field_apart_living_space' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Fläche',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_no' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb' => 'Price',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_rooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_pictures' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'slider-60',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'slider-60',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_apart_commission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_ausstattung' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_apart_floor_plan' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|apartment|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|apartment|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'apartment';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_apart_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_apart_rooms' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|apartment|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_bezirk' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_bezugsfrei_ab' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_developer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_heating_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_moving_in_from' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_no_of_floors' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_objektid_nunumeric' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_rent_commission' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_status_quo' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_wohnungs_referrer' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'taxonomy_vocabulary_8' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_year_built' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_ansprechpartner' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Ansprechpartner',
        ),
      ),
    ),
    'field_address' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
  );
  $export['node|objekt|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|objekt|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'objekt';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'node_link' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Details',
        'wrapper' => 'div',
        'class' => 'flat',
        'ft' => array(),
      ),
    ),
    'field_object_images' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|objekt|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function hk_content_types_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'adresse';
  $ds_field->label = 'Adresse';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['adresse'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ansprechpartner_projekt';
  $ds_field->label = 'Ansprechpartner Projekt';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['ansprechpartner_projekt'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'apartmentkarte';
  $ds_field->label = 'Apartmentkarte';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'apartment|*';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['apartmentkarte'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function hk_content_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'adresse',
      ),
      'left' => array(
        1 => 'field_apart_pictures',
        2 => 'field_apart_description',
        3 => 'thumbslider',
        4 => 'group_akkordeon',
        5 => 'field_apart_floor_plan',
        6 => 'group_text',
        7 => 'field_apart_location',
        8 => 'field_apart_other',
        12 => 'group_lage',
        13 => 'group_sonstiges',
      ),
      'right' => array(
        9 => 'apartmentkarte',
        10 => 'field_apart_no',
        11 => 'field_apart_living_space',
        14 => 'field_apart_rooms',
        15 => 'field_apart_price',
        16 => 'field_apart_commission',
        17 => 'ds_flag_merken',
        18 => 'apartment_characteristics',
        19 => 'field_ausstattung',
      ),
    ),
    'fields' => array(
      'adresse' => 'header',
      'field_apart_pictures' => 'left',
      'field_apart_description' => 'left',
      'thumbslider' => 'left',
      'group_akkordeon' => 'left',
      'field_apart_floor_plan' => 'left',
      'group_text' => 'left',
      'field_apart_location' => 'left',
      'field_apart_other' => 'left',
      'apartmentkarte' => 'right',
      'field_apart_no' => 'right',
      'field_apart_living_space' => 'right',
      'group_lage' => 'left',
      'group_sonstiges' => 'left',
      'field_apart_rooms' => 'right',
      'field_apart_price' => 'right',
      'field_apart_commission' => 'right',
      'ds_flag_merken' => 'right',
      'apartment_characteristics' => 'right',
      'field_ausstattung' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|apartment|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_apart_pictures',
        1 => 'group_card',
        2 => 'flag_merken',
        3 => 'title',
        4 => 'field_apart_price',
        5 => 'field_apart_rooms',
      ),
    ),
    'fields' => array(
      'field_apart_pictures' => 'ds_content',
      'group_card' => 'ds_content',
      'flag_merken' => 'ds_content',
      'title' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|apartment|tile';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'apartment';
  $ds_layout->view_mode = 'tile';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_apart_pictures',
        1 => 'field_apart_category',
        2 => 'field_apart_living_space',
        3 => 'field_apart_price',
        4 => 'field_apart_commission',
        5 => 'field_apart_rooms',
      ),
    ),
    'fields' => array(
      'field_apart_pictures' => 'ds_content',
      'field_apart_category' => 'ds_content',
      'field_apart_living_space' => 'ds_content',
      'field_apart_price' => 'ds_content',
      'field_apart_commission' => 'ds_content',
      'field_apart_rooms' => 'ds_content',
    ),
    'limit' => array(
      'field_apart_pictures' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|apartment|tile'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_object_images',
        1 => 'field_ansprechpartner',
        2 => 'group_merkmale',
        3 => 'group_text',
        4 => 'body',
        5 => 'field_wohnungs_referrer',
        6 => 'field_object_location',
        7 => 'field_object_description',
        8 => 'field_objekt_wkt',
        9 => 'field_object_other',
        10 => 'field_objektid_nunumeric',
        11 => 'field_address',
        12 => 'field_bezirk',
        13 => 'field_developer',
        14 => 'field_status_quo',
        15 => 'taxonomy_vocabulary_8',
        16 => 'field_moving_in_from',
        17 => 'field_no_of_floors',
        18 => 'field_heating_type',
        19 => 'field_bezugsfrei_ab',
        20 => 'field_year_built',
        21 => 'field_rent_commission',
      ),
    ),
    'fields' => array(
      'field_object_images' => 'ds_content',
      'field_ansprechpartner' => 'ds_content',
      'group_merkmale' => 'ds_content',
      'group_text' => 'ds_content',
      'body' => 'ds_content',
      'field_wohnungs_referrer' => 'ds_content',
      'field_object_location' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_objekt_wkt' => 'ds_content',
      'field_object_other' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_address' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'taxonomy_vocabulary_8' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_bezugsfrei_ab' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_rent_commission' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'body',
        2 => 'field_wohnungsbeschreibung',
        3 => 'field_object_description',
        4 => 'field_lage',
        5 => 'field_object_location',
        6 => 'group_ht_basis',
        7 => 'field_sonstiges',
        8 => 'group_ht_texte',
        9 => 'group_ht_merkmale',
        10 => 'field_object_other',
        11 => 'field_topobjekt',
        12 => 'group_ht_bilder',
        13 => 'path',
        16 => 'field_object_images',
        17 => 'field_objektfotos',
        25 => 'field_sale_commission',
        26 => 'field_rent_commission',
        27 => 'field_status_quo',
        28 => 'field_heating_type',
        29 => 'field_heizung',
        30 => 'field_year_built',
        31 => 'field_no_of_floors',
        32 => 'field_zustand',
        33 => 'field_bezugsfrei_ab',
        34 => 'field_moving_in_from',
        35 => 'field_bautraeger',
        36 => 'field_developer',
        37 => 'field_address',
        38 => 'field_bezirk',
        39 => 'field_objektid_nunumeric',
        40 => 'field_kategorie2',
        41 => 'field_ansprechpartner',
      ),
      'hidden' => array(
        14 => 'field_markersize',
        15 => 'taxonomy_vocabulary_3',
        18 => 'taxonomy_vocabulary_8',
        19 => 'field_wohnungs_referrer',
        20 => 'field_str_hausnr',
        21 => 'field_plz_ort',
        22 => 'field_geolocation',
        23 => 'field_objekt_wkt',
        24 => 'redirect',
        42 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'body' => 'ds_content',
      'field_wohnungsbeschreibung' => 'ds_content',
      'field_object_description' => 'ds_content',
      'field_lage' => 'ds_content',
      'field_object_location' => 'ds_content',
      'group_ht_basis' => 'ds_content',
      'field_sonstiges' => 'ds_content',
      'group_ht_texte' => 'ds_content',
      'group_ht_merkmale' => 'ds_content',
      'field_object_other' => 'ds_content',
      'field_topobjekt' => 'ds_content',
      'group_ht_bilder' => 'ds_content',
      'path' => 'ds_content',
      'field_markersize' => 'hidden',
      'taxonomy_vocabulary_3' => 'hidden',
      'field_object_images' => 'ds_content',
      'field_objektfotos' => 'ds_content',
      'taxonomy_vocabulary_8' => 'hidden',
      'field_wohnungs_referrer' => 'hidden',
      'field_str_hausnr' => 'hidden',
      'field_plz_ort' => 'hidden',
      'field_geolocation' => 'hidden',
      'field_objekt_wkt' => 'hidden',
      'redirect' => 'hidden',
      'field_sale_commission' => 'ds_content',
      'field_rent_commission' => 'ds_content',
      'field_status_quo' => 'ds_content',
      'field_heating_type' => 'ds_content',
      'field_heizung' => 'ds_content',
      'field_year_built' => 'ds_content',
      'field_no_of_floors' => 'ds_content',
      'field_zustand' => 'ds_content',
      'field_bezugsfrei_ab' => 'ds_content',
      'field_moving_in_from' => 'ds_content',
      'field_bautraeger' => 'ds_content',
      'field_developer' => 'ds_content',
      'field_address' => 'ds_content',
      'field_bezirk' => 'ds_content',
      'field_objektid_nunumeric' => 'ds_content',
      'field_kategorie2' => 'ds_content',
      'field_ansprechpartner' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|objekt|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'objekt';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_project_card',
        1 => 'title',
        2 => 'field_object_images',
        3 => 'group_card_content',
        4 => 'body',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'group_project_card' => 'ds_content',
      'title' => 'ds_content',
      'field_object_images' => 'ds_content',
      'group_card_content' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'limit' => array(
      'field_object_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|objekt|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_bild',
        2 => 'body',
        3 => 'field_view',
        4 => 'redirect',
        5 => 'path',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_bild' => 'ds_content',
      'body' => 'ds_content',
      'field_view' => 'ds_content',
      'redirect' => 'ds_content',
      'path' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|page|form'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function hk_content_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project';
  $ds_view_mode->label = 'project';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'tile';
  $ds_view_mode->label = 'tile';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['tile'] = $ds_view_mode;

  return $export;
}
