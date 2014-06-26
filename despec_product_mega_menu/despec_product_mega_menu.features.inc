<?php
/**
 * @file
 * despec_product_mega_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function despec_product_mega_menu_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function despec_product_mega_menu_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
