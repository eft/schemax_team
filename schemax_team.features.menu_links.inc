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

  // Exported menu link: schemax-team-menu_availability:menutoken/53181e8d337be
  $menu_links['schemax-team-menu_availability:menutoken/53181e8d337be'] = array(
    'menu_name' => 'schemax-team-menu',
    'link_path' => 'menutoken/53181e8d337be',
    'router_path' => 'menutoken/%',
    'link_title' => 'Availability',
    'options' => array(
      'menu_token_link_path' => 'node/[site:og-context--node:nid]/availability',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'schemax-team-menu_availability:menutoken/53181e8d337be',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: schemax-team-menu_events:menutoken/53181e5d7ee82
  $menu_links['schemax-team-menu_events:menutoken/53181e5d7ee82'] = array(
    'menu_name' => 'schemax-team-menu',
    'link_path' => 'menutoken/53181e5d7ee82',
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
      'identifier' => 'schemax-team-menu_events:menutoken/53181e5d7ee82',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: schemax-team-menu_news:menutoken/53181e7775ec4
  $menu_links['schemax-team-menu_news:menutoken/53181e7775ec4'] = array(
    'menu_name' => 'schemax-team-menu',
    'link_path' => 'menutoken/53181e7775ec4',
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
      'identifier' => 'schemax-team-menu_news:menutoken/53181e7775ec4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: schemax-team-menu_overview:menutoken/53181e201c0dc
  $menu_links['schemax-team-menu_overview:menutoken/53181e201c0dc'] = array(
    'menu_name' => 'schemax-team-menu',
    'link_path' => 'menutoken/53181e201c0dc',
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
      'identifier' => 'schemax-team-menu_overview:menutoken/53181e201c0dc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: schemax-team-menu_roster:menutoken/53181e4ba8bb0
  $menu_links['schemax-team-menu_roster:menutoken/53181e4ba8bb0'] = array(
    'menu_name' => 'schemax-team-menu',
    'link_path' => 'menutoken/53181e4ba8bb0',
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
      'identifier' => 'schemax-team-menu_roster:menutoken/53181e4ba8bb0',
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
  t('Availability');
  t('Events');
  t('News');
  t('Overview');
  t('Roster');


  return $menu_links;
}
