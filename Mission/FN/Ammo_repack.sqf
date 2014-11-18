hint "repack";


_uniformMag= MagazinesAmmo  uniformContainer player;
_n=0;
_uniformMag_ret=[];
if (!isnil "_uniformMag") then{

	{
		_FullMag = getText(configFile >> "CfgMagazines" >>_x select 0 >> "FullMag");
		if (str _FullMag != str "") Then {
			_ammo= (getNumber (configFile >> "CfgMagazines" >>_x select 0 >> "count"));

			_uniformMag_ret = _uniformMag_ret +[[_FullMag,_ammo]];
		}else{
			_uniformMag_ret = _uniformMag_ret +[[_x select 0,_x select 1]];
		};

	} forEach _uniformMag;
};
///diag_log _uniformMag;
//diag_log _uniformMag_ret;



_vestMag= MagazinesAmmo  vestContainer player;
_vestMag_ret=[];
if (!isnil "_vestMag") then{

	{
		_FullMag = getText(configFile >> "CfgMagazines" >>_x select 0 >> "FullMag");
		if (str _FullMag != str "") Then {
			_ammo= (getNumber (configFile >> "CfgMagazines" >>_x select 0 >> "count"));

			_vestMag_ret = _vestMag_ret +[[_FullMag,_ammo]];
		}else{
			_vestMag_ret = _vestMag_ret +[[_x select 0,_x select 1]];
		};

	} forEach _vestMag;
};


_backpackMag = MagazinesAmmo  backpackContainer player;
_backpackMag_ret=[];
if (!isnil "_backpackMag") then{

	{
		_FullMag = getText(configFile >> "CfgMagazines" >>_x select 0 >> "FullMag");
		if (str _FullMag != str "") Then {
			_ammo= (getNumber (configFile >> "CfgMagazines" >>_x select 0 >> "count"));

			_backpackMag_ret = _backpackMag_ret +[[_FullMag,_ammo]];
		}else{
			_backpackMag_ret = _backpackMag_ret +[[_x select 0,_x select 1]];
		};

	} forEach _backpackMag;

};


{player removeMagazine _x} forEach magazines player;

_uniform=uniformContainer player;
{
	_uniform addmagazineCargoGlobal [_x select 0,1];
} forEach _uniformMag_ret;

_vest=vestContainer player;
{
	_vest addmagazineCargoGlobal [_x select 0,1];
} forEach _vestMag_ret;

_backpack=backpackContainer player;
{
	_backpack addmagazineCargoGlobal [_x select 0,1];
} forEach _backpackMag_ret;