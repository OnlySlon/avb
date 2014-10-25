
class CfgPatches
{
	class AVB_Flags
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
     };
};

	class CfgVehicles
{
	class FlagCarrier;

	class AVB_FlagCarrierCR: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = 'Флаг компании "RED"';
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_CR.paa""";
		};
	};

	class AVB_FlagCarrierCB: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = 'Флаг компании "BLUE"';
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_CB.paa""";
		};
	};

	class AVB_FlagCarrierCC: FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = 'Флаг организации "CIVIL"';
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_CC.paa""";
		};
	};

	class AVB_FlagCarrierCG:  FlagCarrier{
		scope = 2;
		accuracy = 1000;
		icon = "\AVB\Flags\UI\flag.paa";
		displayName = 'Флаг организации "GREEN"';
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\AVB\Flags\flag_CG.paa""";
		};
	};
};
	
