<?php

/**
 * @file
 * Default theme implementation to display a user badge.
 *
 * Available variables:
 * - $name: the (sanitized) name of the user badge.
 * - $content: An array of user badge items.
 *   Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $user_badge_url: Direct URL of the current user_badge.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - user_badge: The current template type; for example, "theming hook".
 *   - user_badge-teaser: User badge in teaser form.
 *   - user_badge-preview: User badge in preview mode.
 * - $name_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $name_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $user_badge: Full user badge object. Contains data that may not be safe.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 *
 * Field variables:
 * for each field instance attached to the user badge a corresponding
 * variable is defined; for example, $user_badge->body becomes $body.
 * When needing to access a field's raw values,
 * developers/themers are strongly encouraged to use these variables.
 * Otherwise they will have to explicitly specify the desired field language;
 * for example, $user_badge->body['en'], thus overriding any language
 * negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_user_badges()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<div id="user-badge-<?php print $user_badge->bid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php print render($title_prefix); ?>
  <?php if (!$page): ?>
    <h2<?php print $title_attributes; ?>><a href="<?php print $user_badge_url; ?>"><?php print $name; ?></a></h2>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      print render($content);
    ?>
  </div>

</div>
