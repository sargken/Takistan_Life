/*
	File: fn_lower.sqf
	Author: Ken
	
	Description:
	Raises the checkpoint gate.
*/

_this = _this select 3;
_object  = _this select 0;

_object setPosATL [(getPosATL _object select 0),(getPosATL _object select 1),0];