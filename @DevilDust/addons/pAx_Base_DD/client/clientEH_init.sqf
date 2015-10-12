//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// #FILENAME:  clientEH.sqf
/// #PARAMS  :  unit - 0 - mandatory
/// #EXECUTE :  INIT EventHandler via \pAx_Player_DD\config.cpp
/// #PURPOSE : Add InventoryOpened eventHandler, setFog on client, set player Variables
///                and call the units (while alive) handling scripts
/// #AUTHOR  : pAxton
/// #DATE    : Oct. 3, 2015
////////////////////////////////////////////////////////////////////////////////////////////////////////////
private["_unit"];
_unit = _this;
if (isDedicated) exitWith{};

waitUntil {(isPlayer _unit)};

	0 setFog [.08,0.03,100];


_unit addEventHandler ["InventoryOpened", {
    _h = [] spawn {
        disableSerialization;
        waitUntil { !(isNull (findDisplay 602)) };
        _labButton = (findDisplay 602) ctrlCreate ["RscButton",2007];
        _labButton ctrlSetPosition  [0.367884 * safezoneW + safezoneX,0.782139 * safezoneH + safezoneY,0.12375 * safezoneW,0.033 * safezoneH];
        _labButton ctrlCommit 0;
        _labButton ctrlSetText "Lab Control";
        _labButton buttonSetAction "hint 'button pressed'; createDialog 'pAx_InventoryDialog'; execVM '\pAx_Base_DD\client\InventoryController.sqf';";

        _statButton = (findDisplay 602) ctrlCreate ["RscButton",2008];
        _statButton ctrlSetPosition  [0.570462 * safezoneW + safezoneX,0.782139 * safezoneH + safezoneY,0.12375 * safezoneW,0.033 * safezoneH];
        _statButton ctrlCommit 0;
        _statButton ctrlSetText "Check Status";
        _statButton buttonSetAction "hintSilent format ['Money: %1 \n\n Hydration: %2 ',call pAx_fnc_getClientMoney, [_unit] call pAx_fnc_getThirst];";
    };
}];

_unit setVariable ["pAx_ClientMoney", 0];
 _unit setVariable ["pAx_Thirst", 100];
_unit setVariable ["pAx_Addiction", 0];
_unit setVariable ["pAx_Addicted", 0];

_null = [_unit] ExecVM "\pAx_Base_DD\Client\aliveClient.sqf";


