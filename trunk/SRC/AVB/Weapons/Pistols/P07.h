class hgun_P07_F;
	class AVB_P07: hgun_P07_F
	{
		displayName = "P07 [AVB]";
		_generalMacro = "AVB_P07";
		scope = 2;
		magazines[] = {"AVB_16_9x21_Mag"};
		opticsZoomMin = 0.575;
		opticsZoomMax = 0.85;
		opticsZoomInit = 0.75;
		Return_magazine=1;
	};
	class AVB_P07_snds: AVB_P07
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "AVB_P07_snds";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "muzzle_snds_L";
			};
		};
	};
