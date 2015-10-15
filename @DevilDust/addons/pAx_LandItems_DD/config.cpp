#include "BIS_AddonInfo.hpp"
////////////////////////////////////////////////////////////////////
//Author: pAxton
//  Land items config for DevilDust
////////////////////////////////////////////////////////////////////

#define _ARMA_
//#include <\x\cba\addons\main\script_macros_common.hpp>

class cfgPatches
	{
    class pAx_LandItems_DD
    	{
    		units[] = {"pAx_Lab_DevilDust"};
    		weapons[] = {};
    		requiredVersion = 0.1;
    		requiredAddons[] = {"A3_Structures_F"};
    	};
  	};
	class CfgVehicles
    {
    	class Furniture_base_F;
    	class pAx_Land_DevilDust_F: Furniture_base_F
    	{
    		mapSize = 0.97;
    		author = "pAxton";
    		//_generalMacro = "Furniture_base_F";
    		scope = 0;
    		scopeCurator = 0;
    		displayName = "";
    		model = "\A3\Weapons_F\empty.p3d";
    		icon = "iconObject";
    		vehicleClass = "Furniture";
    		destrType = "DestructNo";
    		cost = 100;
    	};
    	class pAx_Lab_DevilDust_F : pAx_Land_DevilDust_F
    	{
    		mapSize = 2.05;
        	author = "pAxton";
        	//_generalMacro = "Land_Bench_F";
        	scope = 2;
        	scopeCurator = 2;
        	displayName = "Meth Lab";
        	model = "\pAx_LandItems_DD\labPlaceHolder.p3d";
        	icon = "iconObject_1x4";
        };


};

