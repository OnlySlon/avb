private ["_man","_vehAnt","_shift","_key","_veh"];

_man = _this;

pathLifter = "\RAV_Lifter_A3\";
sleep 3;

if ((isPlayer _man) and local player) then
{
	while {true} do
	{
		while {player == (vehicle player)} do {sleep 5};
		_veh = vehicle player;
		if ("helicopter" counttype [_veh] > 0) then
		{
			if (player == driver _veh) then
			{
				null = _veh execVM (pathLifter + "InitAir.sqf");
				while {alive(player) and ((vehicle player) == _veh)} do {sleep 5};
			};
		};
		sleep 5;
	};
};