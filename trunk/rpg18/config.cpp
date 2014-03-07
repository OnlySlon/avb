////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.34
//Thu Mar 06 10:42:03 2014 : Source 'file' date Thu Mar 06 10:42:03 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class rpg18 : config.bin{
class CfgPatches
{
	class RPG18
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Weapons_F"};
	};
};
class CfgAmmo
{
	class R_PG32V_F;
	class RPG18_R: R_PG32V_F
	{
		scope = 2;
		hit = 300;
		indirecthit = 10;
		indirecthitrange = 1;
		sideairfriction = 0.05;
		thrust = 80;
		thrusttime = 1;
		timetolive = 6;
		maxspeed = 115;
	};
};
class CfgMagazines
{
	class RPG32_HE_F;
	class RPG32_F;
	class RPG18_HEAT: RPG32_F
	{
		picture = "\RPG18\Data\icon\m_m136_ca.paa";
		scope = 2;
		ammo = "RPG18_R";
		descriptionshort = "Range: 200 m<br/>Type: HEAT (High Explosive Anti-Tank)<br/>Used in: RPG-18";
		displayname = "RPG-18";
		displaynameshort = "HEAT";
		modelSpecial = "\RPG18\rpg18_loaded.p3d";
		initspeed = 115;
		mass = 8;
		allowedslots[] = {701,801,901};
	};
};
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class WeaponSlotsInfo;
	};
	class Hamr2Collimator;
	class launch_RPG32_F;
	class launch_RPG18_F: launch_RPG32_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Launcher";
		scope = 2;
		displayName = "RPG-18";
		model = "\RPG18\rpg18.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\rpg18\Data\Anim\m136.rtm"};
		magazines[] = {"RPG18_HEAT"};
		visionMode[] = {"Normal"};
		picture = "\RPG18\Data\icon\w_rpg18_ca.paa";
		discretedistance[] = {100,200,300,400,500};
		discretedistanceinitindex = 1;
		weaponinfotype = "RscWeaponZeroing";
		reloadtime = 2;
		class OpticsModes
		{
			class Hamr2Collimator
			{
				discretedistance[] = {100,200,300,400,500};
				discretedistanceinitindex = 1;
				distancezoommax = 300;
				distancezoommin = 300;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {""};
				opticszoominit = 0.75;
				opticszoommax = 1;
				opticszoommin = 0.375;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
	};
	class launch_RPG18_EMPTY_F: Launcher_Base_F
	{
		scope = 2;
		displayName = "RPG-18 (Empty)";
		model = "\rpg18\rpg18_loaded.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\RPG18\Data\Anim\m136.rtm"};
		visionMode[] = {"Normal"};
		picture = "\rpg18\Data\icon\w_rpg18_ca.paa";
		discretedistance[] = {100,200,300,400,500};
		discretedistanceinitindex = 1;
		weaponinfotype = "RscWeaponZeroing";
		reloadtime = 2;
		magazines[] = {};
		class OpticsModes
		{
			class Hamr2Collimator
			{
				discretedistance[] = {100,200,300,400,500};
				discretedistanceinitindex = 1;
				distancezoommax = 300;
				distancezoommin = 300;
				memorypointcamera = "eye";
				opticsdisableperipherialvision = 0;
				opticsflare = 0;
				opticsid = 1;
				opticsppeffects[] = {""};
				opticszoominit = 0.75;
				opticszoommax = 1;
				opticszoommin = 0.375;
				usemodeloptics = 0;
				visionmode[] = {};
			};
		};
	};
};
class cfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class EventHandlers
		{
			init = "_this execVM ""\rpg18\disposable.sqf""";
		};
	};
	class NATO_Box_Base;
	class RPG18_box: NATO_Box_Base
	{
		scope = 2;
		accuracy = 1000;
		displayName = "RPG-18 Box";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		class TransportWeapons
		{
			class RPG18
			{
				weapon = "launch_RPG18_F";
				count = 50;
			};
		};
	};
};
//};
