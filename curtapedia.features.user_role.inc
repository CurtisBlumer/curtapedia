<?php
/**
 * @file
 * curtapedia.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function curtapedia_user_default_roles() {
  $roles = array();

  // Exported role: site architect.
  $roles['site architect'] = array(
    'name' => 'site architect',
    'weight' => 16,
    'uuid' => 'dd7e1909-c53c-4aed-88ac-33cebf0335aa',
  );

  // Exported role: unverified user.
  $roles['unverified user'] = array(
    'name' => 'unverified user',
    'weight' => 1,
    'uuid' => 'd25f37bd-7241-4f45-8c80-dcb9bb490a9c',
  );

  return $roles;
}
