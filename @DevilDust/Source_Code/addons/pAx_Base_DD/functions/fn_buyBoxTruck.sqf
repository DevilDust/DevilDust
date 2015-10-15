//File:  function/fn_buyBoxTruck.sqf
//
//
//Project DevilDust
//
//Author pAxton  - created 4/12/2015
//_____________________________
//
//Description -- Buy Box Truck
//
//______________________________
private ["_unit", "_pos"];
 if (isDedicated) exitWith{};
 if (!local _unit) exitWith{};
_unit = _this select 0;
_pos = getPos _unit;
arrow =  "sign_arrow_green_f" createVehicle _pos;

arrow attachto [_unit, [0, 3, 1] ];
 _unit addAction [ "release", "[_this select 0, arrow] call pAx_fnc_spawnBoxTruck;(_this select 0) removeAction (_this select 2); arrow = nil;"];
