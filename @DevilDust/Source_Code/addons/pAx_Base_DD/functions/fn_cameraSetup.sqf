

_unit = _this;

 _unit setVariable ["inHands", false];
  _bb     = "Land_Laptop_unfolded_F" createVehicle position _unit;
  _camera = "Land_HandyCam_F" createVehicle position _unit;

[[_camera,_unit_bb], "pAx_fnc_setRenderTarget"] call BIS_fnc_MP;