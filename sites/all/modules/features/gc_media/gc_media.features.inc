<?php
/**
 * @file
 * gc_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gc_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function gc_media_image_default_styles() {
  $styles = array();

  // Exported image style: tiny_thumbnail_64x64.
  $styles['tiny_thumbnail_64x64'] = array(
    'label' => 'Tiny Thumbnail 64x64',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 64,
          'height' => 64,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
