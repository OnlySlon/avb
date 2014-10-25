
class CfgPatches
{
	class AVB_Magazins
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
     };
};

class CfgMagazines
{
class CA_Magazine;

	class AVB_16_9x21_Mag: CA_Magazine
	{
		scope = 2;
		ammo = "B_9x21_Ball";
		displayName = "Магазин на 16 патрон 9х21";
		picture = "\AVB\Magazins\ui\16_9x21.paa";
		type = 16;
		count = 16;
		descriptionShort = "";
		mass = 6;
		initSpeed = 410;
		NullMag="AVB_16_9x21_Mag_Null";
		
	};

	class AVB_16_9x21_Mag_Null: AVB_16_9x21_Mag
	{
		
		displayName = "Пустой магазин на 16 патрон 9х21";
		picture = "\AVB\Magazins\ui\16_9x21_Null.paa";
		count = 1;
		mass = 3;
		
	};
};