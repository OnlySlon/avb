#define _ARMA_
#define FovOptics 0.138//6X //0.175 4X
//ndefs=13
enum {
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
	class AVB_weapons_static
	{
		units[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F","A3_Armor_F","A3_Static_F","A3_Static_F_Mortar_01"};
		version = "0.01";
	};
};
#include "StaticWeapons.h"


class ViewOptics;
class ViewGunner;
class Turrets;
class MainTurret;
class assembleInfo;
class ViewPilot;
class OpticsIn;
class CfgVehicles
{
	class HMG_01_base_F;
	class AVB_MG_high_base: HMG_01_base_F
	{
		scope = 2;
		model = "\A3\Static_F_Gamma\HMG_01\HMG_01_high_F.p3d";
		_generalMacro = "AVB_MG_high_base";
		armor = 30.0;
		//magazines[] = {"AVB_50Rnd_127x99_mag"};
		class ViewOptics: ViewOptics
				{
					initFov = FovOptics;
					minFov = FovOptics;
					maxFov = FovOptics;
					visionMode[] = {"Normal"};
				};
				
				class ViewGunner: ViewGunner
				{
					initFov = 0.75;
					minFov = 0.575;
					maxFov = 0.85;
				};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				gunnerAction = "gunner_standup01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				magazines[] = {"AVB_50Rnd_127x99_mag"};
				weapons[] = {"AVB_HMG"};
				class ViewOptics: ViewOptics
				{
					initFov = FovOptics;
					minFov = FovOptics;
					maxFov = FovOptics;
					visionMode[] = {"Normal"};
				};
				
				class ViewGunner: ViewGunner
				{
					initFov = 0.75;
					minFov = 0.575;
					maxFov = 0.85;
				};
			};
		};
	};
	class AVB_MG_low_base: HMG_01_base_F
	{
		armor = 30.0;
		_generalMacro = "AVB_MG_low_base";
		scope = 2;

		crew = "AVB_Soldier_R";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics = 1;
				discreteDistance[] = {100,200,300,400,600,800,1000,1200,1500};
				discreteDistanceInitIndex = 2;
				turretInfoType = "RscOptics_crows";
				gunnerOpticsModel = "\a3\weapons_f_gamma\reticle\HMG_01_Optics_Gunner_F";
				minElev = -20;
				maxElev = 55;///////////////////////////////////////
				weapons[] = {"AVB_HMG"};
				magazines[] = {"AVB_50Rnd_127x99_mag"};
				gunnerAction = "gunner_static_low01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				displayName = "";
				
				class ViewOptics: ViewOptics
				{
					
					initFov = FovOptics;
					minFov = FovOptics;
					maxFov = FovOptics;
					visionMode[] = {"Normal"};
					
				};
				
				class ViewGunner: ViewGunner
				{
					
					initFov = 0.75;
					minFov = 0.575;
					maxFov = 0.85;
				};
			};
		};
	};
	
	class AVB_MG_low: AVB_MG_low_base
	{
		armor = 30.0;
		_generalMacro = "AVB_MG_low";
		scope = 2;
		side = 0;
		faction = "AVB_R";
		crew = "AVB_Soldier_R";
		displayName = "[AVB] Пулемет Mк30A низкий";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_HMG_01_weapon_F","B_HMG_01_support_F"};
			displayName = "";
		};
		
		
	};
	
	class AVB_MG_high: AVB_MG_high_base
	{
		displayName = "[AVB] Пулемет Mк30A высокий";
		_generalMacro = "AVB_MG_high";
		scope = 2;
		side = 0;
		faction = "AVB_R";
		crew = "AVB_Soldier_R";
		class UserActions
		{
			class Reload
			{
				displayName = "<img image='\avb\main\data\logo.paa' size='1' shadow='false' /> Перезарядить";
    			displayNameDefault = "<img image='\avb\main\data\logo.paa' size='3' shadow='false' />";
                showWindow = 0;
                hideOnUse = 1;
				position="action";
				radius=2;
                onlyForPlayer = 1;
				condition="true";
				statement="hint 'перезарядка'";
			};
		};	
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"B_HMG_01_high_weapon_F","B_HMG_01_support_high_F"};
			displayName = "";
		};
	};
	
/*

АГС

*/

	class GMG_01_base_F;

	class AVB_AGS_base: GMG_01_base_F
	{
		author = "[AVB] АГС Мк32";
		displayName = "[AVB] АГС Мк32";
		_generalMacro = "AVB_AGS_base";
		scope = 2;
		side = 0;
		faction = "AVB_R";
		crew = "AVB_Soldier_R";
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"O_GMG_01_weapon_F","O_HMG_01_support_F"};
			displayName = "";
		};
		class ViewOptics: ViewOptics
				{
					
					initFov = FovOptics;
					minFov = FovOptics;
					maxFov = FovOptics;
					visionMode[] = {"Normal"};
					
				};
		class ViewPilot: ViewPilot
				{
					
					initFov = 0.75;
					minFov = 0.575;
					maxFov = 0.85;
				};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {};	

				class OpticsIn: OpticsIn{
					class ViewOptics: ViewOptics
					{
						
						initFov = FovOptics;
						minFov = FovOptics;
						maxFov = FovOptics;
						visionMode[] = {"Normal"};
						
					};
				};

				class ViewOptics: ViewOptics
				{
					
					initFov = FovOptics;
					minFov = FovOptics;
					maxFov = FovOptics;
					visionMode[] = {"Normal"};
					
				};
				
				class ViewGunner: ViewGunner
				{
					
					initFov = 0.75;
					minFov = 0.575;
					maxFov = 0.85;
				};
			};
		};
	};

/*

Mortar

*/

class Mortar_01_base_F;

class AVB_Mortar_base: Mortar_01_base_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName="[AVB] Миномет Мк8";
		_generalMacro = "AVB_Mortar_base";
		scope = 2;
		side = 0;
		faction = "AVB_R";
		//crew = "O_Soldier_F";
		crew = "AVB_Soldier_R";
		//availableForSupportTypes[] = {"Artillery"};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Static_f\Mortar_01\data\Mortar_01_OPFOR_CO.paa"};
		class assembleInfo: assembleInfo
		{
			dissasembleTo[] = {"O_Mortar_01_weapon_F","O_Mortar_01_support_F"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
					magazines[] = {};
				class ViewOptics: ViewOptics
				{
					
					initFov = FovOptics;
					minFov = FovOptics;
					maxFov = FovOptics;
					visionMode[] = {"Normal"};
					
				};
				
				class ViewGunner: ViewGunner
				{
					
					initFov = 0.75;
					minFov = 0.575;
					maxFov = 0.85;
				};
			};
		};
	};
	
};