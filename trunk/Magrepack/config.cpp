
class CfgPatches
{
	class outlw_magRepack
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_UI_F"};
	};
};
/*
class Extended_PreInit_EventHandlers
{
	class outlw_magRepack
	{
		clientInit = "outlw_magRepack_Var = [] execVM 'outlw_magRepack\MagRepack_init.sqf'";
	};
};
*/
#include "Configs\defines.hpp"
#include "Configs\MagRepack_Dialog_Main.hpp"
#include "Configs\MagRepack_Dialog_Keybindings.hpp"
#include "Configs\MagRepack_Dialog_About.hpp"
