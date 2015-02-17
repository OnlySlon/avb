class AVB_LMG_Box: AVB_Box_Base_CB
	{
		scope = 2;
		mapSize = 1.81;
		_generalMacro = "AVB_LMG_Box";
		vehicleClass = "Ammo";
		displayName = "[AVB] Легкие пулеметы LMG ";
		//model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		
		class TransportWeapons
		{
			class _xx_AVB_LMG_Zafir
			{
				weapon = "AVB_LMG_Zafir";
				count = 10; //Item Count Here
			};
			
			
			
			
		}; 
		class TransportMagazines
		{//magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
			class _xx_AVB_30Rnd_9x21_Mag
			{
				magazine = "AVB_150Rnd_762x51_Box";
				count = 20;
			};
			class _xx_AVB_30Rnd_556x45_Stanag_empty
			{
				magazine = "AVB_150Rnd_762x51_Box_empty";
				count = 20;
			};

		};
		class TransportItems
		{
			
			
		};
	};