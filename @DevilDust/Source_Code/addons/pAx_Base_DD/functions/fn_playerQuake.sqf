

_unit = _this select 0;

enableCamShake true;
addCamShake [5, 180, 25];

_nearHouses = _unit nearObjects ["House", 500];

_house = _nearHouses call BIS_fnc_selectRandom;

_house setDamage 1;

