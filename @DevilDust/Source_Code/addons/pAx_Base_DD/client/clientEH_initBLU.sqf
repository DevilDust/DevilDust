//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  clientEH_initBLU.sqf
/// #PARAMS  :  unit - 0 - mandatory
/// #EXECUTE :  INIT EventHandler via \pAx_Player_DD\config.cpp
/// #PURPOSE : Add InventoryOpened eventHandler, setFog on client, set player Variables
///                and call the units (while alive) handling scripts
/// #AUTHOR  : pAxton
/// #DATE    : Oct. 3, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
//private["_unit"];
_unit = _this;
if (isDedicated) exitWith{};
if (!local _unit) exitWith {};
waitUntil {(isPlayer _unit)};

_unit addVest "pAx_Vest_DevilDust";


	0 setFog [.08,0.03,100];


_unit addEventHandler ["InventoryOpened", {
    _h = [] spawn {
        disableSerialization;
        waitUntil { !(isNull (findDisplay 602)) };


        _statButton = (findDisplay 602) ctrlCreate ["RscButton",2008];
        _statButton ctrlSetPosition  [0.570462 * safezoneW + safezoneX,0.782139 * safezoneH + safezoneY,0.12375 * safezoneW,0.033 * safezoneH];
        _statButton ctrlCommit 0;
        _statButton ctrlSetText "Check Status";
        _statButton buttonSetAction "hintSilent format ['Money: %1 \n\n Hydration: %2 ',[player] call pAx_fnc_getClientMoney,[player] call pAx_fnc_getThirst];";
    };
}];

_unit setVariable ["pAx_ClientMoney", 0];
_unit setVariable ["pAx_Thirst", 100];
_unit setVariable ["pAx_Addiction", 0];
_unit setVariable ["pAx_Addicted", 0];

(vehicle _unit) addVest "pAx_Vest_DevilDust";


_null = [_unit] ExecVM "\pAx_Base_DD\Client\aliveClient.sqf";