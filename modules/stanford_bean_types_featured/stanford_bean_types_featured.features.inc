<?php
/**
 * @file
 * stanford_bean_types_featured.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_bean_types_featured_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_paragraphs_info().
 */
function stanford_bean_types_featured_paragraphs_info() {
  $items = array(
    'p_featured' => array(
      'name' => 'Featured',
      'bundle' => 'p_featured',
      'locked' => '1',
    ),
  );
  return $items;
}
