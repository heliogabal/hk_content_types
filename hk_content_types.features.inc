<?php
/**
 * @file
 * hk_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hk_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function hk_content_types_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favoriten".
  $flags['merken'] = array(
    'entity_type' => 'node',
    'title' => 'Favoriten',
    'global' => 0,
    'types' => array(
      0 => 'apartment',
    ),
    'flag_short' => 'Zu Favoriten hinzufügen',
    'flag_long' => 'Wohnung zu persönlicher Merkliste hinzufügen',
    'flag_message' => 'Wohnung gemerkt',
    'unflag_short' => 'Von Favoriten entfernen',
    'unflag_long' => '',
    'unflag_message' => 'Wohnung von Favoriten entfernt',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_in_links' => array(
      'full' => 'full',
      'teaser' => 'teaser',
      'rss' => 0,
      'search_index' => 0,
      'search_result' => 0,
      'colorbox' => 0,
      'diff_standard' => 0,
      'token' => 0,
      'project' => 0,
      'tile' => 0,
      'revision' => 0,
    ),
    'show_as_field' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'i18n' => 1,
    'module' => 'hk_content_types',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function hk_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: makler_thumbnail.
  $styles['makler_thumbnail'] = array(
    'name' => 'makler_thumbnail',
    'label' => 'Makler Thumbnail',
    'effects' => array(
      4 => array(
        'label' => 'Manual crop',
        'help' => 'Crop a freely user-selected area.',
        'effect callback' => 'manualcrop_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_form',
        'summary theme' => 'manualcrop_crop_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 398,
          'height' => 398,
          'keepproportions' => 1,
          'style_name' => 'makler_thumbnail',
        ),
        'weight' => 0,
      ),
      6 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 398,
          'height' => 398,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: map-popup.
  $styles['map-popup'] = array(
    'name' => 'map-popup',
    'label' => 'map-popup',
    'effects' => array(
      10 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 255,
          'height' => 188,
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: projektbild.
  $styles['projektbild'] = array(
    'name' => 'projektbild',
    'label' => 'Projektbild',
    'effects' => array(
      8 => array(
        'label' => 'Scale and Smart Crop',
        'help' => 'Similar to "Scale And Crop", but preserves the portion of the image with the most entropy.',
        'effect callback' => 'smartcrop_scale_effect',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'smartcrop',
        'name' => 'smartcrop_scale_and_crop',
        'data' => array(
          'width' => 478,
          'height' => 299,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function hk_content_types_node_info() {
  $items = array(
    'objekt' => array(
      'name' => t('Objekt'),
      'base' => 'node_content',
      'description' => t('Ein Objekt ist notwendig, um Wohnungen anlegen zu können.'),
      'has_title' => '1',
      'title_label' => t('Überschrift Objekt'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'residential_commercial_building' => array(
      'name' => t('Residential and commercial buildings'),
      'base' => 'node_content',
      'description' => t('Wohn- und Geschäftshäuser'),
      'has_title' => '1',
      'title_label' => t('Überschrift Wohn- und Geschäftshäuser'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wohnungsanfrage' => array(
      'name' => t('Wohnungsanfrage'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Vorname, Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
