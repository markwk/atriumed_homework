<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atriumed_homework_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer filedrop
  $permissions['administer filedrop'] = array(
    'name' => 'administer filedrop',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: attach file to filedrop
  $permissions['attach file to filedrop'] = array(
    'name' => 'attach file to filedrop',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: attach filedrop to node
  $permissions['attach filedrop to node'] = array(
    'name' => 'attach filedrop to node',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
      '3' => 'teacher',
    ),
  );

  // Exported permission: create homework content
  $permissions['create homework content'] = array(
    'name' => 'create homework content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: delete any homework content
  $permissions['delete any homework content'] = array(
    'name' => 'delete any homework content',
    'roles' => array(),
  );

  // Exported permission: delete own homework content
  $permissions['delete own homework content'] = array(
    'name' => 'delete own homework content',
    'roles' => array(
      '0' => 'teacher',
    ),
  );

  // Exported permission: edit any homework content
  $permissions['edit any homework content'] = array(
    'name' => 'edit any homework content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
    ),
  );

  // Exported permission: edit own homework content
  $permissions['edit own homework content'] = array(
    'name' => 'edit own homework content',
    'roles' => array(),
  );

  // Exported permission: remove any file from filedrop
  $permissions['remove any file from filedrop'] = array(
    'name' => 'remove any file from filedrop',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: remove own file from filedrop
  $permissions['remove own file from filedrop'] = array(
    'name' => 'remove own file from filedrop',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view all filedrop files
  $permissions['view all filedrop files'] = array(
    'name' => 'view all filedrop files',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'manager',
      '2' => 'teacher',
    ),
  );

  // Exported permission: view own filedrop files
  $permissions['view own filedrop files'] = array(
    'name' => 'view own filedrop files',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
