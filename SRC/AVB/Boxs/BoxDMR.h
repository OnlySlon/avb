class AVB_DMR_Box: AVB_Box_Base_CB
	{
		scope = 2;
		mapSize = 1.81;
		_generalMacro = "AVB_DMR_Box";
		vehicleClass = "Ammo";
		displayName = "[AVB] Снайперские винтовки ";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		
		class TransportWeapons
		{
			class _xx_AVB_DMR
			{
				weapon = "AVB_DMR";
				count = 10; //Item Count Here
			};
	
		}; 
		class TransportMagazines
		{
			class _xx_AVB_10Rnd_762x51_Mag
			{
				magazine = "AVB_10Rnd_762x51_Mag";
				count = 20;
			};
			class _xx_AVB_10Rnd_762x51_Mag_empty
			{
				magazine = "AVB_10Rnd_762x51_Mag_empty";
				count = 20;
			};
		};
		class TransportItems{};
		class UserActions
		{
			class drag
			{
				displayName = "<img image='\avb\main\data\logo.paa' size='1' shadow='false' /> Тащить";
    			displayNameDefault = "<img image='\avb\main\data\logo.paa' size='3' shadow='false' />";
                showWindow = 0;
                hideOnUse = 1;
				position="action";
				radius=2;
                onlyForPlayer = 1;
				condition="true";
				statement="Hint '123';diag_log this";
			};
		};
	};