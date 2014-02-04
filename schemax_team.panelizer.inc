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
  $display->layout = 'threecol_25_50_25_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '1ee65ea1-6549-425d-a753-cabdfc50fa90';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-16c3472e-0499-471b-acae-06866f666e3b';
    $pane->panel = 'bottom';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:group_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'og_group_subscribe',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'field_name' => FALSE,
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16c3472e-0499-471b-acae-06866f666e3b';
    $display->content['new-16c3472e-0499-471b-acae-06866f666e3b'] = $pane;
    $display->panels['bottom'][0] = 'new-16c3472e-0499-471b-acae-06866f666e3b';
    $pane = new stdClass();
    $pane->pid = 'new-33e6fb11-25a6-4a43-accf-8f3ab98e7ded';
    $pane->panel = 'bottom';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '33e6fb11-25a6-4a43-accf-8f3ab98e7ded';
    $display->content['new-33e6fb11-25a6-4a43-accf-8f3ab98e7ded'] = $pane;
    $display->panels['bottom'][1] = 'new-33e6fb11-25a6-4a43-accf-8f3ab98e7ded';
    $pane = new stdClass();
    $pane->pid = 'new-64b27d18-de74-4ecc-907b-f8319a8ab92e';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'devel-switch_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '64b27d18-de74-4ecc-907b-f8319a8ab92e';
    $display->content['new-64b27d18-de74-4ecc-907b-f8319a8ab92e'] = $pane;
    $display->panels['left'][0] = 'new-64b27d18-de74-4ecc-907b-f8319a8ab92e';
    $pane = new stdClass();
    $pane->pid = 'new-8b697690-fe45-4a44-8cfc-52ddd3be402b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_nodes-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b697690-fe45-4a44-8cfc-52ddd3be402b';
    $display->content['new-8b697690-fe45-4a44-8cfc-52ddd3be402b'] = $pane;
    $display->panels['middle'][0] = 'new-8b697690-fe45-4a44-8cfc-52ddd3be402b';
    $pane = new stdClass();
    $pane->pid = 'new-d8d0eb03-3010-43e7-8f79-47f2647019c9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'schemax_team_content-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd8d0eb03-3010-43e7-8f79-47f2647019c9';
    $display->content['new-d8d0eb03-3010-43e7-8f79-47f2647019c9'] = $pane;
    $display->panels['middle'][1] = 'new-d8d0eb03-3010-43e7-8f79-47f2647019c9';
    $pane = new stdClass();
    $pane->pid = 'new-80277ec5-1e9b-41b3-80c3-83b1df67df30';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_members-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'panelizer',
      ),
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
    $pane->uuid = '80277ec5-1e9b-41b3-80c3-83b1df67df30';
    $display->content['new-80277ec5-1e9b-41b3-80c3-83b1df67df30'] = $pane;
    $display->panels['right'][0] = 'new-80277ec5-1e9b-41b3-80c3-83b1df67df30';
    $pane = new stdClass();
    $pane->pid = 'new-3b351272-c54d-436b-aa97-ed601b370eaf';
    $pane->panel = 'right';
    $pane->type = 'node_prepopulate';
    $pane->subtype = 'node_prepopulate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'types' => array(
        'schemax_event' => 'schemax_event',
        'schemax_person' => 'schemax_person',
      ),
      'field_name' => 'og_group_ref',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3b351272-c54d-436b-aa97-ed601b370eaf';
    $display->content['new-3b351272-c54d-436b-aa97-ed601b370eaf'] = $pane;
    $display->panels['right'][1] = 'new-3b351272-c54d-436b-aa97-ed601b370eaf';
    $pane = new stdClass();
    $pane->pid = 'new-f2096300-d86b-4517-a0d3-b3384c2614f4';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = 'f2096300-d86b-4517-a0d3-b3384c2614f4';
    $display->content['new-f2096300-d86b-4517-a0d3-b3384c2614f4'] = $pane;
    $display->panels['top'][0] = 'new-f2096300-d86b-4517-a0d3-b3384c2614f4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-16c3472e-0499-471b-acae-06866f666e3b';
  $panelizer->display = $display;
  $export['node:schemax_team:default:default'] = $panelizer;

  return $export;
}
