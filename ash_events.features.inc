<?php
/**
 * @file
 * ash_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ash_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ash_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ash_events_node_info() {
  $items = array(
    'event_entry' => array(
      'name' => t('Event entry'),
      'base' => 'node_content',
      'description' => t('Basic events content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
