class hgun_Rook40_F;
	class AVB_Rook40: hgun_Rook40_F
	{
		displayName = "Грач [AVB]";
		_generalMacro = "AVB_Rook40";
		scope = 2;
		magazines[] = {"AVB_16_9x21_Mag"};
		opticsZoomMin = 0.575;
		opticsZoomMax = 0.85;
		opticsZoomInit = 0.75;
		Return_magazine=1;
	};

	class AVB_Rook40_snds: AVB_Rook40
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "AVB_Rook40_snds";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};