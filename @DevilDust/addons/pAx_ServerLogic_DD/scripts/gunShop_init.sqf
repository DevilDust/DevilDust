 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  gunShop_init.sqf
 /// #PARAMS  :  0 - building
 /// #EXECUTE : execVM
 /// #PURPOSE :  Open Gun shop menu
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 3, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
_building = _this select 0;



_building addAction ["Shop", "createDialog 'pAx_dialog';"];
