class manual;

class CfgWeapons
{
	
	class HMG_01;
	class AVB_HMG: HMG_01
	{
		displayName = "Крупнокалиберный пулемет";
		magazines[] = {"200Rnd_127x99_mag_Tracer_Yellow"};
		
		class manual: manual
		{
			reloadTime = 0.3;//0.12
			dispersion = 0.001;//0.00087
		};
		
	};
};