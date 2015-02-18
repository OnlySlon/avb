
class CfgPatches
{
	class AVB_Flags
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
     };
};

	class CfgVehicles
{
	class FlagCarrier;

	class AVB_FlagCarrierR: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = $STR_DN_flag_R;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_R.paa""";
		};
	};

	class AVB_FlagCarrierB: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = $STR_DN_flag_B;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_B.paa""";
		};
	};

	class AVB_FlagCarrierC: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = $STR_DN_flag_C;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_C.paa""";
		};
	};

	class AVB_FlagCarrierG: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = $STR_DN_flag_G;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_G.paa""";
		};
	};
};
	
