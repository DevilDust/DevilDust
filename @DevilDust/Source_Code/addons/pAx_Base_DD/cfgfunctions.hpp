class cfgFunctions
{
	class pAx_DevilDust
	{
		tag = "pAx";
		class ClientFunctions
			{
				file = "pAx_Base_DD\functions";
				class hasDrugs {};
				class hintTest {};
				class ftl_loadout {};
				class stlpainKillers{};
				class spawnBoxTruck {};
				class KeyPressed {};
				class MethTruckInit {};
				class SelChanged {};
				class ingredentsTest {};
				class targetHit {};
				class getAddiction {};
				class setAddiction {};
				class getAddicted {};
				class setAddicted {};
				class addDrinkAction {};
				class isAlive {};
				class handleCivHit {};
				class findSpawns {};
				class cameraSetup {};
				class setRenderTarget {};
				class dropCamera {};
				class pickUpCamera {};
				class checkVehicle {};
				class fixVehicle {};

			};
		class GunStoreFunctions
			{
				file = "pAx_Base_DD\functions\GunStore";
				class buyPistol {};
                class buyBoxTruck {};


			};
	    class ClientSurvivalFunctions
        	{
        		file = "pAx_Base_DD\functions\ClientSurvival";
				class userActionHandle {};
                class userActionDiag {};
                class keyDownEvent {};
                class checkPlayerInventory {};
                class getThirst {};
                class setThirst {};
                class handleFunds {};
                class handleLiving {};
                class handleThirst {};
                class getClientMoney {};
                class setClientMoney {};
                class InventoryAction {};


        	};
	};
	};