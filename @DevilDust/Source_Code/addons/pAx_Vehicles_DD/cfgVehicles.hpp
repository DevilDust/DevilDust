class cfgVehicles
{

    class B_MRAP_01_F;


    class pAx_DEA_MRAP: B_MRAP_01_F
    {
        author = "pAxton";
        scope = 2;
        displayName = "DEA MRAP";
        hiddenSelections[] = {"Camo1", "Camo2"};
        hiddenSelectionsTextures[] = {"\pAx_Vehicles_DD\data\mrap_dea_TEST_co.paa", "\pAx_Vehicles_DD\data\mrap_dea_adds_co.paa"};



        			class HitLFWheel
        			{
        				armor = "2/3";
        				explosionShielding = 4;
        				radius = 0.33;
        			};
        			class HitLF2Wheel
        			{
        				armor = "2/3";
        				explosionShielding = 4;
        				radius = 0.33;
        			};
        			class HitRFWheel
        			{
        				armor = "2/3";
        				explosionShielding = 4;
        				radius = 0.33;
        			};
        			class HitRF2Wheel
        			{
        				armor = "2/3";
        				explosionShielding = 4;
        				radius = 0.33;
        			};
        			class HitFuel
        			{
        				armor = 0.4;
        				material = -1;
        				name = "palivo";
        				visual = "";
        				passThrough = 1.0;
        				minimalHit = 0.2;
        				explosionShielding = 0.2;
        				radius = 0.25;
        			};
        			class HitEngine
        			{
        				armor = 0.5;
        				material = -1;
        				name = "motor";
        				visual = "";
        				passThrough = 0.2;
        				minimalHit = 0.2;
        				explosionShielding = 0.2;
        				radius = 0.45;
        			};
        			class HitBody
        			{
        				armor = 4.0;
        				material = -1;
        				name = "karoserie";
        				visual = "zbytek";
        				passThrough = 1.0;
        				minimalHit = 0.01;
        				explosionShielding = 1.5;
        				radius = 0.45;
        			};
        			class HitGlass1
        			{
        				armor = 1;
        				explosionShielding = 3;
        				radius = 0.25;
        			};
        			class HitGlass2
        			{
        				armor = 1;
        				explosionShielding = 3;
        				radius = 0.25;
        			};
        			class HitGlass3
        			{
        				armor = 1;
        				explosionShielding = 3;
        				radius = 0.25;
        			};
        			class HitGlass4
        			{
        				armor = 1;
        				explosionShielding = 3;
        				radius = 0.25;
        			};
        			class HitGlass5
        			{
        				armor = 1;
        				explosionShielding = 3;
        				radius = 0.25;
        			};
        			class HitGlass6
        			{
        				armor = 1;
        				explosionShielding = 3;
        				radius = 0.25;
        			};

		class EventHandlers
		{
            init = "_this execVM 'pAx_Vehicles_DD\scripts\DEA_mrap_init.sqf'";
		};


	};

};