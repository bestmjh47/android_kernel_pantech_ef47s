/*
 * Copyright (c) 2010-2012 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS - GPIO lib support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_GPIO_H
#define __ASM_ARCH_GPIO_H __FILE__

/* Macro for EXYNOS GPIO numbering */

#define EXYNOS_GPIO_NEXT(__gpio) \
	((__gpio##_START) + (__gpio##_NR) + CONFIG_S3C_GPIO_SPACE + 1)

/* EXYNOS4 GPIO bank sizes */

#define EXYNOS4_GPIO_A0_NR	(8)
#define EXYNOS4_GPIO_A1_NR	(6)
#define EXYNOS4_GPIO_B_NR	(8)
#define EXYNOS4_GPIO_C0_NR	(5)
#define EXYNOS4_GPIO_C1_NR	(5)
#define EXYNOS4_GPIO_D0_NR	(4)
#define EXYNOS4_GPIO_D1_NR	(4)
#define EXYNOS4_GPIO_E0_NR	(5)
#define EXYNOS4_GPIO_E1_NR	(8)
#define EXYNOS4_GPIO_E2_NR	(6)
#define EXYNOS4_GPIO_E3_NR	(8)
#define EXYNOS4_GPIO_E4_NR	(8)
#define EXYNOS4_GPIO_F0_NR	(8)
#define EXYNOS4_GPIO_F1_NR	(8)
#define EXYNOS4_GPIO_F2_NR	(8)
#define EXYNOS4_GPIO_F3_NR	(6)
#define EXYNOS4_GPIO_J0_NR	(8)
#define EXYNOS4_GPIO_J1_NR	(5)
#define EXYNOS4_GPIO_K0_NR	(7)
#define EXYNOS4_GPIO_K1_NR	(7)
#define EXYNOS4_GPIO_K2_NR	(7)
#define EXYNOS4_GPIO_K3_NR	(7)
#define EXYNOS4_GPIO_L0_NR	(8)
#define EXYNOS4_GPIO_L1_NR	(3)
#define EXYNOS4_GPIO_L2_NR	(8)
#define EXYNOS4_GPIO_X0_NR	(8)
#define EXYNOS4_GPIO_X1_NR	(8)
#define EXYNOS4_GPIO_X2_NR	(8)
#define EXYNOS4_GPIO_X3_NR	(8)
#define EXYNOS4_GPIO_Y0_NR	(6)
#define EXYNOS4_GPIO_Y1_NR	(4)
#define EXYNOS4_GPIO_Y2_NR	(6)
#define EXYNOS4_GPIO_Y3_NR	(8)
#define EXYNOS4_GPIO_Y4_NR	(8)
#define EXYNOS4_GPIO_Y5_NR	(8)
#define EXYNOS4_GPIO_Y6_NR	(8)
#define EXYNOS4_GPIO_Z_NR	(7)

/* EXYNOS4 GPIO bank numbers */

enum exynos4_gpio_number {
	EXYNOS4_GPIO_A0_START	= 0,
	EXYNOS4_GPIO_A1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_A0),
	EXYNOS4_GPIO_B_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_A1),
	EXYNOS4_GPIO_C0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_B),
	EXYNOS4_GPIO_C1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_C0),
	EXYNOS4_GPIO_D0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_C1),
	EXYNOS4_GPIO_D1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_D0),
	EXYNOS4_GPIO_E0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_D1),
	EXYNOS4_GPIO_E1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_E0),
	EXYNOS4_GPIO_E2_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_E1),
	EXYNOS4_GPIO_E3_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_E2),
	EXYNOS4_GPIO_E4_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_E3),
	EXYNOS4_GPIO_F0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_E4),
	EXYNOS4_GPIO_F1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_F0),
	EXYNOS4_GPIO_F2_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_F1),
	EXYNOS4_GPIO_F3_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_F2),
	EXYNOS4_GPIO_J0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_F3),
	EXYNOS4_GPIO_J1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_J0),
	EXYNOS4_GPIO_K0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_J1),
	EXYNOS4_GPIO_K1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_K0),
	EXYNOS4_GPIO_K2_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_K1),
	EXYNOS4_GPIO_K3_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_K2),
	EXYNOS4_GPIO_L0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_K3),
	EXYNOS4_GPIO_L1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_L0),
	EXYNOS4_GPIO_L2_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_L1),
	EXYNOS4_GPIO_X0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_L2),
	EXYNOS4_GPIO_X1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_X0),
	EXYNOS4_GPIO_X2_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_X1),
	EXYNOS4_GPIO_X3_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_X2),
	EXYNOS4_GPIO_Y0_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_X3),
	EXYNOS4_GPIO_Y1_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y0),
	EXYNOS4_GPIO_Y2_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y1),
	EXYNOS4_GPIO_Y3_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y2),
	EXYNOS4_GPIO_Y4_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y3),
	EXYNOS4_GPIO_Y5_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y4),
	EXYNOS4_GPIO_Y6_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y5),
	EXYNOS4_GPIO_Z_START	= EXYNOS_GPIO_NEXT(EXYNOS4_GPIO_Y6),
};

/* EXYNOS4 GPIO number definitions */

#define EXYNOS4_GPA0(_nr)	(EXYNOS4_GPIO_A0_START + (_nr))
#define EXYNOS4_GPA1(_nr)	(EXYNOS4_GPIO_A1_START + (_nr))
#define EXYNOS4_GPB(_nr)	(EXYNOS4_GPIO_B_START + (_nr))
#define EXYNOS4_GPC0(_nr)	(EXYNOS4_GPIO_C0_START + (_nr))
#define EXYNOS4_GPC1(_nr)	(EXYNOS4_GPIO_C1_START + (_nr))
#define EXYNOS4_GPD0(_nr)	(EXYNOS4_GPIO_D0_START + (_nr))
#define EXYNOS4_GPD1(_nr)	(EXYNOS4_GPIO_D1_START + (_nr))
#define EXYNOS4_GPE0(_nr)	(EXYNOS4_GPIO_E0_START + (_nr))
#define EXYNOS4_GPE1(_nr)	(EXYNOS4_GPIO_E1_START + (_nr))
#define EXYNOS4_GPE2(_nr)	(EXYNOS4_GPIO_E2_START + (_nr))
#define EXYNOS4_GPE3(_nr)	(EXYNOS4_GPIO_E3_START + (_nr))
#define EXYNOS4_GPE4(_nr)	(EXYNOS4_GPIO_E4_START + (_nr))
#define EXYNOS4_GPF0(_nr)	(EXYNOS4_GPIO_F0_START + (_nr))
#define EXYNOS4_GPF1(_nr)	(EXYNOS4_GPIO_F1_START + (_nr))
#define EXYNOS4_GPF2(_nr)	(EXYNOS4_GPIO_F2_START + (_nr))
#define EXYNOS4_GPF3(_nr)	(EXYNOS4_GPIO_F3_START + (_nr))
#define EXYNOS4_GPJ0(_nr)	(EXYNOS4_GPIO_J0_START + (_nr))
#define EXYNOS4_GPJ1(_nr)	(EXYNOS4_GPIO_J1_START + (_nr))
#define EXYNOS4_GPK0(_nr)	(EXYNOS4_GPIO_K0_START + (_nr))
#define EXYNOS4_GPK1(_nr)	(EXYNOS4_GPIO_K1_START + (_nr))
#define EXYNOS4_GPK2(_nr)	(EXYNOS4_GPIO_K2_START + (_nr))
#define EXYNOS4_GPK3(_nr)	(EXYNOS4_GPIO_K3_START + (_nr))
#define EXYNOS4_GPL0(_nr)	(EXYNOS4_GPIO_L0_START + (_nr))
#define EXYNOS4_GPL1(_nr)	(EXYNOS4_GPIO_L1_START + (_nr))
#define EXYNOS4_GPL2(_nr)	(EXYNOS4_GPIO_L2_START + (_nr))
#define EXYNOS4_GPX0(_nr)	(EXYNOS4_GPIO_X0_START + (_nr))
#define EXYNOS4_GPX1(_nr)	(EXYNOS4_GPIO_X1_START + (_nr))
#define EXYNOS4_GPX2(_nr)	(EXYNOS4_GPIO_X2_START + (_nr))
#define EXYNOS4_GPX3(_nr)	(EXYNOS4_GPIO_X3_START + (_nr))
#define EXYNOS4_GPY0(_nr)	(EXYNOS4_GPIO_Y0_START + (_nr))
#define EXYNOS4_GPY1(_nr)	(EXYNOS4_GPIO_Y1_START + (_nr))
#define EXYNOS4_GPY2(_nr)	(EXYNOS4_GPIO_Y2_START + (_nr))
#define EXYNOS4_GPY3(_nr)	(EXYNOS4_GPIO_Y3_START + (_nr))
#define EXYNOS4_GPY4(_nr)	(EXYNOS4_GPIO_Y4_START + (_nr))
#define EXYNOS4_GPY5(_nr)	(EXYNOS4_GPIO_Y5_START + (_nr))
#define EXYNOS4_GPY6(_nr)	(EXYNOS4_GPIO_Y6_START + (_nr))
#define EXYNOS4_GPZ(_nr)	(EXYNOS4_GPIO_Z_START + (_nr))

/* the end of the EXYNOS4 specific gpios */

#define EXYNOS4_GPIO_END	(EXYNOS4_GPZ(EXYNOS4_GPIO_Z_NR) + 1)

/* EXYNOS5 GPIO bank sizes */

#define EXYNOS5_GPIO_A0_NR	(8)
#define EXYNOS5_GPIO_A1_NR	(6)
#define EXYNOS5_GPIO_A2_NR	(8)
#define EXYNOS5_GPIO_B0_NR	(5)
#define EXYNOS5_GPIO_B1_NR	(5)
#define EXYNOS5_GPIO_B2_NR	(4)
#define EXYNOS5_GPIO_B3_NR	(4)
#define EXYNOS5_GPIO_C0_NR	(7)
#define EXYNOS5_GPIO_C1_NR	(7)
#define EXYNOS5_GPIO_C2_NR	(7)
#define EXYNOS5_GPIO_C3_NR	(7)
#define EXYNOS5_GPIO_D0_NR	(8)
#define EXYNOS5_GPIO_D1_NR	(8)
#define EXYNOS5_GPIO_Y0_NR	(6)
#define EXYNOS5_GPIO_Y1_NR	(4)
#define EXYNOS5_GPIO_Y2_NR	(6)
#define EXYNOS5_GPIO_Y3_NR	(8)
#define EXYNOS5_GPIO_Y4_NR	(8)
#define EXYNOS5_GPIO_Y5_NR	(8)
#define EXYNOS5_GPIO_Y6_NR	(8)
#define EXYNOS5_GPIO_X0_NR	(8)
#define EXYNOS5_GPIO_X1_NR	(8)
#define EXYNOS5_GPIO_X2_NR	(8)
#define EXYNOS5_GPIO_X3_NR	(8)
#define EXYNOS5_GPIO_E0_NR	(8)
#define EXYNOS5_GPIO_E1_NR	(2)
#define EXYNOS5_GPIO_F0_NR	(4)
#define EXYNOS5_GPIO_F1_NR	(4)
#define EXYNOS5_GPIO_G0_NR	(8)
#define EXYNOS5_GPIO_G1_NR	(8)
#define EXYNOS5_GPIO_G2_NR	(2)
#define EXYNOS5_GPIO_H0_NR	(4)
#define EXYNOS5_GPIO_H1_NR	(8)
#define EXYNOS5_GPIO_V0_NR	(8)
#define EXYNOS5_GPIO_V1_NR	(8)
#define EXYNOS5_GPIO_V2_NR	(8)
#define EXYNOS5_GPIO_V3_NR	(8)
#define EXYNOS5_GPIO_V4_NR	(2)
#define EXYNOS5_GPIO_Z_NR	(7)

/* EXYNOS5 GPIO bank numbers */

enum exynos5_gpio_number {
	EXYNOS5_GPIO_A0_START		= 0,
	EXYNOS5_GPIO_A1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_A0),
	EXYNOS5_GPIO_A2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_A1),
	EXYNOS5_GPIO_B0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_A2),
	EXYNOS5_GPIO_B1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_B0),
	EXYNOS5_GPIO_B2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_B1),
	EXYNOS5_GPIO_B3_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_B2),
	EXYNOS5_GPIO_C0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_B3),
	EXYNOS5_GPIO_C1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_C0),
	EXYNOS5_GPIO_C2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_C1),
	EXYNOS5_GPIO_C3_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_C2),
	EXYNOS5_GPIO_D0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_C3),
	EXYNOS5_GPIO_D1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_D0),
	EXYNOS5_GPIO_Y0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_D1),
	EXYNOS5_GPIO_Y1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y0),
	EXYNOS5_GPIO_Y2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y1),
	EXYNOS5_GPIO_Y3_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y2),
	EXYNOS5_GPIO_Y4_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y3),
	EXYNOS5_GPIO_Y5_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y4),
	EXYNOS5_GPIO_Y6_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y5),
	EXYNOS5_GPIO_X0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_Y6),
	EXYNOS5_GPIO_X1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_X0),
	EXYNOS5_GPIO_X2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_X1),
	EXYNOS5_GPIO_X3_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_X2),
	EXYNOS5_GPIO_E0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_X3),
	EXYNOS5_GPIO_E1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_E0),
	EXYNOS5_GPIO_F0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_E1),
	EXYNOS5_GPIO_F1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_F0),
	EXYNOS5_GPIO_G0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_F1),
	EXYNOS5_GPIO_G1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_G0),
	EXYNOS5_GPIO_G2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_G1),
	EXYNOS5_GPIO_H0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_G2),
	EXYNOS5_GPIO_H1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_H0),
	EXYNOS5_GPIO_V0_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_H1),
	EXYNOS5_GPIO_V1_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_V0),
	EXYNOS5_GPIO_V2_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_V1),
	EXYNOS5_GPIO_V3_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_V2),
	EXYNOS5_GPIO_V4_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_V3),
	EXYNOS5_GPIO_Z_START		= EXYNOS_GPIO_NEXT(EXYNOS5_GPIO_V4),
};

/* EXYNOS5 GPIO number definitions */

#define EXYNOS5_GPA0(_nr)	(EXYNOS5_GPIO_A0_START + (_nr))
#define EXYNOS5_GPA1(_nr)	(EXYNOS5_GPIO_A1_START + (_nr))
#define EXYNOS5_GPA2(_nr)	(EXYNOS5_GPIO_A2_START + (_nr))
#define EXYNOS5_GPB0(_nr)	(EXYNOS5_GPIO_B0_START + (_nr))
#define EXYNOS5_GPB1(_nr)	(EXYNOS5_GPIO_B1_START + (_nr))
#define EXYNOS5_GPB2(_nr)	(EXYNOS5_GPIO_B2_START + (_nr))
#define EXYNOS5_GPB3(_nr)	(EXYNOS5_GPIO_B3_START + (_nr))
#define EXYNOS5_GPC0(_nr)	(EXYNOS5_GPIO_C0_START + (_nr))
#define EXYNOS5_GPC1(_nr)	(EXYNOS5_GPIO_C1_START + (_nr))
#define EXYNOS5_GPC2(_nr)	(EXYNOS5_GPIO_C2_START + (_nr))
#define EXYNOS5_GPC3(_nr)	(EXYNOS5_GPIO_C3_START + (_nr))
#define EXYNOS5_GPD0(_nr)	(EXYNOS5_GPIO_D0_START + (_nr))
#define EXYNOS5_GPD1(_nr)	(EXYNOS5_GPIO_D1_START + (_nr))
#define EXYNOS5_GPY0(_nr)	(EXYNOS5_GPIO_Y0_START + (_nr))
#define EXYNOS5_GPY1(_nr)	(EXYNOS5_GPIO_Y1_START + (_nr))
#define EXYNOS5_GPY2(_nr)	(EXYNOS5_GPIO_Y2_START + (_nr))
#define EXYNOS5_GPY3(_nr)	(EXYNOS5_GPIO_Y3_START + (_nr))
#define EXYNOS5_GPY4(_nr)	(EXYNOS5_GPIO_Y4_START + (_nr))
#define EXYNOS5_GPY5(_nr)	(EXYNOS5_GPIO_Y5_START + (_nr))
#define EXYNOS5_GPY6(_nr)	(EXYNOS5_GPIO_Y6_START + (_nr))
#define EXYNOS5_GPX0(_nr)	(EXYNOS5_GPIO_X0_START + (_nr))
#define EXYNOS5_GPX1(_nr)	(EXYNOS5_GPIO_X1_START + (_nr))
#define EXYNOS5_GPX2(_nr)	(EXYNOS5_GPIO_X2_START + (_nr))
#define EXYNOS5_GPX3(_nr)	(EXYNOS5_GPIO_X3_START + (_nr))
#define EXYNOS5_GPE0(_nr)	(EXYNOS5_GPIO_E0_START + (_nr))
#define EXYNOS5_GPE1(_nr)	(EXYNOS5_GPIO_E1_START + (_nr))
#define EXYNOS5_GPF0(_nr)	(EXYNOS5_GPIO_F0_START + (_nr))
#define EXYNOS5_GPF1(_nr)	(EXYNOS5_GPIO_F1_START + (_nr))
#define EXYNOS5_GPG0(_nr)	(EXYNOS5_GPIO_G0_START + (_nr))
#define EXYNOS5_GPG1(_nr)	(EXYNOS5_GPIO_G1_START + (_nr))
#define EXYNOS5_GPG2(_nr)	(EXYNOS5_GPIO_G2_START + (_nr))
#define EXYNOS5_GPH0(_nr)	(EXYNOS5_GPIO_H0_START + (_nr))
#define EXYNOS5_GPH1(_nr)	(EXYNOS5_GPIO_H1_START + (_nr))
#define EXYNOS5_GPV0(_nr)	(EXYNOS5_GPIO_V0_START + (_nr))
#define EXYNOS5_GPV1(_nr)	(EXYNOS5_GPIO_V1_START + (_nr))
#define EXYNOS5_GPV2(_nr)	(EXYNOS5_GPIO_V2_START + (_nr))
#define EXYNOS5_GPV3(_nr)	(EXYNOS5_GPIO_V3_START + (_nr))
#define EXYNOS5_GPV4(_nr)	(EXYNOS5_GPIO_V4_START + (_nr))
#define EXYNOS5_GPZ(_nr)	(EXYNOS5_GPIO_Z_START + (_nr))

/* the end of the EXYNOS5 specific gpios */

#define EXYNOS5_GPIO_END	(EXYNOS5_GPZ(EXYNOS5_GPIO_Z_NR) + 1)

/* actually, EXYNOS5_GPIO_END is bigger than EXYNOS4 */

#define S3C_GPIO_END		(EXYNOS5_GPIO_END)

/* define the number of gpios */

#define ARCH_NR_GPIOS		(CONFIG_SAMSUNG_GPIO_EXTRA + S3C_GPIO_END)

#endif /* __ASM_ARCH_GPIO_H */
