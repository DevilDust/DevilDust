#include "BIS_AddonInfo.hpp"
#include "cfgFunctions.hpp"
////////////////////////////////////////////////////////////////////
//Author: pAxton
//  DevilDust for Breaking Arma
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class characters_f : Civil\config.bin{
class CfgPatches
{
	class pAx_DrugUser_DD
	{
		units[] = {"pAx_C_man_1","pAx_C_man_2","pAx_C_man_3"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_Gamma", "pAx_Base_DD"};
	};
};
class cfgFactionClasses
{
    class DrugUser_Faction
    {
        displayName = "Drug Users";
        priority = 3; // Position in list.
        side = 1; // Opfor = 0, Blufor = 1, Indep = 2.
        icon = ""; //Custom Icon
    };
};


class CfgVehicles
{
	class B_G_Soldier_M_F;
	class pAx_C_man_1: B_G_Soldier_M_F
		{
			displayname = "Druggy 1";
			faction = "DrugUser_Faction";
			side = 0;
			//hiddenSelectionsTextures[] = {"DrugUser\data\DrugUser_cloth1_nohq.paa"};
			//SLX_XEH_DISABLED = 0;
			class EventHandlers
            		{
            			init = "_this execVM '\pAx_DrugUser_DD\druguser_init.sqf'";
            			HitPart =  "_this call pAx_fnc_handleCivHit";

            		};
		};
		class B_G_Soldier_LAT_F;
		class pAx_C_man_2: B_G_Soldier_LAT_F
        		{
        			displayname = "Druggy 2";
        			faction = "DrugUser_Faction";
                    side = 0;
        			//hiddenSelectionsTextures[] = {"DrugUser\data\DrugUser_cloth1_nohq.paa"};
        			//SLX_XEH_DISABLED = 0;
        			class EventHandlers
                    		{
                    			init = "_this execVM '\pAx_DrugUser_DD\druguser_init.sqf'";
                    			HitPart =  "_this call pAx_fnc_handleCivHit";
                    		};
        		};
        class B_G_Soldier_exp_F;
        class pAx_C_man_3: B_G_Soldier_exp_F
               	{
                	displayname = "Druggy 3";
                	faction = "DrugUser_Faction";
                    side = 0;
                	//hiddenSelectionsTextures[] = {"DrugUser\data\DrugUser_cloth1_nohq.paa"};
                	//SLX_XEH_DISABLED = 0;
                	class EventHandlers
                          	{
                          		init = "_this execVM '\pAx_DrugUser_DD\druguser_init.sqf'";
                             	HitPart =  "_this call pAx_fnc_handleCivHit";
                           	};
                };


};
