<?php

/**
 * @file
 * Rules integration for the regcode module.
 */

/**
 * Implements hook_rules_event_info().
 *
 * @ingroup rules
 */
function regcode_rules_event_info() {
  return array(
    'regcode_used' => array(
      'label' => t('User has used a registration code'),
      'group' => 'Regcode',
      'variables' => array(
        'user' => array(
          'type' => 'user',
          'label' => t('The user using the code'),
        ),
        'regcode' => array(
          'type' => 'regcode',
          'label' => t('The regcode which was used'),
        ),
      ),
    ),
  );
}

/**
 * Implements hook_rules_condition_info().
 *
 * @ingroup rules
 */
function regcode_rules_condition_info() {
  return array(
    'regcode_rules_condition_regcode_available' => array(
      'label' => t('User has used a Registration Code'),
      'module' => 'regcode',
      'group' => t('Regcode'),
      'arguments' => array(
        'user' => array('type' => 'user', 'label' => t('The user account being registered')),
      ),
    ),
  );
}

function regcode_rules_condition_regcode_available(stdClass $account = NULL) {
  return !empty($account->regcode);
}
