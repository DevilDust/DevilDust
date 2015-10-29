

        _camera = _this select 0;
        _unit = _this select 1;
        _bb = _this select 2;
        _bb setObjectTextureGlobal [0, "#(argb,512,512,1)r2t(rtt,1)"];


        // [[_camera],"fnc_pickUpCamera"] call BIS_fnc_MP;
        // [[_unit],'fnc_dropCamera'] call BIS_fnc_MP;
        [_camera, _unit] spawn pAx_fnc_pickUpCamera;

     [[_camera, "rtt"], "pAx_fnc_createCamera"] call BIS_fnc_MP;