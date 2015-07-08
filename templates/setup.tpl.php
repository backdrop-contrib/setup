<?php
/**
 * @file
 * Setup's module implementation to display a single Backdrop page.
 */
?>
<!DOCTYPE html>
<html<?php print backdrop_attributes(array()); ?>>

<head>
  <?php print backdrop_get_html_head(); ?>
  <title><?php print $title; ?></title>
  <?php print backdrop_get_css(); ?>
  <?php print backdrop_get_js(); ?>
</head>
<body class="<?php print implode(' ', $classes); ?>">
<div id='page'>
  <div id='branding'>
    <?php if (isset($logo)) : ?>
      <?php echo $logo ?>
    <?php endif; ?>

    <?php if (isset($title)) : ?>
      <h1 class='page-title'><?php echo $title ?></h1>
    <?php endif; ?>
  </div>

  <div id='content'>
    <?php if (isset($messages)) { echo $messages; } ?>
    <?php 
    //$page_content = $variables['page'];
    echo render($wizard); ?>
  </div>
-</div>
</body>
</html>
