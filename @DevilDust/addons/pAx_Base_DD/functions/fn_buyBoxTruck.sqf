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



 _unit addAction [ "release", "[_this select 0, arrow] call pAx_fnc_spawnBoxTruck;(_this select 0) removeAction (_this select 2)"];
