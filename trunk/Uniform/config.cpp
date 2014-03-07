class CfgPatches 
{
	class AVB_Uniform
	{
		units[] = {};
		weapons[] = {};
		
		//requiredVersion = ;
		requiredAddons[] = {"A3_Weapons_F","A3_Characters_F_BLUFOR","A3_Characters_F_INDEP","A3_Weapons_F_beta"};
		//fileName = "";
		version = "001a";
		
		//author[] = {""}; 
		//authorUrl = "";
	};
};

class cfgWeapons
{
	

class ItemInfo;
class UniformItem;
class U_C_Poloshirt_stripped;
class AVB_Uniform_Civ_AFR: U_C_Poloshirt_stripped
	{
		scope = 2;
		displayName = "Одежда гражданских AFR";
		//picture = "\AVB\AVB_Uniform\Data\sud_ru_digi_uniform.paa";
		//model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Civ_AFR";
			containerClass = "Supply20";
			mass = 20;
		};
	};
class AVB_Uniform_Civ_AFB: U_C_Poloshirt_stripped
	{
		scope = 2;
		displayName = "Одежда гражданских AFB";
		//picture = "\AVB\AVB_Uniform\Data\sud_ru_digi_uniform.paa";
		//model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Civ_AFB";
			containerClass = "Supply20";
			mass = 20;
		};
	};
class AVB_Uniform_Civ_AFG: U_C_Poloshirt_stripped
	{
		scope = 2;
		displayName = "Одежда гражданских AFG";
		//picture = "\AVB\AVB_Uniform\Data\sud_ru_digi_uniform.paa";
		//model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "AVB_Civ_AFG";
			containerClass = "Supply20";
			mass = 20;
		};
	};

};

