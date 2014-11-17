disableSerialization;
_c=_this select 0;
_sel=_this select 1;
if (count _sel>1) Then {
	_group=_sel select 0;
	_menu=_sel select 1;
	hint format ["Группа %1  Меню %2 ",_group , _menu];
};
