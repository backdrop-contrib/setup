<?php
/**
 * @file
 * Admin module integration.
 */

/**
 * Implements hook_setup_init() on behalf of admin.module.
 */
function admin_setup_init() {
  if (arg(0) == 'setup') {
    admin_suppress();
  }
}
