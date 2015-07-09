/**
 * @file setup.js
 *
 * Behaviors for selecting a site theme.
 */

(function ($) {

"use strict";


/**
 * Behaviors for selecting a site theme.
 *
 * Detect flexbox support for displaying our list of theme icons with vertical
 * height matching for each row of theme icons.
 */
Backdrop.behaviors.setupDisplay = {
  attach: function(context) {
    var $element = $(context).find('#edit-theme');
    if ($element.length) {
      if ($element.css('flex-wrap')) {
        $element.addClass('flexbox');
      }
      else {
        $element.addClass('no-flexbox');
      }
    }
  }
};

})(jQuery);