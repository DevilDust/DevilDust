#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//Author: pAxton
//  items config for DevilDust
////////////////////////////////////////////////////////////////////

#define _ARMA_


//ndefs=13
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class weapons_f : items\config.bin{
class CfgPatches
{
	
	class pAx_Items_DD
	{
		units[] = {};
		weapons[] = {"mhl_MoronSalt_DevilDust","mhl_BatteryPackage_DevilDust","mhl_Baggy_DevilDust","mhl_Acetone_DevilDust", "mhl_StarterFluid_DevilDust","mhl_Sudafed_DevilDust","mhl_WaterBottle_DevilDust"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Structures_F"};
		
	};
};
class CfgWeapons
{
	class Default;
	class ItemCore: Default
	{
		type = 131072;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		muzzles[] = {};
		class Armory
		{
			disabled = 1;
		};
	};
		class InventoryItem_Base_F
	{
		scope = 0;
		type = 0;
	};
	class InventoryWaterBottleItem_Base_F: InventoryItem_Base_F
    	{
    		type = 201;
    	};
	class InventorySecurityCameraItem_Base_F: InventoryItem_Base_F
        	{
        		type = 201;

        	};
	class InventoryMoronSaltItem_Base_F: InventoryItem_Base_F
	{
		type = 201;
	};
	
	class InventoryBatteryPackageItem_Base_F: InventoryItem_Base_F
	{
		type = 201;
	};
	
	class InventoryBaggyItem_Base_F: InventoryItem_Base_F
	{
		type = 201;
	};
	
	class InventoryAcetoneItem_Base_F: InventoryItem_Base_F
	{
		type = 201;
	};
	
	class InventoryStarterFluidItem_Base_F: InventoryItem_Base_F
	{
		type = 201;
	};
	
	class InventorySudafedItem_Base_F: InventoryItem_Base_F
	{
		type = 201;
	};
	//601
	class WaterBottleItem: InventoryItem_Base_F
    	{
    		type =619;
    		allowedSlots[] = {901};
    	};

	class MoronSaltItem: InventoryItem_Base_F
	{
		type =619;
		allowedSlots[] = {901};
	};
	
	class BatteryPackageItem: InventoryItem_Base_F
	{
		type =619;
		allowedSlots[] = {901};
	};
	
	class BaggyItem: InventoryItem_Base_F
	{
		type =619;
		allowedSlots[] = {901};
	};
	
	class AcetoneItem: InventoryItem_Base_F
	{
		type =619;
		allowedSlots[] = {901};
	};
	
	class StarterFluidItem: InventoryItem_Base_F
	{
		type =619;
		allowedSlots[] = {901};
	};

	class SecurityCameraKit: InventoryItem_Base_F
	{
		type =619;
    	allowedSlots[] = {901};

	};
	
	class SudafedItem: InventoryItem_Base_F
	{
		type =619;
		allowedSlots[] = {901};
	};

	class nhl_ToolBox_DevilDust : ItemCore
		{
					scope = 2;
            		displayName = "Tool Box";
            		picture = "\pAx_Items_DD\data\UI\mhl_gear_MortonSalt_DevilDust";
            		model = "\pAx_Items_DD\mhl_ToolBox";
            		descriptionShort = "I'm Thirsty";
            		interactAction = 2;
            		interactText = "DRINK";
            		class ItemInfo: InventoryWaterBottleItem_Base_F

            		{
            			mass = 8;
            		};
		};
	class mhl_WaterBottle_DevilDust: ItemCore
    	{
    		scope = 2;
    		displayName = "Water Bottle";
    		picture = "\pAx_Items_DD\data\UI\mhl_gear_MortonSalt_DevilDust";
    		model = "\A3\Structures_F\Items\Food\BottlePlastic_V1_F.p3d";
    		descriptionShort = "I'm Thirsty";
    		interactAction = 2;
    		interactText = "DRINK";
    		class ItemInfo: InventoryWaterBottleItem_Base_F

    		{
    			mass = 8;
    		};
    	};
	class pAx_Camera_DevilDust: ItemCore
        	{
        		scope = 2;
        		displayName = "Security Camera Kit";
        		picture = "";
        		model = "\A3\Structures_F\Items\Luggage\Suitcase_F.p3d";
        		descriptionShort = "";
        		interactAction = 2;
        		interactText = "";
        		class ItemInfo: InventorySecurityCameraItem_Base_F

        		{
        			mass = 20;
						class EventHandlers
                                                		{
                                                		//	init = "[_this] call pAx_fnc_cameraSetup";
                    										onMouseButtonDblClick = "systemChat 'bg dbl'";



                                                		};
        		};

        	};

	class mhl_MoronSalt_DevilDust: ItemCore
	{  
		scope = 2;
		displayName = "Moron Salt";
		picture = "\pAx_Items_DD\data\UI\mhl_gear_MortonSalt_DevilDust";
		model = "\pAx_Items_DD\mhl_MoronSalt_DevilDust";
		descriptionShort = "Lets Kill some Snails";
		interactAction = 2;
		interactText = "DRINK";
		class ItemInfo: InventoryMoronSaltItem_Base_F
	
		{
			mass = 8;
		};
	};
	
	class mhl_BatteryPackage_DevilDust: ItemCore
	{
		scope = 2;
		displayName = "Battery Package";
		picture = "\pAx_Items_DD\data\UI\mhl_gear_BatteryPackage_DevilDust.paa";
		model = "\pAx_Items_DD\mhl_BatteryPackage_DevilDust";
		descriptionShort = "Made with Lithium";
		class ItemInfo: InventoryBatteryPackageItem_Base_F
	
		{
			mass = 4;
		};
	};
	
	class mhl_Baggy_DevilDust: ItemCore
	{
		scope = 2;
		displayName = "Baggy";
		picture = "\pAx_Items_DD\data\pAx_Baggy_DIFF_DevilDust.paa";////needs to be Updated to something cool
		model = "\pAx_Items_DD\baggy";
		descriptionShort = "Maybe I should try again";
		class ItemInfo: InventoryBaggyItem_Base_F
	
		{
			mass = 2;
		};
	};
	
	class mhl_Acetone_DevilDust: ItemCore
	{
		scope = 2;
		displayName = "Acetone";
		picture = "\pAx_Items_DD\data\UI\mhl_gear_Acetone_DevilDust.paa";
		model = "\pAx_Items_DD\Acetone";
		descriptionShort = "Message Needed";
		class ItemInfo: InventoryAcetoneItem_Base_F
	
		{
			mass = 10;
		};
	};
	
	class mhl_StarterFluid_DevilDust: ItemCore
	{
		scope = 2;
		displayName = "Starting Fluid";
		picture = "\pAx_Items_DD\data\UI\mhl_gear_StarterFluid_DevilDust.paa";
		model = "\pAx_Items_DD\StarterFluid";
		descriptionShort = "hmm.. Made with Ether";
		class ItemInfo: InventoryAcetoneItem_Base_F
	
		{
			mass = 8;
		};
	};
	
	class mhl_Sudafed_DevilDust: ItemCore
	{
		scope = 2;
		displayName = "Sudafed";
		picture = "\pAx_Items_DD\data\UI\mhl_gear_Sudafed_DevilDust.paa";
		model = "\pAx_Items_DD\Sudafed";
		descriptionShort = "insert message here";
		class ItemInfo: InventorySudafedItem_Base_F
	
		{
			mass = 2;
		};
	};

	class Binocular;
};


	