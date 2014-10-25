#define _ARMA_
class CfgPatches
{
	class AVB_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_UI_F"};
	};
};

//Компас
class RscObject;
class RscCompass : RscObject {
	scale = 1;
};


class RscControlsGroup;
class RscText;

//Информация о паронах
/*
class RscInGameUI {

	class RscUnitInfo {
	
		class WeaponInfoControlsGroupLeft : RscControlsGroup {
		
			class controls {
			
				class CA_AmmoCount : RscText {
					sizeEx = 0;
				};
				
				class CA_MagCount : RscText {
					sizeEx = 0;
				};
				
								
				class CA_GrenadeCount : RscText {
					sizeEx = 0;
				};
			};
		};
	};
};
*/
// меню перезарядки
/*
class cfgActions {
	class LoadMagazine;
	class LoadEmptyMagazine : LoadMagazine {
		show = 0;
		textDefault = "";
	};
};
*/
