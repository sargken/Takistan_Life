class CarShops {
	/*
	 *	ARRAY FORMAT:
	 *		0: STRING (Classname)
	 *		1: SCALAR (Rental Price)
	 *		2: ARRAY (license required)
	 *			Ex: { "driver", "trucking", "rebel" }
	 *		3: ARRAY (This is for limiting items to certain things)
	 *			0: Variable to read from
	 *			1: Variable Value Type (SCALAR / BOOL / EQUAL)
	 *			2: What to compare to (-1 = Check Disabled)
	 */
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
			{ "CUP_C_Datsun", 9500, { "driver" }, { "", "", -1 } },
			{ "CUP_C_Datsun_Covered", 10000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_Datsun_4seat", 10000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_Datsun_Plain", 6000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_Datsun_Tubeframe", 13000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_UAZ_Unarmed_TK_CIV", 15000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_UAZ_Open_TK_CIV", 15000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_LR_Transport_CTK", 30000, { "driver" }, { "", "", -1 } },
			{ "CUP_C_SUV_TK", 45000, { "driver" }, { "", "", -1 } }
				
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , { "driver" }, { "", "", -1 } },
			{ "C_Kart_01_Fuel_F", 15000, { "driver" }, { "", "", -1 } },
			{ "C_Kart_01_Red_F", 15000, { "driver" }, { "", "", -1 } },
			{ "C_Kart_01_Vrana_F", 15000, { "driver" }, { "", "", -1 } }
		};
	};

	class med_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Offroad_01_F", 10000, { "" }, { "", "", -1 } },
			{ "I_Truck_02_medical_F", 25000, { "" }, { "", "", -1 } },
			{ "O_Truck_03_medical_F", 45000, { "" }, { "", "", -1 } },
			{ "B_Truck_01_medical_F", 60000, { "" }, { "", "", -1 } }
		};
	};

	class med_air_hs {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 50000, { "mAir" }, { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", 75000, { "mAir" }, { "", "", -1 } }
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 60000, { "trucking" }, { "", "", -1 } },
			{ "I_Truck_02_transport_F", 75000, { "trucking" }, { "", "", -1 } },
			{ "I_Truck_02_covered_F", 100000, { "trucking" }, { "", "", -1 } },
			{ "B_Truck_01_transport_F", 275000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_transport_F", 200000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_covered_F", 250000, { "trucking" }, { "", "", -1 } },
			{ "B_Truck_01_box_F", 350000, { "trucking" }, { "", "", -1 } },
			{ "O_Truck_03_device_F", 450000, { "trucking" }, { "", "", -1 } }
		};
	};

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_Transport_TKM", 15000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_MG_TKM", 150000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_SPG9_TKM", 325000, { "rebel" }, { "", "", -1 } },
			{ "CUP_O_Ural_ZU23_TKM", 750000, { "rebel" }, { "", "", -1 } }
		};
	};

	class opf_car {
		side = "opf";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
			{ "CUP_O_UAZ_Unarmed_TKA", 7500, { "" }, { "", "", -1 } },
			{ "CUP_O_UAZ_Open_TKA", 7500, { "" }, { "", "", -1 } },
			{ "CUP_O_UAZ_MG_TKA", 29000, { "" }, { "", "", -1 } },
			{ "CUP_O_UAZ_AGS30_TKA", 40000, { "" }, { "", "", -1 } },
			{ "CUP_O_UAZ_SPG9_TKA", 57000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_Transport_TKA", 9000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_MG_TKA", 31000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_SPG9_TKA", 62000, { "" }, { "", "", -1 } },
			{ "CUP_O_Ural_TKA", 37000, { "" }, { "", "", -1 } },
			{ "CUP_O_Ural_Open_TKA", 37000, { "" }, { "", "", -1 } }
		};
	};

	class opf_heavy {
		side = "opf";
		vehicles[] = {
			{ "CUP_O_Ural_Reammo_TKA", 49000, { "" }, { "", "", -1 } },
			{ "CUP_O_Ural_Refuel_TKA", 49000, { "" }, { "", "", -1 } },
			{ "CUP_O_Ural_Repair_TKA", 49000, { "" }, { "", "", -1 } },
			{ "CUP_O_M113_TKA", 63000, { "" }, { "", "", -1 } },
			{ "CUP_O_M113_Med_TKA", 60000, { "" }, { "", "", -1 } },
			{ "CUP_O_BRDM2_HQ_TKA", 64000, { "" }, { "", "", -1 } },
			{ "CUP_O_BRDM2_TKA", 72000, { "" }, { "", "", -1 } },
			{ "CUP_O_BRDM2_ATGM_TKA", 87000, { "" }, { "", "", -1 } },
			{ "CUP_O_BTR60_TK", 75000, { "" }, { "", "", -1 } },
			{ "CUP_O_BMP1_TKA", 90000, { "" }, { "", "", -1 } },
			{ "CUP_O_BMP1P_TKA", 92000, { "" }, { "", "", -1 } },
			{ "CUP_O_BMP2_TKA", 98000, { "" }, { "", "", -1 } },
			{ "CUP_O_BMP_HQ_TKA", 96000, { "" }, { "", "", -1 } },
			{ "CUP_O_BMP2_ZU_TKA", 97000, { "" }, { "", "", -1 } },
			{ "CUP_O_ZSU23_TK", 190000, { "" }, { "", "", -1 } },
			{ "CUP_O_T55_TK", 250000, { "" }, { "", "", -1 } },
			{ "CUP_O_T72_TKA", 325000, { "" }, { "", "", -1 } }
		};	
	};

	class opf_air {
		side = "opf";
		vehicles[] = {
			{ "CUP_O_Mi17_TK", 97000, { "" }, { "", "", -1 } },
			{ "CUP_O_MI6A_TKA", 140000, { "" }, { "", "", -1 } },
			{ "CUP_O_MI6T_TKA", 140000, { "" }, { "", "", -1 } },
			{ "CUP_O_Mi24_D_TK", 725000, { "" }, { "", "", -1 } },
			{ "CUP_O_Su25_TKA", 2300000, { "" }, { "", "", -1 } }
		};
	};

	class ins_car {
		side = "ins";
		vehicles[] = {
			{ "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_Transport_TKM", 8000, { "" }, { "", "", -1 } },
			{ "CUP_I_Datsun_PK_TK", 15000, { "" }, { "", "", -1 } },
			{ "CUP_I_Datsun_PK_TK_Random", 20000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_MG_TKM", 65000, { "" }, { "", "", -1 } },
			{ "CUP_O_LR_SPG9_TKM", 90000, { "" }, { "", "", -1 } },
			{ "CUP_I_Ural_ZU23_TK_Gue", 110000, { "" }, { "", "", -1 } }
		};
	};

	class ins_heavy {
		side = "ins";
		vehicles[] = {
			{ "CUP_I_BRDM2_HQ_TK_Gue", 80000, { "" }, { "", "", -1 } },
			{ "CUP_I_BRDM2_TK_Gue", 160000, { "" }, { "", "", -1 } },
			{ "CUP_I_BRDM2_ATGM_TK_Gue", 390000, { "" }, { "", "", -1 } },
			{ "CUP_I_BMP1_TK_GUE", 480000, { "" }, { "", "", -1 } },
			{ "CUP_I_T55_TK_GUE", 800000, { "" }, { "", "", -1 } }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "CUP_B_M1030", 2500, { "" }, { "", "", -1 } },
			{ "B_Quadbike_01_F", 3200, { "" }, { "", "", -1 } },
			{ "CUP_C_SUV_TK", 22000, { "" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_Transport_USA", 35000, { "response" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_Unarmed_USA", 45000, { "response" }, { "", "", -1 } }
				
		};
	};

	class sobr_car {
		side = "cop";
		vehicles[] = {
			{ "CUP_B_HMMWV_DSHKM_GPK_ACR", 55000, { "response" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_AGS_GPK_ACR", 60000, { "response" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_M2_GPK_USA", 50000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_SOV_USA", 105000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_TOW_USA", 83000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_MK19_USA", 90000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_Crows_MK19_USA", 140000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_Crows_M2_USA", 135000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_HMMWV_Avenger_USA", 175000, { "sobr" }, { "", "", -1 } },
			{ "CUP_B_M2Bradley_USA_D", 350000, { "sobr" }, { "", "", -1 } }
		};
	};

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 253000, { "pilot" }, { "", "", -1 } },
			{ "O_Heli_Light_02_unarmed_F", 750000, { "pilot" }, { "", "", -1 } }
		};
	};

	class cop_heli {
		side = "cop";
		vehicles[] = {
			{ "MELB_MH6M", 75000, { "cAir" }, { "", "", -1 } },
			{ "MELB_H6M", 68500, { "cAir" }, { "", "", -1 } },
			{ "MELB_AH6M_L", 145000, { "cAir" }, { "", "", -1 } },
			{ "MELB_AH6M_M", 210000, { "cAir" }, { "", "", -1 } },
			{ "MELB_AH6M_H", 270000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_UH1Y_UNA_USMC", 110000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_UH1Y_GUNSHIP_USMC", 230000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_Mi171Sh_ACR", 290000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_Mi171Sh_Unarmed_ACR", 128000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_UH60M_US", 190000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_UH60M_Unarmed_FFV_US", 140000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_MH60S_USMC", 165000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_MH60S_FFV_USMC", 165000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_UH60M_Unarmed_FFV_MEV_US", 120000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_AH1Z", 725000, { "cAir" }, { "", "", -1 } },
			{ "CUP_B_AH64D_USA", 750000, { "cAir" }, { "", "", -1 } }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, { "cAir" }, { "", "", -1 } },
			{ "B_Heli_Transport_01_F", 200000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, { "" }, { "life_coplevel", "SCALAR", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", -1 } },
			{ "C_Boat_Civil_01_police_F", 20000, { "cg" }, { "", "", -1 } },
			{ "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "", "", -1 } },
			{ "B_SDV_01_F", 100000, { "cg" }, { "", "", -1 } }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, { "boat" }, { "", "", -1 } },
			{ "C_Boat_Civil_01_F", 22000, { "boat" }, { "", "", -1 } },
			{ "B_SDV_01_F", 150000, { "boat" }, { "", "", -1 } }
		};
	};
};

class LifeCfgVehicles {
 /*
	*	Vehicle Configs (Contains textures and other stuff)
	*
	*	storageFee (Getting vehicles out of garage) format:
	*		INDEX 0: Civilian Price
	*		INDEX 1: Cop Price
	*		INDEX 2: Independent Price
	*		INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
	*
	*	Textures config follows { Texture Name, side, {texture(s)path}}
	*	Texture(s)path follows this format:
	*		INDEX 0: Texture Layer 0
	*		INDEX 1: Texture Layer 1
	*		INDEX 2: Texture Layer 2
	*		etc etc etc
	*/

	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 5000, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 10000, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 25000, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
		vItemSpace = 45;
		storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 950, 350, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		textures[] = {};
	};

	class CUP_B_M1030 {
		vItemSpace = 20;
		storageFee[] = { 0, 100, 0, 0 };
		garageSell[] = { 0, 1250, 0, 0 };
		insurance = 2500;
		chopShop = 1300;
		textures[] = {};
	};

	class CUP_C_SUV_TK {
		vItemSpace = 200;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 13000, 13000, 15000, 15000 };
		insurance = 7500;
		chopShop = 18000;
		textures[] = {};
	};

	class CUP_O_LR_Transport_TKM {
		vItemSpace = 200;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 6000, 6000, 3250, 6000 };
		insurance = 2300;
		chopShop = 7000;
		textures[] = {};
	};
	
	class CUP_O_LR_MG_TKM {
		vItemSpace = 200;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 68000, 68000, 68000, 68000 };
		insurance = 34000;
		chopShop = 90000;
		textures[] = {};
	};
	
	class CUP_O_LR_SPG9_TKM {
		vItemSpace = 200;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 189000, 189000, 30000, 189000 };
		insurance = 72000;
		chopShop = 225000;
		textures[] = {};
	};
	
	class CUP_O_Ural_ZU23_TKM {
		vItemSpace = 200;
		storageFee[] = { 6000, 6000, 6000, 6000 };
		garageSell[] = { 485000, 485000, 485000, 485000 };
		insurance = 92000;
		chopShop = 688000;
		textures[] = {};
	};
	
	class CUP_O_UAZ_Unarmed_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 3000, 3000, 3000, 3000 };
		insurance = 2400;
		chopShop = 5000;
		textures[] = {};
	};
	
	class CUP_O_UAZ_Open_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 3000, 3000, 3000, 3000 };
		insurance = 2400;
		chopShop = 5000;
		textures[] = {};
	};
	
	class CUP_O_UAZ_MG_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 16000, 16000, 16000, 16000 };
		insurance = 9000;
		chopShop = 13000;
		textures[] = {};
	};
	
	class CUP_O_UAZ_AGS30_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 25000, 25000, 25000, 25000 };
		insurance = 13000;
		chopShop = 23000;
		textures[] = {};
	};
	
	class CUP_O_UAZ_SPG9_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 37000, 37000, 37000, 37000 };
		insurance = 24000;
		chopShop = 39000;
		textures[] = {};
	};
	
	class CUP_O_LR_Transport_TKA {
		vItemSpace = 250;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 3000, 3000, 3000, 3000 };
		insurance = 1000;
		chopShop = 4000;
		textures[] = {};
	};
	
	class CUP_O_LR_MG_TKA {
		vItemSpace = 250;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 19000, 19000, 19000, 19000 };
		insurance = 13000;
		chopShop = 23000;
		textures[] = {};
	};
	
	class CUP_O_LR_SPG9_TKA {
		vItemSpace = 250;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 31000, 31000, 31000, 31000 };
		insurance = 13000;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_Ural_TKA {
		vItemSpace = 400;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 16000, 16000,16000, 16000 };
		insurance = 4000;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_Ural_Open_TKA {
		vItemSpace = 400;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 16000, 16000,16000, 16000 };
		insurance = 4000;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_Ural_Reammo_TKA {
		vItemSpace = 400;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 16000, 16000,16000, 16000 };
		insurance = 4000;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_Ural_Refuel_TKA {
		vItemSpace = 400;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 16000, 16000,16000, 16000 };
		insurance = 4000;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_Ural_Repair_TKA {
		vItemSpace = 400;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 16000, 16000,16000, 16000 };
		insurance = 4000;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_M113_TKA {
		vItemSpace = 275;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 29000, 29000,29000, 29000 };
		insurance = 7200;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_M113_Med_TKA {
		vItemSpace = 275;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 29000, 29000,29000, 29000 };
		insurance = 7200;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_BRDM2_HQ_TKA {
		vItemSpace = 75;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 29000, 29000,29000, 29000 };
		insurance = 7200;
		chopShop = 34000;
		textures[] = {};
	};
	
	class CUP_O_BRDM2_TKA {
		vItemSpace = 75;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 48000, 48000,48000, 48000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BRDM2_ATGM_TKA {
		vItemSpace = 75;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 54000, 54000,54000, 54000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BTR60_TK {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 44000, 44000,44000, 44000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BMP1_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 59000, 59000,59000, 59000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BMP1P_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 59000, 59000,59000, 59000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BMP2_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 59000, 59000,59000, 59000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BMP_HQ_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 59000, 59000,59000, 59000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_BMP2_ZU_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 59000, 59000,59000, 59000 };
		insurance = 7200;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_ZSU23_TK {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 120000, 120000,120000, 120000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_T55_TK {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 190000, 190000, 190000, 190000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_T72_TKA {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 250000, 250000, 250000, 250000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_Mi17_TK {
		vItemSpace = 300;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 50000, 50000, 50000, 50000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_MI6A_TKA {
		vItemSpace = 500;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 78000, 78000, 78000, 78000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_MI6T_TKA {
		vItemSpace = 500;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 78000, 78000, 78000, 78000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_Mi24_D_TK {
		vItemSpace = 500;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 475000, 475000, 475000, 475000 };
		insurance = 60000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_O_Su25_TKA {
		vItemSpace = 0;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 1700000, 1700000, 1700000, 1700000 };
		insurance = 500000;
		chopShop = 48000;
		textures[] = {};
	};
	
	class CUP_I_Datsun_PK_TK {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 7000, 7000, 7000, 7000 };
		insurance = 4000;
		chopShop = 7000;
		textures[] = {};
	};
	
	class CUP_I_Datsun_PK_TK_Random {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 14000, 14000, 14000, 14000 };
		insurance = 4000;
		chopShop = 7000;
		textures[] = {};
	};
	
	class CUP_I_Ural_ZU23_TK_Gue {
		vItemSpace = 200;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 80000, 80000, 80000, 80000 };
		insurance = 4000;
		chopShop = 80000;
		textures[] = {};
	};
	
	class CUP_I_BRDM2_HQ_TK_Gue {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 40000, 40000, 40000, 40000 };
		insurance = 4000;
		chopShop = 80000;
		textures[] = {};
	};
	
	class CUP_I_BRDM2_TK_Gue {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 100000, 100000, 100000, 100000 };
		insurance = 4000;
		chopShop = 80000;
		textures[] = {};
	};
	
	class CUP_I_BRDM2_ATGM_TK_Gue {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 220000, 220000, 220000, 220000 };
		insurance = 80000;
		chopShop = 80000;
		textures[] = {};
	};
	
	class CUP_I_BMP1_TK_GUE {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 300000, 300000, 300000, 300000 };
		insurance = 80000;
		chopShop = 80000;
		textures[] = {};
	};
	
	class CUP_I_T55_TK_GUE {
		vItemSpace = 150;
		storageFee[] = { 250, 250, 250, 250 };
		garageSell[] = { 325000, 325000, 325000, 325000 };
		insurance = 125000;
		chopShop = 80000;
		textures[] = {};
	};
	
	class CUP_B_HMMWV_Transport_USA {
		vItemSpace = 200;
		storageFee[] = { 0, 300, 0, 0 };
		garageSell[] = { 0, 19000, 0, 0 };
		insurance = 16000;
		chopShop = 23000;
		textures[] = {};
	};

	class CUP_B_HMMWV_Unarmed_USA : CUP_B_HMMWV_Transport_USA {
		storageFee[] = { 0, 300, 0, 0 };
		garageSell[] = { 0, 20000, 0, 0 };
		insurance = 16000;
		chopShop = 29000;
	};

	class CUP_B_HMMWV_DSHKM_GPK_ACR {
		vItemSpace = 50;
		storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 0, 28000, 0, 0 };
		insurance = 24000;
		chopShop = 23000;
		textures[] = {};
	};

	class CUP_B_HMMWV_AGS_GPK_ACR : CUP_B_HMMWV_DSHKM_GPK_ACR {
		storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 0, 28000, 0, 0 };
		insurance = 34000;
		chopShop = 46000;
	};

	class CUP_B_HMMWV_M2_GPK_USA : CUP_B_HMMWV_DSHKM_GPK_ACR {
		storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 0, 23000, 0, 0 };
		insurance = 27000;
		chopShop = 31000;
	};

	class CUP_B_HMMWV_SOV_USA {
		vItemSpace = 100;
		storageFee[] = { 0, 1000, 0, 0 };
		garageSell[] = { 0, 62000, 0, 0 };
		insurance = 32000;
		chopShop = 76000;
		textures[] = {};
	};

	class CUP_B_HMMWV_TOW_USA {
		vItemSpace = 50;
		storageFee[] = { 0, 1250, 0, 0 };
		garageSell[] = { 0, 48000, 0, 0 };
		insurance = 27000;
		chopShop = 58000;
		textures[] = {};
	};

	class CUP_B_HMMWV_MK19_USA {
		vItemSpace = 75;
		storageFee[] = { 0, 1250, 0, 0 };
		garageSell[] = { 0, 57000, 0, 0 };
		insurance = 31000;
		chopShop = 61000;
		textures[] = {};
	};

	class CUP_B_HMMWV_Crows_MK19_USA {
		vItemSpace = 50;
		storageFee[] = { 0, 1250, 0, 0 };
		garageSell[] = { 0, 76000, 0, 0 };
		insurance = 47000;
		chopShop = 88000;
		textures[] = {};
	};

	class CUP_B_HMMWV_Crows_M2_USA {
		vItemSpace = 50;
		storageFee[] = { 0, 1250, 0, 0 };
		garageSell[] = { 0, 74000, 0, 0 };
		insurance = 45000;
		chopShop = 86000;
		textures[] = {};
	};

	class CUP_B_HMMWV_Avenger_USA {
		vItemSpace = 25;
		storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 0, 110000, 0, 0 };
		insurance = 76000;
		chopShop = 92000;
		textures[] = {};
	};

	class CUP_B_M2Bradley_USA_D {
		vItemSpace = 50;
		storageFee[] = { 0, 5000, 0, 0 };
		garageSell[] = { 0, 230000, 0, 0 };
		insurance = 120000;
		chopShop = 260000;
		textures[] = {};
	};

	class MELB_MH6M {
		vItemSpace = 100;
		storageFee[] = { 0, 1200, 0, 0 };
		garageSell[] = { 0, 41000, 0, 0 };
		insurance = 22000;
		chopShop = 45000;
		textures[] = {};
	};

	class MELB_H6M {
		vItemSpace = 150;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 34000, 0, 0 };
		insurance = 18000;
		chopShop = 30000;
		textures[] = {};
	};

	class MELB_AH6M_L {
		vItemSpace = 150;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 68000, 0, 0 };
		insurance = 34000;
		chopShop = 70000;
		textures[] = {};
	};
	
	class MELB_AH6M_M {
		vItemSpace = 150;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 100000, 0, 0 };
		insurance = 67000;
		chopShop = 100000;
		textures[] = {};
	};
	
	class MELB_AH6M_H {
		vItemSpace = 150;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 130000, 0, 0 };
		insurance = 74000;
		chopShop = 120000;
		textures[] = {};
	};
	
	class CUP_B_UH1Y_UNA_USMC {
		vItemSpace = 200;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 49000, 0, 0 };
		insurance = 30000;
		chopShop = 70000;
		textures[] = {};
	};
	
	class CUP_B_UH1Y_GUNSHIP_USMC {
		vItemSpace = 150;
		storageFee[] = { 0, 1200, 0, 0 };
		garageSell[] = { 0, 99000, 0, 0 };
		insurance = 42000;
		chopShop = 150000;
		textures[] = {};
	};
	
	class CUP_B_Mi171Sh_ACR {
		vItemSpace = 300;
		storageFee[] = { 0, 1200, 0, 0 };
		garageSell[] = { 0, 129000, 0, 0 };
		insurance = 64000;
		chopShop = 140000;
		textures[] = {};
	};
	
	class CUP_B_Mi171Sh_Unarmed_ACR {
		vItemSpace = 300;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 62000, 0, 0 };
		insurance = 34000;
		chopShop = 72000;
		textures[] = {};
	};
	
	class CUP_B_UH60M_US {
		vItemSpace = 250;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 97000, 0, 0 };
		insurance = 54000;
		chopShop = 112000;
		textures[] = {};
	};
	
	class CUP_B_UH60M_Unarmed_FFV_US {
		vItemSpace = 250;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 82000, 0, 0 };
		insurance = 48000;
		chopShop = 96000;
		textures[] = {};
	};
	
	class CUP_B_MH60S_USMC {
		vItemSpace = 250;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 95000, 0, 0 };
		insurance = 51000;
		chopShop = 98000;
		textures[] = {};
	};
	
	class CUP_B_MH60S_FFV_USMC : CUP_B_MH60S_USMC {};
	
	class CUP_B_UH60M_Unarmed_FFV_MEV_US {
		vItemSpace = 300;
		storageFee[] = { 0, 800, 0, 0 };
		garageSell[] = { 0, 87000, 0, 0 };
		insurance = 46000;
		chopShop = 89000;
		textures[] = {};
	};
	
	class CUP_B_AH1Z {
		vItemSpace = 0;
		storageFee[] = { 0, 3400, 0, 0 };
		garageSell[] = { 0, 380000, 0, 0 };
		insurance = 89000;
		chopShop = 240000;
		textures[] = {};
	};
	
	class CUP_B_AH64D_USA {
		vItemSpace = 0;
		storageFee[] = { 0, 3400, 0, 0 };
		garageSell[] = { 0, 420000, 0, 0 };
		insurance = 96000;
		chopShop = 240000;
		textures[] = {};
	};
	
	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class CUP_C_Datsun {
		vItemSpace = 175;
		storageFee[] = { 25, 0, 0, 0 };
		garageSell[] = { 6000, 0, 0, 0 };
		insurance = 1000;
		chopShop = 6200;
		textures[] = { };
	};
	
	class CUP_C_Datsun_Covered : CUP_C_Datsun {};
	class CUP_C_Datsun_4seat : CUP_C_Datsun {};
	class CUP_C_Datsun_Plain : CUP_C_Datsun {};
	class CUP_C_Datsun_Tubeframe : CUP_C_Datsun {};
	
	class CUP_C_UAZ_Unarmed_TK_CIV {
		vItemSpace = 225;
		storageFee[] = { 25, 0, 0, 0 };
		garageSell[] = { 9000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 9800;
		textures[] = { };
	};
	
	class CUP_C_UAZ_Open_TK_CIV : CUP_C_UAZ_Unarmed_TK_CIV {};
	
	class CUP_C_LR_Transport_CTK {
		vItemSpace = 300;
		storageFee[] = { 25, 0, 0, 0 };
		garageSell[] = { 21000, 0, 0, 0 };
		insurance = 6000;
		chopShop = 28000;
		textures[] = { };
	};
	
	class O_Boat_Armed_01_hmg_F {
		vItemSpace = 175;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 21000, 21000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Boat_Armed_01_minigun_F {
		vItemSpace = 175;
		storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class I_Boat_Armed_01_minigun_F {
		vItemSpace = 175;
		storageFee[] = { 1000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_G_Boat_Transport_01_F {
		vItemSpace = 45;
		storageFee[] = { 1000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Boat_Transport_01_F {
		vItemSpace = 45;
		storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class O_Truck_03_transport_F {
		vItemSpace = 285;
		storageFee[] = { 1000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class O_Truck_03_device_F {
		vItemSpace = 350;
		storageFee[] = { 95000, 0, 0, 0 };
		garageSell[] = { 185000, 0, 0, 0 };
		insurance = 25000;
		chopShop = 125000;
		textures[] = { };
	};

	class Land_CargoBox_V1_F : Default {
		vItemSpace = 5000;
	};

	class Box_IND_Grenades_F : Default {
		vItemSpace = 350;
	};

	class B_supplyCrate_F {
		vItemSpace = 700;
	};

	class B_G_Offroad_01_F {
		vItemSpace = 65;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class C_Boat_Civil_01_F {
		vItemSpace = 85;
		storageFee[] = { 4500, 2500, 0, 0 };
		garageSell[] = { 6800, 3500, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class C_Boat_Civil_01_police_F {
		vItemSpace = 85;
		storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class C_Boat_Civil_01_rescue_F {
		vItemSpace = 85;
		storageFee[] = { 1000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Truck_01_box_F {
		vItemSpace = 450;
		storageFee[] = { 35000, 0, 0, 0 };
		garageSell[] = { 150000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class B_Truck_01_transport_F {
		vItemSpace = 325;
		storageFee[] = { 25650, 0, 0, 0 };
		garageSell[] = { 135000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class O_MRAP_02_F {
		vItemSpace = 60;
		storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class I_MRAP_03_F {
		vItemSpace = 58;
		storageFee[] = { 1000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = { };
	};

	class C_Offroad_01_F {
		vItemSpace = 65;
		storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 6500, 2500, 0, 0 };
		insurance = 2500;
		chopShop = 2500;
		textures[] = {
			{ "Red", "civ", {
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
			} },
			{ "Yellow", "civ", {
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
			} },
			{ "White", "civ", {
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
			} },
			{ "Blue", "civ", {
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
			} },
			{ "Dark Red", "civ", {
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
			} },
			{ "Blue / White", "civ", {
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
					"\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
			} },
					{ "Taxi", "civ", {
					"#(argb,8,8,3)color(0.6,0.3,0.01,1)"
			} },
			{ "Fed", "fed", {
					"#(ai,64,64,1)Fresnel(0.3,3)"
			} },
			{ "Police", "cop", {
					"#(ai,64,64,1)Fresnel(1.3,7)"
			} }
		};
	};

	class C_Kart_01_Blu_F {
		vItemSpace = 20;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 3500, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
		vItemSpace = 45;
		storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
		insurance = 5500;
		chopShop = 4500;
		textures[] = {
			{ "Red", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
			} },
			{ "Dark Blue", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
			} },
			{ "Orange", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
			} },
			{ "Black / White", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
			} },
			{ "Beige", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
			} },
			{ "Green", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
			} },
			{ "Police", "cop", {
					"#(ai,64,64,1)Fresnel(1.3,7)"
			} }
		};
	};

	class B_Quadbike_01_F {
		vItemSpace = 25;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 950, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "Brown", "cop", {
					"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
			} },
			{ "Digi Desert", "reb", {
					"\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
			} },
			{ "Black", "civ", {
					"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
			} },
			{ "Blue", "civ", {
					"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
			} },
			{ "Red", "civ", {
					"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
			} },
			{ "White", "civ", {
					"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
			} },
			{ "Digi Green", "civ", {
					"\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
			} },
			{ "Hunter Camo", "civ", {
					"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
			} },
					{ "Rebel Camo", "reb", {
					"\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
			} }
		};
	};
	
	class I_Truck_02_covered_F {
		vItemSpace = 250;
		storageFee[] = { 14500, 0, 0, 0 };
		garageSell[] = { 62000, 0, 0, 0 };
		insurance = 6500;
		chopShop = 20000;
		textures[] = {
					{ "Orange", "civ", {
					"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
					"\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
			} },
					{ "Black", "fed", {
					"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
			} }
		};
	};

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
		vItemSpace = 200;
		storageFee[] = { 12000, 0, 0, 0 };
		arageSell[] = { 49800, 3500, 0, 0 };
	};

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 25000, 0, 0, 0 };
		garageSell[] = { 65000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
		vItemSpace = 40;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 4500, 3500, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
					{ "Beige", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
			} },
					{ "Green", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
			} },
					{ "Blue", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
			} },
					{ "Dark Blue", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
			} },
					{ "Yellow", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
			} },
					{ "White", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
			} },
					{ "Grey", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
			} },
					{ "Black", "civ", {
					"\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
			} }
		};
	};

	class C_SUV_01_F {
		vItemSpace = 50;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 15000, 7500, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "Dark Red", "civ", {
					"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
			} },
			{ "Black", "cop", {
					"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
			} },
			{ "Silver", "civ", {
					"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
			} },
				{ "Orange", "civ", {
					"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
			} },
			{ "Cop", "cop", {
					"#(ai,64,64,1)Fresnel(1.3,7)"
			} }
		  };
	};

	class C_Van_01_transport_F {
		vItemSpace = 100;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 25000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "White", "civ", {
					"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
			} },
			{ "Red", "civ", {
					"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
			} }
		};
	};

	class C_Van_01_box_F {
		vItemSpace = 150;
		storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 35000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "White", "civ", {
					"\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
			} },
			{ "Red", "civ", {
					"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
			} }
		};
	};

	class B_MRAP_01_F {
		vItemSpace = 65;
		storageFee[] = { 0, 7500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "Regular", "cop", {
					"\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
			} },
			{ "Black", "fed", {
					"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
			} }
		};
	};

	class B_Heli_Light_01_F {
		vItemSpace = 90;
		storageFee[] = { 45000, 19500, 0, 0 };
		garageSell[] = { 57000, 35000, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "Sheriff", "cop", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
			} },
			{ "Black", "fed", {
					"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
			} },
			{ "Civ Blue", "civ", {
					"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
			} },
			{ "Civ Red", "civ", {
					"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
			} },
			{ "Digi Green", "donate", {
					"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
			} },
			{ "Blueline", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
			} },
			{ "Elliptical", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
			} },
			{ "Furious", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
			} },
			{ "Jeans Blue", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
			} },
			{ "Speedy Redline", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
			} },
			{ "Sunset", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
			} },
			{ "Vrana", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
			} },
			{ "Waves Blue", "civ", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
			} },
			{ "Rebel Digital", "reb", {
					"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
			} },
			{ "EMS White", "med", {
					"#(argb,8,8,3)color(1,1,1,0.8)"
			} }
		};
	};

	class O_Heli_Light_02_unarmed_F {
		vItemSpace = 210;
		storageFee[] = { 55000, 0, 22000, 0 };
		garageSell[] = { 72500, 0, 35000, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "Black", "fed", {
					"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
			} },
			{ "White / Blue", "civ", {
					"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
			} },
			{ "Digi Green", "donate", {
					"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
			} },
			{ "Desert Digi", "reb", {
					"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
			} },
					{ "EMS White", "med", {
					"#(argb,8,8,3)color(1,1,1,0.8)"
			} }
		};
	};

	class I_Heli_Transport_02_F {
		vItemSpace = 375;
		storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 125000, 0, 0, 0 };
		insurance = 2500;
		chopShop = 5000;
		textures[] = {
			{ "Ion", "civ", {
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
			} },
			{ "Dahoman", "civ", {
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
					"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
			} }
		};
	};
};
