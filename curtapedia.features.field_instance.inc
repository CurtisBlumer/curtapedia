<?php
/**
 * @file
 * curtapedia.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function curtapedia_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'placeholder' => 'Must be between 150 and 1500 words.',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'default_html_sanitizable' => 0,
          'html_default' => 'html_default',
          'html_extended' => 0,
          'markdown' => 0,
          'plain_text' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'default_html_sanitizable' => array(
              'weight' => -46,
            ),
            'html_default' => array(
              'weight' => -49,
            ),
            'html_extended' => array(
              'weight' => -50,
            ),
            'markdown' => array(
              'weight' => -48,
            ),
            'plain_text' => array(
              'weight' => -47,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 25,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-title_field'
  $field_instances['node-page-title_field'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'placeholder' => 'Must be at least two (2) words.',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'default_html_sanitizable' => 'default_html_sanitizable',
          'html_default' => 'html_default',
          'html_extended' => 'html_extended',
          'markdown' => 'markdown',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'default_html_sanitizable' => array(
              'weight' => -6,
            ),
            'html_default' => array(
              'weight' => -9,
            ),
            'html_extended' => array(
              'weight' => -10,
            ),
            'markdown' => array(
              'weight' => -8,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'hide_label' => array(
        'entity' => 0,
        'page' => 0,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Title');

  return $field_instances;
}
