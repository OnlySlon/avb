class AVB_SMG_Box: AVB_Box_Base_CB
	{
		scope = 2;
		mapSize = 1.81;
		_generalMacro = "AVB_SMG_Box";
		vehicleClass = "Ammo";
		displayName = "[AVB] Легкие автоматы SMG";
		//model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		
		class TransportWeapons
		{
			class _xx_AVB_SMG
			{
				weapon = "AVB_SMG";
				count = 10; //Item Count Here
			};
			
			
			
			
		}; 
		class TransportMagazines
		{//magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
			class _xx_AVB_30Rnd_9x21_Mag
			{
				magazine = "AVB_30Rnd_9x21_Mag";
				count = 40;
			};
			class _xx_AVB_30Rnd_556x45_Stanag_empty
			{
				magazine = "AVB_30Rnd_9x21_Mag_empty";
				count = 40;
			};

		};
		class TransportItems
		{
			class _xx_muzzle_snds_l
			{
				name = "muzzle_snds_l";
				count = 10;
			};
			
			
		};
	};