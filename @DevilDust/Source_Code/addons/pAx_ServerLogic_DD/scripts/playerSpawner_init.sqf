 //////////////////////////////////////////////////////////////////////////////////////////////////////////////
 /// #FILENAME:  playerspawner_init.sqf
 /// #PARAMS  :
 /// #EXECUTE :  CALL used throughout Mod
 /// #PURPOSE :  Create Trigger to spawn player
 /// #AUTHOR  :  pAxton
 /// #DATE    :  Oct. 3, 2015
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////
0 setFog [.08,0.03,100];
locspawn = (getMarkerPos "spawn");
spawnTriggerPlayer = createTrigger ["emptyDetector", getMarkerPos "spawn", true];
spawnTriggerPlayer setVariable ["isTriggerActive", 0];
spawnTriggerPlayer setTriggerArea [750,750,0,false];
spawnTriggerPlayer setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerPlayer setTriggerStatements ["this", "_script = [thisList] execVM '\pAx_Base_DD\clientJIP.sqf';", ""];






