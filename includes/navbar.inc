<?php
/**
 * @file
 * Mobile Friendly Navigation Toolbar Admin module integration.
 */

/**
 * Implements hook_setup_init() on behalf of navbar.module.
 */
function navbar_setup_init() {
  if (arg(0) == 'setup') {
    navbar_suppress();
  }
}
