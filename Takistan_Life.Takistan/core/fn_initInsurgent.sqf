#include "..\script_macros.hpp"
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the Insurgents..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

//if((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) == 0)) exitWith {
//	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
//	sleep 35;
//};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] call life_fnc_playerSkins;