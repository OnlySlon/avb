
class CfgPatches
{
	class AVB_Pack_units
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR"};
     };
};
/*
1 = BLUFOR
2 = OPFOR
3 = RESISTANCE
4 = CIVILIAN
*/




class CfgVehicleClasses
{
	class AVB_R_Units
	{
		displayName = "Игроки";

	
    };
	class AVB_B_Units
	{
		displayName = "Игроки";

	
    };
	class AVB_G_Units
	{
		displayName = "Игроки";

	
    };
    class AVB_C_Units
	{
		displayName = "Игроки";

	
    };
};
class ViewPilot;

class CfgVehicles
{
     class I_Soldier_base_F;
		class AVB_Soldier_base: I_Soldier_base_F
		{
			scope = 1;
			canCarryBackPack=1;
			canDeactivateMines=1;
			engineer=1; 
	        attendant = "true";
			UAF=1;
			uniformAccessories[] = {};
			modelsides[] = {3,2,1,0};

			class ViewPilot: ViewPilot
			{
				initFov = 0.75;
				maxFov = 0.85;
				minFov = 0.575;
			};
		};


        class AVB_Soldier_R: AVB_Soldier_base
	{
		scope = 2;
		side=0;
		displayName = "Игрок";
        faction = "AVB_R";
		vehicleClass = "AVB_R_Units";
        uniformClass = "AVB_Soldier_R";
		Items[] = {};

		//weapons[] = {"Throw","Put","AVB_Rook40"};
        //magazines[] = {"AVB_16_9x21_Mag_Null","AVB_16_9x21_Mag_Null","AVB_Box_30x9x21"};
        weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_red"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformCR.paa"};
                
	};      
	class AVB_Soldier_B: AVB_Soldier_base
	{
		scope = 2;
		side=1;
		displayName = "Игрок";
        faction = "AVB_B";
		vehicleClass = "AVB_B_Units";
        uniformClass = "AVB_Soldier_B";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_Blue"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformCB.paa"};
	};
	class AVB_Soldier_G: AVB_Soldier_base
	
	{
		scope = 2;
		side=2;
		displayName = "Игрок";
        faction = "AVB_G";
		vehicleClass = "AVB_G_Units";
        uniformClass = "AVB_Soldier_G";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_Black"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformCG.paa"};
	};
	class AVB_Soldier_CC: AVB_Soldier_base
	
	{
		scope = 2;
		side=3;
		displayName = "Игрок";
        faction = "AVB_C";
		vehicleClass = "AVB_C_Units";
        uniformClass = "AVB_Soldier_C";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {""};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_Black"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformCC.paa"};
	};
};

        

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class AVB_Soldier_R: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Камуфляж зеленый";
		picture = "\AVB\Units\ui\FieldUniformCR.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_R";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_B: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Камуфляж пустыня";
		picture = "\AVB\Units\ui\FieldUniformCB.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_B";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_G: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Камуфляж темный";
		picture = "\AVB\Units\ui\FieldUniformCG.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};

		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_G";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_C: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Камуфляж другой";
		picture = "\AVB\Units\ui\FieldUniformCG.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};

		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_C";
			containerClass="Supply60";
			mass=80;
		};
	};
};
