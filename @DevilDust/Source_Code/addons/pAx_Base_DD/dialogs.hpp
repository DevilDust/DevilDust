class pAx_dialog
{
	idd=-1;
	movingenable=false;
	
	class controls 
	{
	
		////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by pAxton, v1.063, #Gijuzi)
	////////////////////////////////////////////////////////

	class pAx_Frame: RscAFrame
	{
		idc = 1800;
		text = "Load Up"; //--- ToDo: Localize;
		x = 0.420672 * safezoneW + safezoneX;
		y = 0.227286 * safezoneH + safezoneY;
		w = 0.163062 * safezoneW;
		h = 0.4796 * safezoneH;
		colorBackground[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
	};
	class pAx_Button: RscAButton
	{
		idc = 1600;
		text = "Steal Pain Killers"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.28371 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closedialog 0;  [player] call pAx_fnc_hintTest";
	};
	class pAx_button1: RscAButton
	{
		idc = 1601;
		text = "Buy Pistol $200"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.340133 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closedialog 0;  [player] call pAx_fnc_buyPistol";
	};
	class pAx_button3: RscAButton
	{
		idc = 1602;
		text = "Buy Box Truck"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.45298 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closeDialog 0; [player] call pAx_fnc_buyBoxTruck";
	};
	class pAx_button4: RscAButton
	{
		idc = 1603;
		text = "Auto Rifleman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.509404 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	class pAx_button2: RscAButton
	{
		idc = 1604;
		text = "Asst Auto Rifleman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.396557 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	class pAx_button5: RscAButton
	{
		idc = 1605;
		text = "Designated Marksman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.565828 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	class pAx_button6: RscAButton
	{
		idc = 1606;
		text = "Anti Tank Rifleman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.622251 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////
};

};
class pAx_ToolBox_dialog
{
	idd= TOOLBOX_ID;
	movingenable=false;

	class controls
	{

		////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT START (by pAxton, v1.063, #Gijuzi)
	////////////////////////////////////////////////////////

	class pAx_Frame: RscAFrame
	{
		idc = 2800;
		text = "Tool Box"; //--- ToDo: Localize;
		x = 0.420672 * safezoneW + safezoneX;
		y = 0.227286 * safezoneH + safezoneY;
		w = 0.163062 * safezoneW;
		h = 0.4796 * safezoneH;
		colorBackground[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};

	};
	class pAx_Button: RscAButton
	{
		idc = 2600;
		text = "LF Wheel"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.28371 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closeDialog 0; ['lf'] call pAx_fnc_fixVehicle";
	};
	class pAx_button1: RscAButton
	{
		idc = 2601;
		text = "RF Wheel"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.340133 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closeDialog 0; ['rf'] call pAx_fnc_fixVehicle";
	};
	class pAx_button3: RscAButton
	{
		idc = 2602;
		text = "LR Wheel"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.45298 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closeDialog 0; ['lr'] call pAx_fnc_fixVehicle";
	};
	class pAx_button4: RscAButton
	{
		idc = 2603;
		text = "RR Wheel"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.509404 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
		action = "closeDialog 0; ['rr'] call pAx_fnc_fixVehicle";
	};
	class pAx_button2: RscAButton
	{
		idc = 2604;
		text = "Asst Auto Rifleman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.396557 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	class pAx_button5: RscAButton
	{
		idc = 2605;
		text = "Designated Marksman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.565828 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	class pAx_button6: RscAButton
	{
		idc = 2606;
		text = "Anti Tank Rifleman"; //--- ToDo: Localize;
		x = 0.429487 * safezoneW + safezoneX;
		y = 0.622251 * safezoneH + safezoneY;
		w = 0.145434 * safezoneW;
		h = 0.0470196 * safezoneH;
	};
	////////////////////////////////////////////////////////
	// GUI EDITOR OUTPUT END
	////////////////////////////////////////////////////////
};

};

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by pAxton, v1.063, #Zotaxo)
////////////////////////////////////////////////////////
class pAx_InventoryDialog
{
	idd= CT_MainInventory;
	movingenable=false;
	
	class controls 
	{


class InventoryList: RscAListbox
{




	idc = 1500;
	onLBSelChanged = "call pAx_fnc_SelChanged";
	x = 0.345825 * safezoneW + safezoneX;
	y = 0.3214 * safezoneH + safezoneY;
	w = 0.0925047 * safezoneW;
	h = 0.1316 * safezoneH;
};


	
class ButtonDrop: RscAButton
{
	idc = 1505;
	onMouseEnter = "(_this select 0) ctrlSetTextColor [0, 0, 0, 1]";
    onMouseExit = "(_this select 0) ctrlSetTextColor [1, 1, 1, 1]";
	text = ""; //--- ToDo: Localize;
	x = 0.460355 * safezoneW + safezoneX;
	y = 0.3214 * safezoneH + safezoneY;
	w = 0.0484548 * safezoneW;
	h = 0.0376 * safezoneH;
	action = "closeDialog 0; call pAx_fnc_InventoryAction";
};
class ButtonClose: RscAButton
{
	idc = 1601;
	text = "Close"; //--- ToDo: Localize;
	x = 0.328206 * safezoneW + safezoneX;
	y = 0.7444 * safezoneH + safezoneY;
	w = 0.343589 * safezoneW;
	h = 0.0282 * safezoneH;
	action = "closeDialog 0";
};

};
};

class pAx_Lab_Dialog
{
	////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by pAxton, v1.063, #Cuzyko)
////////////////////////////////////////////////////////
idd= 756;
	movingenable=false;
	
	class controls 
	{
class scroll3: RscASlider
{
	idc = 1900;
	x = 0.213125 * safezoneW + safezoneX;
	y = 0.822978 * safezoneH + safezoneY;
	w = 0.57375 * safezoneW;
	h = 0.0679954 * safezoneH;
};
class scroll2: RscASlider
{
	idc = 1901;
	x = 0.213125 * safezoneW + safezoneX;
	y = 0.618992 * safezoneH + safezoneY;
	w = 0.57375 * safezoneW;
	h = 0.0679954 * safezoneH;
};
class scroll1: RscASlider
{
	idc = 1902;
	text = "test"; //--- ToDo: Localize;
	x = 0.213125 * safezoneW + safezoneX;
	y = 0.466002 * safezoneH + safezoneY;
	w = 0.57375 * safezoneW;
	h = 0.0509965 * safezoneH;
};
class title2: RscAtext
{
	idc = 1000;
	text = "0%                               50%                            100%"; //--- ToDo: Localize;
	x = 0.229062 * safezoneW + safezoneX;
	y = 0.550996 * safezoneH + safezoneY;
	w = 0.525937 * safezoneW;
	h = 0.0509965 * safezoneH;
};
class title1: RscAtext
{
	idc = 1001;
	text = "0%                               50%                            100%"; //--- ToDo: Localize;
	x = 0.229062 * safezoneW + safezoneX;
	y = 0.398007 * safezoneH + safezoneY;
	w = 0.525937 * safezoneW;
	h = 0.0509965 * safezoneH;
};
class title3: RscAtext
{
	idc = 1002;
	text = "0%                               50%                            100%"; //--- ToDo: Localize;
	x = 0.229062 * safezoneW + safezoneX;
	y = 0.754983 * safezoneH + safezoneY;
	w = 0.525937 * safezoneW;
	h = 0.0509965 * safezoneH;
};
class button1: RscAButton
{
	idc = 1600;
	text = "Confirm"; //--- ToDo: Localize;
	x = 0.292812 * safezoneW + safezoneX;
	y = 0.228019 * safezoneH + safezoneY;
	w = 0.06375 * safezoneW;
	h = 0.0679954 * safezoneH;
};
class button2: RscAButton
{
	idc = 1601;
	text = "not used"; //--- ToDo: Localize;
	x = 0.468125 * safezoneW + safezoneX;
	y = 0.228019 * safezoneH + safezoneY;
	w = 0.06375 * safezoneW;
	h = 0.0679954 * safezoneH;
};
class button3: RscAButton
{
	idc = 1602;
	text = "Exit"; //--- ToDo: Localize;
	x = 0.635469 * safezoneW + safezoneX;
	y = 0.228019 * safezoneH + safezoneY;
	w = 0.06375 * safezoneW;
	h = 0.0679954 * safezoneH;
};
class LabTitle: RscAtext
{
	idc = 1003;
	text = "Meth Lab"; //--- ToDo: Localize;
	x = 0.460156 * safezoneW + safezoneX;
	y = 0.109027 * safezoneH + safezoneY;
	w = 0.0876563 * safezoneW;
	h = 0.0849942 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
};
};

class pAx_Cooking_Dialog	
{
	idd= 755;
	type = ST_PICTURE;
	movingenable=false;
class RscAPicturePax: RscAPicture2
{
	text = "\pAx_Base_DD\metLabModPhototest.paa";
};

};
class RscTitles
{
	class ExampleTitle
	{
		idd = -1;
		duration = 10;
		class controls
		{
			class ExampleControl
			{
				idc = -1;
				type = 0;
				style = ST_PICTURE; //1 2 3...176
				tileH = 2; //Tile Picture height (style = 144)
				tileW = 5; //Tile Picture width (style = 144)
				x = 0.25;
				y = 0.25;
				h = 0.5;
				w = 0.5;
				font = "EtelkaNarrowMediumPro";
				sizeEx = 0.05;
				colorBackground[] = {1,1,1,1}; //white background
				colorText[] = {0.5,0.5,0.5,1}; //grey foreground
				text = "\pAx_Base_DD\metLabModPhototest.paa";
				lineSpacing = 1; //required for multi-line style
			};
		};
	};
};

////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////


