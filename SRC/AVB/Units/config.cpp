
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
	class AVB_CR_Units
	{
		displayName = "Сотрудники";

	
    };
	class AVB_CB_Units
	{
		displayName = "Сотрудники";

	
    };
	class AVB_CG_Units
	{
		displayName = "Сотрудники";

	
    };
    class AVB_CC_Units
	{
		displayName = "Сотрудники";

	
    };
};
class ViewPilot;

class CfgVehicles
{
     class I_Soldier_base_F;
		class AVB_Soldier_base: I_Soldier_base_F
		{
			scope = 2;
			canCarryBackPack=1;
			canDeactivateMines=1;
			engineer=1; 
	        attendant = "true";
			UAF=1;
			uniformAccessories[] = {};
			class ViewPilot: ViewPilot
			{
				initFov = 0.75;
				maxFov = 0.85;
				minFov = 0.575;
			};
		};


        class AVB_Soldier_CR: AVB_Soldier_base
	{
		scope = 2;
		side=0;
		displayName = "Сотрудник";
        faction = "AVB_CR";
		vehicleClass = "AVB_CR_Units";
        uniformClass = "AVB_Soldier_CR";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_red"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformCR.paa"};
                
	};      
	class AVB_Soldier_CB: AVB_Soldier_base
	{
		scope = 2;
		side=1;
		displayName = "Сотрудник";
        faction = "AVB_CB";
		vehicleClass = "AVB_CB_Units";
        uniformClass = "AVB_Soldier_CB";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_Blue"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformCB.paa"};
	};
	class AVB_Soldier_CG: AVB_Soldier_base
	
	{
		scope = 2;
		side=2;
		displayName = "Сотрудник";
        faction = "AVB_CG";
		vehicleClass = "AVB_CG_Units";
        uniformClass = "AVB_Soldier_CG";
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
		displayName = "Сотрудник";
        faction = "AVB_CC";
		vehicleClass = "AVB_CC_Units";
        uniformClass = "AVB_Soldier_CC";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
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
	class AVB_Soldier_CR: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма";
		picture = "\AVB\Units\ui\FieldUniformCR.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_CR";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_CB: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма";
		picture = "\AVB\Units\ui\FieldUniformCB.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_CB";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_CG: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма";
		picture = "\AVB\Units\ui\FieldUniformCG.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};

		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_CG";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_CC: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма";
		picture = "\AVB\Units\ui\FieldUniformCG.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};

		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_CC";
			containerClass="Supply60";
			mass=80;
		};
	};
};
