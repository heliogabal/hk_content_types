<?php
/**
 * @file
 * hk_content_types.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function hk_content_types_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'wohnungsansicht';
  $preset->title = 'wohnungsansicht';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->imagestyle_thumbnail = 'flexslider_thumbnail';
  $preset->options = array(
    'namespace' => 'flex-',
    'selector' => '.slides > li',
    'easing' => 'swing',
    'direction' => 'horizontal',
    'reverse' => 0,
    'smoothHeight' => 0,
    'startAt' => '0',
    'animationSpeed' => '600',
    'initDelay' => '100',
    'useCSS' => 1,
    'touch' => 1,
    'video' => 0,
    'keyboard' => 1,
    'multipleKeyboard' => 0,
    'mousewheel' => 1,
    'controlsContainer' => '.flex-control-nav-container',
    'sync' => '#thumbslide',
    'asNavFor' => '',
    'itemWidth' => '0',
    'itemMargin' => '0',
    'minItems' => '0',
    'maxItems' => '0',
    'move' => '0',
    'animation' => 'fade',
    'slideshow' => 1,
    'slideshowSpeed' => '7000',
    'directionNav' => 1,
    'controlNav' => '0',
    'prevText' => 'Previous',
    'nextText' => 'Next',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'randomize' => 0,
    'thumbCaptions' => 0,
    'thumbCaptionsBoth' => 0,
    'animationLoop' => 0,
    'pauseOnAction' => 0,
    'pauseOnHover' => 0,
    'manualControls' => '',
    'colorboxEnabled' => TRUE,
    'colorboxImageStyle' => 'bear_default_picture_mappings',
  );
  $preset->imagestyle_type = 'image_style';
  $preset->mapping = 'bear_default_picture_mappings';
  $export['wohnungsansicht'] = $preset;

  return $export;
}
