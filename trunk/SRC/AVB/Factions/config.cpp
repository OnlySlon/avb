
class CfgPatches
{
	class AVB_Faction
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
     };
};
/*
0 = BLUFOR
1 = OPFOR
2 = RESISTANCE
3 = CIVILIAN
*/
class cfgFactionClasses
{
	class AVB_CR 
	{
		displayName = 'Компания "RED"';
		priority = 100;
		side = 0;
		icon = "\AVB\Factions\ui\Icon_CR.paa";
		flag = "\AVB\Flags\Flag_GR.paa";
	};
	class AVB_CB
	{
		displayName = 'Компания "BLUE"';
		priority = 100;
		side = 1;
		icon = "\AVB\Factions\ui\Icon_CB.paa";
		flag = "\AVB\Flags\Flag_CB.paa";
	};
	class AVB_CG 
	{
		displayName = 'Организация "GREEN"';
		priority = 100;
		side = 2;
		icon = "\AVB\Factions\ui\Icon_CG.paa";
		flag = "\AVB\Flags\Flag_CG.paa";
	};
	class AVB_CC 
	{
		displayName = 'Организация "CIVIL"';
		priority = 100;
		side = 3;
		icon = "\AVB\Factions\ui\Icon_CC.paa";
		flag = "\AVB\Flags\Flag_CC.paa";
	};
	
};

