#define _ARMA_

enum {
	OrdinalEnum = 2,
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches 
{
	class AVB_UNIT
	{
		units[] = {"AVB_Civ_AFR"};
		//weapons[] = {};
		
		//requiredVersion = ;
	requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Characters_F","A3_Characters_F_BLUFOR","A3_Characters_F_OPFOR"};
		//fileName = "";
		version = "0.01";
		
		//author[] = {""}; 
		//authorUrl = "";
	};
};


class UniformSlotInfo
{
	slotType = 0;
	linkProxy = "-";
};
class cfgVehicles
{
class Man;
	class CAManBase: Man
	{
		class AnimationSources;
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
		class ViewPilot {
		initAngleX = 8;
		initAngleY = 0;
		initFov = 0.75;
		maxAngleX = 85;
		maxAngleY = 150;
		maxFov = 0.95;
		maxMoveX = 0;
		maxMoveY = 0;
		maxMoveZ = 0;
		minAngleX = -85;
		minAngleY = -150;
		minFov = 0.575;
		minMoveX = 0;
		minMoveY = 0;
		minMoveZ = 0;
		
	
		};
	};

	
	//class I_soldier_F;
	//class B_G_Soldier_F;
	class C_man_1;
	

class AVB_Civ_AFB:C_man_1
	{
		scope = 2;
		displayName = "Гражданский AFB [AVB]";
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3.2;
		faction = "AVB_AFB";
		//model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		//uniformClass = "AVB_NG_Uniform";
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\AVB\AVB_UNIT\Data\ia_soldier_01_clothing_co.paa"};
		engineer = 1;
		canDeactivateMines = 1;
		attendant = 1;
		side=1;
		hiddenSelections[] = {"Camo"};
		uniformClass = "AVB_Uniform_Civ_AFB";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		//respawnitems[] = {"FirstAidKit"};
		//weapons[] = {"Binocular","AVB_RH_M4_ris","Throw","Put"};
		//respawnWeapons[] = {"Binocular","Binocular","AVB_RH_M4_ris","Throw","Put"};
		//magazines[] = {"HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red"};
		//respawnMagazines[] = {"HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red"};
		//Items[] = {"FirstAidKit"};
		//linkedItems[] = {"H_Bandanna_khk","V_BandollierB_blk","ItemMap","ItemCompass","IteAVBatch","ItemRadio"};
		//respawnLinkedItems[] = {"H_Bandanna_khk","V_BandollierB_blk","ItemMap","ItemCompass","IteAVBatch","ItemRadio"};
		//backpack = "B_AssaultPack_khk";
		
	};
	class AVB_Civ_AFR:C_man_1
	{
		scope = 2;
		displayName = "Гражданский AFR [AVB]";
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3.2;
		faction = "AVB_AFR";
		side=0;
		hiddenSelections[] = {"Camo"};
		uniformClass = "AVB_Uniform_Civ_AFR";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		//model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		//uniformClass = "AVB_NG_Uniform";
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\AVB\AVB_UNIT\Data\ia_soldier_01_clothing_co.paa"};
		engineer = 1;
		canDeactivateMines = 1;
		attendant = 1;
		//respawnitems[] = {"FirstAidKit"};
		//weapons[] = {"Binocular","AVB_RH_M4_ris","Throw","Put"};
		//respawnWeapons[] = {"Binocular","Binocular","AVB_RH_M4_ris","Throw","Put"};
		//magazines[] = {"HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red"};
		//respawnMagazines[] = {"HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red"};
		//Items[] = {"FirstAidKit"};
		//linkedItems[] = {"H_Bandanna_khk","V_BandollierB_blk","ItemMap","ItemCompass","IteAVBatch","ItemRadio"};
		//respawnLinkedItems[] = {"H_Bandanna_khk","V_BandollierB_blk","ItemMap","ItemCompass","IteAVBatch","ItemRadio"};
		//backpack = "B_AssaultPack_khk";
		
	};
	class AVB_Civ_AFG:C_man_1
	{
		scope = 2;
		displayName = "Гражданский AFG [AVB]";
		cost = 500000;
		camouflage = 1.6;
		sensitivity = 3.2;
		faction = "AVB_AFG";
		side=2;
		hiddenSelections[] = {"Camo"};
		uniformClass = "AVB_Uniform_Civ_AFG";
		hiddenSelectionsTextures[] = {"\A3\characters_f\civil\data\c_poloshirt_3_co.paa"};
		//model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		//uniformClass = "AVB_NG_Uniform";
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\AVB\AVB_UNIT\Data\ia_soldier_01_clothing_co.paa"};
		engineer = 1;
		canDeactivateMines = 1;
		attendant = 1;
		//respawnitems[] = {"FirstAidKit"};
		//weapons[] = {"Binocular","AVB_RH_M4_ris","Throw","Put"};
		//respawnWeapons[] = {"Binocular","Binocular","AVB_RH_M4_ris","Throw","Put"};
		//magazines[] = {"HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red"};
		//respawnMagazines[] = {"HandGrenade","HandGrenade","HandGrenade","SmokeShell","SmokeShell","SmokeShell","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red"};
		//Items[] = {"FirstAidKit"};
		//linkedItems[] = {"H_Bandanna_khk","V_BandollierB_blk","ItemMap","ItemCompass","IteAVBatch","ItemRadio"};
		//respawnLinkedItems[] = {"H_Bandanna_khk","V_BandollierB_blk","ItemMap","ItemCompass","IteAVBatch","ItemRadio"};
		//backpack = "B_AssaultPack_khk";
		
	};
	
};
