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

  // Exported menu: schemax-team-menu.
  $menus['schemax-team-menu'] = array(
    'menu_name' => 'schemax-team-menu',
    'title' => 'Schemax Team Menu',
    'description' => 'The <em>Schemax Team Menu<em> includes links that appear in the context of each Team (group)',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Schemax Team Menu');
  t('The <em>Schemax Team Menu<em> includes links that appear in the context of each Team (group)');


  return $menus;
}
