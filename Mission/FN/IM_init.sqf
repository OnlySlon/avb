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
_tv1 tvAdd [[], typeof cursortarget];
{
	_tv1 tvAdd [[0], _x];
} forEach ["Зарядить","Повернуть","Поднять","Ремонтировать","Погрузить в"];

_tv1 tvExpand [0];
_tv1 tvSetCurSel [0];