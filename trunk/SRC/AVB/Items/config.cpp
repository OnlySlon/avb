
class CfgPatches
{
	class AVB_Pack_items
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_UI_F","A3_Anims_F","A3_Anims_F_Config_Sdr"};
     };
};
class cfgWeapons
{

	class Binocular;
	class Rangefinder;
	class AVB_Binocular_x4: Binocular
	{
		displayName = "Бинокль х4";
		opticsZoomMin = 0.175;//4x
		opticsZoomMax = 0.175;
		opticsZoomInit = 0.175;
		
	};
	class AVB_Binocular_x8: Binocular
	{
		displayName = "Бинокль х8";
		opticsZoomMin = 0.1;//4x
		opticsZoomMax = 0.1;
		opticsZoomInit = 0.1;
		
	};
	class AVB_Rangefinder: Rangefinder
	{
		
		opticsZoomMin = 0.175;
		opticsZoomMax = 0.1;
		opticsZoomInit = 0.175;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		
	};
	
};
