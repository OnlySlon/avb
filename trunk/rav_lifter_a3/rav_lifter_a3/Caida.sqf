// *******************************************************************************
// **       Funcion: Caida.sqf
// **   Descripcion: Simula caida de objetos que no tienen peso/fisica
// *******************************************************************************
// **         Autor: RAVEN
// *******************************************************************************

private ["_obj","_suelo","_cono","_aborta","_Bank","_Pitch","_xBank","_xPitch","_tfin",
	"_enAgua","_alt","_apilado","_ListObj","_ropes","_piolas","_soga1","_soga2","_pos1",
	"_pos2","_dir","_point1","_point2","_rr","_flota","_vecVel"];

_obj = _this select 0;
_ropes = _this select 1;
_veh = _this select 2;

_enAgua = false;
_suelo = ((getposASL _obj) select 2) - ((getpos _obj) select 2);
_alt = (getpos _obj) select 2;

_vecVel = velocity _veh;

_piolas = [];
if ("static" counttype [_obj] > 0) then
{
	detach _ropes;
	detach _obj;
	deletevehicle _ropes;

	_bank = (vectorUp _obj) select 1;
	_pitch = (vectorUp _obj) select 0;

	_cono = "roadcone_F" createvehiclelocal [0,0,0];
	_cono hideObject true;
	_cono setposASL (getposASL _obj);

	_cono disableCollisionWith _obj;
	_cono setvelocity _vecVel;

//	_tfin = time + 0.25;
//	_xbank = 0.0000075 * ([1,-1] select (random(100) < 50));
//	_xPitch = 0.0000075 * ([1,-1] select (random(100) < 50));

	_enAgua = false;
	if (surfaceIsWater [getposASL _obj select 0, getposASL _obj select 1, _suelo]) then {_suelo = _suelo - 5; _enAgua = true};
	_aborta = false;
	while {not _aborta} do
	{
//		if (time > _tfin) then
//		{
//			_bank = _bank + _xbank;
//			_pitch = _pitch + _xpitch;
//			if (_bank > 0.5) then {_bank = 0.5} else {if (_bank < 0.5) then {_bank = -0.5}};
//			if (_pitch > 0.5) then {_pitch = 0.5} else {if (_pitch < 0.5) then {_pitch = -0.5}};
//			_obj setVectorUp [_pitch, _bank, 1];
//			_tfin = time + 0.25;
//		};

		sleep 0.01;
		_obj setvectorUp (vectorUp _cono);
		_obj setposASL (getposASL _cono);
		if ((getposASL _cono select 2) < _suelo) then {_aborta = true};
	};
	deletevehicle _cono;
	_obj setVectorUp [0, 0, 1];
	_obj setposASL [getposASL _obj select 0, getposASL _obj select 1, _suelo];
}
else
{
	detach _ropes;
	deletevehicle _ropes;
//------------------------------------------------------------------
/*
	if (surfaceIsWater [getposASL _obj select 0, getposASL _obj select 1, _suelo]) then {_enAgua = true};
	_rr = toUpper(format ["%1", typeOf _ropes]);
	if (_rr in ["ESLINGA_L","ESLINGA_M","ESLINGA_P"]) then
	{
		switch _rr do
		{
			case "ESLINGA_L":
			{
				detach _ropes;
				deletevehicle _ropes;
			};
			case "ESLINGA_M":
			{
				_soga1 = "eslinga_suelta" createvehicle [0,0,0];
				_soga2 = "eslinga_suelta" createvehicle [0,0,0];
				_dir = direction _ropes;
				_soga1 setdir _dir;
				_soga2 setdir (_dir+180);
				_pos1 = _ropes modeltoWorld [0,-1.5,3.3];
				_pos2 = _ropes modeltoWorld [0,+1.5,3.3];
				if (surfaceIsWater (_ropes modelToWorld [0,0,0])) then
				{
					_soga1 setposASL [_pos1 select 0, _pos1 select 1, (getposASL _ropes select 2) + (getpos _obj select 2)-1];
					_soga2 setposASL [_pos2 select 0, _pos2 select 1, (getposASL _ropes select 2) + (getpos _obj select 2)-1];
				}
				else
				{
					_soga1 setpos [_pos1 select 0, _pos1 select 1, (_pos1 select 2)];
					_soga2 setpos [_pos2 select 0, _pos2 select 1, (_pos2 select 2)];
				};
				detach _ropes;
				deletevehicle _ropes;
				_point1 = _obj worldToModel (_soga1 modelToWorld [0,0,0]);
				_point2 = _obj worldToModel (_soga2 modelToWorld [0,0,0]);
				_soga1 attachTo [_obj, _point1]; _soga1 setdir 0;
				_soga2 attachTo [_obj, _point2]; _soga2 setdir 180;
				_piolas = [_soga1,_soga2];
			};
			case "ESLINGA_P":
			{
				_soga1 = "eslinga_suelta" createvehicle [0,0,0];
				_soga2 = "eslinga_suelta" createvehicle [0,0,0];
				_dir = direction _ropes;
				_soga1 setdir _dir;
				_soga2 setdir (_dir+180);
				_pos1 = _ropes modeltoWorld [0,-2,2.9];
				_pos2 = _ropes modeltoWorld [0,+2,2.9];
				if (surfaceIsWater (_ropes modelToWorld [0,0,0])) then
				{
					_soga1 setposASL [_pos1 select 0, _pos1 select 1, (getposASL _ropes select 2) + (getpos _obj select 2)-2.5];
					_soga2 setposASL [_pos2 select 0, _pos2 select 1, (getposASL _ropes select 2) + (getpos _obj select 2)-2.5];
				}
				else
				{
					_soga1 setpos [_pos1 select 0, _pos1 select 1, (_pos1 select 2)];
					_soga2 setpos [_pos2 select 0, _pos2 select 1, (_pos2 select 2)];
				};
				detach _ropes;
				deletevehicle _ropes;
				_point1 = _obj worldToModel (_soga1 modelToWorld [0,0,0]);
				_point2 = _obj worldToModel (_soga2 modelToWorld [0,0,0]);
				_soga1 attachTo [_obj, _point1]; _soga1 setdir 0;
				_soga2 attachTo [_obj, _point2]; _soga2 setdir 180;
				_piolas = [_soga1,_soga2];
			};
			default {detach _ropes;	deletevehicle _ropes};
		};
	};
*/
//------------------------------------------------------------------
	detach _obj;
	_obj setvelocity _vecVel;
	sleep 0.5;
	//{_x animate ["cae",0.10+random(0.15)]} foreach _piolas;
	_aborta = false;
	while {not _aborta} do
	{
		sleep 0.01;
		if ((getposASL _obj select 2) <= (_suelo+1.5)) then {_aborta = true};
		if (abs((velocity _obj select 2)) < 1.00) then {_aborta = true};
	};
	//{_x animate ["cae",1]} foreach _piolas;
	if ((surfaceIsWater (getposASL _obj)) and ((getposASL _obj select 2) < 0.10)) then {_enAgua = true};
};

//--- Sound of impact
nul = [_obj, _alt, _enAgua] execVM pathLifter + "caidaSound.sqf";

if (_alt > 5.00 and _alt < 10) then {_obj setdammage (damage _obj)+0.5};
if (_alt > 10) then
{
	//{deletevehicle _x} foreach _piolas;
	if (not _enAgua) then {_obj setdammage 99.0};
}
else
{
	_apilado = false;
	_ListObj = nearestObjects [_obj modelToWorld [0,0,-4], ["landVehicle"], 3.00];
	sleep 0.5;
	if (count _ListObj > 0) then {_apilado = true};

	//{
	//	waitUntil {(_x animationPhase "cae") > 0.98};
	//	deletevehicle _x;
	//} foreach _piolas;
	if (not _apilado) then
	{
		//------ Cuerdas en el suelo
		if (not _enAgua) then
		{
			[_obj] execVM pathlifter + "ropeGround.sqf";
		}
		else
		{
			_flota = getNumber (configFile >> "CfgVehicles" >> format ["%1", typeOf _obj] >> "canFloat");
			if ((_flota == 0) and ((getposASL _obj select 2 )< 1)) then {sleep 10; deletevehicle _obj};
		};
	};
};
