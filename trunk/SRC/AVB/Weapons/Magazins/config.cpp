
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
class 16Rnd_9x21_Mag;

	class AVB_16_9x21_Mag: 16Rnd_9x21_Mag
	{
		scope = 2;
		ammo = "B_9x21_Ball";
		displayName = "Магазин на 16 патрон 9х21";
		picture = "\AVB\Weapons\Magazins\ui\16_9x21.paa";
		type = 16;
		count = 16;
		descriptionShort = "";
		mass = 6;
		initSpeed = 410;
		emptyMag="AVB_16_9x21_Mag_empty";
		
		
	};

	class AVB_16_9x21_Mag_empty: AVB_16_9x21_Mag
	{
		scope = 2;
		displayName = "Пустой магазин на 16 патрон 9х21";
		picture = "\AVB\Weapons\Magazins\ui\16_9x21_Null.paa";
		count = 1;
		mass = 3;
		emptyMag="";
		empty=1;
		FullMag="AVB_16_9x21_Mag";
		
	};
	
	class AVB_Box_30x9x21: 16Rnd_9x21_Mag
	{
		ammo = "B_9x21_Ball";
		displayName = "Пачка на 30 патрон 9х21";
		picture = "\AVB\Weapons\Magazins\ui\Box_30x9x21.paa";
		type = 16;
		count = 16;
		descriptionShort = "";
		mass = 9;
		initSpeed = 410;
	
	};
class 30Rnd_556x45_Stanag;
class AVB_30Rnd_556x45_Stanag: 30Rnd_556x45_Stanag{
	emptyMag="AVB_30Rnd_556x45_Stanag_empty";
};
class AVB_30Rnd_556x45_Stanag_empty: 30Rnd_556x45_Stanag{
	count = 1;
	picture = "\AVB\Weapons\Magazins\ui\m_30stanag_empty.paa";
	displayName = "Пустой магазин 30 5,56х45";
	mass = 3;
	FullMag="AVB_30Rnd_556x45_Stanag";
};

class 500Rnd_127x99_mag;
class AVB_50Rnd_127x99_mag: 500Rnd_127x99_mag{
count = 50;
};
class 30Rnd_9x21_Mag;
class AVB_30Rnd_9x21_Mag: 30Rnd_9x21_Mag{
	displayName = "Магазин на 30 патрон 9х21";
	emptyMag="AVB_30Rnd_9x21_Mag_empty";

};
class AVB_30Rnd_9x21_Mag_empty: 30Rnd_9x21_Mag{
	displayName = "Пустой магазин на 30 патрон 9х21";
	picture = "\AVB\Weapons\Magazins\ui\m_30rnd_9x21_Empty.paa";
	count = 1;
	mass = 3;
	FullMag="AVB_30Rnd_9x21_Mag";
};

class 150Rnd_762x51_Box;
class AVB_150Rnd_762x51_Box: 150Rnd_762x51_Box{
	displayName = "Короб на 150 патрон 7,62х51";
	emptyMag="AVB_150Rnd_762x51_Box_empty";

};
class AVB_150Rnd_762x51_Box_empty: 150Rnd_762x51_Box{
	displayName = "Пустой короб на 150 патрон 7,62х51";
	FullMag="AVB_150Rnd_762x51_Box";
	picture = "\AVB\Weapons\Magazins\ui\m_150rnd_762x51_empty.paa";
	count = 1;
	mass = 3;
};


class 10Rnd_762x51_Mag;
class AVB_10Rnd_762x51_Mag: 10Rnd_762x51_Mag{
	displayName = "Магазин на 10 патрон 7,62х51";
	emptyMag="AVB_10Rnd_762x51_Mag_empty";

};
class AVB_10Rnd_762x51_Mag_empty: 10Rnd_762x51_Mag{
	displayName = "Пустой магазин на 10 патрон 7,62х51";
	FullMag="AVB_10Rnd_762x51_Mag";
	//picture = "\AVB\Weapons\Magazins\ui\m_150rnd_762x51_empty.paa";
	count = 1;
	mass = 3;
};
};