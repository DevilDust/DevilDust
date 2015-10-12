//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  fn_isAlive.sqf
/// #PARAMS  :  0 - Player -Mandatory
/// #EXECUTE :  CALL used throughout Mod
/// #PURPOSE :  Check player conditions to see if he should be alive
///
/// #AUTHOR  :  pAxton
/// #DATE    :  Oct. 4, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
scopeName "Current";
private["_unit"];

_unit           = _this select 0;
_hasEffects     = false;
_activateEffect = false;

_cThirst = [_unit] call pAx_fnc_getThirst;

if (_cThirst < 0.1) then
    {
        false breakOut "Current";
    };

true