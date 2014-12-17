<?php
/**
 * @file
 * curtapedia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function curtapedia_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function curtapedia_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('A static, not often changing, page.'),
      'has_title' => '1',
      'title_label' => t('Page title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
