/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zmk/events/position_state_changed.h>

typedef uint32_t zmk_keymap_layers_state_t;

uint8_t zmk_keymap_layer_default();
zmk_keymap_layers_state_t zmk_keymap_layer_state();
bool zmk_keymap_layer_active(uint8_t layer);
uint8_t zmk_keymap_highest_layer_active();
int zmk_keymap_layer_activate(uint8_t layer);
int zmk_keymap_layer_deactivate(uint8_t layer);
int zmk_keymap_layer_toggle(uint8_t layer);
int zmk_keymap_layer_to(uint8_t layer);
const char *zmk_keymap_layer_label(uint8_t layer);

int zmk_keymap_position_state_changed(zmk_position_state_changed_source_t source, uint32_t position,
                                      bool pressed, int64_t timestamp);
