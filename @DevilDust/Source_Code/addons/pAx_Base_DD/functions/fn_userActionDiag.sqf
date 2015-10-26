disableSerialization;


createDialog "pAx_UserAction_Dialog";



_DrinkButton    = ((findDisplay 9002) displayCtrl 3600);
_EatButton      = ((findDisplay 9002) displayCtrl 3601);
_BuildLabButton = ((findDisplay 9002) displayCtrl 3602);
_DrugsButton    = ((findDisplay 9002) displayCtrl 3603);

_UpVehButton    = ((findDisplay 9002) displayCtrl 3604);
_CamSetButton   = ((findDisplay 9002) displayCtrl 3605);
//_FuelButton   = ((findDisplay 9002) displayCtrl 3606);


    if ("mhl_WaterBottle_DevilDust" in (items player)) then
        {
           _DrinkButton ctrlEnable true;
        } else {
                  _DrinkButton ctrlEnable false;
               };
