/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		_return = [
			["cop_spawn_1","Rasman HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
	
	case civilian:
	{
		_return = [
			["civ_spawn_1","Bastam","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Nagara","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Feruz Abad","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Loy Manara","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
		
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["ins_spawn_1","Insurgent Training Camp","\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"]
		];
	};
    
    case east: {
		_return = [
			["opf_spawn_1","Opfor Headquarters","\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"]
		];
	};
};

_return;