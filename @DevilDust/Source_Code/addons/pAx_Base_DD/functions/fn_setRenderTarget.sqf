

        _camera = _this select 0;
        _unit = _this select 1;
        _bb = _this select 2;



        // [[_camera],"fnc_pickUpCamera"] call BIS_fnc_MP;
        // [[_unit],'fnc_dropCamera'] call BIS_fnc_MP;
        [_camera, _unit] spawn pAx_fnc_pickUpCamera;

     [[_camera, _bb], "pAx_fnc_createCam"] call BIS_fnc_MP;