

_caller = _this select 1;
if (isDedicated) exitWith{};
if (!local _caller) exitWith{};
_readyToCook = 0;
_inventoryItems = [
                    'mhl_MoronSalt_DevilDust',
                    'mhl_StarterFluid_DevilDust',
                    'mhl_Acetone_DevilDust',
                    'mhl_BatteryPackage_DevilDust',
                    'mhl_Sudafed_DevilDust'
                  ];
for [{_i = 0}, {_i < 6}, { _i = _i + 1}] do {
     if ((_inventoryItems select _i) in (items _caller + assignedItems _caller)) then {
                 _readyToCook = _readyToCook + 1;
    };
    };
if (_readyToCook > 4) then {
createDialog "pAx_Lab_Dialog";
player playMove "Acts_carFixingWheel";


_myCount = (count _inventoryItems) -1;
  for "_x" from 0 to _myCount do
        {
          _currentElement = _inventoryItems select _x;
          player unassignItem _currentElement;
          player removeItem _currentElement;
        };


sleep 18;
closeDialog 756;
closeDialog 602;
cnv = ppEffectCreate ["wetDistortion", 1];
cnv ppEffectEnable true;
cnv ppEffectAdjust [0,1,.1,.1,.1,.1,1,0,0,0,0,0,0,0,0];

radBlur = ppEffectCreate ["ChromAberration", 400];
radBlur ppEffectEnable true;
radBlur ppEffectAdjust [.5,.5,1];



//_unit fire ["muzzle", "mode", "magazine"];

//player fire "1Rnd_SmokeGreen_Grenade_shell";


_cookInProgress = "SmokeShellPurple" createVehicle (position vehicle player);  _cookInProgress attachto [vehicle player, [0,0,0]];  
detach _cookInProgress;
hint "Your Baggy will be ready in 20 sec";
sleep 20;
player additem "mhl_baggy_DevilDust";
player additem "mhl_baggy_DevilDust";
player additem "mhl_baggy_DevilDust";
ppEffectDestroy cnv;
ppEffectDestroy radBlur;
} else {
        hintSilent "You need more stuff";
};
