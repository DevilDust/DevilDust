

   _unit = _this select 0;
        _unit  addAction
                                [
                                   "Drop",
                                       "detach camera;  (_this select 0) setVariable ['inHands', false];",
                                       "",
                                        0,
                                    false,
                                     true,
                                       "",
                                      "(player getVariable 'inHands') == true)"
                                ];