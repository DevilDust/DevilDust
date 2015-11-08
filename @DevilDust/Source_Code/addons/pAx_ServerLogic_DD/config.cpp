#include "BIS_AddonInfo.hpp"
#include "cfgFunctions.hpp"
////////////////////////////////////////////////////////////////////
//Author: pAxton
//  Server Logic config for DevilDust
////////////////////////////////////////////////////////////////////

#define _ARMA_


class cfgPatches
	{
    class pAx_ServerLogic_DD
    	{
    		units[] = {"pAx_Spawner_DevilDust"};
    		weapons[] = {};
    		requiredVersion = 0.1;
    		requiredAddons[] = {"A3_Structures_F", "pAx_DrugUser_DD"};
    	};
  	};
	class CfgVehicles
    {
    	class Furniture_base_F;
    	class pAx_Server_DevilDust: Furniture_base_F
    	{
    		mapSize = 0.97;
    		author = "pAxton";
    	//	_generalMacro = "Furniture_base_F";
    		displayName = "Spawner";
    		scope = 2;
    		scopeCurator = 0;
    		model = "\A3\Weapons_F\empty.p3d";
    		icon = "iconObject";
    		vehicleClass = "Furniture";
    		destrType = "DestructNo";
    		cost = 100;
    		class EventHandlers
                                                		{
                                                			init = "_this execVM '\pAx_ServerLogic_DD\scripts\spawner_init.sqf'";
                                                		};

    	};
    	class pAx_Spawner_DevilDust : pAx_Server_DevilDust
    	{
    		mapSize = 2.05;
        	author = "pAxton";
        	scope = 2;
        	scopeCurator = 0;
        	displayName = "mapInit";
        	icon = "iconObject_1x4";
        	class EventHandlers
                                    		{
                                    			init = "_this execVM '\pAx_ServerLogic_DD\scripts\spawner_init.sqf'";
                                    		};

        };
        class pAx_PlayerSpawner_DevilDust : pAx_Server_DevilDust
            	{
            		mapSize = 2.05;
                	author = "pAxton";
                	scope = 2;
                	scopeCurator = 0;
                	displayName = "SpawnTrig";
                	icon = "iconObject_1x4";
                	class EventHandlers
                                            		{
                                            			init = "_this execVM '\pAx_ServerLogic_DD\scripts\playerSpawner_init.sqf'";
                                            		};

                };
        class Land_cargo_house_slum_F;
        class pAx_GunShop_DevilDust : Land_cargo_house_slum_F
            	{
            		mapSize = 2.05;
                	author = "pAxton";
                	//_generalMacro = "Land_Bench_F";
                	scope = 2;
                	scopeCurator = 0;
                	displayName = "";
                	icon = "iconObject_1x4";
                	class EventHandlers
                                            		{
                                            			init = "_this execVM '\pAx_ServerLogic_DD\scripts\gunShop_init.sqf'";
                                            		};

                };



};
