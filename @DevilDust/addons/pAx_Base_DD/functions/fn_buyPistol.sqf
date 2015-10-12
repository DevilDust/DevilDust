//Author pAxton			


_unit = _this select 0;
 if (isDedicated) exitWith{};
 if (!local _unit) exitWith{};

_money = pAx_ClientMoney;
if (_money > 199) then {
_unit addweapon "hgun_ACPC2_F";
_unit addMagazine "9Rnd_45ACP_Mag";
_unit addMagazine "9Rnd_45ACP_Mag";
pAx_ClientMoney = pAx_ClientMoney - 200;
} else {

hint "you do not have enough money";

};