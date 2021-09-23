/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#define BOARD_INFO_NAME "BTT OCTOPUS Pro V1.0"

// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #ifdef BLTOUCH
    #define Z_MIN_PROBE_PIN                   PB7
  #else
    #define Z_MIN_PROBE_PIN                   PC5 // Probe (Proximity switch) port
  #endif
#endif

#if TEMP_SENSOR_0 == -5
  #define TEMP_0_CS_PIN                     PF8   // Max31865 CS
  #define TEMP_0_SCK_PIN                    PA5
  #define TEMP_0_MISO_PIN                   PA6
  #define TEMP_0_MOSI_PIN                   PA7
  // Max31865, TMC and LCD SD share a set of SPIs, Set TMC and SD to softwareSPI for Max31865
  #define SOFTWARE_SPI
  #define TMC_USE_SW_SPI
#endif

#include "pins_BTT_OCTOPUS_V1_common.h"
