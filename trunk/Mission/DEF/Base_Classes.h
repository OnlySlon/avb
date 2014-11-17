///////////////////////////////////////////////////////////////////////////
/// Base Classes
/// DLG\Base_Classes.h
///////////////////////////////////////////////////////////////////////////
class AVB_RscText
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = V_bg_Color;
	colorText[] = Color_Black ;
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 3;
	shadow = 0;
	font = "PuristaMedium";
	SizeEx = 0.04;
};

class AVB_RscStructuredText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = Color_Black;
	colorBackground[] = V_bg_Color;
		class Attributes
			{
				font = "PuristaMedium";
				color = "#000000";
				align = "center";
				shadow = 0;
			};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.04;
	shadow = 0;
};

class AVB_RscButton
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = Color_Black ;
	colorDisabled[] = {0.4,0.4,0.4,1};

	/*
	colorBackground[] = {1,0.537,0,0.5};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBackgroundActive[] = {1,0.537,0,1};
	colorFocused[] = {1,0.537,0,1};
	*/
	colorBackground[] = V_h_1;
	colorBackgroundDisabled[] = V_h_2;
	colorBackgroundActive[] = V_h_3;
	colorFocused[] = V_h_4;
	
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
/*
	soundEnter[] = { "", 0, 1 };  // no sound
		soundPush[] = { "buttonpushed.ogg", 0.1, 1 };
		soundClick[] = { "", 0, 1 };  // no sound
		soundEscape[] = { "", 0, 1 };  // no sound
*/
	soundEnter[] = {"",0.09,1};
	soundPush[] = {"",0.09,1};
	soundClick[] = {"",0.07,1};
	soundEscape[] = {"",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 0;
	font = "PuristaMedium";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class AVB_RscFrame 
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 0;
	colorBackground[] = {0,0,0,1};
	colorText[] = {0,0,0,1};
	font = "PuristaMedium";
	sizeEx = 0.04;
};

class AVB_list
	{
		type = CT_LISTBOX;
		style = ST_LEFT;
		idc = -1;
		text = "";
		w = 0.275;
		h = 0.05;
		colorSelect[] = {1, 1, 1, 1};
		colorText[] = {1, 1, 1, 1};
		colorBackground[] = {0.8,0.8,0.8,1};
		colorSelectBackground[] = {0.40, 0.43, 0.28, 0.5};
		colorScrollbar[] = {0.2, 0.2, 0.2, 1};
		wholeHeight = 0.45;
		rowHeight = 0.04;
		color[] = {0.30, 0.32, 0.21, 1};
		colorActive[] = {0,0,0,1};
		colorDisabled[] = {0,0,0,0.3};
		font = "PuristaMedium";
		sizeEx = 0.03;
		soundSelect[] = {"",0.1,1};
		soundExpand[] = {"",0.1,1};
		soundCollapse[] = {"",0.1,1};
		maxHistoryDelay = 1;
		autoScrollSpeed = -1;
		autoScrollDelay = 5;
		autoScrollRewind = 0;

		class ScrollBar
		{
			color[] = {0.30, 0.32, 0.21, 0.6};
			colorActive[] = {0.30, 0.32, 0.21, 1};
			colorDisabled[] = {0.30, 0.32, 0.21, 0.3};
			thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
			arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		};
		class ListScrollBar
		{
			color[] = {0.30, 0.32, 0.21, 0.6};
			colorActive[] = {0.30, 0.32, 0.21, 1};
			colorDisabled[] = {0.30, 0.32, 0.21, 0.3};
			thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
			arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
			arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
			border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		};
	};
	class AVB_RscTree
{
	                access = 0;
                    borderSize = 0;
                    colorArrow[] = {1,1,1,1};
                    //colorBackground[] = {0,0,0,0};
                    colorText[] = Color_White;
                    colorBackground[] = Color_Black ;
                    colorBorder[] = {0,0,0,0};
                    colorDisabled[] = {1,1,1,0.25};
                    colorMarked[] = {0.2,0.3,0.7,1};
                    colorMarkedSelected[] = {0,0.5,0.5,1};
                    colorMarkedText[] = {0,0,0,1};
                    colorSelect[] = {1,1,1,0.7};
                    colorSelectBackground[] = {0,0,0,0.5};
                    colorSelectText[] = {0,0,0,1};
                    //colorText[] = {1,1,1,1};
                    expandedTexture = "A3\ui_f\data\gui\rsccommon\rsctree\expandedTexture_ca.paa";
                    expandOnDoubleclick = 1;
                    font = "PuristaMedium";
                    hiddenTexture = "A3\ui_f\data\gui\rsccommon\rsctree\hiddenTexture_ca.paa";
                    maxHistoryDelay = 1;
                    multiselectEnabled = 0;
                    rowHeight = 0.0439091;
                    shadow = 0;
                    sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
                    style = 0;
                    type = 12;
                    class ScrollBar
                    {
                    arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
                    arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
                    autoScrollDelay = 5;
                    autoScrollEnabled = 0;
                    autoScrollRewind = 0;
                    autoScrollSpeed = -1;
                    border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
                    color[] = {1,1,1,0.6};
                    colorActive[] = {1,1,1,1};
                    colorDisabled[] = {1,1,1,0.3};
                    height = 0;
                    scrollSpeed = 0.06;
                    shadow = 0;
                    thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
                    width = 0;
                    };
};






