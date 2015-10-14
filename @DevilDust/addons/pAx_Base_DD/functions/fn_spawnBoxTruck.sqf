
_unit     = _this select 0;
_arrow =  _this select 1;
_pos = position _arrow;


_truck =  "c_van_01_box_f" createVehicle _pos;


deleteVehicle _arrow;
 