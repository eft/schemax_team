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
  $display->layout = 'blah';
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
    'right' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '1ee65ea1-6549-425d-a753-cabdfc50fa90';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bd33ed19-32fc-4f6f-aa05-0802a0f0ff07';
    $pane->panel = 'content';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'panelizer',
      'override_title' => 0,
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
    $pane->uuid = 'bd33ed19-32fc-4f6f-aa05-0802a0f0ff07';
    $display->content['new-bd33ed19-32fc-4f6f-aa05-0802a0f0ff07'] = $pane;
    $display->panels['content'][0] = 'new-bd33ed19-32fc-4f6f-aa05-0802a0f0ff07';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:schemax_team:default:default'] = $panelizer;

  return $export;
}
