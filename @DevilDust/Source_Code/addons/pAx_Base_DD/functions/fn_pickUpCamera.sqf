

    _camera = _this select 0;

        _camera addAction
                            [
                                "PickUp",
                                    "(_this select 0) attachTo [(_this select 1),[0, .10, .25], 'lefthand'];
                                        (_this select 0) setDir 180;
                                            (_this select 1) setVariable ['inHands', true]"];
