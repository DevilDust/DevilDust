//Author pAxton			


_unit = _this select 0;
 if (isDedicated) exitWith{};
 if (!local _unit) exitWith{};

_money = [_unit] call pAx_fnc_getClientMoney;
if (_money > 199) then {
_unit addweapon "hgun_ACPC2_F";
_unit addMagazine "9Rnd_45ACP_Mag";
_unit addMagazine "9Rnd_45ACP_Mag";
_newMoney = _money - 200;
[_unit, _newMoney] call pAx_fnc_setClientMoney;
} else {

hint "you do not have enough money";

};