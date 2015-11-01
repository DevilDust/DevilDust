////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.47
//Sat Oct 10 20:21:17 2015 : Source 'file' date Sat Oct 10 20:21:17 2015
//http://dev-heaven.net/projects/list_files/mikero-pbodll
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

//Class soft_f : Offroad_01\config.bin{
class DefaultEventhandlers;
class CfgPatches
{
	class A3_Soft_F_Offroad_01
	{
		units[] = {"C_Offroad_01_F","C_Offroad_01_red_F","C_Offroad_01_sand_F","C_Offroad_01_white_F","C_Offroad_01_blue_F","C_Offroad_01_darkred_F","C_Offroad_01_bluecustom_F","C_Offroad_luxe_F","C_Offroad_default_F","C_Offroad_stripped_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				disableSoundAttenuation = 1;
				class ViewOptics;
			};
		};
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitEngine;
			class HitGlass1{};
			class HitGlass2;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class Offroad_01_base_F: Car_F
	{
		mapSize = 7.14;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Offroad_01_base_F";
		displayName = "$STR_A3_CfgVehicles_Offroad_Base0";
		nameSound = "veh_car";
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_Offroad_Base_Library0";
		};
		model = "\A3\soft_f\Offroad_01\Offroad_01_unarmed_F";
		picture = "\A3\soft_f\Offroad_01\Data\UI\Offroad_01_base_CA.paa";
		Icon = "\A3\soft_f\Offroad_01\Data\UI\map_offroad_01_CA.paa";
		accuracy = 0.25;
		transportSoldier = 5;
		transportMaxBackpacks = 0;
		armor = 30;
		armorLights = 0.02;
		fuelExplosionPower = 2;
		cost = 50000;
		weapons[] = {"SportCarHorn"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		unitInfoType = "RscUnitInfoNoWeapon";
		maximumLoad = 4000;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
		showNVGCargo[] = {0,1};
		soundAttenuationCargo[] = {1,0};
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa","\A3\soft_f\Offroad_01\data\Offroad_01_ext_co.paa"};
		class AnimationSources: AnimationSources
		{
			class HideDoor1
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideDoor10";
				author = "$STR_A3_Bohemia_Interactive";
				source = "Proxy";
				initPhase = 0;
				mass = -6.5;
			};
			class HideDoor2: HideDoor1
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideDoor20";
				author = "$STR_A3_Bohemia_Interactive";
				forceAnimatePhase = 1;
				forceAnimate[] = {"HideGlass2",1};
			};
			class HideGlass2
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideGlass20";
				author = "$STR_A3_Bohemia_Interactive";
				source = "Doors";
				initPhase = 0;
				mass = -0.75;
				scope = 0;
			};
			class HideDoor3: HideDoor1
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideDoor30";
				author = "$STR_A3_Bohemia_Interactive";
				mass = -4;
			};
			class HideBackpacks
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideBackpacks0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "Proxy";
				initPhase = 1;
				mass = -12;
			};
			class HideBumper1
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideBumper10";
				author = "$STR_A3_Bohemia_Interactive";
				source = "Proxy";
				initPhase = 1;
				forceAnimatePhase = 0;
				forceAnimate[] = {"HideBumper2",1};
				mass = -50;
			};
			class HideBumper2: HideBumper1
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideBumper20";
				author = "$STR_A3_Bohemia_Interactive";
				forceAnimate[] = {"HideBumper1",1};
				mass = -90;
			};
			class HideConstruction
			{
				displayName = "$STR_A3_CfgVehicles_Offroad_01_base_F_AnimationSources_HideConstruction0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "Proxy";
				initPhase = 1;
				mass = -105;
				forceAnimatePhase = 0;
				forceAnimate[] = {"hideServices",1};
			};
			class Doors
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Proxy
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 1;
			};
			class Beacons
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Destruct
			{
				source = "user";
				animPeriod = 0;
				initPhase = 1;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitFuel: HitFuel
			{
				name = "palivo";
				armor = 2;
				radius = 0.5;
			};
			class HitEngine: HitEngine
			{
				name = "motor";
				armor = 4;
				radius = 0.25;
			};
			class HitBody: HitBody
			{
				visual = "camo";
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
		};
		precision = 10;
		brakeDistance = 50;
		turnCoef = 3.5;
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst = 0.7;
			turnIncreaseLinear = 2.5;
			turnIncreaseTime = 0.0;
			turnDecreaseConst = 8.0;
			turnDecreaseLinear = 0.0;
			turnDecreaseTime = 0.0;
			maxTurnHundred = 1.0;
		};
		driverAction = "driver_offroad01";
		cargoAction[] = {"passenger_low01","passenger_flatground_leanleft","passenger_flatground_leanright","passenger_flatground_crosslegs","passenger_flatground_leanleft"};
		cargoIsCoDriver[] = {1,0};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2","Compartment2","Compartment2","Compartment2"};
		fireResistance = 5;
		wheelDestroyRadiusCoef = 0.75;
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",0.4466836,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",0.4466836,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_start",0.31622776,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_start",0.39810717,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_stop",0.31622776,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_stop",0.39810717,1.0,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		armorCrash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		armorCrash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		armorCrash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		armorCrash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		Crash0[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",1.0,1,200};
		Crash1[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",1.0,1,200};
		Crash2[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",1.0,1,200};
		Crash3[] = {"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",1.0,1,200};
		soundCrashes[] = {"Crash0",0.25,"Crash1",0.25,"Crash2",0.25,"Crash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle",0.31622776,1,100};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1",0.31622776,1,200};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2",0.35481337,1,225};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3",0.35481337,1,250};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4",0.39810717,1,275};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5",0.4466836,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6",0.5011872,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7",0.56234133,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle",0.5011872,1,200};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1",0.56234133,1,250};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2",0.63095737,1,275};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3",0.70794576,1,300};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4",0.7943282,1,325};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5",0.8912509,1,350};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6",1.0,1,375};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7",1.1220185,1,400};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle",0.2238721,1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1",0.25118864,1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2",0.17782794,1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3",0.31622776,1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4",0.35481337,1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5",0.39810717,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6",0.39810717,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7",0.4466836,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle",0.31622776,1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1",0.35481337,1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2",0.39810717,1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3",0.4466836,1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4",0.5011872,1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5",0.56234133,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6",0.63095737,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7",0.70794576,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.56234133,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.15848932,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class IntMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 200;
		fuelCapacity = 45;
		wheelCircumference = 2.805;
		antiRollbarForceCoef = 1.9;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 10;
		antiRollbarSpeedMax = 150;
		idleRpm = 400;
		redRpm = 3500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.5*(0.58^1)","D3","4.5*(0.58^2)","D4","4.5*(0.58^3)","D5","4.5*(0.59^4)","D6","4.5*(0.6^5)"};
			TransmissionRatios[] = {"High",7};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.85;
			gearUpMinCoef = 0.65;
			gearDownMinCoef = 0.55;
			transmissionDelay = 2;
		};
		simulation = "carx";
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 20.0;
		enginePower = 150;
		maxOmega = 450;
		peakTorque = 425;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.5;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{ "(0/3500)","(0/425)" },{ "(500/3500)","(200/425)" },{ "(1500/3500)","(405/425)" },{ "(2000/3500)","(425/425)" },{ "(2500/3500)","(350/425)" },{ "(3000/3500)","(300/425)" },{ "(6000/3500)","(0/425)" }};
		changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
		switchTime = 0.31;
		latency = 1.5;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 30;
				MOI = 6;
				dampingRate = 1;
				dampingRateDamaged = 5;
				dampingRateInAir = 0.8;
				dampingRateDestroyed = 5000;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.05;
				sprungMass = 400;
				springStrength = 14400;
				springDamperRate = "1920*2";
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 2.5;
				latStiffY = 18;
				frictionVsSlipGraph[] = {{ 0,1.75 },{ 0.5,1.35 },{ 1,1.2 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
				frictionVsSlipGraph[] = {{ 0,2 },{ 0.5,1.53 },{ 1,1.36 }};
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
				frictionVsSlipGraph[] = {{ 0,2.3 },{ 0.5,2.1 },{ 1,2.0 }};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustEffectOffroad";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustEffectOffroad";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\soft_F\Offroad_01\Data\Offroad_01_ext.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_destruct.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 0;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 60;
					hardLimitEnd = 120;
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
			class Right2: Right
			{
				position = "light_R_flare";
				useFlare = 1;
			};
			class Left2: Left
			{
				position = "light_L_flare";
				useFlare = 1;
			};
			class Right3: Right2
			{
				position = "light_R_flare2";
				flareSize = 0.3;
			};
			class Left3: Left2
			{
				position = "light_L_flare2";
				flareSize = 0.3;
			};
		};
		aggregateReflectors[] = {{ "Left","Right","Left2","Right2","Left3","Right3" }};
		class UserActions
		{
			class beacons_start
			{
				userActionID = 50;
				displayName = "$STR_A3_CfgVehicles_beacons_on";
				displayNameDefault = "$STR_A3_CfgVehicles_beacons_on";
				position = "temp";
				priority = 1.5;
				radius = 2;
				animPeriod = 2;
				onlyForplayer = 0;
				condition = "this animationPhase ""BeaconsStart"" < 0.5 AND Alive this AND driver this == player AND this animationPhase ""hidePolice"" < 0.5";
				statement = "this animate [""BeaconsStart"",1];";
			};
			class beacons_stop: beacons_start
			{
				userActionID = 51;
				displayName = "$STR_A3_CfgVehicles_beacons_off";
				displayNameDefault = "$STR_A3_CfgVehicles_beacons_off";
				condition = "this animationPhase ""BeaconsStart"" > 0.5 AND Alive this AND driver this == player AND this animationPhase ""hidePolice"" < 0.5";
				statement = "this animate [""BeaconsStart"",0];";
			};
		};
	};
	class Offroad_01_unarmed_base_F: Offroad_01_base_F
	{
		transportSoldier = 1;
		cargoProxyIndexes[] = {1};
		getInProxyOrder[] = {1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments = "Compartment2";
				proxyIndex = 2;
				maxElev = 45;
				minElev = -5;
				maxTurn = 75;
				minTurn = -75;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_2";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				proxyIndex = 3;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner = "pos cargo RF";
				memoryPointsGetInGunnerDir = "pos cargo RF dir";
				proxyIndex = 4;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {5,75};
					CargoTurret_02[] = {-15,75};
					CargoTurret_04[] = {-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction = "passenger_flatground_4";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner = "pos cargo LF";
				memoryPointsGetInGunnerDir = "pos cargo LF dir";
				proxyIndex = 5;
				minElev = 0;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-75,15};
					CargoTurret_02[] = {-75,-5};
					CargoTurret_03[] = {-75,75};
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class hidePolice
			{
				displayName = "$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_hidePolice0";
				source = "user";
				initPhase = 1;
				author = "$STR_A3_Bohemia_Interactive";
				forceAnimatePhase = 0;
				forceAnimate[] = {"HideServices",1};
				mass = -4;
			};
			class HideServices
			{
				displayName = "$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_HideServices0";
				author = "$STR_A3_Bohemia_Interactive";
				source = "Proxy";
				initPhase = 1;
				lockCargoAnimationPhase = 0;
				lockCargo[] = {3,4};
				forceAnimatePhase = 0;
				forceAnimate[] = {"hideConstruction",1,"hidebBumper1",1,"hidebBumper2",1};
			};
			class BeaconsStart
			{
				displayName = "$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_BeaconsStart0";
				author = "$STR_A3_Bohemia_Interactive";
				initPhase = 0;
			};
			class BeaconsServicesStart
			{
				displayName = "$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_BeaconsServicesStart0";
				author = "$STR_A3_Bohemia_Interactive";
				initPhase = 0;
			};
		};
	};
	class Offroad_01_civil_base_F: Offroad_01_unarmed_base_F
	{
		features = "Randomization: Yes, 6 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 5)						<br />Camo selections: 2 - the body, wheels and accessories						<br />Script door sources: None						<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction						<br />Executed scripts: \A3\soft_F\Offroad_01\scripts\randomize.sqf 						<br />Firing from vehicles: Positions 2 to 5						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 5";
		transportSoldier = 1;
		cargoProxyIndexes[] = {1};
		getInProxyOrder[] = {1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments = "Compartment2";
				proxyIndex = 2;
				maxElev = 45;
				minElev = -5;
				maxTurn = 75;
				minTurn = -75;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_2";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				proxyIndex = 3;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner = "pos cargo RF";
				memoryPointsGetInGunnerDir = "pos cargo RF dir";
				proxyIndex = 4;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {5,75};
					CargoTurret_02[] = {-15,75};
					CargoTurret_04[] = {-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction = "passenger_flatground_4";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner = "pos cargo LF";
				memoryPointsGetInGunnerDir = "pos cargo LF dir";
				proxyIndex = 5;
				minElev = 0;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-75,15};
					CargoTurret_02[] = {-75,-5};
					CargoTurret_03[] = {-75,75};
				};
			};
		};
		accuracy = 1.25;
		showNVGCargo[] = {0,1};
		soundAttenuationCargo[] = {1,0};
		class TextureSources
		{
			class red
			{
				displayName = "$STR_A3_TEXTURESOURCES_RED0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class beige
			{
				displayName = "$STR_A3_TEXTURESOURCES_BEIGE0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class white
			{
				displayName = "$STR_A3_TEXTURESOURCES_WHITE0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class blue
			{
				displayName = "$STR_A3_TEXTURESOURCES_BLUE0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class darkred
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_darkred0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class bluecustom
			{
				displayName = "$STR_A3_TEXTURESOURCES_BLUECUSTOM0";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};
				factions[] = {"CIV_F"};
			};
			class guerilla_01
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_010";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_02
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_020";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_03
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_030";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_04
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_040";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_05
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_050";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_06
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_060";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_07
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_070";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_08
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_080";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_09
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_090";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_10
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_100";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_11
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_110";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_12
			{
				displayName = "$STR_A3_Offroad_01_civil_base_F_TextureSources_guerilla_120";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
		};
		textureList[] = {"Red",1,"Beige",1,"White",1,"Blue",1,"Darkred",1,"Bluecustom",1};
		animationList[] = {"HideBumper1",0.17,"HideBumper2",0.5,"HideConstruction",0.1,"HideDoor3",0.33};
	};
	class C_Offroad_01_F: Offroad_01_civil_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Offroad_01_F";
		scope = 2;
		crew = "C_man_1";
		side = 3;
		faction = "CIV_F";
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
	};
	class Offroad_01_repair_base_F: Offroad_01_base_F
	{
		features = "Randomization: Yes, 6 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 5)						<br />Camo selections: 2 - the body, wheels and accessories						<br />Script door sources: None						<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction						<br />Executed scripts: \A3\Soft_F_Bootcamp\Offroad_01\scripts\repair_init.sqf 						<br />Firing from vehicles: Positions 2 to 5						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 5";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Offroad_01_repair_base_F";
		scope = 0;
		scopeCurator = 0;
		displayName = "$STR_A3_CfgVehicles_Offroad_01_repair_base_F0";
		icon = "\A3\Soft_F_Bootcamp\Offroad_01\Data\UI\map_Offroad_01_repair_CA.paa";
		picture = "\A3\Soft_F_Bootcamp\Offroad_01\Data\UI\Offroad_01_repair_CA.paa";
		vehicleClass = "Support";
		transportSoldier = 3;
		transportRepair = 200000000;
		supplyRadius = 6;
		class AnimationSources: AnimationSources
		{
			class HideBumper1: HideBumper1
			{
				scope = 0;
			};
			class HideBumper2: HideBumper2
			{
				scope = 0;
			};
			class hideConstruction: HideConstruction
			{
				scope = 0;
			};
			class HideBackpacks: HideBackpacks
			{
				scope = 0;
			};
			class BeaconsServicesStart
			{
				displayName = "$STR_A3_Offroad_01_unarmed_base_F_AnimationSources_BeaconsServicesStart0";
				author = "$STR_A3_Bohemia_Interactive";
				initPhase = 0;
				scope = 0;
			};
		};
		class Turrets{};
		hiddenSelections[] = {"camo","camo2"};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
	};
	class Offroad_01_repair_military_base_F: Offroad_01_repair_base_F
	{
		class textureSources
		{
			class guerilla_01
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_010";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_02
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_020";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_03
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_030";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_04
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_040";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_05
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_050";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_06
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_060";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_07
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_070";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_08
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_080";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_09
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_090";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_10
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_100";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_11
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_110";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_12
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_120";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
		};
		textureList[] = {"guerilla_01",1,"guerilla_02",1,"guerilla_03",1,"guerilla_04",1,"guerilla_05",1,"guerilla_06",1,"guerilla_07",1,"guerilla_08",1,"guerilla_09",1,"guerilla_10",1,"guerilla_11",1,"guerilla_12",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333};
	};
	class C_Offroad_01_repair_F: Offroad_01_repair_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "C_Offroad_01_repair_F";
		scope = 2;
		scopeCurator = 2;
		model = "\A3\Soft_F_Bootcamp\Offroad_01\Offroad_01_repair_CIV_F.p3d";
		side = 3;
		faction = "CIV_F";
		crew = "C_man_1";
		accuracy = 1.25;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext.rvmat","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat"};
		class Damage
		{
			tex[] = {"A3\Soft_F\Offroad_01\Data\Offroad_01_proxy_alpha_CA.paa","A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_repair_IG_beacons_CA.paa"};
			mat[] = {"A3\soft_F\Offroad_01\Data\Offroad_01_ext.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_plastic.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_ext_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy_alpha.rvmat","A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_repair_IG_beacons.rvmat","A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_repair_IG_beacons.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
		};
	};
	class B_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		features = "Randomization: Yes, 12 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 11)						<br />Camo selections: 2 - the body, wheels and accessories						<br />Script door sources: None						<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction						<br />Executed scripts: \A3\Soft_F_Bootcamp\Offroad_01\scripts\randomize_colors.sqf, \A3\Soft_F_Bootcamp\Offroad_01\scripts\repair_init.sqf 						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 3";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_G_Offroad_01_repair_F";
		scope = 2;
		scopeCurator = 2;
		model = "\A3\Soft_F_Bootcamp\Offroad_01\Offroad_01_repair_IG_F.p3d";
		side = 1;
		faction = "BLU_G_F";
		crew = "B_G_Soldier_F";
		accuracy = 1.25;
		hiddenSelectionsTextures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG.rvmat","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG_plastic.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\soft_F_bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG.rvmat","A3\soft_F_bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG_damage.rvmat","A3\soft_F_bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_base_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board_damage.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_int_board_destruct.rvmat","A3\soft_F_bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG_plastic.rvmat","A3\soft_F_bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG_damage.rvmat","A3\soft_F_bootcamp\Offroad_01\Data\Offroad_01_ext_repair_IG_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy_destruct.rvmat","A3\soft_F\Offroad_01\Data\Offroad_01_proxy_destruct.rvmat","A3\data_f\glass_veh.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\glass_veh_int.rvmat","A3\data_f\Glass_veh_damage.rvmat","A3\data_f\Glass_veh_damage.rvmat"};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
		};
	};
	class O_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_G_Offroad_01_repair_F";
		scope = 1;
		scopeCurator = 0;
		side = 0;
		faction = "OPF_G_F";
		crew = "O_G_Soldier_F";
	};
	class I_G_Offroad_01_repair_F: Offroad_01_repair_military_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "B_G_Offroad_01_repair_F";
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";
	};
	class Offroad_01_military_base_F: Offroad_01_base_F
	{
		class textureSources
		{
			class guerilla_01
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_010";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_02
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_020";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_03
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_030";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_04
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_040";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_05
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_050";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_06
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_060";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_07
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_070";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_08
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_080";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_09
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_090";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_10
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_100";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_11
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_110";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
			class guerilla_12
			{
				displayName = "$STR_A3_OFFROAD_01_CIVIL_BASE_F_TEXTURESOURCES_GUERILLA_120";
				author = "$STR_A3_Bohemia_Interactive";
				textures[] = {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};
				faction[] = {"BLU_F_F","OPF_G_F","IND_G_F"};
			};
		};
		textureList[] = {"guerilla_01",1,"guerilla_02",1,"guerilla_03",1,"guerilla_04",1,"guerilla_05",1,"guerilla_06",1,"guerilla_07",1,"guerilla_08",1,"guerilla_09",1,"guerilla_10",1,"guerilla_11",1,"guerilla_12",1};
		animationList[] = {"HideDoor1",0.333333,"HideDoor2",0.333333,"HideDoor3",0.333333,"HideBumper1",0.5,"HideBumper2",0.5};
	};
	class I_G_Offroad_01_F: Offroad_01_military_base_F
	{
		features = "Randomization: Yes, 12 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 11)						<br />Camo selections: 2 - the body, wheels and accessories						<br />Script door sources: None						<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction						<br />Executed scripts: \A3\Soft_F_Bootcamp\Offroad_01\scripts\randomize_colors.sqf 						<br />Firing from vehicles: Positions 2 to 5						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 5";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_G_Offroad_01_F";
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";
		typicalCargo[] = {"I_G_Soldier_F"};
		accuracy = 1.25;
		transportSoldier = 1;
		cargoProxyIndexes[] = {1};
		getInProxyOrder[] = {1,2,3,4,5};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_flatground_3";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R2";
				gunnerCompartments = "Compartment2";
				proxyIndex = 2;
				maxElev = 45;
				minElev = -5;
				maxTurn = 75;
				minTurn = -75;
				isPersonTurret = 1;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {-65,75};
				};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_2";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L2";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				proxyIndex = 3;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-75,65};
				};
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerAction = "passenger_flatground_1";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R1";
				memoryPointsGetInGunner = "pos cargo RF";
				memoryPointsGetInGunnerDir = "pos cargo RF dir";
				proxyIndex = 4;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {5,75};
					CargoTurret_02[] = {-15,75};
					CargoTurret_04[] = {-75,75};
				};
			};
			class CargoTurret_04: CargoTurret_03
			{
				gunnerAction = "passenger_flatground_4";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L1";
				memoryPointsGetInGunner = "pos cargo LF";
				memoryPointsGetInGunnerDir = "pos cargo LF dir";
				proxyIndex = 5;
				minElev = 0;
				class dynamicViewLimits
				{
					CargoTurret_01[] = {-75,15};
					CargoTurret_02[] = {-75,-5};
					CargoTurret_03[] = {-75,75};
				};
			};
		};
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
	class Offroad_01_armed_base_F: Offroad_01_military_base_F
	{
		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_vehicle_armedcar_s"};
				speechPlural[] = {"veh_vehicle_armedcar_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_vehicle_armedcar_s";
		textPlural = "$STR_A3_nameSound_veh_vehicle_armedcar_p";
		nameSound = "veh_vehicle_armedcar_s";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Offroad_01_armed_base_F";
		displayName = "$STR_A3_CfgVehicles_Offroad_armed_Base0";
		model = "\A3\Soft_F_Gamma\Offroad_01\Offroad_01_hmg_F";
		picture = "\A3\Soft_F_Gamma\Offroad_01\Data\UI\Offroad_01_armed_CA.paa";
		Icon = "\A3\Soft_F_Gamma\Offroad_01\Data\UI\map_offroad_armed_CA.paa";
		unitInfoType = "RscUnitInfoTank";
		radarType = 8;
		driverCanSee = "2+4+8+16+32";
		gunnerCanSee = "2+4+8+16+32";
		hiddenSelectionsTextures[] = {"\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa","\A3\Soft_F\Offroad_01\Data\Offroad_01_ext_CO.paa"};
		transportSoldier = 1;
		armor = 32;
		cost = 500000;
		threat[] = {0.9,0.3,0.1};
		showNVGGunner = 1;
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "HMG_M2";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "HMG_M2";
			};
			class Revolving
			{
				source = "revolving";
				weapon = "HMG_M2";
			};
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "HMG_M2";
			};
			class muzzle_hide_MG
			{
				source = "reload";
				weapon = "HMG_M2";
			};
		};
		class Turrets: Turrets
		{
			class M2_Turret: MainTurret
			{
				gunnerLeftHandAnimName = "handle_L";
				gunnerRightHandAnimName = "handle_R";
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				weapons[] = {"HMG_M2"};
				magazines[] = {"100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow","100Rnd_127x99_mag_Tracer_Yellow"};
				minElev = -10;
				maxElev = 40;
				soundServo[] = {"A3\sounds_f\dummysound",1e-006,1.0};
				gunnerAction = "gunner_standup01";
				gunnerCompartments = "Compartment2";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				stabilizedInAxes = 0;
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGunnerOptics = "gunnerview";
				optics = 0;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner: ViewOptics{};
			};
		};
	};
	class I_G_Offroad_01_armed_F: Offroad_01_armed_base_F
	{
		features = "Randomization: Yes, 12 skins, disabled by: this setVariable [""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 11)						<br />Camo selections: 2 - the body, wheels and accessories						<br />Script door sources: None						<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction						<br />Executed scripts: \A3\Soft_F_Bootcamp\Offroad_01\scripts\randomize_colors.sqf 						<br />Firing from vehicles: Just the turret						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "I_G_Offroad_01_armed_F";
		scope = 1;
		scopeCurator = 0;
		side = 2;
		faction = "IND_G_F";
		crew = "I_G_Soldier_F";
		typicalCargo[] = {"I_G_Soldier_F"};
		accuracy = 1.25;
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], true] call bis_fnc_initVehicle;};";
			killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled'); _this select 0 animate [""DamageUnHideConstruction"",0];";
		};
	};
	class B_G_Offroad_01_F: I_G_Offroad_01_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		crew = "B_G_Soldier_F";
		author = "$STR_A3_Bohemia_Interactive";
	};
	class O_G_Offroad_01_F: I_G_Offroad_01_F
	{
		scope = 1;
		side = 0;
		faction = "OPF_G_F";
		crew = "O_G_Soldier_F";
		author = "$STR_A3_Bohemia_Interactive";
	};
	class B_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "BLU_G_F";
		crew = "B_G_Soldier_F";
		author = "$STR_A3_Bohemia_Interactive";
	};
	class O_G_Offroad_01_armed_F: I_G_Offroad_01_armed_F
	{
		scope = 1;
		side = 0;
		faction = "OPF_G_F";
		crew = "O_G_Soldier_F";
		author = "$STR_A3_Bohemia_Interactive";
	};
	class C_Offroad_01_red_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_01_red_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		textureList[] = {"red",1};
	};
	class C_Offroad_01_sand_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_01_sand_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		textureList[] = {"sand",1};
	};
	class C_Offroad_01_white_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_01_white_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		textureList[] = {"white",1};
	};
	class C_Offroad_01_blue_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_01_blue_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		textureList[] = {"blue",1};
	};
	class C_Offroad_01_darkred_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_01_darkred_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		textureList[] = {"darkred",1};
	};
	class C_Offroad_01_bluecustom_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_01_bluecustom_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		textureList[] = {"bluecustom",1};
	};
	class C_Offroad_luxe_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_luxe_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		animationList[] = {"HideBumper1",1,"HideBumper2",0,"HideConstruction",0,"HideDoor1",0,"HideDoor2",0,"HideGlass2",0,"HideBackpacks",1,"HideDoor3",0};
	};
	class C_Offroad_default_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_default_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		animationList[] = {"HideBumper1",1,"HideBumper2",1,"HideConstruction",1,"HideDoor1",0,"HideDoor2",0,"HideGlass2",0,"HideBackpacks",1,"HideDoor3",0};
	};
	class C_Offroad_stripped_F: C_Offroad_01_F
	{
		displayName = "$STR_A3_C_Offroad_stripped_F0";
		scope = 1;
		scopeCurator = 0;
		author = "$STR_A3_Bohemia_Interactive";
		animationList[] = {"HideBumper1",1,"HideBumper2",1,"HideConstruction",1,"HideDoor1",1,"HideDoor2",1,"HideGlass2",1,"HideBackpacks",1,"HideDoor3",1};
	};

    	class pAx_Truck_DevilDust: C_Offroad_01_F
    	{
    			displayName = "$STR_A3_C_Offroad_01_bluecustom_F0";
                		scope = 1;
                		scopeCurator = 0;
                		author = "$STR_A3_Bohemia_Interactive";
                		textureList[] = {"bluecustom",1};

        		forceInGarage = 1;
        		thrustDelay = 0.1;
        		brakeIdleSpeed = 1.78;
        		maxSpeed = 325;
        		fuelCapacity = 45;
        		wheelCircumference = 2.277;
        		antiRollbarForceCoef = 0;
        		antiRollbarForceLimit = 0;
        		antiRollbarSpeedMin = 0;
        		antiRollbarSpeedMax = 0;
        		acceleration = 15;
        		idleRpm = 900;
        		redRpm = 6900;
        		class complexGearbox
        		{
        			GearboxRatios[] = {"R1",-3.231,"N",0,"D1",4.462,"D2",3.57,"D3",2.571,"D4",1.97,"D5",1.601,"D6",0.9,"D7",0.65};
        			TransmissionRatios[] = {"High",4.111};
        			gearBoxMode = "auto";
        			moveOffGear = 1;
        			driveString = "D";
        			neutralString = "N";
        			reverseString = "R";
        			transmissionDelay = 0.01;
        		};
        		simulation = "carx";
        		dampersBumpCoef = 0.01;
        		differentialType = "all_limited";
        		frontRearSplit = 0.3;
        		frontBias = 1.5;
        		rearBias = 1.5;
        		centreBias = 2.5;
        		clutchStrength = 55.0;
        		enginePower = 350;
        		maxOmega = 720;
        		peakTorque = 800;
        		dampingRateFullThrottle = 0.03;
        		dampingRateZeroThrottleClutchEngaged = 0.35;
        		dampingRateZeroThrottleClutchDisengaged = 0.05;
        		torqueCurve[] = {{ 0.0,0.0 },{ 0.2,0.65 },{ 0.3,0.8 },{ 0.4,0.95 },{ 0.6,1.0 },{ 0.7,0.95 },{ 0.9,0.9 },{ 1.0,0.5 }};
        		changeGearMinEffectivity[] = {0.95,0.15,0.98,0.98,0.98,0.98,0.97,0.95,0.95};
        		switchTime = 0.11;
        		latency = 1.0;
    	};

};
//};
