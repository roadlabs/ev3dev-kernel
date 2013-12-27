/*
 * Touch sensor device class for LEGO Mindstorms EV3
 *
 * Copyright (C) 2013 David Lechner <david@lechnology.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.

 * This program is distributed "as is" WITHOUT ANY WARRANTY of any
 * kind, whether express or implied; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __LINUX_LEGOEV3_TOUCH_SENSOR_CLASS_H
#define __LINUX_LEGOEV3_TOUCH_SENSOR_CLASS_H

#include <linux/device.h>


struct legoev3_touch_sensor_device {
	bool (*pressed)(struct legoev3_touch_sensor_device *ts);
	/* private */
	struct device dev;
};

extern int register_legoev3_touch_sensor(struct legoev3_touch_sensor_device *ts,
					 struct device *parent);
extern void unregister_legoev3_touch_sensor(struct legoev3_touch_sensor_device *ts);

extern struct class legoev3_touch_sensor_class;

#endif /* __LINUX_LEGOEV3_TOUCH_SENSOR_CLASS_H */
