

_keyDown = _this select 1;
_Til = 41;

 if (_keyDown == _Til) then

 {

    systemChat format ['Money: %1 ',[player] call pAx_fnc_getClientMoney];
    systemChat format ['Hydration: %1 ',[player] call pAx_fnc_getThirst];

 };


