 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  spawnCiv.sqf
 /// #PARAMS  :  0 - Player
 ///             1 - Position
 /// #EXECUTE :  CALL used throughout Mod
 /// #PURPOSE :  TESTING, THIS SCRIPT WILL HAVE A MASSIVE MAKE OVER
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 3, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
 if (hasInterface) exitWith {};





_unit = _this select 0 select 0;
_pos = _this select 1;

_housearray = (_pos) nearObjects ["House", 700];



for [{_i = 0}, {_i < (count _houseArray)}, { _i = _i + 1}] do {
    _aHouse = _housearray select _i;

   _index = floor random count DD_SPAWNLOOT;
   _loot  = "groundweaponholder" createVehicle (_aHouse buildingPos _index);
   _loot2 = "groundweaponholder" createVehicle (_aHouse buildingPos (_index + 1));

   _position  = _aHouse buildingPos _index;
   _position2 = _aHouse buildingPos _index+1;
   _loot  additemcargoglobal [(DD_SPAWNLOOT call BIS_fnc_selectRandom),1];
   _loot  additemcargoglobal [(DD_SPAWNLOOT call BIS_fnc_selectRandom),1];
   _loot2 additemcargoglobal [(DD_SPAWNLOOT call BIS_fnc_selectRandom),1];
   _loot2 additemcargoglobal [(DD_SPAWNLOOT call BIS_fnc_selectRandom),1];
   _loot  setPos [(_position select 0),(_position select 1),((_position select 2)-.14)];
   _loot2 setPos [(_position2 select 0),(_position2 select 1),((_position2 select 2)-.14)];
};



_house  = _housearray select floor random count _housearray;
_house2 = _housearray select floor random count _housearray;
_house3 = _housearray select floor random count _housearray;
_grp  = createGroup west;
_grp2 = createGroup west;
_grp3 = createGroup west;
_aposinit  = position _house;
_aposinit2 = position _house2;
_aposinit3 = position _house3;

_classname  = DD_DRUGUSERLIST call BIS_fnc_selectRandom;
_classname2 = DD_DRUGUSERLIST call BIS_fnc_selectRandom;
_classname3 = DD_DRUGUSERLIST call BIS_fnc_selectRandom;

_classname createUnit [_aposinit, _grp, ""];
_classname2 createUnit [_aposinit, _grp, ""];
_classname3 createUnit [_aposinit, _grp, ""];
_classname createUnit [_aposinit, _grp, ""];
_classname2 createUnit [_aposinit2, _grp2, ""];
_classname createUnit [_aposinit2, _grp2, ""];
_classname3 createUnit [_aposinit2, _grp2, ""];
_classname createUnit [_aposinit2, _grp2, ""];
_classname2 createUnit [_aposinit3, _grp3, ""];
_classname3 createUnit [_aposinit3, _grp3, ""];
_classname2 createUnit [_aposinit3, _grp3, ""];
_classname createUnit [_aposinit3, _grp3, ""];

_wp = _grp addWaypoint [ getPos _unit, 110];
_wp setWaypointSpeed "LIMITED";
_wp setWaypointType "DISMISS";
_wp = _grp2 addWaypoint [ getPos _unit, 110];
_wp setWaypointSpeed "LIMITED";
_wp setWaypointType "DISMISS";
_wp = _grp3 addWaypoint [ getPos _unit,110];
_wp setWaypointSpeed "LIMITED";
_wp setWaypointType "DISMISS";



//{deleteVehicle _x} forEach units _grp;
//{deleteVehicle _x} forEach units _grp2;
//{deleteVehicle _x} forEach units _grp3;
