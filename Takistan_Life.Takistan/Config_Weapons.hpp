/*
 * Format:
 *   level: ARRAY (This is for limiting items to certain things)
 *      0: Variable to read from
 *      1: Variable Value Type (SCALAR / BOOL)
 *      2: What to compare to (-1 = Check Disabled)
 *      3: Custom exit message (Optional)
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
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        license = "rebel";
        level[] = { "", "", -1, "" };
        items[] = {
            { "arifle_TRG20_F", "", 25000 },
            { "arifle_Katiba_F", "", 30000 },
            { "srifle_DMR_01_F", "", 50000 },
            { "arifle_SDAR_F", "", 20000 },
            { "optic_ACO_grn", "", 3500 },
            { "optic_Holosight", "", 3600 },
            { "acc_flashlight", "", 1000 },
            { "optic_Hamr", "", 7500 },
            { "30Rnd_9x21_Mag", "", 200 },
            { "20Rnd_556x45_UW_mag", "", 125 },
            { "30Rnd_556x45_Stanag", "", 300 },
            { "10Rnd_762x51_Mag", "", 500 },
            { "30Rnd_65x39_caseless_green", "", 275 }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "Binocular", "", 150 },
            { "ItemGPS", "", 100 },
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
            { "CUP_hgun_M9", "", 2000 },
            { "CUP_15Rnd_9x19_M9", "", 90 },
            { "CUP_sgun_M1014", "", 4500 },
            { "CUP_8Rnd_B_Beneli_74Slug", "", 65 },
            { "CUP_8Rnd_B_Beneli_74Pellets", "", 250 },
            { "CUP_smg_MP5A5", "", 6500 },
            { "CUP_30Rnd_9x19_MP5", "", 125 },
            { "CUP_arifle_FNFAL", "", 7750 },
            { "CUP_20Rnd_762x51_FNFAL_M", "", 350 },
            { "CUP_arifle_M4A1", "", 9750 },
            { "CUP_arifle_M16A2", "", 8000 },
            { "CUP_arifle_M16A2_GL", "", 9500 },
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
            { "HandGrenade_Stone", "Flashbang", 1500 },
            { "Binocular", "", 150 },
            { "ItemGPS", "", 100 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
            { "Medikit", "", 1000 },
            { "CUP_NVG_PVS7", "", 1000 }
            
        };
    };

    class cop_criminal {
        name = "Criminal Response-Officer";
        side = "cop";
        license = "response";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CUP_hgun_Glock17", "", 3500 },
            { "CUP_17Rnd_9x19_glock17", "", 130 },
            { "CUP_arifle_M4A1_black", "", 9000 },
            { "CUP_arifle_M4A1_BUIS_GL", "", 11000 },
            { "CUP_arifle_Mk16_CQC", "", 12500 },
            { "CUP_arifle_Mk16_CQC_FG", "", 15000 },
            { "CUP_arifle_Mk16_CQC_SFG", "", 15000 },
            { "CUP_arifle_Mk16_CQC_EGLM", "", 20000 },
            { "CUP_arifle_Mk16_STD", "", 15000 },
            { "CUP_arifle_Mk16_STD_FG", "", 18000 },
            { "CUP_arifle_Mk16_STD_SFG", "", 18000 },
            { "CUP_arifle_Mk16_STD_EGLM", "", 20000 },
            { "CUP_arifle_Mk16_SV", "", 25000 },
            { "CUP_srifle_Mk12SPR", "", 35000 },
            { "CUP_30Rnd_556x45_Stanag", "", 350 },
            { "CUP_optic_Eotech533", "", 200 },
            { "CUP_optic_CompM2_Desert", "", 500 },
            { "CUP_optic_LeupoldMk4_CQ_T", "", 2500 },
            { "CUP_optic_LeupoldM3LR", "", 2500 },
            { "CUP_arifle_Sa58RIS1_des", "", 8500 },
            { "CUP_arifle_Sa58RIS2_camo", "", 8500 },
            { "CUP_30Rnd_Sa58_M", "", 350 },
            { "CUP_30Rnd_Sa58_M_TracerR", "", 350 },
            { "CUP_30Rnd_Sa58_M_TracerY", "", 350 },
            { "CUP_30Rnd_Sa58_M_TracerG", "", 350 },
            { "CUP_smg_MP5SD6", "", 11000 },
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
            { "CUP_HandGrenade_M67", "", 2000 }
        };
    };

    class sobr_weapons {
        name = "SOBR";
        side = "cop";
        license = "sobr";
        level[] = { "", "", -1, "" };
        items[] = {
            { "CUP_arifle_M4A3_desert", "", 15000 },
            { "CUP_arifle_L85A2", "", 25000 },
            { "CUP_arifle_L85A2_GL", "", 35000 },
            { "CUP_arifle_L86A2", "", 25000 },
            { "CUP_30Rnd_556x45_Stanag", "", 350 },
            { "CUP_arifle_Mk17_CQC", "", 32500 },
            { "CUP_arifle_Mk17_CQC_FG", "", 35000 },
            { "CUP_arifle_Mk17_CQC_SFG", "", 35000 },
            { "CUP_arifle_Mk17_CQC_EGLM", "", 45000 },
            { "CUP_arifle_Mk17_STD", "", 35000 },
            { "CUP_arifle_Mk17_STD_FG", "", 35000 },
            { "CUP_arifle_Mk17_STD_SFG", "", 35000 },
            { "CUP_arifle_Mk17_STD_EGLM", "", 45000 },
            { "CUP_arifle_Mk20", "", 45000 },
            { "CUP_srifle_M110", "", 45000 },
            { "CUP_20Rnd_762x51_B_M110", "", 350 },
            { "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110", "", 350 },
            { "CUP_20Rnd_TE1_Red_Tracer_762x51_M110", "", 350 },
            { "CUP_20Rnd_TE1_Green_Tracer_762x51_M110", "", 350 },
            { "CUP_20Rnd_TE1_White_Tracer_762x51_M110", "", 350 },
            { "CUP_srifle_M24_wdl", "", 50000 },
            { "CUP_srifle_M24_des", "", 50000 },
            { "CUP_srifle_M40A3", "", 50000 },
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
        side = "med";
        license = "";
        level[] = { "", "", -1, "" };
        items[] = {
            { "ItemGPS", "", 100 },
            { "Binocular", "", 150 },
            { "ToolKit", "", 250 },
            { "FirstAidKit", "", 150 },
            { "Medikit", "", 500 },
            { "NVGoggles", "", 1200 },
            { "B_FieldPack_ocamo", "", 3000 }
        };
    };
};
