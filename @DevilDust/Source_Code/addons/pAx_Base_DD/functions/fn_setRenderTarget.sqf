

        _camera = _this select 0;
        _unit = _this select 1;
        _bb = _this select 2;
        _bb setObjectTextureGlobal [0, "#(argb,512,512,1)r2t(uavrtt,1)"];


        // [[_camera],"fnc_pickUpCamera"] call BIS_fnc_MP;
        // [[_unit],'fnc_dropCamera'] call BIS_fnc_MP;
        [_camera] spawn pAx_fnc_pickUpCamera;
        [_unit] spawn pAx_fnc_dropCamera;
        _cam = "camera" camCreate [0,0,0];
        _cam cameraEffect ["Internal", "Back", "uavrtt"];


        _cam attachTo [_camera, [0,0,0]];
        _cam setDir 180;

        _cam camSetFov 0.7;
