


class CfgPatches
{
	class AVB_Craig_Beret
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};
class CfgVehicleClasses
{
	class AVB_Beret
	{
		displayName = "??????";
	};
};
class cfgWeapons
{
	class H_Beret_blk;
class AVB_Beret_Black: H_Beret_blk
	{
		
		picture = "\AVB\Hats\Beret\ui\Black.jpg";
		_generalMacro = "AVB_Beret_Black";
		scope = 1;
		displayName = "Берет черный";
		hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Data\Black.paa"};
	};
class AVB_Beret_Blue: H_Beret_blk
	{
		
		picture = "\AVB\Hats\Beret\ui\Blue.jpg";
		_generalMacro = "AVB_Beret_Blue";
		scope = 1;
		displayName = "Берет синий";
		hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Data\Blue.paa"};
	};
class AVB_Beret_Red: H_Beret_blk
	{
		
		picture = "\AVB\Hats\Beret\ui\Red.jpg";
		_generalMacro = "AVB_Beret_Red";
		scope = 1;
		displayName = "Берет красный";
		hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Data\Red.paa"};
	};


/*


        class AVB_Beret_Black: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "????? (??????)";
		picture = "\AVB\Hats\Beret\ui\Black.jpg";
		model = "\AVB\Models\Beret";
                hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Black.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\AVB\Models\Beret";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Black.paa"};
                        hiddenSelections[] = {"Camo"};


};
};

        

	 class AVB_Beret_Blue: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "????? (?????)";
		picture = "\AVB\Hats\Beret\ui\Blue.jpg";
		model = "\AVB\Models\Beret";
                hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Blue.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\AVB\Models\Beret";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Blue.paa"};
                        hiddenSelections[] = {"Camo"};


};
};

        

        

        class AVB_Beret_Red: ItemCore
	{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "????? (???????)";
		picture = "\AVB\Hats\Beret\ui\Red.jpg";
		model = "\AVB\Models\Beret";
                hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Red.paa"};
                hiddenSelections[] = {"Camo"};
                
                  

		class ItemInfo: HeadgearItem
		{
			mass = 5;
			uniformmodel = "\AVB\Models\Beret";
			modelSides[] = {3,1};
			armor = "3*0.5";
			passThrough = 0.95;
                        hiddenSelectionsTextures[] = {"\AVB\Hats\Beret\Red.paa"};
                        hiddenSelections[] = {"Camo"};

};
};

        

*/        
};

