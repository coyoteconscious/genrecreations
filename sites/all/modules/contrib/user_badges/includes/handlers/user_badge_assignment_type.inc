<?php

/**
 * @file
 * Definition of user_badge_assignment_type.inc
 */

/**
 * @ingroup views_filter_handlers
 */
class user_badge_assignment_type extends views_handler_field {

  /**
   * Render function.
   */
  function render($values) {
    $value = $this->get_value($values);
    $return = '';
    switch ($value) {
      case 1:
        $return = t('User');
        break;

      case 2:
        $return = t('Role');
        break;

      default:
        $return = t('Unknown');
    }
    return $return;

  }

}
