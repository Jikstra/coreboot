#include <arch/acpi_device.h>
#include <device/i2c.h>

struct drivers_i2c_generic_config {
	const char *hid;	/* ACPI _HID (required) */
	const char *name;	/* ACPI Device Name */
	const char *desc;	/* Device Description */
	unsigned uid;		/* ACPI _UID */
	enum i2c_speed speed;	/* Bus speed in Hz, default is I2C_SPEED_FAST */
	unsigned wake;		/* Wake GPE */
	struct acpi_irq irq;	/* Interrupt */

	/* GPIO used to indicate if this device is present */
	unsigned device_present_gpio;
	unsigned device_present_gpio_invert;
};
