//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  DEA_mrap_init.sqf
/// #PARAMS  :  unit - 0 - mandatory
/// #EXECUTE :  INIT EventHandler via mrap config
/// #PURPOSE : Add InventoryOpened eventHandler, setFog on client, set player Variables
///                and call the units (while alive) handling scripts
/// #AUTHOR  : pAxton
/// #DATE    : Oct. 9, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
_veh = _this select 0;

_sign = "Land_Poster_01_F" createVehicle getPos _veh;

_sign attachTo [_veh,[.979,-3.4,-0.25]];
_sign setDir -90;
_sign setObjectTextureGlobal [0, "pAx_Vehicles_DD\data\deasign_ca.paa"];

_sign2 = "Land_Poster_01_F" createVehicle getPos _veh;

_sign2 attachTo [_veh,[-.975,-3.4,-0.25]];
_sign2 setDir 90;
_sign2 setObjectTextureGlobal [0, "pAx_Vehicles_DD\data\deasign_ca.paa"];