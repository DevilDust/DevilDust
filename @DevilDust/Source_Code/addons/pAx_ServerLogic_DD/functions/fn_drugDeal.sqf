disableSerialization;
_caller = _this select 0;
_uid    = getPlayerUID _caller;

_pos       = position _caller;
_UpButton  = ((findDisplay 9002) displayCtrl 3604);

_UpButton ctrlEnable false;

_dealPosList = _pos nearObjects ["house", 2000];
_dealHouse   = _dealPosList call BIS_fnc_selectRandom;
_dealPos     = position _dealHouse;

_poss = [_dealHouse] call BIS_fnc_buildingPositions;


 _posh    = _poss call BIS_fnc_selectRandom;
 _marka   = "markaDEALHOUSE" + str(_uid);
 _markera = createMarker [_marka, _posh ];
 _marka setMarkerType "hd_dot";








_civSpawn     = _dealPosList call BIS_fnc_selectRandom;
_civPos       = position _civSpawn;
_grp          = createGroup east;

_classname   = DD_DRUGUSERLIST call BIS_fnc_selectRandom;
_classname1  = DD_DRUGUSERLIST call BIS_fnc_selectRandom;
_classname2  = DD_DRUGUSERLIST call BIS_fnc_selectRandom;

_classname  createUnit [_civPos, _grp, "this setCaptive true"];
_classname1 createUnit [_civPos, _grp, "this setCaptive true"];
_classname2 createUnit [_civPos, _grp, "this setCaptive true"];


_wp = _grp addWaypoint [ _posh, 0];
_wp setWaypointSpeed "NORMAL";
_wp setWaypointType "MOVE";
_wp setWaypointTimeout [600,2000,2400];
_wp setWaypointStatements ["true", "deleteVehicle _markera;"];
_wp1 = _grp addWaypoint [ _civPos, 0];
_wp1 setWaypointSpeed "FULL";
_wp1 setWaypointType "MOVE";
_wp1 setWaypointStatements ["true", "{deleteVehicle _x} forEach ThisList; deleteGroup _grp;_UpButton ctrlEnable true;"];