////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.34
//Fri Mar 07 12:13:57 2014 : Source 'file' date Fri Mar 07 12:13:57 2014
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class rav_lifter_a3 : config.bin{
class CfgPatches
{
	class RAV_Lifter_A3
	{
		units[] = {"Eslinga","Eslinga_L","Eslinga_M","Eslinga_P","Eslinga_0","LCD_lifter"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"Extended_EventHandlers","CBA_main"};
	};
};
class CfgVehicleClasses
{
	class RAV_Objects
	{
		displayName = "$STR_Class00";
	};
};
class CfgVehicles
{
	class All{};
	class Logic: All{};
	class RAV_Lifter_A3: Logic
	{
		displayName = "$STR_lifter300";
		icon = "\RAV_lifter_A3\icono.paa";
		picture = "\RAV_lifter_A3\icono.paa";
		vehicleClass = "Modules";
		mapsize = 30;
		class Eventhandlers
		{
			init = "null = _this execVM ""\RAV_lifter_A3\setup.sqf"";";
		};
	};
	class RoadCone_L_F;
	class Eslinga: RoadCone_L_F
	{
		scope = 2;
		vehicleClass = "RAV_Objects";
		model = "\RAV_lifter_A3\Eslinga.p3d";
		displayName = "Eslinga Suelta";
		destructype = "Destructno";
		cost = 0;
		armor = 999999;
		tipoEslinga = 1;
		eslinga = 1;
		animated = 1;
		class Animationsources
		{
			class adelante_atras
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0.5;
			};
			class derecha_izquierda
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0.5;
			};
		};
	};
	class Eslinga_L: Eslinga
	{
		animated = 1;
		displayName = "Eslinga ligera";
		model = "\RAV_lifter_A3\Eslinga_L.p3d";
		hiddenSelections[] = {"0"};
		tipoEslinga = 2;
		class Animationsources
		{
			class Abre1
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class Abre2
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
			class adelante_atras
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0.5;
			};
			class derecha_izquierda
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0.5;
			};
		};
	};
	class Eslinga_M: Eslinga
	{
		model = "\RAV_lifter_A3\Eslinga_M.p3d";
		displayName = "Eslinga Mediana";
		tipoEslinga = 3;
		eslinga = 1;
	};
	class Eslinga_P: Eslinga
	{
		model = "\RAV_lifter_A3\Eslinga_P.p3d";
		displayName = "Eslinga Pesada";
		tipoEslinga = 4;
		eslinga = 1;
	};
	class Eslinga_0: Eslinga
	{
		model = "\RAV_lifter_A3\Eslinga_0.p3d";
		displayName = "Eslinga para reponer";
		tipoEslinga = 5;
		eslinga = 1;
	};
	class LCD_lifter: Eslinga
	{
		model = "\RAV_lifter_A3\LCD_lifter.p3d";
		displayName = "Display LCD (lifter)";
		hiddenSelections[] = {"0","1","2","3","4"};
	};
};
class Extended_Init_EventHandlers
{
	class Man
	{
		lifter3 = "_dummy = (_this select 0) execVM '\RAV_Lifter_A3\InitMan.sqf';";
	};
};
class CfgSounds
{
	sounds[] = {"rav_snd_drop_obj","rav_snd_drop_veh","rav_snd_drop_splash"};
	class rav_snd_drop_obj
	{
		name = "rav_snd_crash1";
		sound[] = {"\RAV_LIFTER_A3\Sound\dropObj.ogg",3.0,1.0};
		titles[] = {};
	};
	class rav_snd_drop_veh
	{
		name = "rav_snd_drop_veh";
		sound[] = {"\RAV_LIFTER_A3\Sound\dropVeh.ogg",3.0,1.0};
		titles[] = {};
	};
	class rav_snd_drop_splash
	{
		name = "rav_snd_drop_splash";
		sound[] = {"\RAV_LIFTER_A3\Sound\splash.ogg",3.0,1.0};
		titles[] = {};
	};
};
//};
