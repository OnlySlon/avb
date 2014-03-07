class CfgVehicles
{
	class FlagCarrierCore;
	class FlagCarrier;
	
	class AVB_Flag_AFB: FlagCarrier
	{

		_generalMacro = "AVB_Flag_AFB";
		scope = 2;
		displayName = "Флаг AFB [AVB]";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\AVB\Factions\data\Flag_AFB.paa'";
		};
	};
	class AVB_Flag_AFR: FlagCarrier
	{

		_generalMacro = "AVB_Flag_AFR";
		scope = 2;
		displayName = "Флаг AFR [AVB]";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\AVB\Factions\data\Flag_AFR.paa'";
		};
	};
	class AVB_Flag_AFG: FlagCarrier
	{

		_generalMacro = "AVB_Flag_AFG";
		scope = 2;
		displayName = "Флаг AFG [AVB]";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\AVB\Factions\data\Flag_AFG.paa'";
		};
	};
	
};