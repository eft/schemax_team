<?php
/**
 * @file
 * schemax_team.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function schemax_team_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:schemax_team:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'schemax_team';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'naked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'content' => NULL,
      'default' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1ee65ea1-6549-425d-a753-cabdfc50fa90';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f639a117-34d3-431c-b0e5-42d0893d40f6';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_team_content-panel_pane_team_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'Roster',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f639a117-34d3-431c-b0e5-42d0893d40f6';
    $display->content['new-f639a117-34d3-431c-b0e5-42d0893d40f6'] = $pane;
    $display->panels['content'][0] = 'new-f639a117-34d3-431c-b0e5-42d0893d40f6';
    $pane = new stdClass();
    $pane->pid = 'new-aa782a96-1354-4628-9cc3-98cd3a07615f';
    $pane->panel = 'content';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_team_content-panel_pane_events_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
      'override_title' => 1,
      'override_title_text' => 'Events',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'aa782a96-1354-4628-9cc3-98cd3a07615f';
    $display->content['new-aa782a96-1354-4628-9cc3-98cd3a07615f'] = $pane;
    $display->panels['content'][1] = 'new-aa782a96-1354-4628-9cc3-98cd3a07615f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:schemax_team:default:default'] = $panelizer;

  return $export;
}
