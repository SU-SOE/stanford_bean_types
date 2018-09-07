<?php
/**
 * @file
 * stanford_bean_types_featured.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_bean_types_featured_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'bean-stanford_featured_block-field_featured_block_featured'.
  $field_instances['bean-stanford_featured_block-field_featured_block_featured'] = array(
    'bundle' => 'stanford_featured_block',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'large_landscape' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'stanford_12_col_banner_tall' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_featured_block_featured',
    'label' => 'Featured',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'button',
      'allowed_bundles' => array(
        'p_buttons' => -1,
        'p_callout' => -1,
        'p_cards' => -1,
        'p_featured' => 'p_featured',
        'p_icon' => -1,
        'p_menu' => -1,
        'p_wysiwyg' => -1,
      ),
      'bundle_weights' => array(
        'p_buttons' => 2,
        'p_callout' => 3,
        'p_cards' => 4,
        'p_featured' => 5,
        'p_icon' => 6,
        'p_menu' => 7,
        'p_wysiwyg' => 8,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-p_featured-field_p_featured_button_color'.
  $field_instances['paragraphs_item-p_featured-field_p_featured_button_color'] = array(
    'bundle' => 'p_featured',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please enter the color you want the CTA button to be.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_p_featured_button_color',
    'label' => 'Button Color',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-p_featured-field_p_featured_cta_button'.
  $field_instances['paragraphs_item-p_featured-field_p_featured_cta_button'] = array(
    'bundle' => 'p_featured',
    'default_value' => array(
      0 => array(
        'value' => 'no',
      ),
    ),
    'deleted' => 0,
    'description' => 'Will the more link be a CTA button?',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_p_featured_cta_button',
    'label' => 'CTA Button',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Button Color');
  t('CTA Button');
  t('Featured');
  t('Please enter the color you want the CTA button to be.');
  t('Will the more link be a CTA button?');

  return $field_instances;
}
