////////////////////////////////////////////////////////////////////
//Author: pAxton
//  Building lab for DevilDust
//  BuildingLab.sqf
////////////////////////////////////////////////////////////////////


_unit = _this select 0;
_pos = _this select 1;
if (isDedicated) exitWith{};
if (!local _unit) exitWith {};
_lab = "pAx_Lab_DevilDust_F" createVehicle (position vehicle player);
_lab attachTo [_unit, [0, 0, 1] ];
_lab hideObject true;


detach _lab;
createDialog "pAx_Lab_Dialog";
player playMove "Acts_carFixingWheel";
sleep 10;
_lab hideObject false;
_lab addAction ["Cook", "\pAx_Base_DD\client\Cooking.sqf"];
