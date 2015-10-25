

_keyDown = _this select 1;
_Til = 41;
_t = 20;



  if(_keyDown == _Til) then
    {
         systemChat format ['Money: %1 ',[player] call pAx_fnc_getClientMoney];
            systemChat format ['Hydration: %1 ',[player] call pAx_fnc_getThirst];
    };

  if(_keyDown == _t) then
    {
      //   if ("mhl_ToolBoxnew_DevilDust" in (items player + assignedItems player) ) then
      //      {
                call pAx_fnc_checkVehicle;
     //       };
    };

