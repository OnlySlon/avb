
disableSerialization;
_c=_this select 0;
_sel=_this select 1;
_display = findDisplay 15000;

_info= _display displayCtrl 15005;
//hint format ["%1   %2 ",_c , _sel];

if (count _sel ==1) Then {
	_index = _sel select 0;
	_txt="" ;
	_inf= SQUADS select _index;
	{
		_txt=_txt +"  "+ _x ;
	} forEach _inf;
	_info  ctrlSetText _txt;
}else{
	_index = _sel select 0;
	_index1 = _sel select 1;
	_infs= SQUADS select _index;
_infs= _infs select 0;

	_inf= Shtat select _index;
	_txt=_inf select _index1;
	_txt=_infs +"  -   " +_txt;
	_info  ctrlSetText _txt;
};