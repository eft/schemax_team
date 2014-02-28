<?php
/**
 * @file
 * schemax_team.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function schemax_team_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-team-menu_events:menutoken/531023399678a
  $menu_links['menu-team-menu_events:menutoken/531023399678a'] = array(
    'menu_name' => 'menu-team-menu',
    'link_path' => 'menutoken/531023399678a',
    'router_path' => 'menutoken/%',
    'link_title' => 'Events',
    'options' => array(
      'menu_token_link_path' => 'node/[site:og-context--node:nid]/events',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-team-menu_events:menutoken/531023399678a',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-team-menu_news:menutoken/5310232960d03
  $menu_links['menu-team-menu_news:menutoken/5310232960d03'] = array(
    'menu_name' => 'menu-team-menu',
    'link_path' => 'menutoken/5310232960d03',
    'router_path' => 'menutoken/%',
    'link_title' => 'News',
    'options' => array(
      'menu_token_link_path' => 'node/[site:og-context--node:nid]/news',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-team-menu_news:menutoken/5310232960d03',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-team-menu_overview:menutoken/530e6899c6522
  $menu_links['menu-team-menu_overview:menutoken/530e6899c6522'] = array(
    'menu_name' => 'menu-team-menu',
    'link_path' => 'menutoken/530e6899c6522',
    'router_path' => 'menutoken/%',
    'link_title' => 'Overview',
    'options' => array(
      'menu_token_link_path' => 'node/[site:og-context--node:nid]',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-team-menu_overview:menutoken/530e6899c6522',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-team-menu_roster:menutoken/530e9ea36e887
  $menu_links['menu-team-menu_roster:menutoken/530e9ea36e887'] = array(
    'menu_name' => 'menu-team-menu',
    'link_path' => 'menutoken/530e9ea36e887',
    'router_path' => 'menutoken/%',
    'link_title' => 'Roster',
    'options' => array(
      'menu_token_link_path' => 'node/[site:og-context--node:nid]/roster',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-team-menu_roster:menutoken/530e9ea36e887',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  t('News');
  t('Overview');
  t('Roster');


  return $menu_links;
}
