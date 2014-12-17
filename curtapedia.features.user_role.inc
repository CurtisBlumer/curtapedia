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

  // Exported role: site contributor.
  $roles['site contributor'] = array(
    'name' => 'site contributor',
    'weight' => 6,
    'uuid' => '2c968094-4b42-4d44-b720-33d88aa719a8',
  );

  // Exported role: site editor.
  $roles['site editor'] = array(
    'name' => 'site editor',
    'weight' => 8,
    'uuid' => '8a759674-98c5-4a16-a6bc-695d8d52da05',
  );

  // Exported role: unverified user.
  $roles['unverified user'] = array(
    'name' => 'unverified user',
    'weight' => 1,
    'uuid' => 'd25f37bd-7241-4f45-8c80-dcb9bb490a9c',
  );

  return $roles;
}
