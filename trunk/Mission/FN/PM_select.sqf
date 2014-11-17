disableSerialization;
_c=_this select 0;
_sel=_this select 1;
_display = findDisplay 16000;
_group=-1;
_menu=-1;
//_info= _display displayCtrl 15005;
//hint format ["%1   %2 ",_c , _sel];
if (count _sel>1) Then {
	_group=_sel select 0;
	_menu=_sel select 1;
};
hint format ["Группа %1  Меню %2 ",_group , _menu];
switch (_group) do {
    case 0:
    {
    switch (_menu) do {

                case 2: {
                    closeDialog 0;
                    execvm "FN\Ammo_repack_init.sqf";
                };
                case 3: {
                    closeDialog 0;
                    openMap true;
                };
                case 4: {
                closeDialog 0;
                execvm "Fn\SM_init.sqf";
                };
        };
    };

    case 2:
    {
     	switch (_menu) do {
		    case 0: {
                closeDialog 0;
		    	execvm "fn\teleport.sqf";
		    };
            case 1: {
                closeDialog 0;
                execvm "arsenal.sqf";
            };

    };
     default { hint "default" };
	};
};