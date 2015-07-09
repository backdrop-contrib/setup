<?php
/**
 * @file
 * Setup's module implementation to display a single Backdrop page.
 */
?>
<div class='setup-page'>
  <div id='branding'>
    <?php if (isset($logo)) : ?>
      <?php echo $logo ?>
    <?php endif; ?>
  </div>

  <div id='content'>
    <?php if (isset($messages)) { echo $messages; } ?>
    <?php 
    //$page_content = $variables['page'];
    echo render($wizard); ?>
  </div>
-</div>
