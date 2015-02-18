#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3

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
	class AVB_R 
	{
		displayName = $STR_fr;
		priority = 100;
		side = 0;
		icon = "\AVB\Factions\ui\Icon_R.paa";
		flag = "\AVB\Flags\Flag_R.paa";
	};
	class AVB_B
	{
		displayName = $STR_fb;
		priority = 100;
		side = 1;
		icon = "\AVB\Factions\ui\Icon_B.paa";
		flag = "\AVB\Flags\Flag_B.paa";
	};
	class AVB_G 
	{
		displayName = $STR_fg;
		priority = 100;
		side = 2;
		icon = "\AVB\Factions\ui\Icon_G.paa";
		flag = "\AVB\Flags\Flag_G.paa";
	};
	class AVB_C 
	{
		displayName = $STR_fc;
		priority = 100;
		side = 3;
		icon = "\AVB\Factions\ui\Icon_C.paa";
		flag = "\AVB\Flags\Flag_C.paa";
	};
	
};

