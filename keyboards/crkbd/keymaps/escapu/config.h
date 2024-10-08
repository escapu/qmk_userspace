/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

//#define QUICK_TAP_TERM 0
//#define TAPPING_TERM 100

#define SPLIT_WPM_ENABLE // Ensures the current WPM is available on the slave when using the QMK-provided split transport.
#define SPLIT_LED_STATE_ENABLE // Ensures the current host indicator state (caps/num/scroll) is available on the slave when using the QMK-provided split transport.
#define SPLIT_LAYER_STATE_ENABLE // Ensures the current layer state is available on the slave when using the QMK-provided split transport.
#define SPLIT_MODS_ENABLE // Ensures the current modifier state (normal, weak, and oneshot) is available on the slave when using the QMK-provided split transport.
#define SPLIT_USB_DETECT





// mouse

    #define MOUSEKEY_DELAY 12 //default 10
    #define MOUSEKEY_INTERVAL 20 //default 20
    #define MOUSEKEY_MOVE_DELTA 8 //default 8
    #define MOUSEKEY_MAX_SPEED 7 // default 10
    #define MOUSEKEY_TIME_TO_MAX 30 // default 30

// oled

#undef OLED_FONT_H
#define OLED_FONT_H "font.c"


// rgb light

#ifdef RGBLIGHT_ENABLE

    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17

#endif

//#ifdef RGB_MATRIX_ENABLE
//
//
//    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
//    #define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
//    #define RGB_DISABLE_WHEN_USB_SUSPENDED // turn off effects when suspended
//    #undef RGB_MATRIX_FRAMEBUFFER_EFFECTS
//    // #define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
//    #define RGB_MATRIX_LED_FLUSH_LIMIT 16                           // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
//    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150                       // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
//    #define RGB_MATRIX_HUE_STEP 8
//    #define RGB_MATRIX_SAT_STEP 8
//    #define RGB_MATRIX_VAL_STEP 8
//    #define RGB_MATRIX_SPD_STEP 10
////
////    /* Disable the animations you don't want/need.  You will need to disable a good number of these    *
////     * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
//    #define ENABLE_RGB_MATRIX_ALPHAS_MODS
//    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN			// solid bit w different colors
//    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON		// this one is great
//    #define ENABLE_RGB_MATRIX_BAND_VAL				// interesting one
////
////    #undef ENABLE_RGB_MATRIX_BREATHING
////    #undef ENABLE_RGB_MATRIX_BAND_SAT				//not bad
////    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT			// not bad but there are better ones
////    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
////    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT              // kinda dumb
////    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
////    #undef ENABLE_RGB_MATRIX_CYCLE_ALL				// a little too freaky for me
//    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT			// not bad
////    #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN			// not bad
////    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN			// not bad
////    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL			// not bad a little fast tho
////    #undef ENABLE_RGB_MATRIX_DUAL_BEACON
////    #undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
////    #undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
////    #undef ENABLE_RGB_MATRIX_RAINBOW_BEACON			// meh
////    #undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
////    #undef ENABLE_RGB_MATRIX_RAINDROPS				// boring
////    #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
////    #undef ENABLE_MATRIX_PIXEL_FLOW
////    #undef ENABLE_MATRIX_PIXEL_RAIN
//    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE			// better than jest plain solid
////    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
////    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
////    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
////    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
////    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
//    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS		// makes a cross at the key you hit
////    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
////    #undef ENABLE_RGB_MATRIX_SPLASH				// meh
////    #undef ENABLE_RGB_MATRIX_MULTISPLASH			// meh
////    #undef ENABLE_RGB_MATRIX_SOLID_SPLASH
////    #undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
//
//#endif
