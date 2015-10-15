// PROPER MOD - PROPER_World - by the-F and Q (contact_PROPER_MOD@web.de)

/* PROPER_World_Desert_Island_Instant_IntroAnims.pbo */
#define _ARMA_

//Class map_stratis_scenes_f : config.bin{
class CfgPatches
{
	class pAx_Stratis_Scenes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"pAx_Intro_DD"};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class pAx_Stratis_intro1
		{
			directory = "pAx_Stratis_Scenes\i\intro.Stratis";
		};
	};
};
//};
