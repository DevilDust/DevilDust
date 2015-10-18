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
spawnTrigger = createTrigger ["emptyDetector", loca, false];

spawnTrigger setTriggerArea [750,750,0,false];
spawnTrigger setTriggerActivation ["EAST", "PRESENT", true];
spawnTrigger setTriggerStatements ["this", "_script = [thisList , loca] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

locb = (getMarkerPos "b");
spawnTriggerZera = createTrigger ["emptyDetector", locb, false];

spawnTriggerZera setTriggerArea [750,750,0,false];
spawnTriggerZera setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerZera setTriggerStatements ["this", "_script = [thisList , locb] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

locc = (getMarkerPos "c");
spawnTriggerAgiosDino = createTrigger ["emptyDetector", locc, false];

spawnTriggerAgiosDino setTriggerArea [750,750,0,false];
spawnTriggerAgiosDino setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerAgiosDino setTriggerStatements ["this", "_script = [thisList , locc] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

locd = (getMarkerPos "d");
spawnTriggerGalati = createTrigger ["emptyDetector", locd, false];

spawnTriggerGalati setTriggerArea [750,750,0,false];
spawnTriggerGalati setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerGalati setTriggerStatements ["this", "_script = [thisList , locd] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

loce = (getMarkerPos "e");
spawnTriggerKore = createTrigger ["emptyDetector", loce, false];

spawnTriggerKore setTriggerArea [750,750,0,false];
spawnTriggerKore setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerKore setTriggerStatements ["this", "_script = [thisList , loce] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

locf = (getMarkerPos "f");
spawnTriggerKavala = createTrigger ["emptyDetector", locf, false];

spawnTriggerKavala setTriggerArea [750,750,0,false];
spawnTriggerKavala setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerKavala setTriggerStatements ["this", "_script = [thisList , locf] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

locg = (getMarkerPos "g");
spawnTriggerNeri = createTrigger ["emptyDetector", locg, false];

spawnTriggerNeri setTriggerArea [750,750,0,false];
spawnTriggerNeri setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerNeri setTriggerStatements ["this", "_script = [thisList , locg] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

loch = (getMarkerPos "h");
spawnTriggerAthanos = createTrigger ["emptyDetector", loch, false];

spawnTriggerAthanos setTriggerArea [750,750,0,false];
spawnTriggerAthanos setTriggerActivation ["EAST", "PRESENT", true];
spawnTriggerAthanos setTriggerStatements ["this", "_script = [thisList , loch] execVM '\pAx_ServerLogic_DD\spawnCiv.sqf';", ""];

_posMarkerArray = [loca, locb, locc, locd, loce, locf, locg, loch];

[_posMarkerArray] execVM "\pAx_ServerLogic_dd\scripts\mapSetup.sqf";


if (isDedicated) then {
"Killer" addPublicVariableEventHandler {
               _pcid = owner (_this select 1 select 0);
                Killer = "you are a killer";
               _pcid publicVariableClient "Killer";
           };
       };




