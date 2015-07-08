<?php
/**
 * @file
 */
?>
<?php echo theme('image', array('uri' => $info['screenshot'])); ?>
<h3><?php echo $info['name']; ?></h3>
<?php if ($description) : ?>
  <div class='description'><?php echo $info['description']; ?></div>
<?php endif; ?>
