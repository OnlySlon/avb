SQUADS=[
["Штурмовая группа 1","Частота AM 111","Штурм1"],
["Штурмовая группа 2","Частота AM 111","Штурм1"],
["Прикрытие","Частота AM 111","Штурм1"],
["Обеспечение","Частота AM 111","Штурм1"],
["ВВС","Частота AM 111","Штурм1"]
];
Shtat=[
["Командир ","Стрелок (Выся)","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок"],
["Командир","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок"],
["Командир","Стрелок","Стрелок","Стрелок(Федя)","Стрелок","Стрелок","Стрелок","Стрелок"],
["Командир","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок"],
["Командир","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок"]
];
NOShtat=["Вася","Федя","Паша","Стрелок","Стрелок","Стрелок","Стрелок","Стрелок"];
waitUntil{!(isNil "BIS_fnc_MP")};
waitUntil{!(isNil "BIS_fnc_init")};
enableSaving [false,false];
KEYBIND = compile preprocessFile "Fn\Key_bind_Init.sqf";
//=== Server + Client + Выдленный Server ===
if (isServer)  then {
} ;

//=== Выдленный Server ===
if (isDedicated) then {
} ;

//=== Client ===
if (!(isDedicated)) then {
	call KEYBIND;
    [] execVM '\fhq_debug\init.sqf';
    [] execVM "outlw_magRepack\MagRepack_init_sv.sqf";

player addMagazine "AVB_16_9x21_Mag";
player addMagazine "AVB_16_9x21_Mag";
    player addWeapon "AVB_Rook40";

    player addMagazine "AVB_16_9x21_Mag";
    player addMagazine "AVB_16_9x21_Mag";
    player addMagazine "AVB_16_9x21_Mag";
	player addMagazine "AVB_16_9x21_Mag_empty";
	player addMagazine "AVB_Box_30x9x21";
	player addVest "V_TacVest_oli";
    execvm "Fn\im_temp.sqf";
	//player addaction ["<t color='#FF0000'>Arsenal</t>", "arsenal.sqf"];
	//player addaction ["<t color='#FF0000'>SM</t>", "Fn\SM_init.sqf"];
	//player addaction ["<t color='#00ff00'>Снаряжение магазинов</t>", "FN\Ammo_repack_init.sqf"];
	//terminate h;
    _return_entry_magazin = player  addEventHandler ["Fired", {_THIS execvm "Fn\return_entry_magazin.sqf"}];

/*
h = [] spawn {
    while {true} do {

            hinttext = format ["%1\n\nMain Points\n******\n", typeOf cursorTarget];
            _veh = cursorTarget;
            _baseCFG = configFile >> "CFGVehicles" >> typeOf _veh;
            for "_i" from 0 to (count (_baseCFG >> "HitPoints"))-1 do {
                _HPName = configName((_baseCFG >> "HitPoints") select _i);
                hinttext = hinttext + format["%1 >> %2\n", _HPName, cursorTarget getHitPointDamage _HPName ];
            };

            for "_i" from 0 to (count (_baseCFG >> "Turrets"))-1 do {
                hinttext = hinttext + format["\n%1\n******\n", configName ((_baseCFG >> "Turrets") select _i)];
                _turretCFG = ((_baseCFG >> "Turrets") select _i);
                for "_j" from 0 to (count (_turretCFG >> "HitPoints"))-1 do {
                    _HPName = configName((_turretCFG >> "HitPoints") select _j);
                    hinttext = hinttext + format["%1 >> %2\n", _HPName, cursorTarget getHitPointDamage _HPName ];
                };
            };

        hintSilent hinttext;
        sleep 1;
    };*/
    /*
    NN = [] spawn {
    while {true} do {
        sleep 0.03;
        start =ASLtoATL eyepos player;
        //pdir= vectorDirVisual player;
pdir =  eyeDirection player;
        {
            pdir set [_foreachindex, ((_x*5)+(start select _forEachIndex))]
        } forEach pdir;
        _end = pdir;

        //drawLine3D [start,_end,[1,0,0,1]];
        drawLine3D [start, pdir, [1,0,0,1]];
       //hint str (lineIntersectswith [start,_end,helper1,helper2]);
    };
};
};

dummy = [] spawn
{
    _sign = "Land_Sign_Mines_F" createVehicle [0, 0, 0];
    while {true} do
    {
        _ep = ASLtoATL eyePos player;

        _ed = [eyeDirection player, 5] call BIS_fnc_vectorMultiply;
        _s = [_ep, _ed] call BIS_fnc_vectorAdd;

        _sign setPos _s;

        sleep 0.01;
    };*/
};
    //[] execVM "Fn\Key_bind_Init.sqf";
//};


