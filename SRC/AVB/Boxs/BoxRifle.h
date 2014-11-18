class AVB_Rifle_Box: AVB_Box_Base_CB
	{
		scope = 2;
		mapSize = 1.81;
		_generalMacro = "AVB_Rifle_Box";
		vehicleClass = "Ammo";
		displayName = "[AVB] Винтовки MK20";
		//model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		
		class TransportWeapons
		{
			class _xx_AVB_Mk20
			{
				weapon = "AVB_Mk20";
				count = 10; //Item Count Here
			};
			
			class _xx_AVB_Mk20_GL
			{
				weapon = "AVB_Mk20_GL";
				count = 10;
			};
			
			
		}; 
		class TransportMagazines
		{//magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
			class _xx_AVB_30Rnd_556x45_Stanag
			{
				magazine = "AVB_30Rnd_556x45_Stanag";
				count = 40;
			};
			class _xx_AVB_30Rnd_556x45_Stanag_empty
			{
				magazine = "AVB_30Rnd_556x45_Stanag_empty";
				count = 40;
			};/*
			class _xx_30Rnd_556x45_Stanag_Tracer_Red
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Red";
				count = 40;
			};
			
			class _xx_30Rnd_556x45_Stanag_Tracer_Green
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Green";
				count = 40;
			};
			class _xx_30Rnd_556x45_Stanag_Tracer_Yellow
			{
				magazine = "30Rnd_556x45_Stanag_Tracer_Yellow";
				count = 40;
			};*/
//magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine = "1Rnd_Smoke_Grenade_shell";
				count = 40;
			};

		};
		class TransportItems
		{
			class _xx_muzzle_snds_M
			{
				name = "muzzle_snds_M";
				count = 10;
			};
			
			
		};
	};