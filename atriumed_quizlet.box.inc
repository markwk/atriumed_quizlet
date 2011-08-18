<?php

/**
 * Implementation of hook_default_box().
 */
function atriumed_quizlet_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'vocabulary_feature_description';
  $box->plugin_key = 'simple';
  $box->title = 'Group Key Vocabulary';
  $box->description = 'Vocabulary Feature Decription';
  $box->options = array(
    'body' => '>Add vocabulary lists to your group space by searching and adding vocabulary lists from Quizlet.
> Quizlet offers a massive database of vocabulary list on all topics.
>Search and save to access flashcard, learn and scatter learning features for your groups.',
    'format' => '4',
  );
  $export['vocabulary_feature_description'] = $box;

  return $export;
}
