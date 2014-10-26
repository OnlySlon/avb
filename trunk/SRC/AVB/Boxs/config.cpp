
class CfgPatches
{
	class AVB_Boxs
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Ammoboxes"};
     };
};

class CfgVehicles 
{
	class ReammoBox_F;
	class AVB_Box_test: ReammoBox_F
	{
		scope=2;
		displayName = "[AVB] test";
		
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"\AVB\Boxs\Data\box_CB_ca.paa","\AVB\Boxs\Data\box_CB_co.paa"};\
		model = "\AVB\Boxs\Data\WpnsBox_F_destr.p3d";
	};
	class AVB_Box_Base_CB: ReammoBox_F
	{
		scope = 0;
		hiddenSelections[] = {"Camo_Signs","Camo"};
		hiddenSelectionsTextures[] = {"\AVB\Boxs\Data\box_CB_ca.paa","\AVB\Boxs\Data\box_CB_co.paa"};\
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class DestructionEffects
		{
			scope=2;
			/*
			class Sound {
				simulation = "sound";
				type = "Alarm";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime
				};*/
			class Smoke2
			{
				simulation = "particles";
				type = "AmmoSmokeParticles2";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 2;
			};
			class Ruin
			{
				simulation = ruin;
				type = \AVB\Boxs\Data\WpnsBox_F_destr.p3d; // Path to model of ruin used when total damage of the house reaches 1
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};/*
			class Ruin1
			{
				simulation = "ruin";
				type = "\AVB\Boxs\Data\Radar_Small_ruins_F_.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
			/*
			class Bullets
			{
				simulation = "particles";
				type = "AmmoBulletCore";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1.2;
			};
			class HouseDestr
			{
				simulation = "destroy";
				type = "DelayedDestructionAmmoBox";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 10;
			};
			*/
		};
	};

	class AVB_Pistol_Box: AVB_Box_Base_CB
	{
		scope = 2;
		mapSize = 1.81;
		_generalMacro = "AVB_Pistol_Box";
		vehicleClass = "Ammo";
		displayName = "[AVB] Пистолеты";
		//model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		
		class TransportWeapons
		{
			class _xx_AVB_Rook40
			{
				weapon = "AVB_Rook40";
				count = 10; //Item Count Here
			};
			
			class _xx_AVB_P07
			{
				weapon = "AVB_P07";
				count = 10;
			};
			class _xx_AVB_ACPC2
			{
				weapon = "AVB_ACPC2";
				count = 10; //Item Count Here
			};
			
			class _xx_AVB_For
			{
				weapon = "AVB_For";
				count = 10;
			};
			
		}; 
		class TransportMagazines
		{
			class _xx_AVB_16Rnd_9x21_Mag
			{
				magazine = "AVB_16_9x21_Mag";
				count = 40;
			};
			class _xx_AVB_16Rnd_9x21_Mag_Null
			{
				magazine = "AVB_16_9x21_Mag_Null";
				count = 40;
			};
			class _xx_9Rnd_45ACP_Mag
			{
				magazine = "9Rnd_45ACP_Mag";
				count = 40;
			};
		};
		class TransportItems
		{
			class _xx_muzzle_snds_L
			{
				name = "muzzle_snds_L";
				count = 4;
			};
			class _xx_muzzle_snds_acp
			{
				name = "muzzle_snds_acp";
				count = 4;
			};
			class _xx_optic_MRD
			{
				name = "optic_MRD";
				count = 4;
			};
		};
	};



	class AVB_Inems_Box: AVB_Box_Base_CB
	{
		mapSize = 1.58;

		_generalMacro = "AVB_Inems_Box";
		scope = 2;
		displayName = "[AVB] Снаряжение";
		model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
		maximumLoad = 4000;
		transportMaxWeapons = 12;
		transportMaxMagazines = 96;
		supplyRadius = -1;
		memoryPointSupply = "doplnovani";
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		
		class TransportMagazines
		{
			
		};
		class TransportWeapons
		{
			
		};
		class TransportItems
		{
			
		};
		class TransportBackpacks
		{
			class _xx_B_Kitbag_mcamo
			{
				backpack = "B_Kitbag_mcamo";
				count = 2;
			};
		};
	};



	class AVB_Optic_Box: AVB_Box_Base_CB {
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[AVB] Оптика";
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
	class Ruins_F;
	class WpnsBox_F_destr: Ruins_F
	{
		scope = 2;
		displayName = "[AVB] Сгоревший ящик";
		model = \AVB\Boxs\Data\WpnsBox_F_destr.p3d;
	};
};