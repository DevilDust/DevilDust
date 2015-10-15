 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  mapSetup.sqf
 /// #PARAMS  :   0 - Locations Array - Manadatory
 /// #EXECUTE :  CALL at mission start
 /// #PURPOSE : spawn gunshops and vehicles
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 14, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////


 _allMarkerPos = _this select 0;

 _centerMarker = _this select 0 select 0;

 _radiusToRoads = 500;


 _milBuildarray = [
                      "Land_Cargo_HQ_V1_F",
                      "Land_Cargo_HQ_V2_F",
                      "Land_Cargo_HQ_V3_F",
                      "Land_Cargo_Patrol_V1_F",
                      "Land_Cargo_Patrol_V2_F",
                      "Land_Cargo_Patrol_V3_F",
                      "Land_Cargo_Tower_V1_F",
                      "Land_Cargo_Tower_V2_F",
                      "Land_Cargo_Tower_V3_F"
                  ];

 _vehArray = [
                "C_Offroad_01_F",
                "C_Offroad_01_repair_F",
                "C_Offroad_01_bluecustom_F",
                "C_Quadbike_01_F",
                "C_Quadbike_01_white_F",
                "C_Hatchback_01_sport_F",
                "C_Hatchback_01_green_F",
                "C_Hatchback_01_black_F",
                "SUV_01_base_grey_F",
                "SUV_01_base_orange_F",
                "C_Van_01_transport_F",
                "C_Van_01_fuel_red_v2_F",
                "C_Kart_01_Fuel_F"

              ];

 for [{_i = 0}, {_i < (count _milBuildarray)}, { _i = _i + 1}] do
    {
        _build = _milBuildarray select _i;
        _buildFound = (_centerMarker) nearObjects [_build , 20000];
        {hideObjectGlobal _x} forEach _buildFound;
        {_sb = "pAx_GunShop_DevilDust" createVehicle getPos _x} forEach _buildFound;
    };


 for [{_i = 0}, {_i < (count _allMarkerPos)}, {_i = _i +1}] do
    {
        _spawn = _allMarkerPos select _i;
        _goodSpotArray = _spawn nearRoads _radiusToRoads;
        _goodSpotSegment = _goodSpotArray select floor random count _goodSpotArray;
        _veh1 = _vehArray select floor random count _vehArray;
        _veh1 createVehicle position _goodSpotSegment;
         _goodSpotSegment = _goodSpotArray select floor random count _goodSpotArray;
        _veh2 = _vehArray select floor random count _vehArray;
        _veh2 createVehicle position _goodSpotSegment;
         _goodSpotSegment = _goodSpotArray select floor random count _goodSpotArray;
        _veh3 = _vehArray select floor random count _vehArray;
        _veh3 createVehicle position _goodSpotSegment;
         _marka = "marka" + str _i;
          _markera = createMarker [_marka, position _goodSpotSegment ];
          _marka setMarkerType "hd_dot";

    };
