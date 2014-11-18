

class CfgPatches
{
	class AVB_weapons_pistols
	{
		units[] = {};
		weapons[] = {"AVB_Rook40","AVB_Rook40_snds","AVB_P07_F","AVB_P07_snds:"};
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
		version = "0.01";
	};
};

class Mode_SemiAuto;
class ItemInfo;

class CfgWeapons
{
	#include "Rook40.h"	
	#include "P07.h"	

	
/*
	class hgun_ACPC2_F;
	class AVB_ACPC2: hgun_ACPC2_F
	{
		displayName = "[AVB] ACPC2";
		_generalMacro = "AVB_ACPC2";
		scope = 2;
		
		opticsZoomMin = 0.575;
		opticsZoomMax = 0.85;
		opticsZoomInit = 0.75;
	};

	class AVB_ACPC2_snds: AVB_ACPC2
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "AVB_ACPC2_snds";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};

	class hgun_Pistol_heavy_01_F;
	class AVB_For: hgun_Pistol_heavy_01_F
	{
		displayName = "Фор";
		_generalMacro = "AVB_For";
		scope = 2;
		
		opticsZoomMin = 0.575;
		opticsZoomMax = 0.85;
		opticsZoomInit = 0.75;
	};
	class AVB_For_snds: AVB_For
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "AVB_For_snds";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_acp";
			};
		};
	};
	class AVB_For_MRD: AVB_For
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "AVB_For_MRD";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_MRD";
			};
		};
	};
	*/
};


