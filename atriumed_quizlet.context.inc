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
  $context->conditions = array();
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('AtriumED');
  $export['quizlet'] = $context;

  return $export;
}
