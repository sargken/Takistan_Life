#include "..\..\script_macros.hpp"
/*
	File: fn_insLoadout.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Loads the insurgent out with the default gear.
*/
private["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_clothings = ["LOP_U_AM_Fatigue_01","LOP_U_AM_Fatigue_02","LOP_U_AM_Fatigue_03","LOP_U_AM_Fatigue_04"];
player addUniform (_clothings select (floor(random (count _clothings))));

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