// Copyright 2023 sekigon-gonnoc (@sekigon-gonnoc)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// override backing_store_lock/unlock to control core1
#pragma weak backing_store_lock
#pragma weak backing_store_unlock

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// My keyboard setting
  // How long before a key press becomes a hold
#define TAPPING_TERM 250
  // Enables handling for per key `TAPPING_TERM` settings
#define TAPPING_TERM_PER_KEY
  // Specifically for outdated software !!
  // Sets the delay between `register_code` and `unregister_code`, if you're having
  // issues with it registering properly (common on VUSB boards). The value is
  // in milliseconds and defaults to 0.
#define TAP_CODE_DELAY 100