<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atriumed_quizlet_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quizlet';
  $context->description = '';
  $context->tag = 'AtriumED';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'quizlet' => 'quizlet',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'vocabulary' => 'vocabulary',
        'node*/flashcards' => 'node*/flashcards',
        'node/*/learn' => 'node/*/learn',
        'node/*/scatter' => 'node/*/scatter',
      ),
    ),
    'views' => array(
      'values' => array(
        'atriumed_quizlet' => 'atriumed_quizlet',
        'atriumed_quizlet:page_1' => 'atriumed_quizlet:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-atriumed_quizlet-block_2' => array(
          'module' => 'views',
          'delta' => 'atriumed_quizlet-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-atriumed_quizlet-block_1' => array(
          'module' => 'views',
          'delta' => 'atriumed_quizlet-block_1',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'menu' => 'vocabulary',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AtriumED');
  $export['quizlet'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quizlet-main';
  $context->description = '';
  $context->tag = 'AtriumED';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*/vocabulary' => '*/vocabulary',
        '*/quizlet/search/*' => '*/quizlet/search/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'atriumed_quizlet:page_1' => 'atriumed_quizlet:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-vocabulary_feature_description' => array(
          'module' => 'boxes',
          'delta' => 'vocabulary_feature_description',
          'region' => 'right',
          'weight' => 0,
        ),
        'quizlet-0' => array(
          'module' => 'quizlet',
          'delta' => 0,
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AtriumED');
  $export['quizlet-main'] = $context;

  return $export;
}
