/*
	File: fn_insLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the medic out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "CUP_U_O_TK_Green";
player addVest "CUP_V_O_TK_Vest_1";

player addWeapon "CUP_hgun_Makarov";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";
player addMagazine "CUP_8Rnd_9x18_Makarov_M";

player addItem "ItemMap";
player assignItem "ItemMap";
player addItem "ItemCompass";
player assignItem "ItemCompass";
player addItem "ItemWatch";
player assignItem "ItemWatch";
player addItem "ItemGPS";
player assignItem "ItemGPS";

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;