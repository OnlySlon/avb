//\Fn\Key_bind_Init.sqf

waitUntil {

	!isNil { player } &&

	!isNull player &&

	!(player != player) &&

	!isNull (findDisplay 46)

};

disableSerialization;
_ak_Push=15; //TAB Толкане
//_ak_Reload=ActionKeys "ReloadMagazine"; //Перезарядка
findDisplay 46 displayAddEventHandler ["KeyDown", "_this call  keypress"];
keypress = {
			_dikCode = _this select 1;
			_shift = _this select 2;
			_ctrl = _this select 3;
			_alt = _this select 4;
			_done = false;

	//hint format ["%1 %2 %3 %4",_dikCode,_shift,_ctrl,_alt];
if (_dikCode ==15) then {
	if (_ctrl) Then {
		player execVM "Fn\Turn_vel.sqf";
		_done = true;
	}else{
		player execVM "Fn\Push_vel.sqf";
		_done = true;

	};

};


if (_dikCode ==219) then {

			if (_ctrl) Then {
				[cursortarget, player] execVM "Fn\IM_init.sqf";
				_done = true;
			} else{
				player execVM "Fn\PM_init.sqf";
				_done = true;
			};

	}else{
		_done = false;
	};


if (_dikCode in ActionKeys "ReloadMagazine") then {
	if (_alt) Then {
		_display = findDisplay 14000;
		if (str (_display) == "no display") then
		{
			player execVM "Fn\Alt_reload_init.sqf";
			_done = true;
		};

	}else{
		_done = false;
	};


};
_done;
};



