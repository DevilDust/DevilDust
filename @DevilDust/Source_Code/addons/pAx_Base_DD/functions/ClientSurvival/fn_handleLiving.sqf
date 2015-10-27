//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  fn_handleLiving.sqf
/// #PARAMS  :  0 - Player unit  - Mandatory
/// #EXECUTE :  Spawned in aliveClient
/// #PURPOSE :  Handle while loop and player thirst, addiction and TODO hunger
///
/// #AUTHOR  : pAxton
/// #DATE    : Oct. 4, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
scopeName "Main";

_player = _this select 0;

//Variables need to handle client
playerWetEffect = ppEffectCreate ["wetDistortion", 1];

while {alive _player} do
    {
        _Thirst   = [_player] call pAx_fnc_getThirst;
        _Thirst   = [_player, _Thirst, playerWetEffect] call pAx_fnc_handleThirst;
        _null     = [_player,_Thirst] call pAx_fnc_setThirst;
       //             [_player] call pAx_fnc_addDrinkAction;
        _status   = [_player] call pAx_fnc_isAlive;

         sleep 5;
      //  _player removeAction DRINK_AA_ID;
      //  _player removeAction SECURITY_AA_ID;

     if (!_status) then
        {
            _player setDamage 1;
        };

    };

