/*
	File: fn_insMarkers.sqf
	Author: Ken
	
	Description:
	Marks other Insurgents on map.
*/
private["_markers","_units"];
_markers = [];
_units = [];

sleep 0.25;
if(visibleMap) then {
	{if(side _x == east) then {_units pushBack _x;}} foreach playableUnits; //Fetch list of cops / blufor
	
	//Loop through and create markers.
	{
		_marker = createMarkerLocal [format["%1_marker",_x],visiblePosition _x];
		_marker setMarkerColorLocal "ColorRed";
		_marker setMarkerTypeLocal "Mil_dot";
		_marker setMarkerTextLocal format["%1", _x getVariable["realname",name _x]];
        
		_markers pushBack [_marker,_x];
	} foreach _units;
	
	while {visibleMap} do {
		{
			private["_marker","_unit"];
			_marker = _x select 0;
			_unit = _x select 1;
			if(!isNil "_unit") then {
				if(!isNull _unit) then {
					_marker setMarkerPosLocal (visiblePosition _unit);
				};
			};
		} foreach _markers;
		if(!visibleMap) exitWith {};
		sleep 0.02;
	};

	{deleteMarkerLocal (_x select 0);} foreach _markers;
	_markers = [];
	_units = [];
};