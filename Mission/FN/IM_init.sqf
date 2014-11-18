disableSerialization;
_display = findDisplay 17000;
if (str (_display) != "no display") exitwith{};

_target=_this select 0;
if (isnull _target) exitwith{hint "Нет объекта взаимодействия."};
_player=_this select 1;
_dist=_player distance _target;
if (_dist>6) exitwith{};

createDialog "IM";
_display = findDisplay 17000;
waitUntil {dialog};
//_display = findDisplay 17000;

_tv1= _display displayCtrl 17003;
//_tv1 tvAdd [[], typeof cursortarget];
//Группы
_n=0;
{

	_nameGroupe= _x select 0;
	//{
		_tv1 tvAdd [[], _nameGroupe];
	_menus= _x select 1;

	{
		_menu= _x select 0;
		_tv1 tvAdd [[_n], _menu];
	} forEach _menus;
	_n=_n+1;
	//} forEach _groupe;

	//_tv1 tvAdd [[0], _x];
} forEach IM;
/*
{
	{
		_tv1 tvAdd [[], _x select 0];
	} forEach _x;

	_tv1 tvAdd [[0], _x];
} forEach IM;

*/

_tv1 tvExpand [0];
_tv1 tvSetCurSel [0];