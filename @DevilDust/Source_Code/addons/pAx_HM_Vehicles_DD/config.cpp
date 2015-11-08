////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.47
//Fri Oct 16 16:01:36 2015 : Source 'file' date Fri Oct 16 16:01:36 2015
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

//Class soft_f_epc : Truck_03\config.bin{
class CfgPatches
{
	class pAx_Soft_F_EPC_Truck_03
	{
		units[] = {"O_Truck_03_transport_F","O_Truck_03_covered_F","O_Truck_03_repair_F","O_Truck_03_ammo_F","O_Truck_03_fuel_F","O_Truck_03_medical_F","O_Truck_03_device_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints;
		class UserActions;
	};
	class pAx_Truck_F: Car_F
	{

		class ViewPilot;
		class HitPoints: HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
		};


	};
	class pAx_Truck_03_base_F: pAx_Truck_F
	{
		features = "Randomization: No						<br />Camo selections: 3 - cabin, wheels, back						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: Positions 6 and 12						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 13";
		mapSize = 10.93;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Truck_03_base_F";
		HeadAimDown = 5;
		displayName = "$STR_A3_CfgVehicles_Truck_03_base_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_transport_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_transport_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Transport_CA.paa";
		cost = 50000;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		weapons[] = {"TruckHorn3"};
		magazines[] = {};
		damageResistance = 0.0048;
		accuracy = 0.3;
		terrainCoef = 1.8;
		wheelCircumference = 3.776;
		turnCoef = 3.7;
		steerAheadSimul = 0.5;
		steerAheadPlan = 0.38;
		transportSoldier = 13;
		transportAmmo = 0;
		transportRepair = 0;
		armor = 200;
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor = 1.0;
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 1.5;
				radius = 0.25;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.45;
			};
			class HitBody: HitBody
			{
				armor = 1.0;
				passThrough = 1;
				minimalHit = 0.0;
				explosionShielding = 1.5;
				radius = 0.33;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLMWheel: HitLMWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
				name = "wheel_1_3_steering";
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRMWheel: HitRMWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
				name = "wheel_2_3_steering";
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.2;
				passThrough = 0.1;
				explosionShielding = 3;
				radius = 0.33;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.2;
				passThrough = 0.1;
				explosionShielding = 3;
				radius = 0.33;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.2;
				passThrough = 0.1;
				explosionShielding = 3;
				radius = 0.33;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.2;
				passThrough = 0.1;
				explosionShielding = 3;
				radius = 0.33;
			};
		};
		destrType = "DestructWreck";
		wheelDamageThreshold = 0.7;
		wheelDestroyThreshold = 0.99;
		wheelDamageRadiusCoef = 0.95;
		wheelDestroyRadiusCoef = 0.5;
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_pos";
				direction = "exhaust_dir";
				effect = "ExhaustEffectHTruck";
			};
		};
		initCargoAngleY = 185;
		attenuationEffectType = "CarAttenuation";
		soundGetIn[] = {"A3\Sounds_F_EPC\Truck_03\int\getin",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F_EPC\Truck_03\int\getout",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_start",0.39810717,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_start",0.63095737,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_stop",0.39810717,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_stop",0.63095737,1.0,200};
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
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_1",0.56234133,1,200};
				frequency = "0.95	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(830/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_2",0.56234133,1,250};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1100/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_3",0.63095737,1,280};
				frequency = "0.8	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(900/	3000),(1100/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1150/	3000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_4",0.63095737,1,320};
				frequency = "0.8	+	((rpm/	3000) factor[(1150/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1170/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1900/	3000),(1650/	3000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_5",0.70794576,1,340};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2300/	3000)])*0.1";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1850/	3000)])	*	((rpm/	3000) factor[(2300/	3000),(2050/	3000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_6",0.70794576,1,360};
				frequency = "0.8	+	((rpm/	3000) factor[(2050/	3000),(2700/	3000)])*0.1";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(2000/	3000),(2300/	3000)])	*	((rpm/	3000) factor[(2700/	3000),(2450/	3000)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_engine_7",0.7943282,1,400};
				frequency = "0.8	+	((rpm/	3000) factor[(2450/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(2700/	3000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_1",0.63095737,1,340};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(830/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_2",0.70794576,1,360};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1100/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_3",0.7943282,1,400};
				frequency = "0.8	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(900/	3000),(1100/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1150/	3000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_4",0.8912509,1,450};
				frequency = "0.8	+	((rpm/	3000) factor[(1150/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1170/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1900/	3000),(1650/	3000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_5",1.0,1,510};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2300/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1850/	3000)])	*	((rpm/	3000) factor[(2300/	3000),(2050/	3000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_6",1.0,1,520};
				frequency = "0.8	+	((rpm/	3000) factor[(2050/	3000),(2700/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2000/	3000),(2300/	3000)])	*	((rpm/	3000) factor[(2700/	3000),(2450/	3000)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\ext\truck03_exhaust_7",1.2589254,1,550};
				frequency = "0.8	+	((rpm/	3000) factor[(2450/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(2700/	3000)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_1",0.2818383,1};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(830/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_2",0.31622776,1};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1100/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_3",0.31622776,1};
				frequency = "0.8	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(900/	3000),(1100/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1150/	3000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_4",0.31622776,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1150/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1170/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1900/	3000),(1650/	3000)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_5",0.35481337,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2300/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1850/	3000)])	*	((rpm/	3000) factor[(2300/	3000),(2050/	3000)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_6",0.39810717,1};
				frequency = "0.8	+	((rpm/	3000) factor[(2050/	3000),(2700/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(2000/	3000),(2300/	3000)])	*	((rpm/	3000) factor[(2700/	3000),(2450/	3000)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_engine_7",0.4466836,1};
				frequency = "0.8	+	((rpm/	3000) factor[(2450/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(2700/	3000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_1",0.35481337,1};
				frequency = "0.8	+	((rpm/	3000) factor[(100/	3000),(800/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(10/	3000),(50/	3000)])	*	((rpm/	3000) factor[(830/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_2",0.39810717,1};
				frequency = "0.8	+	((rpm/	3000) factor[(610/	3000),(1100/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(620/	3000),(820/	3000)])	*	((rpm/	3000) factor[(1200/	3000),(1000/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_3",0.4466836,1};
				frequency = "0.8	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(900/	3000),(1100/	3000)])	*	((rpm/	3000) factor[(1500/	3000),(1150/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_4",0.5011872,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1150/	3000),(1850/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1170/	3000),(1500/	3000)])	*	((rpm/	3000) factor[(1900/	3000),(1650/	3000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_5",0.56234133,1};
				frequency = "0.8	+	((rpm/	3000) factor[(1600/	3000),(2300/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1850/	3000)])	*	((rpm/	3000) factor[(2300/	3000),(2050/	3000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_6",0.63095737,1};
				frequency = "0.8	+	((rpm/	3000) factor[(2050/	3000),(2700/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(2000/	3000),(2300/	3000)])	*	((rpm/	3000) factor[(2700/	3000),(2450/	3000)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPC\Truck_03\int\truck03_exhaust_7",0.70794576,1};
				frequency = "0.8	+	((rpm/	3000) factor[(2450/	3000),(3000/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(2700/	3000)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",0.7943282,1.0,120};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.70794576,1.0,120};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",0.70794576,1.0,120};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.70794576,1.0,120};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_rock_final_2",0.70794576,1.0,120};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_road_final_1",0.70794576,1.0,120};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.7943282,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_rock_final_2",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_road_final_1",0.39810717,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.4466836,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.39810717,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[0, 10])";
			};
		};
		thrustDelay = 0.2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 390;
		fuelCapacity = 250;
		fuelConsumptionRate = 36;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 20;
		idleRpm = 600;
		redRpm = 4000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-8.97,"N",0,"D1",10.48,"D2",7.62,"D3",3.85,"D4",1.8,"D5",0.99};
			TransmissionRatios[] = {"High",6.53};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;
		enginePower = 580;
		maxOmega = 340;
		peakTorque = 3520;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{ 0.0,0.2 },{ 0.278,0.5 },{ 0.35,0.85 },{ 0.461,0.95 },{ 0.6,1.0 },{ 0.7,0.95 },{ 0.8,0.7 },{ 1.0,0.4 }};
		switchTime = 0.31;
		class Wheels
		{
			class L1
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 80;
				MOI = 40;
				dampingRate = 0.08;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 15000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 2000;
				springStrength = 130000;
				springDamperRate = 13000;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class L2: L1
			{
				boneName = "wheel_1_2_damper";
				steering = 1;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
			};
			class L3: L2
			{
				boneName = "wheel_1_3_damper";
				steering = 0;
				center = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";
				sprungMass = 2500;
				springStrength = 150000;
				springDamperRate = 15000;
				maxHandBrakeTorque = 300000;
			};
			class R1: L1
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class R2: L2
			{
				boneName = "wheel_2_2_damper";
				steering = 1;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				side = "right";
				maxHandBrakeTorque = 0;
			};
			class R3: L3
			{
				boneName = "wheel_2_3_damper";
				steering = 0;
				center = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				side = "right";
				maxHandBrakeTorque = 300000;
			};
		};
		class RenderTargets
		{
			class mirrors
			{
				renderTarget = "rendertarget0";
				class mirror
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
			};
		};
		typicalCargo[] = {"O_Soldier_F","O_Soldier_F"};
		hasGunner = 0;
		driverAction = "driver_hemtt";
		cargoAction[] = {"passenger_low01","passenger_apc_generic02","passenger_apc_generic03","passenger_apc_generic04","passenger_apc_narrow_generic01","passenger_apc_narrow_generic02","passenger_apc_generic03","passenger_apc_narrow_generic03","passenger_generic01_foldhands","passenger_apc_generic03","passenger_apc_narrow_generic03","passenger_apc_generic01","passenger_apc_generic01"};
		getInAction = "GetInVertical";
		getOutAction = "GetOutMedium";
		cargoIsCoDriver[] = {1,0};
		cargoGetInAction[] = {"GetInVertical","GetInHemttBack"};
		cargoGetOutAction[] = {"GetOutMedium","GetOutHighZamak"};
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2"};
		showNVGCargo[] = {0,1};
		soundAttenuationCargo[] = {1,0};
		class ViewPilot: ViewPilot
		{
			initAngleX = 30;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1600,1300,1100};
				ambient[] = {5,5,5};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				size = 1;
				innerAngle = 70;
				outerAngle = 130;
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
					hardLimitStart = 30;
					hardLimitEnd = 60;
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
				useFlare = 1;
				position = "light_R_flare";
			};
			class Left2: Left
			{
				useFlare = 1;
				position = "light_L_flare";
			};
		};
		aggregateReflectors[] = {{ "Left","Right","Left2","Right2" }};
		class Turrets{};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_int01.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_int01_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_int01_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_int02.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_int02_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_int02_destruct.rvmat","A3\Data_F\Glass_veh.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","A3\Data_F\Glass_veh.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","A3\Data_F\Glass_veh_armored_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_FD.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_FD_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_FD_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_alpha.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_alpha_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_alpha_destruct.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_damage.rvmat","A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_destruct.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_01.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_01_damage.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_01_destruct.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_damage.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_destruct.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_damage.rvmat","A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_destruct.rvmat"};
		};
		class Library
		{
			libTextDesc = "$STR_A3_CfgVehicles_Truck_03_base_F_Library0";
		};
	};
	class pAx_Truck_03_transport_F: pAx_Truck_03_base_F
	{
		mapSize = 11.48;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_transport_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_transport_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_transport_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_transport_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Transport_CA.paa";
		transportSoldier = 11;
		cargoProxyIndexes[] = {1,2,3,4,5,7,8,9,10,11,13};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				gunnerCompartments = "Compartment2";
				proxyIndex = 6;
				maxElev = 15;
				minElev = -55;
				maxTurn = -20;
				minTurn = -180;
				isPersonTurret = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 12;
				maxTurn = 20;
				minTurn = 180;
				minElev = -55;
			};
		};


	};
	class pAx_Truck_03_covered_F: pAx_Truck_03_base_F
	{
		mapSize = 11.48;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_covered_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_covered_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_covered_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_covered_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Covered_CA.paa";
		transportSoldier = 11;
		cargoProxyIndexes[] = {1,2,3,4,5,7,8,9,10,11,13};
		getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_3";
				memoryPointsGetInGunner = "pos cargo LR";
				memoryPointsGetInGunnerDir = "pos cargo LR dir";
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_L";
				gunnerCompartments = "Compartment2";
				proxyIndex = 6;
				maxElev = 15;
				minElev = -55;
				maxTurn = -5;
				minTurn = -90;
				isPersonTurret = 1;
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "$STR_A3_TURRETS_CARGOTURRET_R";
				memoryPointsGetInGunner = "pos cargo RR";
				memoryPointsGetInGunnerDir = "pos cargo RR dir";
				proxyIndex = 12;
				maxTurn = 90;
				minTurn = 5;
				minElev = -55;
			};
		};
	};
	class pAx_Truck_03_repair_F: pAx_Truck_03_base_F
	{
		features = "Randomization: No						<br />Camo selections: 3 - cabin, wheels, back						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_repair_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_repair_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_repair_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_ammo_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_ammo_CA.paa";
		vehicleClass = "Support";
		transportSoldier = 1;
		transportRepair = 200000000;
		supplyRadius = 10;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class pAx_Truck_03_ammo_F: pAx_Truck_03_base_F
	{
		features = "Randomization: No						<br />Camo selections: 3 - cabin, wheels, back						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_ammo_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_ammo_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_box_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_box_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_box_CA.paa";
		vehicleClass = "Support";
		transportSoldier = 1;
		transportAmmo = 30000;
		supplyRadius = 10;
		fuelExplosionPower = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class pAx_Truck_03_fuel_F: pAx_Truck_03_base_F
	{
		features = "Randomization: No						<br />Camo selections: 3 - cabin, wheels, back						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1";
		mapSize = 11.07;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_fuel_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_fuel_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_fuel_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_fuel_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Fuel_CA.paa";
		vehicleClass = "Support";
		transportSoldier = 1;
		transportFuel = 3000;
		supplyRadius = 10;
		fuelExplosionPower = 10;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 4;
			};
		};
	};
	class pAx_Truck_03_medical_F: pAx_Truck_03_base_F
	{
		features = "Randomization: No						<br />Camo selections: 3 - cabin, wheels, back						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1";
		mapSize = 11.48;
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_medical_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_medical_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_medevac_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_medevac_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_medevac_CA.paa";
		vehicleClass = "Support";
		supplyRadius = 10;
		attendant = 1;
		transportSoldier = 12;
		cargoAction[] = {"passenger_low01","passenger_injured_medevac_truck01","passenger_injured_medevac_truck02","passenger_injured_medevac_truck01","passenger_flatground_generic03","passenger_flatground_generic05","passenger_generic01_foldhands","passenger_apc_narrow_generic03","passenger_generic01_leanright","passenger_apc_generic03","passenger_generic01_foldhands","passenger_generic01_leanleft","passenger_apc_generic01","passenger_generic01_foldhands","passenger_apc_generic04","passenger_generic01_leanleft"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
		threat[] = {0.0,0.0,0.0};
	};
	class pAx_Truck_03_device_F: pAx_Truck_03_base_F
	{
		features = "Randomization: No						<br />Camo selections: 3 - cabin, wheels, back						<br />Script door sources: None						<br />Script animations: None						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1";
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "O_Truck_03_device_F";
		scope = 2;
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		displayName = "$STR_A3_CfgVehicles_O_Truck_03_device_F0";
		model = "\A3\Soft_F_EPC\Truck_03\Truck_03_device_F.p3d";
		picture = "\A3\Soft_F_EPC\Truck_03\Data\UI\truck_03_device_CA.paa";
		icon = "\A3\Soft_F_EPC\Truck_03\Data\UI\map_Truck_03_Device_CA.paa";
		transportSoldier = 1;
		aggregateReflectors[] = {{ "Left","Right","Left2","Right2" },{ "Light_1" }};
		class Reflectors: Reflectors
		{
			class Left: Left{};
			class Right: Right{};
			class Right2: Right2{};
			class Left2: Left2{};
			class Light_1
			{
				color[] = {1.0,0.25,0.02};
				ambient[] = {0.001,0.00025,2e-005};
				intensity = 10000;
				size = 1;
				innerAngle = 125;
				outerAngle = 175;
				coneFadeCoef = 10;
				position = "Light_1_pos";
				direction = "Light_1_dir";
				hitpoint = "Light_1_hit";
				selection = "Light_1_hide";
				useFlare = 1;
				flareSize = 1.5;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 15;
					quadratic = 7;
					hardLimitStart = 5;
					hardLimitEnd = 7;
				};
			};
		};
	};
};
//};
