/* SPDX-License-Identifier: GPL-2.0 */
/*
 */
#ifndef BBQX0KBD_MODULE_H_
#define BBQX0KBD_MODULE_H_

MODULE_LICENSE("GPL");
MODULE_AUTHOR("wallComputer");
MODULE_DESCRIPTION("Keyboard driver for BBQ10, hardware by arturo182 <arturo182@tlen.pl>, software by wallComputer.");
MODULE_VERSION("0.4") ; // To Match software version on SAM-D Controller of arturo182's keyboard featherwing Rev 2.

static const struct i2c_device_id bbqX0kbd_i2c_device_id[] = {
	{ DEVICE_NAME, 0, },
	{ }
};
MODULE_DEVICE_TABLE(i2c, bbqX0kbd_i2c_device_id);

static const struct of_device_id bbqX0kbd_of_device_id[] = {
	{ .compatible = COMPATIBLE_NAME, },
	{ }
};
MODULE_DEVICE_TABLE(of, bbqX0kbd_of_device_id);

#endif
