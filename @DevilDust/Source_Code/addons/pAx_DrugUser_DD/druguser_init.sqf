//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  druguser_init.sqf
/// #PARAMS  :  0 -  unit - Mandatory
/// #EXECUTE :  init eventhandler
/// #PURPOSE :  setup AI Druguser
/// #AUTHOR  :  pAxton
/// #DATE    :  Oct. 8, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
_unit = _this select 0;



removeHeadgear _unit;
removeVest _unit;
removeBackpack _unit;
removeAllItems _unit;
removeallweapons _unit;
_unit addAction ["<img size = '3' image='\pAx_DrugUser_DD\pAx_addAction.paa' />", "\pAx_DrugUser_DD\BuyDrugs.sqf", [], 1, TRUE, FALSE, "", "(alive _target)"];

