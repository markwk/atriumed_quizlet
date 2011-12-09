<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atriumed_quizlet_user_default_permissions() {
  $permissions = array();

  // Exported permission: administrator quizlet
  $permissions['administrator quizlet'] = array(
    'name' => 'administrator quizlet',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: create quizlet content
  $permissions['create quizlet content'] = array(
    'name' => 'create quizlet content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: delete any quizlet content
  $permissions['delete any quizlet content'] = array(
    'name' => 'delete any quizlet content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: edit any quizlet content
  $permissions['edit any quizlet content'] = array(
    'name' => 'edit any quizlet content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: quizlet save
  $permissions['quizlet save'] = array(
    'name' => 'quizlet save',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: quizlet search
  $permissions['quizlet search'] = array(
    'name' => 'quizlet search',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view flashcards
  $permissions['view flashcards'] = array(
    'name' => 'view flashcards',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
