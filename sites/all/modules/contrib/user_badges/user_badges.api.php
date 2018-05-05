<?php

/**
 * @file
 * API documentation for user_badges.module
 */

/**
 * Acts after a successful badge assignment to a user.
 *
 * @param int $uid
 *   User ID.
 * @param int $bid
 *   Badge ID.
 * @param int $type
 *   Badge Assignment type: 1 for user; 2 for role.
 * @param int $weight
 *   Weight of the assignment.
 * @param int $source
 *   Source User ID. (or 0 for auto)
 *
 * @see user_badges_user_add_badge()
 */
function hook_user_assign_badge($uid, $bid, $type, $weight, $source) {

}

/**
 * Acts after a successful badge deleting to a user.
 *
 * @param int $uid
 *   User ID.
 * @param int $bid
 *   Badge ID.
 * @param int $source
 *   Source User ID. (or 0 for auto)
 *
 * @see user_badges_user_remove_badge()
 */
function hook_user_delete_badge($uid, $bid, $source) {

}
