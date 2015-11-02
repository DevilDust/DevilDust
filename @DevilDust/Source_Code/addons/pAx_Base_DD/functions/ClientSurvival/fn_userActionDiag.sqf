disableSerialization;

if (isNull (findDisplay 9002)) then {

createDialog "pAx_UserAction_Dialog";
waitUntil { !(isNull (findDisplay 9002)) };


_DrinkButton    = ((findDisplay 9002) displayCtrl 3600);
_EatButton      = ((findDisplay 9002) displayCtrl 3601);
_BuildLabButton = ((findDisplay 9002) displayCtrl 3602);
_DrugsButton    = ((findDisplay 9002) displayCtrl 3603);


_CamSetButton   = ((findDisplay 9002) displayCtrl 3605);
//_FuelButton   = ((findDisplay 9002) displayCtrl 3606);


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