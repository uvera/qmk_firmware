/* Copyright 2022 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Pablo Ramirez <jp.ramangulo@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

#if defined(KEYBOARD_keychron_k3_rgb_ansi)
    #include "ansi.h"
#elif defined(KEYBOARD_keychron_k3_rgb_iso)
    #include "iso.h"
#elif defined(KEYBOARD_keychron_k3_rgb_optical_ansi)
    #include "optical_ansi.h"
#elif defined(KEYBOARD_keychron_k3_rgb_optical_iso)
    #include "optical_iso.h"
#endif
