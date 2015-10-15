class CfgPatches
{
	class pAx_Intro_DD
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Roads_F","A3_Structures_F","A3_Map_Data"};
	};
};

class CAWorld;

class CfgWorlds
{


	class Stratis: CAWorld
	{
			cutscenes[] = {"pAx_Stratis_intro1"};
	};
};