
_caller = _this select 0;

_pos = position _caller;

_dealPosList = _pos nearObjects ["house", 2000];
_dealHouse = _dealPosList call BIS_fnc_selectRandom;
_dealPos = position _dealHouse;

_poss = [_dealHouse] call BIS_fnc_buildingPositions;


 _posh = _poss call BIS_fnc_selectRandom;
  _marka = "markaDEALHOUSE";
   _markera = createMarker [_marka, _posh ];
  _marka setMarkerType "hd_dot";







_civSpawnList = _dealPos nearObjects ["house", 2000];
_civSpawn = _civSpawnList call BIS_fnc_selectRandom;
_civPos = position _civSpawn;
_grp  = createGroup west;

_classname  = DD_DRUGUSERLIST call BIS_fnc_selectRandom;

_classname createUnit [_civPos, _grp, ""];


_wp = _grp addWaypoint [ _posh, 0];
_wp setWaypointSpeed "NORMAL";
_wp setWaypointType "MOVE";