#define _ARMA_
class CfgPatches
{
	class AVB_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_UI_F","A3_Functions_F","A3_UIFonts_F","A3_Data_F"};
	};
};
/*
class CfgPatches
{
	class A3_UI_F
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Functions_F","A3_UIFonts_F","A3_Data_F"};
	};
};
*/
//class CfgActions{};
//delete CfgActions ;

class RscStandardDisplay;
class RscPicture;
class RscControlsGroup;
class RscDisplayStart : RscStandardDisplay
{
        	idd = -1;
			movingEnable = 0;
	
	class controls 
	{

		class LoadingPic : RscPicture
		{
			text = "\A3\Ui_f\data\Logos\arma3_splash_ca.paa";
		};

		class LoadingStart:RscControlsGroup
		{
			class controls 
			{
			class Logo : RscPicture
				{
					h = 0.45 * safezoneH;
					text = "\AVB\Main\Data\StartLogo.paa";
				};
			};
		};
	};
};
