<?php
/**
 * @file
 * User module integration.
 */

/**
 * Implements hook_setup_info() on behalf of user.module.
 */
function user_setup_info() {
  $types = array();

  $types['user_register'] = array(
    'form callback' => 'user_setup_user_register_form_callback',
    'finish callback' => 'user_setup_user_register_finish_callback',
  );

  return $types;
}

/**
 * Form callback for 'User register' method.
 *
 * @TODO - Defer the user creation until the finish callback.
 */
function user_setup_user_register_form_callback($form, &$form_state) {
  $form_id = 'user_register_form';
  $user_register_form_state = array(
    'build_info' => array(
      'args' => array(),
    ),
    'cache' => FALSE,
    'method' => 'post',
    'rebuild' => FALSE,
  );
  $form = array_merge_recursive(backdrop_retrieve_form($form_id, $user_register_form_state), $form);

  // Unset undesired elements and attributes.
  unset($form['actions'], $form['#form_id']);

  // @TODO - Make a generic form handling Setup step and utilize that for this
  // functionality.
  // Hide specified elements.
  if (isset($form_state['setup_step']['hide']) && is_array($form_state['setup_step']['hide'])) {
    foreach ($form_state['setup_step']['hide'] as $key) {
      $parents = explode('[', str_replace(']', '', $key));
      if (backdrop_array_nested_key_exists($form, $parents)) {
        $element =& backdrop_array_get_nested_value($form, $parents);
        $element['#access'] = FALSE;
      }
    }
  }

  return $form;
}

/**
 * Finish callback for 'User register' method.
 */
function user_setup_user_register_finish_callback(&$form_state) {
  if (!empty($form_state['setup_step']['switch']) && isset($form_state['values']['uid'])) {
    global $user;
    $user = user_load($form_state['values']['uid']);
  }
}
