<?php
/**
 * @file
 * stanford_bean_types_featured.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_bean_types_featured_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_curtain|bean|stanford_featured_block|default';
  $field_group->group_name = 'group_featured_curtain';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_featured_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Curtain',
    'weight' => '0',
    'children' => array(
      0 => 'field_featured_block_featured',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Curtain',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'featured-curtain',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_curtain|bean|stanford_featured_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_scroll|bean|stanford_featured_block|large_landscape';
  $field_group->group_name = 'group_featured_scroll';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_featured_block';
  $field_group->mode = 'large_landscape';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Scroll',
    'weight' => '0',
    'children' => array(
      0 => 'field_featured_block_featured',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Scroll',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'featured-scroll field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_scroll|bean|stanford_featured_block|large_landscape'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_featured_static|bean|stanford_featured_block|stanford_12_col_banner_tall';
  $field_group->group_name = 'group_featured_static';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'stanford_featured_block';
  $field_group->mode = 'stanford_12_col_banner_tall';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Static',
    'weight' => '4',
    'children' => array(
      0 => 'field_featured_block_featured',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Static',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'featured-static field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_featured_static|bean|stanford_featured_block|stanford_12_col_banner_tall'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured Curtain');
  t('Featured Scroll');
  t('Featured Static');

  return $field_groups;
}
