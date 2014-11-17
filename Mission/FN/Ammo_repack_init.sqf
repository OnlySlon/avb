


disableSerialization;
createDialog "Ammo_repack";

waitUntil {dialog};
_display = findDisplay 16000;

_tv1= _display displayCtrl 16003;
_tv2= _display displayCtrl 16004;

{
	_tv1 tvAdd [[], _x];
} forEach ["Униформа","Разгрузка","Рюкзак"];
_uniformMag= MagazinesAmmo  uniformContainer player;
_n=0;
if (!isnil "_uniformMag") then{
	{
		_dn=getText(configFile >> 'cfgMagazines' >> _x select 0 >> 'displayName');
		_pic=getText (configFile >> "cfgMagazines" >> _x select 0 >> "picture");
		_tv1 tvAdd [[0], _dn + ' (' +str (_x select 1) + ')' ];
		_tv1 tvSetPicture [[0,_n],_pic];
		_n=_n+1;
	} forEach _uniformMag;
};
_vestMag= MagazinesAmmo  vestContainer player;
if !(isnil "_vestMag") then{
	{
		_tv1 tvAdd [[1], _x select 0];
	} forEach _vestMag;
};
_backpackMag = MagazinesAmmo  backpackContainer player;
if !(isnil "_backpackMag") then{
	{
		_tv1 tvAdd [[2], _x select 0];
	} forEach _backpackMag;
};

_tv1 tvSetCurSel [0];
_tv1 tvExpand [0];
_tv1 tvExpand [1];
_tv1 tvExpand [2];

	/*_
_m=0;
	{
		_tv1 tvAdd [[_n], _x];
		_tv1 tvSetPicture [[_n,_m],getText (configFile >> "CfgWeapons" >> "optic_NVS" >> "picture")];
		_m=_m+1;
	} forEach _Shtat;
	_n=_n+1;
} forEach SQUADS;

_tv1 tvExpand [0];
_tv2 tvExpand [0];

_tv1 tvSetCurSel [0];
_uniformMag= MagazinesAmmo  uniformContainer player;
_vestMag= MagazinesAmmo  vestContainer player;
_backpackMag = MagazinesAmmo  backpackContainer player;
*/