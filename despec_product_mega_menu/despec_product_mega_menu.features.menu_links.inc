<?php
/**
 * @file
 * despec_product_mega_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function despec_product_mega_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_products:search/browse
  $menu_links['main-menu_products:search/browse'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/browse',
    'router_path' => 'search/browse',
    'link_title' => 'Products',
    'options' => array(
      'minipanel' => 'product_menu',
      'menu_minipanels_hover' => array(
        'position' => array(
          'target' => 'false',
          'target_custom' => '',
          'type' => 'absolute',
          'container' => '',
          'corner' => array(
            'target' => 'leftBottom',
            'tooltip' => 'topMiddle',
          ),
          'adjust' => array(
            'x' => 0,
            'y' => 0,
          ),
        ),
        'show' => array(
          'delay' => 140,
          'when' => array(
            'event' => 'mouseover',
          ),
          'effect' => array(
            'type' => 'slide',
            'length' => 100,
          ),
        ),
        'hide' => array(
          'delay' => 0,
          'effect' => array(
            'type' => 'slide',
            'length' => 100,
          ),
        ),
        'style' => array(
          'tip' => 'none',
          'name' => 'light',
          'width' => array(
            'min' => '',
            'max' => '',
          ),
          'border' => array(
            'width' => 3,
            'color' => '#d3d3d3',
            'radius' => 0,
          ),
        ),
        'mlid' => 539,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_products:search/browse',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Products');


  return $menu_links;
}
