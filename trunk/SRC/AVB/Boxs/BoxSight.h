class AVB_Sight_Box: AVB_Box_Base_CB
	{
		scope = 2;
		mapSize = 1.81;
		_generalMacro = "AVB_Sight_Box";
		vehicleClass = "Ammo";
		displayName = "[AVB] Прицелы";
		//model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		
		class TransportWeapons{}; 
		class TransportMagazines{};
		class TransportItems
		{
			class _xx_acc_pointer_IR
			{
				name = "acc_pointer_IR";
				count = 10;
			};
			class _xx_acc_flashlight
			{
				name = "acc_flashlight";
				count = 10;
			};
		};
	};