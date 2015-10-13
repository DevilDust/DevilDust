_unitArray = _this select 0;



for [{_i = 0}, {_i < (count _unitArray)}, { _i = _i + 1}] do {
   _player = _milBuildarray select _i;
  if (local _player) then {
        _player setDamage 1;
  } else {

  };
};