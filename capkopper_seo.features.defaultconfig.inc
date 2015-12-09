<?php
/**
 * @file
 * capkopper_seo.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function capkopper_seo_defaultconfig_features() {
  return array(
    'capkopper_seo' => array(
      'default_page_manager_pages' => 'default_page_manager_pages',
    ),
  );
}

/**
 * Implements hook_defaultconfig_default_page_manager_pages().
 */
function capkopper_seo_defaultconfig_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'site_map';
  $page->task = 'page';
  $page->admin_title = 'Site map';
  $page->admin_description = '';
  $page->path = 'sitemap';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_site_map__panel';
  $handler->task = 'page';
  $handler->subtask = 'site_map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Site map';
  $display->uuid = 'f0b63a82-08c9-47a7-ab4d-b4aa18ac2435';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-de6b345b-16c8-4e51-9bb8-2daeeb8df772';
  $pane->panel = 'contentmain';
  $pane->type = 'menu_tree';
  $pane->subtype = 'main-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'main-menu:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 1,
    'sort' => 0,
    'menu_name' => 'main-menu',
    'parent_mlid' => '0',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'de6b345b-16c8-4e51-9bb8-2daeeb8df772';
  $display->content['new-de6b345b-16c8-4e51-9bb8-2daeeb8df772'] = $pane;
  $display->panels['contentmain'][0] = 'new-de6b345b-16c8-4e51-9bb8-2daeeb8df772';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-de6b345b-16c8-4e51-9bb8-2daeeb8df772';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['site_map'] = $page;

  return $pages;

}
