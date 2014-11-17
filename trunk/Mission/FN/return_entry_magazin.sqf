_unit = _this select 0;
_weapon= _this select 1;
_muzzle= _this select 2;
_x= _this select 3;
_ammo= _this select 4;
_magazine= _this select 5;
_ammoCount= player ammo _muzzle;
_txt=format ["%1, %2, %3, %4, %5, %6, %7", name _unit,_weapon,_muzzle,_x,_ammo,_magazine, _ammoCount];
//hint _txt;
if (_ammoCount==0) Then {
_Empty_Mag = getText(configFile >> "CfgMagazines" >>_magazine >> "emptyMag");
//_Empty_Mag=gettext(configfile >> "CfgMagazines" >> "AVB_16_9x21_Mag" >> "emptyMag");
//diag_log _Empty_Mag;
//Hint _Empty_Mag;
	if (_Empty_Mag != "") Then {
	player addMagazineGlobal _Empty_Mag;
	Hint "Пустой магазин Добавлен.."
	};
}else {
//hint "ssss";
};
/*
_weapon
_muzzle: String - Muzzle that was used
_mode: String - Current mode of the fired weapon
_ammo: String - Ammo used
_magazine: String - magazine name which was used
_projectile: Object - Object of the projectile that was shot (Arma 2: OA and onwards)
*/

//

/*
unit: Object - Object the event handler is assigned to
weapon: String - Fired weapon
muzzle: String - Muzzle that was used
mode: String - Current mode of the fired weapon
ammo: String - Ammo used
magazine: String - magazine name which was used
projectile: Object - Object of the projectile that was shot (Arma 2: OA and onwards)


*/