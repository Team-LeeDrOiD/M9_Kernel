#ifndef _LINUX_HTC_FLAGS_H
#define _LINUX_HTC_FLAGS_H

#include <linux/bitops.h>

enum {
	KERNEL_FLAG_WATCHDOG_ENABLE = BIT(0),
	KERNEL_FLAG_SERIAL_HSL_ENABLE = BIT(1),
	KERNEL_FLAG_KEEP_CHARG_ON = BIT(2),
	KERNEL_FLAG_APPSBARK = BIT(3),
	KERNEL_FLAG_KMEMLEAK = BIT(4),
	KERNEL_FLAG_ENABLE_SSR_LPASS = BIT(5),
	KERNEL_FLAG_MDM_CHARM_DEBUG = BIT(6),
	KERNEL_FLAG_MSM_SMD_DEBUG = BIT(7),
#if defined(CONFIG_ARCH_APQ8064) || defined(CONFIG_ARCH_MSM8960)
	KERNEL_FLAG_PVS_SLOW_CPU = BIT(8),
	KERNEL_FLAG_PVS_NOM_CPU = BIT(9),
	KERNEL_FLAG_PVS_FAST_CPU = BIT(10),
#else
	KERNEL_FLAG_RTB_HOOK = BIT(8),
	KERNEL_FLAG_RESERVED_9 = BIT(9),
	KERNEL_FLAG_RESERVED_10 = BIT(10),
#endif
	KERNEL_FLAG_ENABLE_SSR_MODEM = BIT(11),
	KERNEL_FLAG_ENABLE_SSR_WCNSS = BIT(12),
	KERNEL_FLAG_DISABLE_SAFETY_TIMER = BIT(13),
	KERNEL_FLAG_FOR_PA_TEST = BIT(14),
	KERNEL_FLAG_TEST_PWR_SUPPLY = BIT(15),
	KERNEL_FLAG_RIL_DBG_DMUX = BIT(16),
	KERNEL_FLAG_RIL_DBG_RMNET = BIT(17),
	KERNEL_FLAG_RIL_DBG_CMUX = BIT(18),
	KERNEL_FLAG_RIL_DBG_DATA_LPM = BIT(19),
	KERNEL_FLAG_RIL_DBG_CTL = BIT(20),
	KERNEL_FLAG_RIL_DBG_ALDEBUG_LAWDATA = BIT(21),
	KERNEL_FLAG_RIL_DBG_MEMCPY = BIT(22),
	KERNEL_FLAG_RIL_DBG_RPC = BIT(23),
	KERNEL_FLAG_FAKE_ID = BIT(24),
	KERNEL_FLAG_PM_MONITOR = BIT(25),
	KERNEL_FLAG_ENABLE_FAST_CHARGE = BIT(26),
	KERNEL_FLAG_WAKELOCK_DBG = BIT(27),
	KERNEL_FLAG_DISABLE_TBATT_PROTECT = BIT(28),
	KERNEL_FLAG_ENABLE_BMS_CHARGER_LOG = BIT(29),
	KERNEL_FLAG_RPM_DISABLE_WATCHDOG = BIT(30),
	KERNEL_FLAG_GPIO_DUMP = BIT(31),
};


unsigned int get_tamper_sf(void);
unsigned int get_debug_flag(void);
unsigned int get_kernel_flag(void);
unsigned int get_radio_flag(void);
unsigned int get_radio_ex1_flag(void);
unsigned int get_radio_ex2_flag(void);
unsigned int get_cpumask_flag(void);
char *htc_get_bootmode(void);

#endif /* _LINUX_HTC_FLAGS_H */
