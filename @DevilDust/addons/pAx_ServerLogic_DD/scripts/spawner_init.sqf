 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  spawner_init.sqf
 /// #PARAMS  :
 /// #EXECUTE :  CALL used throughout Mod
 /// #PURPOSE :  Create Trigger to spawn Civs
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 3, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
if (hasInterface) exitWith {};
loca = (getMarkerPos "a");
spawnTrigger = createTrigger ["emptyDetector", getMarkerPos "a", true];
spawnTrigger setVariable ["isTriggerActive", 0];
spawnTrigger setTriggerArea [750,750,0,false];
spawnTrigger setTriggerActivation ["EAST", "PRESENT", true];
spawnTrigger setTriggerStatements ["this", "_script = [thisList , loca] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTrigger setVariable ['isTriggerActive', 0];"];

locb = (getMarkerPos "b");
spawnTriggerZera = createTrigger ["emptyDetector", getMarkerPos "b", true];
spawnTriggerZera setVariable ["isTriggerActive", 0];
spawnTriggerZera setTriggerArea [750,750,0,false];
spawnTriggerZera setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerZera setTriggerStatements ["this", "_script = [thisList , locb] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerZera setVariable ['isTriggerActive', 0];"];


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

for [{_i = 0}, {_i < (count _milBuildarray)}, { _i = _i + 1}] do {
   _build = _milBuildarray select _i;
   _buildFound = (position spawnTrigger) nearObjects [_build , 20000];
   {hideObjectGlobal _x} forEach _buildFound;
   {_sb = "pAx_GunShop_DevilDust" createVehicle getPos _x} forEach _buildFound;
};



if (isDedicated) then {
"Killer" addPublicVariableEventHandler {
               _pcid = owner (_this select 1 select 0);
                Killer = "you are a killer";
               _pcid publicVariableClient "Killer";
           };
       };




