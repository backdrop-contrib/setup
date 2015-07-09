<?php
/**
 * @file
 * Setup module integration.
 */

/**
 * Implements hook_setup_styles().
 */
function setup_setup_styles() {
  $styles = array();

  $styles['setup_style'] = array(
    'css' => array(
      backdrop_get_path('module', 'setup') . '/styles/setup_style/setup_style.css',
    ),
  );

  // Empty style.
  $styles['none'] = array();

  return $styles;
}
