<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function atriumed_homework_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:homework
  $menu_links['features:homework'] = array(
    'menu_name' => 'features',
    'link_path' => 'homework',
    'router_path' => 'homework',
    'link_title' => 'Homework',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Homework');


  return $menu_links;
}
