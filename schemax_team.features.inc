<?php
/**
 * @file
 * schemax_team.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function schemax_team_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function schemax_team_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function schemax_team_node_info() {
  $items = array(
    'schemax_team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => t('A group with restricted access to team members.'),
      'has_title' => '1',
      'title_label' => t('Team Name'),
      'help' => '',
    ),
  );
  return $items;
}
