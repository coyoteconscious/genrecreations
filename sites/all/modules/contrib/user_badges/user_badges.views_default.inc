<?php
/**
 * @file
 * user_badges.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_badges_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'user_badges_user';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'user_badge';
  $view->human_name = 'User Badges User';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_user_badge_badges_user']['id'] = 'reverse_user_badge_badges_user';
  $handler->display->display_options['relationships']['reverse_user_badge_badges_user']['table'] = 'user_badge';
  $handler->display->display_options['relationships']['reverse_user_badge_badges_user']['field'] = 'reverse_user_badge_badges_user';
  $handler->display->display_options['relationships']['reverse_user_badge_badges_user']['required'] = TRUE;
  /* Field: User Badge: User badge ID */
  $handler->display->display_options['fields']['bid']['id'] = 'bid';
  $handler->display->display_options['fields']['bid']['table'] = 'user_badge';
  $handler->display->display_options['fields']['bid']['field'] = 'bid';
  /* Sort criterion: User Badges Assignments: User Badge Assignment Weight */
  $handler->display->display_options['sorts']['weight_1']['id'] = 'weight_1';
  $handler->display->display_options['sorts']['weight_1']['table'] = 'user_badges_assignment';
  $handler->display->display_options['sorts']['weight_1']['field'] = 'weight';
  /* Sort criterion: User Badge: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'user_badge';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'reverse_user_badge_badges_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'badges_list');
  $translatables['user_badges_user'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User referencing User Badge from user_badge_badges'),
    t('User badge ID'),
    t('.'),
    t(','),
    t('All'),
    t('Block'),
  );

  $export['user_badges_user'] = $view;

  return $export;
}
