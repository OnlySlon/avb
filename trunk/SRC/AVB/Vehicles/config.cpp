
class CfgPatches
{
	class AVB_Vehicle
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
     };
};

class ViewPilot;
class ViewCargo;
class CfgVehicles
{
	class O_Quadbike_01_F;
	class AVB_Quadbike: O_Quadbike_01_F
	{
		_generalMacro = "AVB_Quadbike";
		displayName = "[AVB] Квадроцикл";
		scope = 2;
		side = 0;
		faction = "AVB_R";
		//crew = "O_Soldier_F";
		//typicalCargo[] = {"O_Soldier_lite_F"};
		//hiddenSelectionsTextures[] = {"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};
		class ViewPilot: ViewPilot
		{
				initFov = 0.75;				
				maxFov = 0.85;				
				minFov = 0.575;
		};
		class ViewCargo: ViewCargo
		{
				initFov = 0.75;				
				maxFov = 0.85;				
				minFov = 0.575;
		};

	};
};
