//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  fn_setClientMoney.sqf
/// #PARAMS  :  0 - New Client Money Amount
/// #EXECUTE :  CALL used throughout Mod
/// #PURPOSE :  Set the Variable pAx_ClientMoney
/// #AUTHOR  :  pAxton
/// #DATE    :  Oct. 4, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
_player = _this select 0;
_cMoney = _this select 1;
if (isDedicated) exitWith{};
if (!local _player) exitWith {};
_player setVariable ["pAx_ClientMoney", _cMoney];