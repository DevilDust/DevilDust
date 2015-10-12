 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  fn_addDrinkAction.sqf
 /// #PARAMS  :  0 - Player
 /// #EXECUTE :  CALL used throughout Mod
 /// #PURPOSE :  Add or Remove Drink Action and hanlde the act of drinking
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 3, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
 //private["_unit"];

 _unit = _this select 0;
 if (isDedicated) exitWith{};
 if (!local _unit) exitWith{};

   DRINK_AA_ID  = _unit
                       addAction
                            [
                               "Drink",
                                   "[(_this select 0),100] call pAx_fnc_setThirst;
                                     (_this select 0) unassignItem 'mhl_waterBottle_DevilDust';
                                          (_this select 0) removeItem 'mhl_waterBottle_DevilDust';
                                              (_this select 0) removeAction (_this select 2);",
                                   "",
                                    0,
                                false,
                                 true,
                                   "",
                                  "('mhl_WaterBottle_DevilDust' in (items player + assignedItems player) && _target == _this)"
                            ];
