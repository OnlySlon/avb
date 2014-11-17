disableSerialization;
_display = findDisplay 16000;
	if (str (_display) != "no display") exitwith
		{};

createDialog "PM";
_display = findDisplay 16000;

waitUntil {dialog};
//_display = findDisplay 16000;

_tv1= _display displayCtrl 16003;
_tv1 tvAdd [[], name player];//0
_tv1 tvAdd [[], "Строительство"];//1
_tv1 tvAdd [[], "Отладка"];//2


{
	_tv1 tvAdd [[0], _x];
} forEach ["Здоровье","Инвентарь","Боезапас","Карта","Штатное расписание"];
_n=0;

{
	_tv1 tvAdd [[1], _x];
} forEach ["Окопаться"];

{
	_tv1 tvAdd [[2], _x];
} forEach ["Телепорт","Арсенал"];


_tv1 tvExpand [0];
_tv1 tvSetCurSel [0];