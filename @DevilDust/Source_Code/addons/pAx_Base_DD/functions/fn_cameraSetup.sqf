

_unit = _this;


  _bb     = "Land_Laptop_unfolded_F" createVehicle position (vehicle _unit);
  _camera = "Land_HandyCam_F" createVehicle position (vehicle _unit);

[_camera,_unit,_bb] spawn pAx_fnc_setRenderTarget;