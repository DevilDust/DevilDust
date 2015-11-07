

  _unit = _this select 0;
  playCam = _this select 1;
        _unit  addAction
                                [
                                   "Drop",
                                       "detach playCam;
                                            (_this select 1) removeAction (_this select 2); playCam = nil;",
                                       "",
                                        0,
                                    false,
                                     true,
                                       "",
                                      ""
                                ];