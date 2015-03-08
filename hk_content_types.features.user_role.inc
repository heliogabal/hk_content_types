<?php
/**
 * @file
 * hk_content_types.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function hk_content_types_user_default_roles() {
  $roles = array();

  // Exported role: Editor.
  $roles['Editor'] = array(
    'name' => 'Editor',
    'weight' => 32,
  );

  // Exported role: Nutzer anlegen.
  $roles['Nutzer anlegen'] = array(
    'name' => 'Nutzer anlegen',
    'weight' => 30,
  );

  // Exported role: admintooluser.
  $roles['admintooluser'] = array(
    'name' => 'admintooluser',
    'weight' => 29,
  );

  // Exported role: Übersetzen.
  $roles['Übersetzen'] = array(
    'name' => 'Übersetzen',
    'weight' => 31,
  );

  return $roles;
}
