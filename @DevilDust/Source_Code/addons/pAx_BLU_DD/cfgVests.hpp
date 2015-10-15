class V_press_F;
class pAx_Vest_DevilDust: V_press_F
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "Test vest"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\pAx_BLU_DD\data\equip_dea_vest_01_co.paa"}; /// what texture is going to be used

	class ItemInfo: ItemInfo
	{

		//LOAD(40,100) /// macro from basicdefines_A3.hpp
		armor = 5*0.6; /// what protection does the vest provide
		passThrough = 0.4; /// coef of damage passed to total damage
		overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};
