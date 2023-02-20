/*
 * Copyright (C) 2016 The CyanogenMod Project
 *               2017-2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

/*
 * Board specific nodes
 *
 * If your kernel exposes these controls in another place, you can either
 * symlink to the locations given here, or override this header in your
 * device tree.
 */
#define PANEL_BRIGHTNESS_NODE "/sys/class/leds/lcd-backlight/brightness"
#define PANEL_MAX_BRIGHTNESS_NODE "/sys/class/leds/lcd-backlight/max_brightness"

// Uncomment to enable variable button brightness
//#define VAR_BUTTON_BRIGHTNESS 1

/*
 * Brightness adjustment factors
 *
 * If one of your device's LEDs is more powerful than the others, use these
 * values to equalise them. This value is in the range 0.0-1.0.
 */
#define LED_ADJUSTMENT_R 1.0
#define LED_ADJUSTMENT_G 1.0
#define LED_ADJUSTMENT_B 1.0

/*
 * Light brightness factors
 *
 * It might make sense for all colours to be scaled down (for example, if your
 * LED is too bright). Use these values to adjust the brightness of each
 * light. This value is within the range 0-255.
 */
#define LED_BRIGHTNESS_BATTERY 255
#define LED_BRIGHTNESS_NOTIFICATION 255
#define LED_BRIGHTNESS_ATTENTION 255
