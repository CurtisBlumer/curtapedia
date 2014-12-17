<?php
/**
 * @file
 * curtapedia.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function curtapedia_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Page body word range (100-2500 words)';
  $rule->name = 'page_body_word_range';
  $rule->field_name = 'body';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'page';
  $rule->validator = 'field_validation_words_validator';
  $rule->settings = array(
    'min' => '150',
    'max' => '1500',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      11 => 0,
      2 => 0,
      6 => 0,
      10 => 0,
      9 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      14 => 0,
      13 => 0,
      18 => 0,
      17 => 0,
      16 => 0,
      15 => 0,
      4 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '[field-name] must be [min]&ndash;[max] words. You have entered [count].';
  $export['page_body_word_range'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Page title maximum characters (55 characters)';
  $rule->name = 'page_title_max_characters';
  $rule->field_name = 'title_field';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'page';
  $rule->validator = 'field_validation_length_validator';
  $rule->settings = array(
    'min' => '',
    'max' => '70',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      11 => 0,
      2 => 0,
      6 => 0,
      10 => 0,
      9 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      14 => 0,
      13 => 0,
      18 => 0,
      17 => 0,
      16 => 0,
      15 => 0,
      4 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '[field-name] must be no more than [max] characters. You have entered [length].<br>This restriction is for search engine optimization.';
  $export['page_title_max_characters'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Page title minimum words (2 words)';
  $rule->name = 'page_title_min_words';
  $rule->field_name = 'title_field';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'page';
  $rule->validator = 'field_validation_words_validator';
  $rule->settings = array(
    'min' => '2',
    'max' => '',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      11 => 0,
      2 => 0,
      6 => 0,
      10 => 0,
      9 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      14 => 0,
      13 => 0,
      18 => 0,
      17 => 0,
      16 => 0,
      15 => 0,
      4 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '[field-name] must be at least [min] words. You have entered [count].';
  $export['page_title_min_words'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Page title must be unique across Drupal nodes';
  $rule->name = 'page_title_require_unique';
  $rule->field_name = 'title_field';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'page';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'entity',
    'per_user' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      11 => 0,
      2 => 0,
      6 => 0,
      10 => 0,
      9 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      14 => 0,
      13 => 0,
      18 => 0,
      17 => 0,
      16 => 0,
      15 => 0,
      4 => 0,
      3 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = '[field-name] must be unique.<br>[value] has been used previously at [existing-entity-link]';
  $export['page_title_require_unique'] = $rule;

  return $export;
}
