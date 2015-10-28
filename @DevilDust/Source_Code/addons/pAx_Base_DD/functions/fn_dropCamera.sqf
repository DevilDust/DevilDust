

   _unit = _this select 0;
        _unit  addAction
                                [
                                   "Drop",
                                       "detach camera;  (_this select 1) removeAction (_this select 2); cCaller = nil;",
                                       "",
                                        0,
                                    false,
                                     true,
                                       "",
                                      ""
                                ];