
_Muzzle=currentMuzzle player;
_Weapon=currentWeapon player;
_magsD=magazinesDetail player;
_Allmags=magazines player;
_CurrentMags=[];

_Mags_Weapon=[];


		if ( str _Weapon == str _Muzzle ) then {
			_Mags_Weapon = getArray(configFile >> "CfgWeapons" >>_Weapon>> "magazines");
		} else {
		_Mags_Weapon = getArray(configFile >> "CfgWeapons" >>_Weapon>>_Muzzle >> "magazines");
		};


disableSerialization;


_idMags=[];

_n=0;

{

	if (_x in _Mags_Weapon) Then {
		_CurrentMags= _CurrentMags + [_x];
		_id_array=toarray (_magsD select _n) ;
		reverse _id_array;
		_start=false;
		_stop=false;
		_id=[];
		{
			if (_x==58) Then {
				_start=false;
				_stop=true;
			};
			if (_start) Then {
				_id=_id+[_x];
			};
			if (_x==47) Then {
				_start=true;
			};
			if (_stop)  exitWith {};


		} forEach _id_array;
			diag_log   _id ;
			reverse _id;
			diag_log _id;
			_id= toString  _id ;
			diag_log _id;
			_id= parseNumber _id;
			diag_log _id;
			_idMags=_idMags +[_id];
	};
	_n=_n+1;
} forEach _Allmags;

_n=0;
if (count _CurrentMags==0) exitWith {
Hint "Нет соответствующих магазинов";
false;
};
//player switchMove "AinvPercMstpSrasWrflDnon_G01";
createDialog "Alt_reload";

waitUntil {dialog};

{
	_txt=getText(configFile >> "cfgMagazines" >> _x >> "displayName");
	lbAdd [14002, _txt];
	lbSetData [14002,_n,format ["%1",_idMags select _n]];
	lbSetPicture [14002,_n,(getText(configFile >> "cfgMagazines" >> _x >> "picture"))];
	lbSetTooltip [14002,_n, _txt];
_n=_n+1;
} forEach _CurrentMags;
