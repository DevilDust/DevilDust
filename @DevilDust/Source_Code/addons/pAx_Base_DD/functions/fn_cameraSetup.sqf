

_unit = _this select 0;


  _bb     = "Land_Laptop_unfolded_F" createVehicle position player;
  _camera = "Land_HandyCam_F" createVehicle position player;

[_camera,_unit,_bb] spawn pAx_fnc_setRenderTarget;