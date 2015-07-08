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

  // Backdrop install.php inspired style.
  $styles['backdropsetup'] = array(
    'css' => array(
      backdrop_get_path('module', 'setup') . '/styles/setup/setup.css',
    ),
  );

  // Empty style.
  $styles['none'] = array();

  return $styles;
}
