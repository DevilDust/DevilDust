
_target = _this select 0;
if (isDedicated) exitWith{};
if (!local _target) exitWith {};
0 = ["ColorCorrections", 1500, [
	1,
	0.4,
	0,
	0, 0, 0, 0,
	1, 1, 1, 0,
	1, 1, 1, 0
]] spawn {
	params ["_name", "_priority", "_effect", "_handle"];
	while {
		_handle = ppEffectCreate [_name, _priority];
		_handle < 0
	} do {
		_priority = _priority + 1;
	};
	_handle ppEffectEnable true;
	_handle ppEffectAdjust _effect;
	_handle ppEffectCommit 5;
	waitUntil {ppEffectCommitted _handle};
	uiSleep 3;

	_handle ppEffectEnable false;
	ppEffectDestroy _handle;
};