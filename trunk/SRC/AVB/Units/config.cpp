
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
class cfgFactionClasses
{
	class AVB_CR 
	{
		displayName = 'Компания "RED"';
		priority = 100;
		side = 0;
		icon = "\AVB\Units\ui\Icon_CR.paa";
		flag = "\AVB\Units\ui\Flag_GR.paa";
	};
	class AVB_CB
	{
		displayName = 'Компания "BLUE"';
		priority = 100;
		side = 1;
		icon = "\AVB\Units\ui\Icon_CB.paa";
		flag = "\AVB\Units\ui\Flag_CB.paa";
	};
	class AVB_CG 
	{
		displayName = 'Организация "GREEN"';
		priority = 100;
		side = 2;
		icon = "\AVB\Units\ui\Icon_CG.paa";
		flag = "\AVB\Units\ui\Flag_CG.paa";
	};
	class AVB_CC 
	{
		displayName = 'Организация "CIVIL"';
		priority = 100;
		side = 2;
		icon = "\AVB\Units\ui\Icon_CC.paa";
		flag = "\AVB\Units\ui\Flag_CC.paa";
	};
	
};



class CfgVehicleClasses
{
	class AVB_GR_Units
	{
		displayName = "Бойцы красных";

	
    };
	class AVB_GB_Units
	{
		displayName = "Бойцы синих";

	
    };
	class AVB_GG_Units
	{
		displayName = "Бойцы зеленых";

	
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
			
			class ViewPilot: ViewPilot{

				initFov = 0.75;
				
				maxFov = 0.85;
				
				minFov = 0.575;
				

			};
		};


        class AVB_Soldier_GR: AVB_Soldier_base
	{
		scope = 2;
		side=0;
		displayName = "Боец Красных";
        faction = "AVB_GR";
		vehicleClass = "AVB_GR_Units";
        uniformClass = "AVB_Soldier_GR";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_red"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformGR.paa"};
                
	};      
	class AVB_Soldier_GB: AVB_Soldier_base
	{
		scope = 2;
		side=1;
		displayName = "Боец Синих";
        faction = "AVB_GB";
		vehicleClass = "AVB_GB_Units";
        uniformClass = "AVB_Soldier_GB";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_Blue"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
        hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformGB.paa"};
	};
	class AVB_Soldier_GG: AVB_Soldier_base
	
	{
		scope = 2;
		side=2;
		displayName = "Боец зеленых";
        faction = "AVB_GG";
		vehicleClass = "AVB_GG_Units";
        uniformClass = "AVB_Soldier_GG";
		Items[] = {};
		weapons[] = {"Throw","Put"};
        magazines[] = {};
        linkedItems[] = {"ItemWatch","ItemRadio","ItemGPS","AVB_Beret_Black"};
		respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\AVB\Units\Data\UniformGG.paa"};
	};
};

        

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class AVB_Soldier_GR: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма бойца Красных";
		picture = "\AVB\Units\ui\FieldUniformGR.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_opfor_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_GR";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_GB: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма бойца Синих";
		picture = "\AVB\Units\ui\FieldUniformGB.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_GB";
			containerClass="Supply60";
			mass=80;
		};
	};
	class AVB_Soldier_GG: Uniform_Base
	{
		scope=2;
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		displayName = "Форма бойца Зеленых";
		picture = "\AVB\Units\ui\FieldUniformGG.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa"};

		
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Soldier_GG";
			containerClass="Supply60";
			mass=80;
		};
	};
};
