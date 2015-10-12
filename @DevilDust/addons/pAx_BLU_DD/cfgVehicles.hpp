class cfgVehicles
{
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //////   DEVILDUST PLAYER UNITS ////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class C_marshal_F;
    class B_RangeMaster_F;
    class B_Competitor_F;

    class pAx_blu_1_DD: C_marshal_F
    {
        author = "pAxton";
        scope = 2;
        displayName = "Officer1";
        genericNames = "NATOMen";
        faction = "DevilDust_BLU_Faction";
        side = 1;
     //   model = "\A3\characters_f_epc\Civil\c_journalist.p3d"; //Default NATO
        uniformClass = "pAx_U_man_DEA_DD";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\pAx_BLU_DD\data\pAx_U_C_dea_1_co.paa"};
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        //magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        //respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
        linkedItems[] = {"pAx_Vest_DevilDust"};
        respawnLinkedItems[] = {"pAx_Vest_DevilDust"};
		extCameraPosition[] = {0.35,-0.2,-0.4};
		class EventHandlers
		{
			init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";
			respawn = init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";
            //TODO handle unit when shot
		};


	};
	 class pAx_blu_2_DD: B_RangeMaster_F
        {
            author = "pAxton";
            scope = 2;
            displayName = "Officer2";
            genericNames = "NATOMen";
            faction = "DevilDust_BLU_Faction";
            side = 1;
         //   model = "\A3\characters_f\Civil\c_poor.p3d"; //Default NATO
         //   uniformClass = "pAx_U_man_magpul_DD";
           // hiddenSelections[] = {"Camo"};
           // hiddenSelectionsTextures[] = {"\pAx_Player_DD\data\DevilDust_Player_MagPul.paa"};
            weapons[] = {"Throw","Put"};
            respawnWeapons[] = {"Throw","Put"};
            //magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
            //respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
            linkedItems[] = {"pAx_Vest_b_DevilDust"};
            respawnLinkedItems[] = {"pAx_Vest_b_DevilDust"};
    		extCameraPosition[] = {0.35,-0.2,-0.4};
    		class EventHandlers
    		{
    			init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";
    			respawn = init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";
    			// TODO handle getting shot
    		};


    	};
    	class pAx_blu_3_DD: B_Competitor_F
                {
                    author = "pAxton";
                    scope = 2;
                    displayName = "Officer3";
                    genericNames = "NATOMen";
                    faction = "DevilDust_BLU_Faction";
                    side = 1;
                  //  model = "\A3\characters_f\Civil\c_poor.p3d"; //Default NATO
                 //   uniformClass = "pAx_U_man_boston_DD";
                 //   hiddenSelections[] = {"Camo"};
               //     hiddenSelectionsTextures[] = {"\pAx_Player_DD\data\DevilDust_Player_BostonTP.paa"};
                    weapons[] = {"Throw","Put"};
                    respawnWeapons[] = {"Throw","Put"};
                    //magazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
                    //respawnMagazines[] = {"HandGrenade","HandGrenade","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green"};
                    linkedItems[] = {"pAx_Vest_b_DevilDust"};
                    respawnLinkedItems[] = {"pAx_Vest_b_DevilDust"};
            		extCameraPosition[] = {0.35,-0.2,-0.4};
            		class EventHandlers
            		{
            			init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";
            			respawn = init = "(_this select 0) execVM ""\pAx_Base_DD\client\clientEH_initBLU.sqf""";
            			// TODO handle getting shot
            		};


            	};
};
