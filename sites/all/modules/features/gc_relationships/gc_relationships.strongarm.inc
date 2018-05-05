<?php
/**
 * @file
 * gc_relationships.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gc_relationships_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_allow_auto_approve';
  $strongarm->value = 0;
  $export['user_relationships_allow_auto_approve'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_allow_multiple';
  $strongarm->value = 1;
  $export['user_relationships_allow_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_author_pane_rtids';
  $strongarm->value = array(
    2 => '2',
  );
  $export['user_relationships_author_pane_rtids'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_enable_ajax_popups';
  $strongarm->value = 1;
  $export['user_relationships_enable_ajax_popups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_enable_author_pane';
  $strongarm->value = 0;
  $export['user_relationships_enable_author_pane'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_last_expire';
  $strongarm->value = 1525450359;
  $export['user_relationships_last_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_left';
  $strongarm->value = '0';
  $export['user_relationships_left'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_accepted';
  $strongarm->value = '!requester\'s @rel_name request has been approved.';
  $export['user_relationships_msg_accepted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_cancel';
  $strongarm->value = 'Your @rel_name request to !requestee has been canceled.';
  $export['user_relationships_msg_cancel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_default';
  $strongarm->value = 'No action has been taken.';
  $export['user_relationships_msg_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_disapprove';
  $strongarm->value = '!requester\'s @rel_name request has been declined.';
  $export['user_relationships_msg_disapprove'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_disapproved';
  $strongarm->value = '!requester has declined your @rel_name request.';
  $export['user_relationships_msg_disapproved'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_existing_relationship';
  $strongarm->value = 'There is already an existing @rel_name relationship with !requestee.';
  $export['user_relationships_msg_existing_relationship'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_existing_request';
  $strongarm->value = 'There is already an earlier @rel_name request sent to !requestee.';
  $export['user_relationships_msg_existing_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_non_existent_type';
  $strongarm->value = 'This relationship type does not exist.';
  $export['user_relationships_msg_non_existent_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_non_existent_user';
  $strongarm->value = 'This user does not exist.';
  $export['user_relationships_msg_non_existent_user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_not_accepting_requests';
  $strongarm->value = 'This user does not accept relationship requests.';
  $export['user_relationships_msg_not_accepting_requests'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_pending';
  $strongarm->value = '!requester has requested to be your @rel_name. View your !pending_relationship_requests to approve or decline.';
  $export['user_relationships_msg_pending'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_pre_approved';
  $strongarm->value = 'You are !requestee\'s newest @rel_name.';
  $export['user_relationships_msg_pre_approved'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_relationship_type_not_allowed';
  $strongarm->value = 'You may not create @rel_name relationships.';
  $export['user_relationships_msg_relationship_type_not_allowed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_relationship_type_not_set';
  $strongarm->value = 'Please choose the type of relationship.';
  $export['user_relationships_msg_relationship_type_not_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_removed';
  $strongarm->value = 'The @rel_name relationship between !requester and !requestee has been deleted.';
  $export['user_relationships_msg_removed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_self_request';
  $strongarm->value = 'You cannot create a relationship with yourself.';
  $export['user_relationships_msg_self_request'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_submitted';
  $strongarm->value = 'Your @rel_name request has been sent to !requestee.';
  $export['user_relationships_msg_submitted'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_too_many_relationships';
  $strongarm->value = 'You are not permitted to create any more relationships with this user.';
  $export['user_relationships_msg_too_many_relationships'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_msg_unknown_error';
  $strongarm->value = 'An error has occurred. Please contact the site administrator.';
  $export['user_relationships_msg_unknown_error'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_position';
  $strongarm->value = 'absolute';
  $export['user_relationships_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_privatemsg_autocomplete_alter';
  $strongarm->value = 0;
  $export['user_relationships_privatemsg_autocomplete_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_privatemsg_role_exclusions';
  $strongarm->value = array(
    2 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
  );
  $export['user_relationships_privatemsg_role_exclusions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_relationships_per_page';
  $strongarm->value = '16';
  $export['user_relationships_relationships_per_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_requests_link';
  $strongarm->value = 'relationships/received';
  $export['user_relationships_requests_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_restrict_privatemsg';
  $strongarm->value = 'all';
  $export['user_relationships_restrict_privatemsg'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_show_direct_links';
  $strongarm->value = 1;
  $export['user_relationships_show_direct_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_show_user_pictures';
  $strongarm->value = 1;
  $export['user_relationships_show_user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationships_top';
  $strongarm->value = '0';
  $export['user_relationships_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_approve_message';
  $strongarm->value = 'Dear @requester_name,

@requestee_name has approved your request to be their @relationship_name.

Here\'s a link to your relationships:
  @requester_list_link

Regards,
The @site team

This message was sent to you because you have user relationships email notifications turned on.
If you no longer wish to receive these emails, you can turn them off at @site_url/user/@requester_uid/edit.';
  $export['user_relationship_mailer_approve_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_approve_subject';
  $strongarm->value = '[@site] You are @requestee_name\'s newest @relationship_name';
  $export['user_relationship_mailer_approve_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_cancel_message';
  $strongarm->value = 'Dear @requestee_name,

@requester_name has canceled their @relationship_name request.

Regards,
The @site team

This message was sent to you because you have user relationships email notifications turned on.
If you no longer wish to receive these emails, you can turn them off at @site_url/user/@requestee_uid/edit.';
  $export['user_relationship_mailer_cancel_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_cancel_subject';
  $strongarm->value = '[@site] @requester_name has canceled their @relationship_name request';
  $export['user_relationship_mailer_cancel_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_disapprove_message';
  $strongarm->value = 'Dear @requester_name,

@requestee_name has declined your request to be their @relationship_name.

Regards,
The @site team

This message was sent to you because you have user relationships email notifications turned on.
If you no longer wish to receive these emails, you can turn them off at @site_url/user/@requester_uid/edit.';
  $export['user_relationship_mailer_disapprove_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_disapprove_subject';
  $strongarm->value = '[@site] @requestee_name has declined your relationship request';
  $export['user_relationship_mailer_disapprove_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_pre_approved_message';
  $strongarm->value = 'Dear @target_name,

We have just created a new @relationship_name relationship between @requester_name and @requestee_name.

Regards,
The @site team

This message was sent to you because you have user relationships email notifications turned on.
If you no longer wish to receive these emails, you can turn them off at @site_url/user/@profile_uid/edit.';
  $export['user_relationship_mailer_pre_approved_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_pre_approved_subject';
  $strongarm->value = '[@site] New @relationship_name relationship between @requester_name and @requestee_name';
  $export['user_relationship_mailer_pre_approved_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_remove_message';
  $strongarm->value = 'Dear @target_name,

@requester_name\'s @relationship_name relationship to @requestee_name has been deleted by @deleted_by_name.

Regards,
The @site team

This message was sent to you because you have user relationships email notifications turned on.
If you no longer wish to receive these emails, you can turn them off at @site_url/user/@profile_uid/edit.';
  $export['user_relationship_mailer_remove_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_remove_subject';
  $strongarm->value = '[@site] @relationship_name relationship between @requester_name and @requestee_name has been deleted';
  $export['user_relationship_mailer_remove_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_request_message';
  $strongarm->value = 'Dear @requestee_name,

@requester_name wants to be your @relationship_name.

Here\'s a link to @requester_name\'s profile:
  @requester_link

To approve/disapprove this, log in to @site_url and see your pending relationship requests at @requestee_pending_link.

Regards,
The @site team
This message was sent to you because you have user relationships email notifications turned on.
If you no longer wish to receive these emails, you can turn them off at @site_url/user/@requestee_uid/edit.';
  $export['user_relationship_mailer_request_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_request_subject';
  $strongarm->value = '[@site] @requester_name wants to be your @relationship_name';
  $export['user_relationship_mailer_request_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_approve';
  $strongarm->value = 1;
  $export['user_relationship_mailer_send_approve'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_cancel';
  $strongarm->value = 1;
  $export['user_relationship_mailer_send_cancel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_disapprove';
  $strongarm->value = 1;
  $export['user_relationship_mailer_send_disapprove'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_mail';
  $strongarm->value = 0;
  $export['user_relationship_mailer_send_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_pre_approved';
  $strongarm->value = 1;
  $export['user_relationship_mailer_send_pre_approved'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_remove';
  $strongarm->value = 1;
  $export['user_relationship_mailer_send_remove'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_relationship_mailer_send_request';
  $strongarm->value = 1;
  $export['user_relationship_mailer_send_request'] = $strongarm;

  return $export;
}
