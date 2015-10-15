//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  fn_setThirst.sqf
/// #PARAMS  :  0 - New Client Thirst Amount
/// #EXECUTE :  CALL used throughout Mod
/// #PURPOSE :  Set the Variable pAx_Thirst
/// #AUTHOR  :  pAxton
/// #DATE    :  Oct. 4, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
_player = _this select 0;
_cThirst = _this select 1;
if (isDedicated) exitWith{};
if (!local _player) exitWith {};
_player setVariable ["pAx_Thirst", _cThirst];