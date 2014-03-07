#define _ARMA_
class CfgPatches
{
	class AVB_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_UI_F"};
	};
};

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
					text = "\AVB\MAIN\DATA\StartLogo.paa";
				};
			};
		};
	};
};