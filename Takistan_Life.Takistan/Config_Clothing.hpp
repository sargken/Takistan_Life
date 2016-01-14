/*
*	ARRAY FORMAT:
*		0: STRING (Classname)
*		1: STRING (Display Name, leave as "" for default)
*		2: SCALAR (Price)
*		4: ARRAY (This is for limiting items to certain things)
*			0: Variable to read from
*			1: Variable Value Type (SCALAR / BOOL / EQUAL)
*			2: What to compare to (-1 = Check Disabled)
*/
class Clothing {
	class bruce {
		title = "STR_Shops_C_Bruce";
		license = "";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Poloshirt_blue", "Poloshirt Blue", 250, { "", "", -1 } },
			{ "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, { "", "", -1 } },
			{ "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, { "", "", -1 } },
			{ "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, { "", "", -1 } },
			{ "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, { "", "", -1 } },
			{ "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, { "", "", -1 } },
			{ "U_C_Poor_2", "Rag tagged clothes", 250, { "", "", -1 } },
			{ "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, { "", "", -1 } },
			{ "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, { "", "", -1 } },
			{ "U_IG_Guerilla2_3", "The Outback Rangler", 1200, { "", "", -1 } },
			{ "U_C_HunterBody_grn", "The Hunters Look", 1500, { "", "", -1 } },
			{ "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, { "", "", -1 } },
			{ "U_OrestesBody", "Surfing On Land", 1100, { "", "", -1 } },
			{ "U_NikosAgedBody", "Casual Wears", 5000, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
			{ "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
			{ "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
			{ "H_Bandanna_cbr", "", 165, { "", "", -1 } },
			{ "H_Bandanna_surfer", "", 135, { "", "", -1 } },
			{ "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
			{ "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
			{ "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
			{ "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
			{ "H_Booniehat_tan", "", 425, { "", "", -1 } },
			{ "H_Hat_blue", "", 310, { "", "", -1 } },
			{ "H_Hat_brown", "", 276, { "", "", -1 } },
			{ "H_Hat_checker", "", 340, { "", "", -1 } },
			{ "H_Hat_grey", "", 280, { "", "", -1 } },
			{ "H_Hat_tan", "", 265, { "", "", -1 } },
			{ "H_Cap_blu", "", 150, { "", "", -1 } },
			{ "H_Cap_grn", "", 150, { "", "", -1 } },
			{ "H_Cap_grn_BI", "", 150, { "", "", -1 } },
			{ "H_Cap_oli", "", 150, { "", "", -1 } },
			{ "H_Cap_red", "", 150, { "", "", -1 } },
			{ "H_Cap_tan", "", 150, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class cop {
		title = "STR_Shops_C_Police";
		license = "";
		side = "cop";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "LOP_U_AA_Fatigue_03", "", 25, { "", "", -1 } },
			{ "LOP_U_AA_Fatigue_03_slv", "", 25, { "", "", -1 } },
			{ "LOP_U_AA_Fatigue_01", "", 550, { "", "", -1 } },
			{ "LOP_U_AA_Fatigue_01_slv", "", 550, { "", "", -1 } },
			{ "LOP_U_AA_Fatigue_02", "", 550, { "", "", -1 } },
			{ "LOP_U_AA_Fatigue_02_slv", "", 550, { "", "", -1 } },
		};

		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_Cap_police", "", 100, {  "", "" , -1  } },
			{ "H_MilCap_blue", "", 100, {  "", "" , -1  } },
			{ "LOP_H_6B27M_ANA", "", 100, {  "", "" , -1  } },
			{ "LOP_H_6B27M_ess_ANA", "", 100, {  "", "" , -1  } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Aviator", "", 100, { "", "", -1 } },
			{ "G_Lady_Mirror", "", 150, { "", "", -1 } },
			{ "G_Lady_Dark", "", 150, { "", "", -1 } },
			{ "G_Lady_Blue", "", 150, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Rangemaster_belt", "", 800, { "", "", -1 } },
			{ "LOP_V_CarrierRig_TAN", "", 1500, { "", "" , -1 } },
			{ "LOP_V_CarrierLite_TAN", "", 1500, {  "", "" , -1  } },
			{ "LOP_V_CarrierRig_ANA", "", 1500, {  "", "" , -1  } },
			{ "LOP_V_CarrierLite_ANA", "", 1500, {  "", "" , -1  } },
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 800, { "", "", -1 } },
			{ "B_FieldPack_cbr", "", 500, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 700, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 2500, { "", "", -1 } },
			{ "B_Carryall_cbr", "", 3500, { "", "", -1 } }
		};
	};

	class dive {
		title = "STR_Shops_C_Diving";
		license = "dive";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_B_Wetsuit", "", 2000, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Diving", "", 500, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_RebreatherB", "", 5000, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};

	class reb {
		title = "STR_Shops_C_Rebel";
		license = "rebel";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
			{ "U_I_G_Story_Protagonist_F", "", 7500, { "", "", -1 } },
			{ "U_I_G_resistanceLeader_F", "", 11500, { "", "", -1 } },
			{ "U_O_SpecopsUniform_ocamo", "", 17500, { "", "", -1 } },
			{ "U_O_PilotCoveralls", "", 15610, { "", "", -1 } },
			{ "U_IG_leader", "Guerilla Leader", 15340, { "", "", -1 } },
			{ "U_O_GhillieSuit", "", 50000, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } },
			{ "G_Balaclava_blk", "", 150, { "", "", -1 } },
			{ "G_Balaclava_combat", "", 150, { "", "", -1 } },
			{ "G_Balaclava_lowprofile", "", 150, { "", "", -1 } },
			{ "G_Balaclava_oli", "", 150, { "", "", -1 } },
			{ "G_Bandanna_aviator", "", 150, { "", "", -1 } },
			{ "G_Bandanna_beast", "", 150, { "", "", -1 } },
			{ "G_Bandanna_blk", "", 150, { "", "", -1 } },
			{ "G_Bandanna_khk", "", 150, { "", "", -1 } },
			{ "G_Bandanna_oli", "", 150, { "", "", -1 } },
			{ "G_Bandanna_shades", "", 150, { "", "", -1 } },
			{ "G_Bandanna_sport", "", 150, { "", "", -1 } },
			{ "G_Bandanna_tan", "", 150, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_TacVest_khk", "", 12500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class opf {
		title = "STR_Shops_C_Opfor";
		license = "";
		side = "opf";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "CUP_U_O_TK_Green", "", 250, {"", "", -1} },
			{ "CUP_U_O_TK_MixedCamo", "", 250, { "", "", -1 } },
			{ "CUP_U_O_TK_Officer", "", 250, { "", "", -1 } },
			{ "CUP_U_O_TK_Ghillie_Top", "", 20000, { "", "", -1 } },
			{ "CUP_U_O_TK_Ghillie", "", 22000, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "CUP_H_TK_Helmet", "", 2500, { "", "", -1 } },
			{ "CUP_H_TK_PilotHelmet", "", 1200, { "", "", -1 } },
			{ "CUP_H_TK_TankerHelmet", "", 650, { "", "", -1 } },
			{ "CUP_H_TK_Lungee", "", 650, { "", "", -1 } },
			{ "CUP_H_TK_Beret", "", 650, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "CUP_V_O_TK_CrewBelt", "", 500, { "", "", -1 } },
			{ "CUP_V_O_TK_OfficerBelt", "", 500, { "", "", -1 } },
			{ "CUP_V_O_TK_OfficerBelt2", "", 500, { "", "", -1 } },
			{ "CUP_V_O_TK_Vest_1", "", 6500, { "", "", -1 } },
			{ "CUP_V_O_TK_Vest_2", "", 4500, { "", "", -1 } }

		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "CUP_B_RPGPack_Khaki", "", 2500, { "", "", -1 }},
			{ "CUP_B_AlicePack_Khaki", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_ocamo", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Carryall_ocamo", "", 4500, { "", "", -1 } },
			{ "B_AssaultPack_ocamo", "", 4500, { "", "", -1 } }
		};
	};

	class ins {
		title = "STR_Shops_C_Insurgent";
		license = "";
		side = "ins";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "LOP_U_AM_Fatigue_01", "", 500, {"", "", -1} },
			{ "LOP_U_AM_Fatigue_02", "", 500, { "", "", -1 } },
			{ "LOP_U_AM_Fatigue_03", "", 500, { "", "", -1 } },
			{ "LOP_U_AM_Fatigue_04", "", 500, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
			{ "H_Shemag_olive", "", 850, { "", "", -1 } },
			{ "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
			{ "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
			{ "H_Bandanna_camo", "", 650, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } },
			{ "G_Shades_Black", "", 25, { "", "", -1 } },
			{ "G_Shades_Blue", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackred", "", 20, { "", "", -1 } },
			{ "G_Sport_Checkered", "", 20, { "", "", -1 } },
			{ "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
			{ "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
			{ "G_Squares", "", 10, { "", "", -1 } },
			{ "G_Lowprofile", "", 30, { "", "", -1 } },
			{ "G_Combat", "", 55, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } },
			{ "V_Chestrig_khk", "", 4500, { "", "", -1 } },
			{ "V_BandollierB_cbr", "", 4500, { "", "", -1 } },
			{ "V_HarnessO_brn", "", 7500, { "", "", -1 } },
			{ "V_TacVest_brn", "", 12500, { "", "", -1 } },
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } },
			{ "B_AssaultPack_cbr", "", 2500, { "", "", -1 }},
			{ "B_Kitbag_mcamo", "", 4500, { "", "", -1 } },
			{ "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
			{ "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
			{ "B_Bergen_sgg", "", 4500, { "", "", -1 } },
			{ "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
			{ "B_Carryall_oli", "", 5000, { "", "", -1 } },
			{ "B_Carryall_khk", "", 5000, { "", "", -1 } }
		};
	};

	class kart {
		title = "STR_Shops_C_Kart";
		license = "";
		side = "civ";
		uniforms[] = {
			{ "NONE", "Remove Uniform", 0, { "", "", -1 } },
			{ "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
			{ "U_C_Driver_2", "", 3500, { "", "", -1 } },
			{ "U_C_Driver_1", "", 3600, { "", "", -1 } },
			{ "U_C_Driver_3", "", 3700, { "", "", -1 } },
			{ "U_C_Driver_4", "", 3700, { "", "", -1 } }
		};
		headgear[] = {
			{ "NONE", "Remove Hat", 0, { "", "", -1 } },
			{ "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
			{ "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
			{ "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
		};
		goggles[] = {
			{ "NONE", "Remove Glasses", 0, { "", "", -1 } }
		};
		vests[] = {
			{ "NONE", "Remove Vest", 0, { "", "", -1 } }
		};
		backpacks[] = {
			{ "NONE", "Remove Backpack", 0, { "", "", -1 } }
		};
	};
};
