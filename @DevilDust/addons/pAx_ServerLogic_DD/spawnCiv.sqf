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
_isActive = spawnTrigger getVariable "isTriggerActive";
if (_isActive == 0) then {
spawnTrigger setVariable ["isTriggerActive", 1];
_i = 0;
//hint "has triggered " + str(_i);
_unit = _this select 0 select 0;
_pos = _this select 1;

_housearray = (_pos) nearObjects ["House", 1500];

_itemArray = [
                    "mhl_moronsalt_DevilDust",
                    "mhl_sudafed_DevilDust",
                    "mhl_batterypackage_DevilDust",
                    "mhl_acetone_DevilDust",
                    "mhl_starterfluid_DevilDust",
                    "mhl_WaterBottle_DevilDust",
                    "pAx_U_man_green_DD",
                    "pAx_U_man_magpul_DD",
                    "pAx_U_man_boston_DD"
              ];



_civUnitArray = [
                    "pAx_C_Man_1",
                    "pAx_C_Man_2",
                    "pAx_C_Man_3"

                ];








//{_loot = "groundweaponholder" createVehicle getPosATL (position _x); _loot addItem _itemArray select(floor random count _itemArray);} forEach _housearray;
for [{_i = 0}, {_i < (count _houseArray)}, { _i = _i + 1}] do {
    _aHouse = _housearray select _i;

   _index = floor random count _itemArray;
   _loot = "groundweaponholder" createVehicle (_aHouse buildingPos _index);
   _loot2 = "groundweaponholder" createVehicle (_aHouse buildingPos (_index + 1));
  // _loot setPosAGLS (_aHouse buildingPos _index);
   _position = _aHouse buildingPos _index;
   _position2 = _aHouse buildingPos _index+1;
   _loot additemcargoglobal [(_itemArray call BIS_fnc_selectRandom),1];
   _loot additemcargoglobal [(_itemArray call BIS_fnc_selectRandom),1];
   _loot2 additemcargoglobal [(_itemArray call BIS_fnc_selectRandom),1];
   _loot2 additemcargoglobal [(_itemArray call BIS_fnc_selectRandom),1];
 //  _marka = "marka" + str _i;
  // _markera = createMarker [_marka, position _aHouse ];
  // _marka setMarkerType "hd_dot";
   _loot setPos [(_position select 0),(_position select 1),((_position select 2)-.14)];
   _loot2 setPos [(_position2 select 0),(_position2 select 1),((_position2 select 2)-.14)];
};
//while {triggerActivated spawnTrigger} do {
//_i = _i + 1;

//for [{_i = 0}, {_i < (11)}, { _i = _i + 1}] do {
//random1 = spawnLocations select (floor random count spawnLocations);
//_house = _housearray select 0;
_house = _housearray select floor random count _housearray;
_house2 = _housearray select floor random count _housearray;
_house3 = _housearray select floor random count _housearray;
_grp = createGroup west;
_grp2 = createGroup west;
_grp3 = createGroup west;
_posinit = position _house;
_posinit2 = position _house2;
_posinit3 = position _house3;


//_mark = "mark" + str _i;
//_marker = createMarker [_mark, position _house ];
//_mark setMarkerType "hd_dot";
_classname = _civUnitArray call BIS_fnc_selectRandom;
_classname2 = _civUnitArray call BIS_fnc_selectRandom;
_classname3 = _civUnitArray call BIS_fnc_selectRandom;
_unitArray = [
_classname createUnit [_posinit, _grp, ""],
_classname2 createUnit [_posinit, _grp, ""],
_classname3 createUnit [_posinit, _grp, ""],
_classname createUnit [_posinit, _grp, ""],
_classname2 createUnit [_posinit2, _grp2, ""],
_classname createUnit [_posinit2, _grp2, ""],
_classname3 createUnit [_posinit2, _grp2, ""],
_classname createUnit [_posinit2, _grp2, ""],
_classname2 createUnit [_posinit3, _grp3, ""],
_classname3 createUnit [_posinit3, _grp3, ""],
_classname2 createUnit [_posinit3, _grp3, ""],
_classname createUnit [_posinit3, _grp3, ""]
];
_wp = _grp addWaypoint [ getPos _unit, 110];
_wp setWaypointSpeed "LIMITED";
_wp setWaypointType "DISMISS";
_wp = _grp2 addWaypoint [ getPos _unit, 110];
_wp setWaypointSpeed "LIMITED";
_wp setWaypointType "DISMISS";
_wp = _grp3 addWaypoint [ getPos _unit,110];
_wp setWaypointSpeed "LIMITED";
_wp setWaypointType "DISMISS";


//};
//};
while {triggerActivated spawnTrigger} do {

};
{deleteVehicle _x} forEach units _grp;
{deleteVehicle _x} forEach units _grp2;
{deleteVehicle _x} forEach units _grp3;
};