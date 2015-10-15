
_player = _this select 0;

_markerArray = ["s1", "s2", "s3"];

_selector = _markerArray call BIS_fnc_randomIndex;
_spawn = (_markerArray select _selector);

_player setPosATL (getMarkerPos _spawn);