////////////////////////////////////////////////////////////////////
//Author: pAxton
//  Building lab for DevilDust
//  BuildingLab.sqf
////////////////////////////////////////////////////////////////////


_unit = _this select 0;
//_pos = _this select 1;
if (isDedicated) exitWith{};
if (!local _unit) exitWith {};
_enableButton = 0;
_readyToMake = [0,0,0,0,0];

_inventoryItems = ['mhl_MoronSalt_DevilDust','mhl_StarterFluid_DevilDust','mhl_Acetone_DevilDust','mhl_BatteryPackage_DevilDust', 'mhl_Sudafed_DevilDust'];
    for [{_i = 0}, {_i < 6}, { _i = _i + 1}] do {
        if ((_inventoryItems select _i) in (items _unit + assignedItems _unit)) then {
            _readyToMake set [_i, 1];
            _item = str (_inventoryItems select _i);


        } else {
                _readyToMake set [_i, 0];
        }
    };

    for [{_i = 0}, {_i < 6}, { _i = _i +1}] do {
        if (_readyToMake select _i == 1) then {
            _enableButton = _enableButton + 1;
        } else {
           _enableButton = _enableButton - 1;
        };
    };
    if (_enableButton == 5) then
        {

_lab = "pAx_Lab_DevilDust_F" createVehicle (position vehicle _unit);
_lab attachTo [_unit, [0, 0, 0] ];
_lab hideObject true;


detach _lab;
createDialog "pAx_Lab_Dialog";
player playMove "Acts_carFixingWheel";
posLab = getPosATL _lab;
sleep 10;
_lab hideObject false;
_lab addAction ["Cook", "\pAx_Base_DD\client\Cooking.sqf", posLab];

} else {
        hint "You don't everything you need";
};
posLab = nil;