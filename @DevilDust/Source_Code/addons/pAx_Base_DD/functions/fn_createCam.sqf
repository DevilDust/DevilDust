
   _camera = _this select 0;
   _bb    = _this select 1;
        _bb setObjectTextureGlobal [0, "#(argb,512,512,1)r2t(rtt,1)"];
        _cam = "camera" camCreate [0,0,0];
        _cam cameraEffect ["Internal", "Back", "rtt"];


        _cam attachTo [_camera, [0,0,0]];
        _cam setDir 180;

        _cam camSetFov 0.7;
