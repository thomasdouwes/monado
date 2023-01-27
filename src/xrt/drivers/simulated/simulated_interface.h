// Copyright 2020-2023, Collabora, Ltd.
// SPDX-License-Identifier: BSL-1.0
/*!
 * @file
 * @brief  Interface to simulated driver.
 * @author Jakob Bornecrantz <jakob@collabora.com>
 * @ingroup drv_simulated
 */

#pragma once

#include "xrt/xrt_compiler.h"


#ifdef __cplusplus
extern "C" {
#endif


/*!
 * @defgroup drv_simulated Simulated driver
 * @ingroup drv
 *
 * @brief Simple do-nothing simulated driver.
 */

/*!
 * @dir drivers/simulated
 *
 * @brief @ref drv_simulated files.
 */

/*!
 * What type of movement should the simulated device do.
 *
 * @ingroup drv_simulated
 */
enum simulated_movement
{
	SIMULATED_MOVEMENT_WOBBLE,
	SIMULATED_MOVEMENT_ROTATE,
	SIMULATED_MOVEMENT_STATIONARY,
};

/*!
 * Create a auto prober for simulated devices.
 *
 * @ingroup drv_simulated
 */
struct xrt_auto_prober *
simulated_create_auto_prober(void);

/*!
 * Create a simulated hmd.
 *
 * @ingroup drv_simulated
 */
struct xrt_device *
simulated_hmd_create(enum simulated_movement movement, const struct xrt_pose *center);


#ifdef __cplusplus
}
#endif
