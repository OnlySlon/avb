class manual;

class CfgWeapons
{
	
	class HMG_01;
	class AVB_HMG: HMG_01
	{
		displayName = "Крупнокалиберный пулемет";
		magazines[] = {"AVB_50Rnd_127x99_mag"};
		
		class manual: manual
		{
			reloadTime = 0.2;//0.12
			dispersion = 0.001;//0.00087
		};
		
	};
};