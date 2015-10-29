
   _camera = _this select 0;
   _rtt = _this select 1;

   _cam = "camera" camCreate [0,0,0];
        _cam cameraEffect ["Internal", "Back", _rtt];


        _cam attachTo [_camera, [0,0,0]];
        _cam setDir 180;

        _cam camSetFov 0.7;
