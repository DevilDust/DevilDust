

_keyDown = _this select 1;
_Til = 41;

 if (_keyDown == _Til) then

 {

    hintSilent format ['Money: %1 \n\n Hydration: %2 ',[player] call pAx_fnc_getClientMoney,[player] call pAx_fnc_getThirst];

 };


