class CfgVehicles
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////   DEVILDUST PLAYER UNITS ////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class C_man_p_beggar_F;

    class pAx_man_green_DD: C_man_p_beggar_F
    {
        author = "pAxton";
        scope = 2;
        displayName = "I'm a Gangster";
        genericNames = "NATOMen";
        faction = "DevilDust_Faction";
        side = 0;
        model = "\A3\characters_f\Civil\c_poor.p3d"; //Default NATO
        uniformClass = "pAx_U_man_green_DD";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\pAx_Player_DD\data\DevilDust_Player_IHW.paa"};
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        //magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        //respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {};
        respawnLinkedItems[] = {};
		extCameraPosition[] = {0.35,-0.2,-0.4};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_init.sqf""";
			respawn = init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";

		};


	};
	 class pAx_man_magpul_DD: C_man_p_beggar_F
        {
            author = "pAxton";
            scope = 2;
            displayName = "I got MagPul";
            genericNames = "NATOMen";
            faction = "DevilDust_Faction";
            side = 0;
            model = "\A3\characters_f\Civil\c_poor.p3d"; //Default NATO
            uniformClass = "pAx_U_man_magpul_DD";
            hiddenSelections[] = {"Camo"};
            hiddenSelectionsTextures[] = {"\pAx_Player_DD\data\DevilDust_Player_MagPul.paa"};
            weapons[] = {"Throw","Put"};
            respawnWeapons[] = {"Throw","Put"};
            //magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
            //respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
            linkedItems[] = {};
            respawnLinkedItems[] = {};
    		extCameraPosition[] = {0.35,-0.2,-0.4};
    		class EventHandlers
    		{
    			init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_init.sqf""";
    			respawn = init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";


    		};


    	};
    	class pAx_man_boston_DD: C_man_p_beggar_F
                {
                    author = "pAxton";
                    scope = 2;
                    displayName = "I'm Boston";
                    genericNames = "NATOMen";
                    faction = "DevilDust_Faction";
                    side = 0;
                    model = "\A3\characters_f\Civil\c_poor.p3d"; //Default NATO
                    uniformClass = "pAx_U_man_boston_DD";
                    hiddenSelections[] = {"Camo"};
                    hiddenSelectionsTextures[] = {"\pAx_Player_DD\data\DevilDust_Player_BostonTP.paa"};
                    weapons[] = {"Throw","Put"};
                    respawnWeapons[] = {"Throw","Put"};
                    //magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
                    //respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
                    linkedItems[] = {};
                    respawnLinkedItems[] = {};
            		extCameraPosition[] = {0.35,-0.2,-0.4};
            		class EventHandlers
            		{
            			init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_init.sqf""";
            			respawn = init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";

            		};


            	};
};
