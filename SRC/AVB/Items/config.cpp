
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
class CfgVehicles {
	class NATO_Box_Base;
	class AVB_Items_Box: NATO_Box_Base {
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[AVB] Предметы";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportWeapons
		{
			
		};
		class TransportMagazines
		{

		};
		class TransportItems
		{
			class _xx_AVB_Rangefinder
			{
				name = "AVB_Rangefinder";
				count = 10; //Item Count Here
			};
			class _xx_AVB_Binocular_x4
			{
				name = "AVB_Binocular_x4";
				count = 10; //Item Count Here
			};
			class _xx_AVB_Binocular_x8
			{
				name = "AVB_Binocular_x8";
				count = 10; //Item Count Here
			};
		};
	};
};