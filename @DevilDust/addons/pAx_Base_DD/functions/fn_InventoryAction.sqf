
_index = lbCurSel 1500;
_unit = vehicle player;
_pos = (getPosATL player);

if (enableButton == 5) then {
_null = [_unit, _pos] ExecVM "\pAx_Base_DD\client\BuildingLab.sqf";
} else {
    hint "You don't have everything";
};
if (_index == 0) then {
_null = ExecVM "\pAx_Base_DD\client\Cooking.sqf";
};

if (_index == 1) then {



hint "Money Dropped";

};






