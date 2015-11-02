_unit = _this select 0;


_veharray = (position _unit) nearObjects ["C_Offroad_01_bluecustom_F", 5];


_car      = _veharray select 0;




            if (_car == "C_Offroad_01_bluecustom_F") then
            {
            if ("mhl_TurboBox_DevilDust" in (items _unit)) then
                {
                    if ("mhl_ToolBoxNew_DevilDust" in (items _unit)) then
                    {
                                    _carPos = position _car;
                                    deleteVehicle _car;
                                    sleep 0.1;
                                    "pAx_truck_DevilDust" createVehicle _carPos;
                                    _unit removeItem "mhl_TurboBox_DevilDust";
                    };
                };
            } else { hint "This Turbo only fits on the Offraod";};
