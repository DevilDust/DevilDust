//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  aliveClient.sqf
/// #PARAMS  :  0 - Player unit - Mandatory
/// #EXECUTE :  execVM via pAx_Base_DD/client/clientEH.sqf
/// #PURPOSE :  Remove items from unit, Handle Thirst and other things
/// #AUTHOR  :  pAxton
/// #DATE    :  Oct. 3, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////


_player = _this select 0;
if (isDedicated) exitWith{};
if (!local _player) exitWith {};
removeHeadgear _player;

removeallweapons _player;


waitUntil {(diag_tickTime > 0)};
[] spawn { sleep 0.5;
"Welcome to Devil Dust" hintC [
	"Elements in this mod are intended for adults.",
	"Trying to recreate anything done in the mod in real life.",
	"Will expose you and others around you to deadly gas.",
	"in other words... Don't try this at home"
];
hintC_arr_EH = findDisplay 72 displayAddEventHandler ["unload", {
	0 = _this spawn {
		_this select 0 displayRemoveEventHandler ["unload", hintC_arr_EH];
		hintSilent "";
	};
}];
};
	0 setFog [.08,0.03,100];
[_player, 100] call pAx_fnc_setClientMoney;


pAx_Addiction = _player getVariable "pAx_Addiction";
pAx_Addicted  = _player getVariable "pAx_Addicted";




      if ((_player getVariable "pAx_addicted") == 1) then {
            pAx_Addiction = pAx_Addiction + 0.1;
      };
      if ((_player getVariable "pAx_Addiction") > 99) then {
        _fat = getFatigue _player;
        _player setFatigue (_fat + 0.1);
          };

        [_player] spawn pAx_fnc_handleLiving;


	
	
	

			
			
			
			
			
			
			
			