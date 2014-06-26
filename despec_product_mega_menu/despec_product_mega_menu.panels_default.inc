<?php
/**
 * @file
 * despec_product_mega_menu.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function despec_product_mega_menu_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'product_menu';
  $mini->category = '';
  $mini->admin_title = 'Product Menu';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2b5a3ee7-f45b-477e-b175-fd1942303ed9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f69387f8-4b26-425d-8d03-e2f9be01df1c';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'despec_product_mega_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f69387f8-4b26-425d-8d03-e2f9be01df1c';
    $display->content['new-f69387f8-4b26-425d-8d03-e2f9be01df1c'] = $pane;
    $display->panels['center'][0] = 'new-f69387f8-4b26-425d-8d03-e2f9be01df1c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['product_menu'] = $mini;

  return $export;
}
