/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright(c) 2007 - 2016 Realtek Corporation. All rights reserved. */


#ifndef	__PHYDMEDCATURBOCHECK_H__
#define    __PHYDMEDCATURBOCHECK_H__

#if PHYDM_SUPPORT_EDCA
/*#define EDCATURBO_VERSION	"2.1"*/
#define EDCATURBO_VERSION	"2.3"	/*2015.07.29 by YuChen*/

struct _EDCA_TURBO_ {
	bool is_current_turbo_edca;
	bool is_cur_rdl_state;

	u32	prv_traffic_idx; /* edca turbo */

};

static u32 edca_setting_UL[HT_IOT_PEER_MAX] =
	/* UNKNOWN		REALTEK_90	REALTEK_92SE	BROADCOM		RALINK		ATHEROS		CISCO		MERU        MARVELL	92U_AP		SELF_AP(DownLink/Tx) */
{ 0x5e4322,		0xa44f,		0x5e4322,		0x5ea32b,		0x5ea422,	0x5ea322,	0x3ea430,	0x5ea42b, 0x5ea44f,	0x5e4322,	0x5e4322};


static u32 edca_setting_DL[HT_IOT_PEER_MAX] =
	/* UNKNOWN		REALTEK_90	REALTEK_92SE	BROADCOM		RALINK		ATHEROS		CISCO		MERU,       MARVELL	92U_AP		SELF_AP(UpLink/Rx) */
{ 0xa44f,		0x5ea44f,	0x5e4322,		0x5ea42b,		0xa44f,		0xa630,		0x5ea630,	0x5ea42b, 0xa44f,		0xa42b,		0xa42b};

static u32 edca_setting_dl_g_mode[HT_IOT_PEER_MAX] =
	/* UNKNOWN		REALTEK_90	REALTEK_92SE	BROADCOM		RALINK		ATHEROS		CISCO		MERU,       MARVELL	92U_AP		SELF_AP */
{ 0x4322,		0xa44f,		0x5e4322,		0xa42b,			0x5e4322,	0x4322,		0xa42b,		0x5ea42b, 0xa44f,		0x5e4322,	0x5ea42b};

void
odm_edca_turbo_check(
	void		*p_dm_void
);
void
odm_edca_turbo_init(
	void		*p_dm_void
);

void
odm_edca_turbo_check_ce(
	void		*p_dm_void
);

#endif /*PHYDM_SUPPORT_EDCA*/

#endif
