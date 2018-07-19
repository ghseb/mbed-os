/*
 * Copyright (c) 2017, Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CELLULAR_TARGETS_H_
#define CELLULAR_TARGETS_H_

namespace mbed {

#ifndef CELLULAR_DEVICE
#if defined(TARGET_ADV_WISE_1570) || defined(TARGET_MTB_ADV_WISE_1570)
#define CELLULAR_DEVICE QUECTEL_BC95
#elif TARGET_WIO_3G
#define CELLULAR_DEVICE QUECTEL_UG96
#elif TARGET_MTS_DRAGONFLY_F411RE
#define CELLULAR_DEVICE TELIT_HE910
#elif TARGET_MTB_MTS_DRAGONFLY
#define CELLULAR_DEVICE TELIT_HE910
#elif TARGET_UBLOX_C030
#define CELLULAR_DEVICE UBLOX_PPP
#elif TARGET_UBLOX_C027git
#define CELLULAR_DEVICE UBLOX_PPP
#elif TARGET_STM32F413VG
#define MDMTXD PD_8
#define MDMRXD PD_9
#define CELLULAR_DEVICE CINTERION_ELS61
#elif TARGET_STM32L471VG
#define MDMTXD PD_8
#define MDMRXD PD_9
#define CELLULAR_DEVICE QUECTEL_MC60
#elif TARGET_STM32L4A6VG
#define MDMTXD PD_8
#define MDMRXD PD_9
#define CELLULAR_DEVICE QUECTEL_MC60
#elif TARGET_STM32L471RG
#define MDMTXD PD_8
#define MDMRXD PD_9
#define CELLULAR_DEVICE QUECTEL_MC60
#elif TARGET_STM32L4A6RG
#define MDMTXD PC_4
#define MDMRXD PC_5
#define CELLULAR_DEVICE CINTERION_ELS61
#elif TARGET_STM32L486ZG
#define MDMTXD PG_7
#define MDMRXD PG_8
#define CELLULAR_DEVICE CINTERION_ELS61
#else
//#error Cellular target not defined, see cellular/targets.h
//#define CELLULAR_TARGET <target-modem>
//#define MDMTXD <pin-name>
//#define MDMRXD <pin-name>
#endif
#endif

} // namespace mbed
#endif // CELLULAR_TARGETS_H_
