/*
 * Format:
 *	level: ARRAY (This is for limiting items to certain things)
 *	  0: Variable to read from
 *	  1: Variable Value Type (SCALAR / BOOL / EQUAL)
 *	  2: What to compare to (-1 = Check Disabled)
 *	  3: Custom exit message (Optional)
 *
 *   items: { Classname, Itemname, price }
 *
 *   Itemname only needs to be filled if you want to rename the original object name.
 */
class WeaponShops {
	//Armory Shops
	class gun {
		name = "Billy Joe's Firearms";
		side = "civ";
		license = "gun";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_hgun_M9", "", 7000 },
			{ "CUP_15Rnd_9x19_M9", "", 100 },
			{ "CUP_hgun_Colt1911", "", 7800 },
			{ "CUP_7Rnd_45ACP_1911", "", 90 },
			{ "CUP_hgun_TaurusTracker455", "", 7600 },
			{ "CUP_6Rnd_45ACP_M", "", 90 },
			{ "CUP_srifle_CZ550", "", 21000 },
			{ "CUP_5x_22_LR_17_HMR_M", "", 120 },
			{ "CUP_srifle_LeeEnfield", "", 19000 },
			{ "CUP_10x_303_M", "", 150 },
			{ "CUP_sgun_Saiga12K", "", 35000 },
			{ "CUP_8Rnd_B_Saiga12_74Slug_M", "", 150 },
			{ "CUP_8Rnd_B_Saiga12_74Pellets_M", "", 150 },
			{ "CUP_arifle_M16A2", "", 42000 },
			{ "CUP_20Rnd_556x45_Stanag", "", 150 },
			{ "CUP_arifle_FNFAL", "", 46000 },
			{ "CUP_20Rnd_762x51_FNFAL_M", "", 150 }
		};
	};

	class rebel {
		name = "Mohammed's Jihadi Shop";
		side = "civ";
		license = "rebel";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_hgun_Colt1911", "", 1000 },
			{ "CUP_7Rnd_45ACP_1911", "", 150 },
			{ "CUP_hgun_TaurusTracker455", "", 800 },
			{ "CUP_hgun_TaurusTracker455_gold", "", 2200 },
			{ "CUP_6Rnd_45ACP_M", "", 150 },
			{ "CUP_hgun_Makarov", "", 1400 },
			{ "CUP_8Rnd_9x18_Makarov_M", "", 150 },
			{ "CUP_hgun_SA61", "", 7900 },
			{ "CUP_20Rnd_B_765x17_Ball_M", "", 190 },
			{ "CUP_sgun_Saiga12K", "", 14000 },
			{ "CUP_8Rnd_B_Saiga12_74Slug_M", "", 150 },
			{ "CUP_8Rnd_B_Saiga12_74Pellets_M", "", 150 },
			{ "CUP_srifle_LeeEnfield", "", 17000 },
			{ "CUP_10x_303_M", "", 150 },
			{ "CUP_arifle_AKM", "", 29000 },
			{ "CUP_arifle_AKS", "", 29000 },
			{ "CUP_arifle_AKS_Gold", "", 34000 },
			{ "CUP_30Rnd_762x39_AK47_M", "", 250 },
			{ "CUP_arifle_Sa58P", "", 24000 },
			{ "CUP_arifle_Sa58V", "", 24000 },
			{ "CUP_30Rnd_Sa58_M", "", 175 },
			{ "CUP_arifle_AK74", "", 32000 },
			{ "CUP_arifle_AK74_GL", "", 38000 },
			{ "CUP_arifle_AKS74", "", 33000 },
			{ "CUP_arifle_AKS74U", "", 33000 },
			{ "CUP_arifle_RPK74", "", 41000 },
			{ "CUP_30Rnd_545x39_AK_M", "", 150 },
			{ "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 750 },
			{ "CUP_optic_Kobra", "", 50 },
			{ "CUP_optic_PSO_1", "", 50 },
			{ "CUP_lmg_PKM", "", 49000 },
			{ "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "", 750 },
			{ "CUP_srifle_SVD", "", 66000 },
			{ "CUP_optic_PSO_3", "", 2500 },
			{ "CUP_10Rnd_762x54_SVD_M", "", 150 },
			{ "CUP_srifle_CZ550", "", 17000 },
			{ "CUP_5x_22_LR_17_HMR_M", "", 75 },
			{ "CUP_launch_RPG7V", "", 78000 },
			{ "CUP_PG7V_M", "", 500 },
			{ "CUP_PG7VM_M", "", 500 },
			{ "CUP_PG7VL_M", "", 500 },
			{ "CUP_PG7VR_M", "", 500 },
			{ "CUP_OG7_M", "", 500 },
			{ "CUP_HandGrenade_RGD5", "", 150 },
			{ "CUP_glaunch_M79", "", 17000 },
			{ "CUP_1Rnd_HE_M203", "", 75 },
			{ "CUP_1Rnd_HE_GP25_M", "", 75 },
			{ "CUP_FlareRed_GP25_M", "", 75 },
			{ "CUP_FlareGreen_GP25_M", "", 75 },
			{ "CUP_FlareYellow_GP25_M", "", 75 },
			{ "CUP_FlareWhite_GP25_M", "", 75 },
			{ "CUP_1Rnd_SMOKE_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeRed_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeGreen_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeYellow_GP25_M", "", 75 },
			{ "CUP_IED_V1_M", "", 15000 },
			{ "CUP_IED_V2_M", "", 15000 },
			{ "CUP_IED_V3_M", "", 15000 },
			{ "CUP_IED_V4_M", "", 15000 }
		};
	};

	class opf_weapons {
		name = "Opfor Weapon Shop";
		side = "opf";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ItemMap", "", 50 },
			{ "ItemCompass", "", 50 },
			{ "ItemWatch", "", 50 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 },
			{ "CUP_hgun_Colt1911", "", 1000 },
			{ "CUP_7Rnd_45ACP_1911", "", 150 },
			{ "CUP_hgun_TaurusTracker455", "", 800 },
			{ "CUP_hgun_TaurusTracker455_gold", "", 2200 },
			{ "CUP_6Rnd_45ACP_M", "", 150 },
			{ "CUP_hgun_Makarov", "", 1400 },
			{ "CUP_8Rnd_9x18_Makarov_M", "", 150 },
			{ "CUP_hgun_SA61", "", 7900 },
			{ "CUP_20Rnd_B_765x17_Ball_M", "", 190 },
			{ "CUP_smg_bizon", "", 12500 },
			{ "CUP_64Rnd_9x19_Bizon_M", "", 190 },
			{ "CUP_64Rnd_Red_Tracer_9x19_Bizon_M", "", 190 },
			{ "CUP_muzzle_Bizon", "", 600 },
			{ "CUP_sgun_Saiga12K", "", 14000 },
			{ "CUP_8Rnd_B_Saiga12_74Slug_M", "", 150 },
			{ "CUP_8Rnd_B_Saiga12_74Pellets_M", "", 150 },
			{ "CUP_srifle_LeeEnfield", "", 17000 },
			{ "CUP_10x_303_M", "", 150 },
			{ "CUP_arifle_AKM", "", 29000 },
			{ "CUP_arifle_AKS", "", 29000 },
			{ "CUP_arifle_AKS_Gold", "", 34000 },
			{ "CUP_30Rnd_762x39_AK47_M", "", 250 },
			{ "CUP_arifle_Sa58P", "", 24000 },
			{ "CUP_arifle_Sa58V", "", 24000 },
			{ "CUP_30Rnd_Sa58_M", "", 175 },
			{ "CUP_arifle_AK74", "", 32000 },
			{ "CUP_arifle_AK74_GL", "", 38000 },
			{ "CUP_arifle_AKS74", "", 33000 },
			{ "CUP_arifle_AKS74U", "", 33000 },
			{ "CUP_arifle_RPK74", "", 41000 },
			{ "CUP_arifle_AK107", "", 39000 },
			{ "CUP_arifle_AK107_GL", "", 39000 },
			{ "CUP_30Rnd_545x39_AK_M", "", 150 },
			{ "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 750 },
			{ "CUP_optic_Kobra", "", 50 },
			{ "CUP_optic_PSO_1", "", 50 },
			{ "CUP_lmg_PKM", "", 49000 },
			{ "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "", 750 },
			{ "CUP_lmg_Pecheneg", "", 49000 },
			{ "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "", 750 },
			{ "CUP_optic_PechenegScope", "", 1200 },
			{ "CUP_srifle_SVD", "", 66000 },
			{ "CUP_srifle_SVD_des", "", 66000 },
			{ "CUP_optic_NSPU", "", 6300 },
			{ "CUP_optic_PSO_3", "", 2500 },
			{ "CUP_10Rnd_762x54_SVD_M", "", 150 },
			{ "CUP_srifle_VSSVintorez", "", 72000 },
			{ "CUP_10Rnd_9x39_SP5_VSS_M", "", 150 },
			{ "CUP_20Rnd_9x39_SP5_VSS_M", "", 450 },
			{ "CUP_srifle_CZ550", "", 17000 },
			{ "CUP_5x_22_LR_17_HMR_M", "", 75 },
			{ "CUP_launch_RPG7V", "", 78000 },
			{ "CUP_PG7V_M", "", 500 },
			{ "CUP_PG7VM_M", "", 500 },
			{ "CUP_PG7VL_M", "", 500 },
			{ "CUP_PG7VR_M", "", 500 },
			{ "CUP_OG7_M", "", 500 },
			{ "CUP_HandGrenade_RGD5", "", 150 },
			{ "CUP_glaunch_M79", "", 17000 },
			{ "CUP_1Rnd_HE_M203", "", 75 },
			{ "CUP_1Rnd_HE_GP25_M", "", 75 },
			{ "CUP_FlareRed_GP25_M", "", 75 },
			{ "CUP_FlareGreen_GP25_M", "", 75 },
			{ "CUP_FlareYellow_GP25_M", "", 75 },
			{ "CUP_FlareWhite_GP25_M", "", 75 },
			{ "CUP_1Rnd_SMOKE_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeRed_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeGreen_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeYellow_GP25_M", "", 75 },
			{ "CUP_IED_V1_M", "", 15000 },
			{ "CUP_IED_V2_M", "", 15000 },
			{ "CUP_IED_V3_M", "", 15000 },
			{ "CUP_IED_V4_M", "", 15000 }
		};
	};

	class ins_weapons {
		name = "Insurgent Weapon Shop";
		side = "ins";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ItemMap", "", 50 },
			{ "ItemCompass", "", 50 },
			{ "ItemWatch", "", 50 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 },
			{ "CUP_hgun_Makarov", "", 1400 },
			{ "CUP_8Rnd_9x18_Makarov_M", "", 150 },
			{ "CUP_hgun_Colt1911", "", 1000 },
			{ "CUP_7Rnd_45ACP_1911", "", 150 },
			{ "CUP_hgun_TaurusTracker455", "", 800 },
			{ "CUP_hgun_TaurusTracker455_gold", "", 2200 },
			{ "CUP_6Rnd_45ACP_M", "", 150 },
			{ "CUP_hgun_SA61", "", 7900 },
			{ "CUP_20Rnd_B_765x17_Ball_M", "", 190 },
			{ "CUP_sgun_Saiga12K", "", 14000 },
			{ "CUP_8Rnd_B_Saiga12_74Slug_M", "", 150 },
			{ "CUP_8Rnd_B_Saiga12_74Pellets_M", "", 150 },
			{ "CUP_srifle_LeeEnfield", "", 17000 },
			{ "CUP_10x_303_M", "", 150 },
			{ "CUP_arifle_AKM", "", 29000 },
			{ "CUP_arifle_AKS", "", 29000 },
			{ "CUP_arifle_AKS_Gold", "", 34000 },
			{ "CUP_30Rnd_762x39_AK47_M", "", 250 },
			{ "CUP_arifle_Sa58P", "", 24000 },
			{ "CUP_arifle_Sa58V", "", 24000 },
			{ "CUP_30Rnd_Sa58_M", "", 175 },
			{ "CUP_arifle_AK74", "", 32000 },
			{ "CUP_arifle_AK74_GL", "", 38000 },
			{ "CUP_arifle_AKS74", "", 33000 },
			{ "CUP_arifle_AKS74U", "", 33000 },
			{ "CUP_arifle_RPK74", "", 41000 },
			{ "CUP_30Rnd_545x39_AK_M", "", 150 },
			{ "CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M", "", 750 },
			{ "CUP_optic_Kobra", "", 50 },
			{ "CUP_optic_PSO_1", "", 50 },
			{ "CUP_lmg_PKM", "", 49000 },
			{ "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M", "", 750 },
			{ "CUP_srifle_SVD", "", 66000 },
			{ "CUP_optic_PSO_3", "", 2500 },
			{ "CUP_10Rnd_762x54_SVD_M", "", 150 },
			{ "CUP_srifle_CZ550", "", 17000 },
			{ "CUP_5x_22_LR_17_HMR_M", "", 75 },
			{ "CUP_launch_RPG7V", "", 78000 },
			{ "CUP_PG7V_M", "", 500 },
			{ "CUP_PG7VM_M", "", 500 },
			{ "CUP_PG7VL_M", "", 500 },
			{ "CUP_PG7VR_M", "", 500 },
			{ "CUP_OG7_M", "", 500 },
			{ "CUP_HandGrenade_RGD5", "", 150 },
			{ "CUP_glaunch_M79", "", 17000 },
			{ "CUP_1Rnd_HE_M203", "", 75 },
			{ "CUP_1Rnd_HE_GP25_M", "", 75 },
			{ "CUP_FlareRed_GP25_M", "", 75 },
			{ "CUP_FlareGreen_GP25_M", "", 75 },
			{ "CUP_FlareYellow_GP25_M", "", 75 },
			{ "CUP_FlareWhite_GP25_M", "", 75 },
			{ "CUP_1Rnd_SMOKE_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeRed_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeGreen_GP25_M", "", 75 },
			{ "CUP_1Rnd_SmokeYellow_GP25_M", "", 75 },
			{ "CUP_IED_V1_M", "", 15000 },
			{ "CUP_IED_V2_M", "", 15000 },
			{ "CUP_IED_V3_M", "", 15000 },
			{ "CUP_IED_V4_M", "", 15000 }
		};
	};

	class gang {
		name = "Hideout Armament";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_hgun_TaurusTracker455", "", 6500 },
			{ "CUP_6Rnd_45ACP_M", "", 150 },
			{ "CUP_hgun_Makarov", "", 2200 },
			{ "CUP_8Rnd_9x18_Makarov_M", "", 150 },
			{ "CUP_hgun_Colt1911", "", 3000 },
			{ "CUP_7Rnd_45ACP_1911", "", 150 },
			{ "CUP_hgun_MicroUzi", "", 14000 },
			{ "CUP_30Rnd_9x19_UZI", "", 300 },
			{ "CUP_srifle_LeeEnfield", "", 19000 },
			{ "CUP_10x_303_M", "", 150 },
			{ "CUP_arifle_AKM", "", 37000 },
			{ "CUP_arifle_AKS", "", 37000 },
			{ "CUP_30Rnd_762x39_AK47_M", "", 375 },
			{ "CUP_arifle_AKS74U", "", 42000 },
			{ "CUP_30Rnd_545x39_AK_M", "", 350 }
		};
	};

	//Basic Shops
	class genstore {
		name = "Takitan General Store";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ItemMap", "", 50 },
			{ "ItemCompass", "", 50 },
			{ "ItemWatch", "", 50 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
		};
	};

	//Cop Shops
	class cop_basic {
		name = "Patrol-Officer Shop";
		side = "cop";
		license = "patrol";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ItemMap", "", 50 },
			{ "ItemCompass", "", 50 },
			{ "ItemWatch", "", 50 },
			{ "FirstAidKit", "", 150 },
			{ "ToolKit", "", 250 },
			{ "Medikit", "", 1000 },
			{ "CUP_NVG_PVS7", "", 2000 },
			{ "CUP_hgun_M9", "", 2000 },
			{ "CUP_15Rnd_9x19_M9", "", 90 },
			{ "CUP_sgun_M1014", "", 4500 },
			{ "CUP_8Rnd_B_Beneli_74Slug", "", 65 },
			{ "CUP_8Rnd_B_Beneli_74Pellets", "", 250 },
			{ "CUP_smg_MP5A5", "", 6500 },
			{ "CUP_30Rnd_9x19_MP5", "", 125 },
			{ "CUP_arifle_FNFAL", "", 7750 },
			{ "CUP_20Rnd_762x51_FNFAL_M", "", 350 },
			{ "CUP_arifle_M4A1", "", 8650 },
			{ "CUP_arifle_M16A2", "", 7900 },
			{ "CUP_arifle_M16A2_GL", "", 8700 },
			{ "CUP_arifle_M16A4_Base", "", 9000 },
			{ "CUP_arifle_M16A4_GL", "", 10500 },
			{ "CUP_20Rnd_556x45_Stanag", "", 450 },
			{ "SmokeShell", "", 150 },
			{ "SmokeShellYellow", "", 150 },
			{ "SmokeShellRed", "", 150 },
			{ "SmokeShellGreen", "", 150 },
			{ "SmokeShellPurple", "", 150 },
			{ "SmokeShellBlue", "", 150 },
			{ "SmokeShellOrange", "", 150 },
			{ "CUP_1Rnd_Smoke_M203", "", 150 },
			{ "CUP_1Rnd_SmokeRed_M203", "", 150 },
			{ "CUP_1Rnd_SmokeGreen_M203", "", 150 },
			{ "CUP_1Rnd_SmokeYellow_M203", "", 150 },
			{ "CUP_FlareWhite_M203", "", 150 },
			{ "CUP_FlareGreen_M203", "", 150 },
			{ "CUP_FlareRed_M203", "", 150 },
			{ "CUP_FlareYellow_M203", "", 150 },
			{ "CUP_1Rnd_StarCluster_White_M203", "", 150 },
			{ "CUP_1Rnd_StarCluster_Red_M203", "", 150 },
			{ "CUP_1Rnd_StarCluster_Green_M203", "", 150 },
			{ "CUP_1Rnd_StarFlare_White_M203", "", 150 },
			{ "CUP_1Rnd_StarFlare_Red_M203", "", 150 },
			{ "CUP_1Rnd_StarFlare_Green_M203", "", 150 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
		};
	};

	class cop_criminal {
		name = "Criminal Response-Officer Gear";
		side = "cop";
		license = "response";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_hgun_Glock17", "", 3500 },
			{ "CUP_17Rnd_9x19_glock17", "", 130 },
			{ "CUP_arifle_M4A1_black", "", 8750 },
			{ "CUP_arifle_M4A1_BUIS_GL", "", 9000 },
			{ "CUP_arifle_Mk16_CQC", "", 11000 },
			{ "CUP_arifle_Mk16_CQC_FG", "", 11000 },
			{ "CUP_arifle_Mk16_CQC_SFG", "", 11000 },
			{ "CUP_arifle_Mk16_CQC_EGLM", "", 11000 },
			{ "CUP_arifle_Mk16_STD", "", 14000 },
			{ "CUP_arifle_Mk16_STD_FG", "", 14000 },
			{ "CUP_arifle_Mk16_STD_SFG", "", 14000 },
			{ "CUP_arifle_Mk16_STD_EGLM", "", 14000 },
			{ "CUP_arifle_Mk16_SV", "", 18000 },
			{ "CUP_srifle_Mk12SPR", "", 22000 },
			{ "CUP_30Rnd_556x45_Stanag", "", 350 },
			{ "CUP_optic_Eotech533", "", 1200 },
			{ "CUP_optic_CompM2_Desert", "", 1200 },
			{ "CUP_optic_LeupoldMk4_CQ_T", "", 1700 },
			{ "CUP_optic_LeupoldM3LR", "", 2200 },
			{ "CUP_bipod_VLTOR_Modpod", "", 1200 },
			{ "CUP_bipod_Harris_1A2_L", "", 1200 },
			{ "CUP_arifle_Sa58RIS1_des", "", 7500 },
			{ "CUP_arifle_Sa58RIS2_camo", "", 7500 },
			{ "CUP_30Rnd_Sa58_M", "", 350 },
			{ "CUP_30Rnd_Sa58_M_TracerR", "", 350 },
			{ "CUP_30Rnd_Sa58_M_TracerY", "", 350 },
			{ "CUP_30Rnd_Sa58_M_TracerG", "", 350 },
			{ "CUP_smg_MP5SD6", "", 7800 },
			{ "CUP_30Rnd_9x19_MP5", "", 350 },
			{ "CUP_glaunch_Mk13", "", 6950 },
			{ "CUP_1Rnd_HE_M203", "", 150 },
			{ "CUP_1Rnd_HEDP_M203", "", 150 },
			{ "CUP_1Rnd_Smoke_M203", "", 150 },
			{ "CUP_1Rnd_SmokeRed_M203", "", 150 },
			{ "CUP_1Rnd_SmokeGreen_M203", "", 150 },
			{ "CUP_1Rnd_SmokeYellow_M203", "", 150 },
			{ "CUP_FlareWhite_M203", "", 150 },
			{ "CUP_FlareGreen_M203", "", 150 },
			{ "CUP_FlareRed_M203", "", 150 },
			{ "CUP_FlareYellow_M203", "", 150 },
			{ "CUP_1Rnd_StarCluster_White_M203", "", 150 },
			{ "CUP_1Rnd_StarCluster_Red_M203", "", 150 },
			{ "CUP_1Rnd_StarCluster_Green_M203", "", 150 },
			{ "CUP_1Rnd_StarFlare_White_M203", "", 150 },
			{ "CUP_1Rnd_StarFlare_Red_M203", "", 150 },
			{ "CUP_1Rnd_StarFlare_Green_M203", "", 150 },
			{ "CUP_HandGrenade_M67", "", 1250 }
		};
	};

	class sobr_weapons {
		name = "SOBR - Heavy Gear Shop";
		side = "cop";
		license = "sobr";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "CUP_arifle_M4A3_desert", "", 18000 },
			{ "CUP_arifle_L85A2", "", 25000 },
			{ "CUP_arifle_L85A2_GL", "", 35000 },
			{ "CUP_arifle_L86A2", "", 29000 },
			{ "CUP_30Rnd_556x45_Stanag", "", 350 },
			{ "CUP_arifle_Mk17_CQC", "", 32500 },
			{ "CUP_arifle_Mk17_CQC_FG", "", 35000 },
			{ "CUP_arifle_Mk17_CQC_SFG", "", 35000 },
			{ "CUP_arifle_Mk17_CQC_EGLM", "", 45000 },
			{ "CUP_arifle_Mk17_STD", "", 35000 },
			{ "CUP_arifle_Mk17_STD_FG", "", 35000 },
			{ "CUP_arifle_Mk17_STD_SFG", "", 35000 },
			{ "CUP_arifle_Mk17_STD_EGLM", "", 45000 },
			{ "CUP_arifle_Mk20", "", 58000 },
			{ "CUP_srifle_M110", "", 76000 },
			{ "CUP_20Rnd_762x51_B_SCAR", "", 350 },
			{ "CUP_20Rnd_762x51_B_M110", "", 350 },
			{ "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "", 350 },
			{ "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "", 350 },
			{ "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "", 350 },
			{ "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "", 350 },
			{ "CUP_srifle_M24_wdl", "", 50000 },
			{ "CUP_srifle_M24_des", "", 50000 },
			{ "CUP_srifle_M40A3", "", 54000 },
			{ "CUP_5Rnd_762x51_M24", "", 350 },
			{ "CUP_lmg_m249_pip4", "", 55000 },
			{ "CUP_lmg_L110A1", "", 55000 },
			{ "CUP_lmg_Mk48_des", "", 15000 },
			{ "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "", 350 },
			{ "CUP_100Rnd_TE4_Red_Tracer_556x45_M249", "", 350 },
			{ "CUP_lmg_M240", "", 65000 },
			{ "CUP_100Rnd_TE4_LRT4_White_Tracer_762x51_Belt_M", "", 350 },
			{ "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "", 350 },
			{ "CUP_srifle_M14_DMR", "", 45000 },
			{ "CUP_20Rnd_762x51_DMR", "", 350 },
			{ "CUP_optic_Eotech533", "", 500 },
			{ "CUP_optic_ELCAN_SpecterDR", "", 1500 },
			{ "CUP_optic_ElcanM145", "", 1500 },
			{ "CUP_optic_AN_PVS_10", "", 1500 },
			{ "CUP_optic_LeupoldMk4_10x40_LRT_Desert", "", 2000 },
			{ "CUP_optic_LeupoldMk4_10x40_LRT_Woodland", "", 2000 },
			{ "CUP_optic_LeupoldMk4_MRT_tan", "", 2000 },
			{ "CUP_optic_CompM2_Desert", "", 1500 },
			{ "CUP_optic_LeupoldMk4", "", 1500 },
			{ "CUP_optic_RCO_desert", "", 1500 },
			{ "CUP_optic_RCO", "", 1500 },
			{ "CUP_bipod_Harris_1A2_L", "", 1500 },
			{ "CUP_bipod_VLTOR_Modpod", "", 1500 },
			{ "CUP_launch_M136", "", 75000 },
			{ "CUP_M136_M", "", 15000 },
			{ "CUP_glaunch_M32", "", 15000 },
			{ "CUP_6Rnd_HE_M203", "", 15000 },
			{ "CUP_6Rnd_FlareWhite_M203", "", 15000 },
			{ "CUP_6Rnd_FlareGreen_M203", "", 15000 },
			{ "CUP_6Rnd_FlareRed_M203", "", 15000 },
			{ "CUP_6Rnd_FlareYellow_M203", "", 15000 },
			{ "CUP_6Rnd_Smoke_M203", "", 15000 },
			{ "CUP_6Rnd_SmokeRed_M203", "", 15000 },
			{ "CUP_6Rnd_SmokeGreen_M203", "", 15000 },
			{ "CUP_6Rnd_SmokeYellow_M203", "", 15000 }
		};
	};

	//Medic Shops
	class med_basic {
		name = "store";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "ItemGPS", "", 100 },
			{ "ItemMap", "", 50 },
			{ "ItemCompass", "", 50 },
			{ "ItemWatch", "", 50 },
			{ "Binocular", "", 150 },
			{ "ToolKit", "", 250 },
			{ "FirstAidKit", "", 150 },
			{ "Medikit", "", 500 },
			{ "NVGoggles", "", 1200 },
			{ "B_FieldPack_ocamo", "", 3000 }
		};
	};
};
