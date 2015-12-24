/*
	File: fn_initCiv.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the civilian.
*/
private["_spawnPos"];
civ_spawn_1 = getMarkerPos  "civ_spawn_1";
civ_spawn_2 = getMarkerPos  "civ_spawn_2";
civ_spawn_3 = getMarkerPos  "civ_spawn_3";
civ_spawn_4 = getMarkerPos  "civ_spawn_4";
waitUntil {!(isNull (findDisplay 46))};

if(life_is_arrested) then {
	life_is_arrested = false;
	[player,true] spawn life_fnc_jail;
} else {
	[] call life_fnc_spawnMenu;
	waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
};
player addRating 9999999;
[] call life_fnc_playerSkins;