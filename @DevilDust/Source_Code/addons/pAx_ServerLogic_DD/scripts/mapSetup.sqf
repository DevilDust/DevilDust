 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  mapSetup.sqf
 /// #PARAMS  :   0 - Locations Array - Manadatory
 /// #EXECUTE :  CALL at mission start
 /// #PURPOSE : spawn gunshops and vehicles
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 14, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
_lootTypeSelect = [0,1,2];

 _allMarkerPos = _this select 0;

 _centerMarker = _this select 0 select 0;

 _radiusToRoads = 500;


 for [{_i = 0}, {_i < (count DD_HQLIST)}, { _i = _i + 1}] do
    {
       _build = DD_HQLIST select _i;
       _buildFound = (_centerMarker) nearObjects [_build , 20000];
       {hideObjectGlobal _x} forEach _buildFound;
        {_sb = "pAx_GunShop_DevilDust" createVehicle getPos _x} forEach _buildFound;
    };
 for [{_i = 0}, {_i < (count DD_BARRACKSLIST)}, { _i = _i + 1}] do
    {
       _build = DD_BARRACKSLIST select _i;
       _buildFound = (_centerMarker) nearObjects [_build , 20000];


       {
        _lootPosList = [ _x] call BIS_fnc_buildingPositions;
       {
          _rand = _lootTypeSelect call BIS_fnc_selectRandom;
          if (_rand == 0) then
          {
             _loot  = "groundweaponholder" createVehicle (_x);
             _loot  additemcargoglobal [(DD_MILITEMSLIST call BIS_fnc_selectRandom),1];
          };
          if (_rand == 1) then
          {
             _loot  = "groundweaponholder" createVehicle (_x);
             _loot  addmagazinecargoglobal [(DD_MILMAGLIST call BIS_fnc_selectRandom),3];
          };
          if (_rand == 2) then
          {
             _loot  = "groundweaponholder" createVehicle (_x);
             _loot  addweaponcargoglobal [(DD_MILWEAPLIST call BIS_fnc_selectRandom),1];
          };
         } forEach _lootPosList;
       }forEach _buildFound;

    };


 for [{_i = 0}, {_i < (count _allMarkerPos)}, {_i = _i +1}] do
    {
        _spawn = _allMarkerPos select _i;
        _goodSpotArray = _spawn nearRoads _radiusToRoads;
        _goodSpotSegment = _goodSpotArray select floor random count _goodSpotArray;
        _veh1 = DD_VEHLIST select floor random count DD_VEHLIST;
        _veh1 createVehicle position _goodSpotSegment;
         _goodSpotSegment = _goodSpotArray select floor random count _goodSpotArray;
        _veh2 = DD_VEHLIST select floor random count DD_VEHLIST;
        _veh2 createVehicle position _goodSpotSegment;
         _goodSpotSegment = _goodSpotArray select floor random count _goodSpotArray;
        _veh3 = DD_VEHLIST select floor random count DD_VEHLIST;
        _veh3 createVehicle position _goodSpotSegment;
         _marka = "marka" + str _i;
          _markera = createMarker [_marka, position _goodSpotSegment ];
          _marka setMarkerType "hd_dot";

    };
