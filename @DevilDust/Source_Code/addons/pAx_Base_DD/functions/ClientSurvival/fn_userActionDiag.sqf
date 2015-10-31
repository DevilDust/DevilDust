disableSerialization;

if (isNull (findDisplay 9002)) then {

createDialog "pAx_UserAction_Dialog";
waitUntil { !(isNull (findDisplay 9002)) };


_DrinkButton    = ((findDisplay 9002) displayCtrl 3600);
_EatButton      = ((findDisplay 9002) displayCtrl 3601);
_BuildLabButton = ((findDisplay 9002) displayCtrl 3602);
_DrugsButton    = ((findDisplay 9002) displayCtrl 3603);

_UpVehButton    = ((findDisplay 9002) displayCtrl 3604);
_CamSetButton   = ((findDisplay 9002) displayCtrl 3605);
//_FuelButton   = ((findDisplay 9002) displayCtrl 3606);
_enableButton = 0;

_inventoryItems = ['mhl_MoronSalt_DevilDust','mhl_StarterFluid_DevilDust','mhl_Acetone_DevilDust','mhl_BatteryPackage_DevilDust', 'mhl_Sudafed_DevilDust'];
    for [{_i = 0}, {_i < 6}, { _i = _i + 1}] do {
        if ((_inventoryItems select _i) in (items player + assignedItems player)) then {
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
            _BuildLabButton ctrlEnable true;
        } else
        {
             _BuildLabButton ctrlEnable false;
        };

    if ("mhl_WaterBottle_DevilDust" in (items player)) then
        {
           _DrinkButton ctrlEnable true;
        } else {
                  _DrinkButton ctrlEnable false;
               };
    if ("pAx_Camera_DevilDust" in (items player)) then
        {
            _CamSetButton ctrlEnable true;
        } else {
                    _CamSetButton ctrlEnable false;
               };
}else {};