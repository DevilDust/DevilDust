//pAx_fnc_targetHit
//Author pAxton
//DevilDust

_unit = _this select 0;

_westCenter = createCenter west;
_westGroup = createGroup west;

    {
    [_x] joinSilent grpNull;
    [_x] joinSilent _westGroup;
     _x addweapon "hgun_ACPC2_F";
     _x addMagazine "9Rnd_45ACP_Mag";
     _x addMagazine "9Rnd_45ACP_Mag";
    } forEach units group _unit;