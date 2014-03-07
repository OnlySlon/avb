// *******************************************************************************
// **       Funcion: Ropeground.sqf
// **   Descripcion: Crea cuerdas en el suelo junto a objeto
// *******************************************************************************
// **         Autor: RAVEN
// *******************************************************************************

private ["_rope1","_rope2","_pos","_tt","_px","_py","_dd","_espera","_dif"];

_obj = _this select 0;

if (surfaceIsWater (getposASL _obj)) then {if (getpos _obj select 2 > 0.5) then {_dif = 0.08} else {_dif = 0.03}} else {_dif = 0.02};

_espera = true;
while {_espera} do
{
	_espera = false;
	if (abs(velocity _obj select 0) > 0.1) then {_espera = true};
	if (abs(velocity _obj select 1) > 0.1) then {_espera = true};
	if (abs(velocity _obj select 2) > 0.1) then {_espera = true};
//	if ((getposASL _obj select 2) < (-5)) then {_espera = true};
	sleep 0.25;
};

_pos = getposASL _obj;

_dd = (sizeOf (typeOf _obj)) / 4;
if (_dd < 1.5) then {_dd = 1.5};

_rope1 = "Eslinga_0" createvehicle [0,0,0];
_rope2 = "Eslinga_0" createvehicle [0,0,0];
_rope1 setdir (direction _obj);
_rope2 setdir ((direction _obj)+180);

//--- Rope1
_px = (_pos select 0) + (_dd * sin(direction _rope1));
_py = (_pos select 1) + (_dd * cos(direction _rope1));
if (surfaceIsWater (getpos _obj)) then
{
	if ((getposASL _obj select 2 > 0.00) and (getpos _obj select 2 < 0.10)) then
	{
		_rope1 setposASL [_px,_py,(getposASL _obj select 2) + _dif]; _rope1 setdir ((direction _rope1)+180);
	};
}
else {_rope1 setpos [_px,_py,_dif]; _rope1 setdir ((direction _rope1)+180)};

//--- Rope2
_px = (_pos select 0) + (_dd * sin(direction _rope2));
_py = (_pos select 1) + (_dd * cos(direction _rope2));
if (surfaceIsWater (getpos _obj)) then
{
	if ((getposASL _obj select 2 > 0.00) and (getpos _obj select 2 < 0.10)) then
	{
		_rope2 setposASL [_px,_py,(getposASL _obj select 2) + _dif]; _rope2 setdir ((direction _rope2)+180);
	};
}
else {_rope2 setpos [_px,_py,_dif]; _rope2 setdir ((direction _rope2)+180)};

 _tt = (time+60+(random(60)));
waitUntil {time > _tt};
deletevehicle _rope1;
deletevehicle _rope2;
