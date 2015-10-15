

_unit = _this;

isHoldingCamera = false;
fnc_pickUpCamera =
    {
        _camera = _this select 0;

        _camera addAction ["PickUp", "(_this select 0) attachTo [(_this select 1),[0, .10, .25], 'lefthand']; camera setDir 180; isHoldingCamera = true;"];

    };


_bb = "Land_Laptop_unfolded_F" createVehicle position _unit;
_bb setObjectTextureGlobal [0, "#(argb,512,512,1)r2t(uavrtt,1)"];

camera = "Land_HandyCam_F" createVehicle position _unit;

[camera] call fnc_pickUpCamera;






cam = "camera" camCreate [0,0,0];
cam cameraEffect ["Internal", "Back", "uavrtt"];


cam attachTo [camera, [0,0,0]];
cam setDir 180;

cam camSetFov 0.7;

  _unit  addAction
                                [
                                   "Drop",
                                       "detach camera; isHoldingCamera = false;",
                                       "",
                                        0,
                                    false,
                                     true,
                                       "",
                                      "(isHoldingCamera)"
                                ];


