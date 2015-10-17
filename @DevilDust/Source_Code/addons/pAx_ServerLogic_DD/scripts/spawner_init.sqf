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
spawnTrigger = createTrigger ["emptyDetector", loca, true];

spawnTrigger setTriggerArea [750,750,0,false];
spawnTrigger setTriggerActivation ["EAST", "PRESENT", true];
spawnTrigger setTriggerStatements ["this", "_script = [thisList , loca] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTrigger setVariable ['isTriggerActive', 0];"];

locb = (getMarkerPos "b");
spawnTriggerZera = createTrigger ["emptyDetector", locb, true];

spawnTriggerZera setTriggerArea [750,750,0,false];
spawnTriggerZera setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerZera setTriggerStatements ["this", "_script = [thisList , locb] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerZera setVariable ['isTriggerActive', 0];"];

locc = (getMarkerPos "c");
spawnTriggerAgiosDino = createTrigger ["emptyDetector", locc, true];

spawnTriggerAgiosDino setTriggerArea [750,750,0,false];
spawnTriggerAgiosDino setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerAgiosDino setTriggerStatements ["this", "_script = [thisList , locc] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerAgiosDino setVariable ['isTriggerActive', 0];"];

locd = (getMarkerPos "d");
spawnTriggerGalati = createTrigger ["emptyDetector", locd, true];

spawnTriggerGalati setTriggerArea [750,750,0,false];
spawnTriggerGalati setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerGalati setTriggerStatements ["this", "_script = [thisList , locd] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerGalati setVariable ['isTriggerActive', 0];"];

loce = (getMarkerPos "e");
spawnTriggerKore = createTrigger ["emptyDetector", loce, true];

spawnTriggerKore setTriggerArea [750,750,0,false];
spawnTriggerKore setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerKore setTriggerStatements ["this", "_script = [thisList , loce] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerKore setVariable ['isTriggerActive', 0];"];

locf = (getMarkerPos "f");
spawnTriggerKavala = createTrigger ["emptyDetector", locf, true];

spawnTriggerKavala setTriggerArea [750,750,0,false];
spawnTriggerKavala setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerKavala setTriggerStatements ["this", "_script = [thisList , locf] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerKavala setVariable ['isTriggerActive', 0];"];

locg = (getMarkerPos "g");
spawnTriggerNeri = createTrigger ["emptyDetector", locg, true];

spawnTriggerNeri setTriggerArea [750,750,0,false];
spawnTriggerNeri setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerNeri setTriggerStatements ["this", "_script = [thisList , locg] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerNeri setVariable ['isTriggerActive', 0];"];

loch = (getMarkerPos "h");
spawnTriggerAthanos = createTrigger ["emptyDetector", loch, true];

spawnTriggerAthanos setTriggerArea [750,750,0,false];
spawnTriggerAthanos setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerAthanos setTriggerStatements ["this", "_script = [thisList , loch] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", "terminate _script; spawnTriggerAthanos setVariable ['isTriggerActive', 0];"];

_posMarkerArray = [loca, locb, locc, locd, loce, locf, locg, loch];

[_posMarkerArray] execVM "\pAx_ServerLogic_dd\scripts\mapSetup.sqf";


if (isDedicated) then {
"Killer" addPublicVariableEventHandler {
               _pcid = owner (_this select 1 select 0);
                Killer = "you are a killer";
               _pcid publicVariableClient "Killer";
           };
       };




