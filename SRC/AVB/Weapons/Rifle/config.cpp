

class CfgPatches
{
	class AVB_weapons_rifle
	{
		units[] = {};
		weapons[] = {"AVB_Rook40","AVB_Rook40_snds","AVB_P07_F","AVB_P07_snds:"};
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
		version = "0.01";
	};
};

class Mode_SemiAuto;
class ItemInfo;

class CfgWeapons
{
#include "smg.h"
#include "Zafir.h"
#include "DMR.h"
class arifle_Mk20_F;
	class AVB_Mk20: arifle_Mk20_F{
		displayName = "[AVB] MK20";
		opticsZoomMin = 0.575;
		opticsZoomMax = 0.85;
		opticsZoomInit = 0.75;
		magazines[] = {"AVB_30Rnd_556x45_Stanag"};
	};

	
class EGLM;	
class arifle_Mk20_GL_F;
	class AVB_Mk20_GL: arifle_Mk20_GL_F {
		displayName = "[AVB] MK20 GL";
		opticsZoomMin = 0.575;
		opticsZoomMax = 0.85;
		opticsZoomInit = 0.75;
		magazines[] = {"AVB_30Rnd_556x45_Stanag"};
		
		class EGLM: EGLM
		{
			opticsZoomMin = 0.575;
			opticsZoomMax = 0.85;
			opticsZoomInit = 0.75;
		};
		};

};


