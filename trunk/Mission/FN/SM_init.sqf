disableSerialization;
createDialog "SM";

waitUntil {dialog};
_display = findDisplay 15000;

_tv1= _display displayCtrl 15003;
_tv2= _display displayCtrl 15004;
_tv2 tvAdd [[], "Новобранцы"];
{
	_tv2 tvAdd [[0], _x];
} forEach NOShtat;
_n=0;
{
	_tv1 tvAdd [[], _x select 0];
_Shtat =Shtat select _n;
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