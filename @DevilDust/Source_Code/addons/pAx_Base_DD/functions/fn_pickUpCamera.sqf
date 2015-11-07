

    _camera = _this select 0;
    //cCaller = _this select 1;

        _camera addAction
                            [
                                "PickUp",
                                    "(_this select 0) attachTo [(_this select 1),[0, .10, .05], 'lefthand'];
                                        (_this select 0) setDir 180;
                                            [(_this select 1), (_this select 0)] call pAx_fnc_dropCamera;"];
