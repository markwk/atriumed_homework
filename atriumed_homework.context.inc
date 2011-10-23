<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atriumed_homework_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homework';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'homework' => 'homework',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'homework:page_1' => 'homework:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-homework-block_1' => array(
          'module' => 'views',
          'delta' => 'homework-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-homework-block_2' => array(
          'module' => 'views',
          'delta' => 'homework-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'homework',
  );
  $context->condition_mode = 0;
  $export['homework'] = $context;

  return $export;
}
