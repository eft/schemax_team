<?php
/**
 * @file
 * schemax_team.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function schemax_team_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-team-menu.
  $menus['menu-team-menu'] = array(
    'menu_name' => 'menu-team-menu',
    'title' => 'Team Menu',
    'description' => 'Links that appear in the context of each Team (group)',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Links that appear in the context of each Team (group)');
  t('Team Menu');


  return $menus;
}
