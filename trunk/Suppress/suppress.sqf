// Adanteh © 2013
// Script to change brightness and contrast of NVGs
// This file falls under Gnu GPL license
// http://www.gnu.org/copyleft/gpl.html
//=============================================================================
// Params: [maxSuppressionEnabled, MaxTimeEnabled, Unknown, SpeedEnabled]	with a value of 0 or 1 for off/on.

/*
Welcome to the suppression test.
The system measures the distance of the bullet passing by and adds a general 'suppression' value to the player based on that.
This suppression value only starts to decrease after an amount of time based on the suppression you have accumulated. The more suppression, the higher that time will be.
Both the suppression value and time to decrease are capped right now.
This means that it won't ever take longer then 5 seconds before suppression effects start to decrease after all suppression stopped and that there is a maximum amount of blur you can get.
The effects based on the suppression value are higher fatigue (More aim-sway, no sprinting), blur and cam-shake.
*/

if (isDedicated) exitWith {};
waitUntil {!isNull findDisplay 46}; // always false on dedicated server

// turn functions on or off with loading script
//if (count _this < 4) exitWith {player sideChat "You need to use all parameters when loading in the script"};

//Effect variables + factors
tbf_sps_maxsuppressionenabled = [_this, 0, 1] call BIS_fnc_param; // 1 for on, 0 for off;
tbf_sps_blurfactor = 3.70; // Total amount of suppression  * Factor = total value of blur to apply in pixel values.
tbf_sps_fatiguefactor = 3; // Effective Distance * Factor adds fatigue to player per shot. Fatigue has a maximum value of 1.

tbf_sps_maxtimeenabled = [_this, 1, 1] call BIS_fnc_param;  // 1 for on, 0 for off;
tbf_sps_timefactor = 12; // Effective Distance * Factor adds time BEFORE(!!!) suppression starts reducing.  Each shot will add X time.
setCamShakeParams  [0.001, 0.015, 0.015, 0.8, true];
enableCamShake true;
tbf_sps_colorPP = ppEffectCreate ["colorCorrections", 2501];
tbf_sps_colorPP ppEffectEnable true;
tbf_sps_colorPP ppEffectForceInNVG true;
tbf_sps_shakefactor = 3;

tbf_sps_speedenabled = [_this, 3, 1] call BIS_fnc_param;
tbf_sps_speedthreshold = 3.1; // 2.5 for slow prone, 3.1 for fast prone. 4,6 for slow crouch
tbf_sps_speedfactor = 2;

tbf_sps_delay = 1; // Delay before suppression starts;
tbf_sps_effectinterval = 0.25; // Time to commit effects and sleep between each effect;
tbf_sps_suppressbleed = 3.3; // Lowers suppressing x per effect interval;

tbf_sps_friendlythreshold = 100;
tbf_sps_friendlybleed = 1;

tbf_sps_adrenalinethreshold = 15;

//config
tbf_sps_detectradius = 5; // detection radius around each player (m). If a bullet passes around a sphere of this value in meters, it gets counted towards suppression
tbf_sps_maxdist = 800; // bullets fired from further than this don't suppress (m)
tbf_sps_mindist = 5.5; // bullets fired from less than this don't suppress (m) (Makes sure you don't annoy each other with friendly suppressing on close range and makes sure the effect isn't as bad in CQB;
tbf_sps_maxsuppressionamount = 70; // Max suppression amount. Extra suppression stops being added once this value is reached. In practice this caps the max amount of blur
tbf_sps_maxtimeamount = 3.25; // Max time BEFORE suppression starts reducing (NOT TIME TO FADE!!!).

tbf_sps_modelarray =
[
//rocks
"sharpstone_01.p3d",
"sharpstone_01_lc.p3d",
"sharpstone_02.p3d",
"sharpstone_02_lc.p3d",
"sharpstone_03.p3d",
"sharprock_wallh.p3d",
"sharprock_apart.p3d",
"sharprock_monolith.p3d",
"sharprock_spike.p3d",
"sea_wall_f.p3d",

//military
"mil_wallbig_4m_f.p3d",
"cargo20_military_green_f.p3d",
"cargo20_grey_f.p3d",
"cargo40_military_green_f.p3d",
"hbarrier_1_f.p3d",
"hbarrier_3_f.p3d",
"hbarrier_5_f.p3d",
"hbarrier_big_f.p3d",

//walls
"city_8md_f.p3d",
"city2_8m_f.p3d",
"city2_8md_f.p3d",
"city_4m_f.p3d",
"city2_4m_f.p3d",
"city_pillar_f.p3d",
"concrete_smallwall_4m_f.p3d",
"concrete_smallwall_8m_f.p3d",
"canal_wallsmall_10m_f.p3d",
"cncbarrier_f.p3d",
"stone_8m_f.p3d",
"stone_8md_f.p3d",
"stone_pillar_f.p3d",
"canal_wall_10m_f.p3d",
"canal_wall_d_center_f.p3d",
"mound01_8m_f.p3d",
"sportground_fence_f.p3d",

//objects
"metalbarrel_f.p3d",
"ironpipes_f.p3d",
"bricks_v1_f.p3d",
"bricks_v2_f.p3d",
"bricks_v3_f.p3d",
"bricks_v4_f.p3d",
"pipes_large_f.p3d",
"concretepipe_f.p3d",
"cinderblocks_f.p3d",

//buildings
"bunker_f.p3d",
"unfinished_building_01_f.p3d",
"unfinished_building_02_f.p3d",
"ttowerbig_1_f.p3d",
"bridge_01_f.p3d",

//junk
/*
"junkpile_f.p3d",
"tyres_f.p3d",
"toiletbox_f.p3d",
"garbagebags_f.p3d",
"crateswooden_f.p3d",
"cratesshabby_f.p3d",
"barrelwater_f.p3d",
"sacks_heap_f.p3d",
*/

//wreck
"wreck_truck_dropside_f.p3d",
"wreck_offroad2_f.p3d",
"wreck_car3_f.p3d",
"wreck_car2_f.p3d",

"grave_v1_f.p3d",
"grave_v2_f.p3d",
"grave_v3_f.p3d"
];

tbf_sps_vehiclearray =
[
"B_HMG_01_F",
"B_HMG_01_high_F",
"O_HMG_01_F",
"O_HMG_01_high_F",
"I_HMG_01_F",
"I_HMG_01_high_F",
"I_HMG_01_A_F",
"O_HMG_01_A_F",
"B_HMG_01_A_F"
];

// get models

	// lineIntersectsWith [getPosASL tbf_sps_refPoint2, getPosASL tbf_sps_refPoint3, tbf_sps_refPoint2, tbf_sps_refPoint3];

// Add 'fired' eventHandler to all units. Activate death monitoring for player.
// Note: infinite loop
tbf_sps_fnc_applyUnits = {
	while {true} do
	{
		{
			if (_x getVariable ["tbf_sps_firedEH", 0] == 0) then
			{
				_x setVariable ["tbf_sps_firedEH", 1];
				_x addEventhandler ["fired", {_this spawn tbf_sps_fnc_fired;}];
				if (_x == player) then {
					0 = [] spawn tbf_sps_fnc_death;
				};
			};
		} forEach allUnits;

		sleep 5;
	};
};

// Add 'fired' eventHandler to all vehicles. // (if used) Activate destroyed monitoring for vehicle.
// Note: infinite loop
tbf_sps_fnc_applyVehicles = {
	while {true} do {
		{		
			if (_x getVariable ["tbf_sps_firedEH", 0] == 0) then {
				_x addEventhandler ["fired",{_this spawn tbf_sps_fnc_fired;}];
				_x setVariable ["tbf_sps_firedEH", 1];
				// 0 = [] spawn tbf_sps_fnc_destroyed;
			};
		} forEach vehicles;
		sleep 5;	
	};	
};

// Activate death monitoring for player. Upon death, perform reset.
tbf_sps_fnc_death = {
	waitUntil {sleep 3; not alive player};
	deleteVehicle tbf_sps_refPoint1;
	deleteVehicle tbf_sps_refPoint2;
	deleteVehicle tbf_sps_refPoint3;
	deleteVehicle tbf_sps_refPoint4;

	waitUntil {sleep 3; alive player};
	player setVariable ["tbf_sps_coverCheck", 0, false];
	player setVariable ["tbf_sps_firedEH", 0, true];
};

/*
tbf_sps_fnc_destroyed = {
	waitUntil {sleep 3; not alive player};	
	deleteVehicle tbf_sps_refPoint1; 
	deleteVehicle tbf_sps_refPoint2; 
	deleteVehicle tbf_sps_refPoint3; 
	deleteVehicle tbf_sps_refPoint4; 

	waitUntil {sleep 3; alive player};
	player setVariable ["tbf_sps_coverCheck", 0, false];	
	player setVariable ["tbf_sps_firedEH", 0, true];	
};
*/

tbf_sps_fnc_covercheck = {
	private ["_shooter", "_coverValues", "_lowCover", "_refShooter", "_cover1", "_cover2", "_cover3", "_cover4", "_coverArray",
		"_coverType", "_coverValue", "_coverModel"];
	_shooter = _this select 0;
	_coverValues = 1;
	_lowCover = 1;

	_refShooter = "Sign_Sphere10cm_F" createVehicleLocal (_shooter modelToWorld [0, -100, -5]);
	_refShooter attachTo [_shooter, [0,0,0], "lefthand"];

	_cover1 = lineIntersectsWith [getPosASL tbf_sps_refPoint1, getPosASL _refShooter, tbf_sps_refPoint1, _refShooter];
	_cover2 = lineIntersectsWith [getPosASL tbf_sps_refPoint2, getPosASL _refShooter, tbf_sps_refPoint2, _refShooter];
	_cover3 = lineIntersectsWith [getPosASL tbf_sps_refPoint3, getPosASL _refShooter, tbf_sps_refPoint3, _refShooter];
	_cover4 = lineIntersectsWith [getPosASL tbf_sps_refPoint4, getPosASL _refShooter, tbf_sps_refPoint4, _refShooter];
	_coverArray = [_cover1, _cover2, _cover3, _cover4];

	{
		if (count _x > 0) then {
			if ((_x select 0) isKindOf "All") then {
				_coverType = typeOf (_x select 0);
				_coverValue = (getNumber (configFile >> "CfgVehicles" >> _coverType >> "armor"));
				_coverValues = _coverValues + (_coverValue / 100) ^ 1.65;
			}
			// if (!((_x select 0) iskindOf "All")) then */
			else
			{
				_coverModel = ([str(_x select 0), " "] call BIS_fnc_splitString) select 1;
				// diag_log format ["Cover: %1", _coverModel];
				if (_coverModel in tbf_sps_modelarray) then {
					// hintSilent format ["Cover: %1", _coverModel];
					_coverValues = _coverValues + 4 ^ 1.65;
				}
				//if (!(_coverModel in tbf_sps_modelarray)) then
				else
				{
					_lowCover = _lowcover + 1.7;
					// hintSilent format ["No cover from: %1", _coverModel];
				};
			};
		}
		//if (count _x == 0) then
		else
		{
			_lowCover = _lowcover + 1.7;
		};
	} forEach _coverArray;

	_coverValues = (_coverValues / 2 / _lowCover);
	if (_coverValues < 1) then { _covervalues = 1;};
	deleteVehicle _refShooter;
	_coverValues;
};



tbf_sps_fnc_fired = {
	private ["_shooter", "_side", "_bulletType", "_bullet", "_shooterRange", "_bulletLife"];

	_shooter = _this select 0;
	_side = side _shooter;
	_bulletType = _this select 4;
	_bullet = _this select 6;
	_shooterRange = _shooter distance player;
	_bulletLife = diag_ticktime;

	if (_shooter != player) then { // Don't suppress yourself!
		if ((vehicle player == player) || (typeOf vehicle player in tbf_sps_vehiclearray)) then { // Only add suppression when player is on foot
			if (_shooterRange < tbf_sps_maxdist) then { // Minimum distance to suppress
				private ["_minDist", "_detectRange"];
				_minDist = tbf_sps_mindist;
				_detectRange = tbf_sps_detectradius;
				if (_side == side player) then {
					_minDist = tbf_sps_mindist * 4;
					_detectRange = tbf_sps_detectradius / 1.75;
				};

				if (_shooterRange > _minDist) then { // Maximum distance to suppress (Mostly makes it faster)
					private ["_distanceArray", "_distancebullet", "_downtime", "_distance", "_weightedDistance", "_coverValue", 
						"_effectiveDistance", "_suppression", "_shaketime", "_fatiguefactor"];
					_distanceArray = [];

					while {(speed _bullet > 0.5) && (_bulletLife + 1 > diag_ticktime)} do // Don't worry about slow bullets;
					{
						_distancebullet = _bullet distance tbf_sps_refPoint2;
						if (_distancebullet < _detectRange) then { // Only worry about bullets inside x radius of player
							_distanceArray set [count _distanceArray, _distancebullet]; // Count distances of bullet towards player
						};
						sleep 0.001;
					};
					if (count _distanceArray == 0) exitWith {}; // If bullet didn't pass by properly, don't add suppression

					_distance = [_distanceArray, 0] call bis_fnc_findExtreme; // Get lowest distance to player;
					_weightedDistance = (25 / (_distance + 2)); // Amount of suppression isn't lineair.
					_coverValue = [_shooter] call tbf_sps_fnc_covercheck;
					_effectiveDistance = _weightedDistance / _coverValue;
					_suppression = player getVariable ["tbf_sps_suppression", 0]; // get current amount of suppression on player
					_downtime = player getVariable ["tbf_sps_downtime", time]; // get current recovery time of suppression on player
					if (_downtime < time) then { // if there is no recovery time, set it to the current time
						_downtime = time;
					};
					// diag_log ("_Report after time check :" + str(_downtime));
					_shaketime = _effectiveDistance * (tbf_sps_timefactor / 10); // add recovery time before effects start reducing
					_fatiguefactor = _effectivedistance * (tbf_sps_fatiguefactor / 100);
					// player setFatigue ((getFatigue player) + _fatiguefactor);
					_downtime = _downtime + (_effectiveDistance * (tbf_sps_timefactor / 10));

					// if ((tbf_sps_maxtimeenabled == 0) || (_downtime - tbf_sps_maxtimeamount) < time) then {
					if ((_downtime - tbf_sps_maxtimeamount) >= time) then {
						_downtime = time + tbf_sps_maxtimeamount;
					};
					player setVariable ["tbf_sps_downtime", _downtime];
					// };
					if ((tbf_sps_maxsuppressionenabled == 0) || (_suppression < tbf_sps_maxsuppressionamount)) then {
						player setVariable ["tbf_sps_suppression", (_suppression + _effectiveDistance), false];
					};
					_suppression = player getVariable ["tbf_sps_suppression", 0];
					addCamShake [(tbf_sps_shakefactor * (_effectiveDistance / 3)), (_shaketime * 2), (tbf_sps_shakefactor * (_effectiveDistance / 3) / 4)];
					/*diag_log format ["distance: %4, weighted: %1, cover: %2, effective: %3, downTime: %5, shakeTime : %6",
						_weightedDistance, _coverValue, _effectiveDistance, _distance, (_downtime - time), _shaketime];*/

					// Friendly fire reporting
					if (_side == side player) then {
						0 = [_shooter, _weightedDistance] call tbf_sps_fnc_friendly;
					};
				};
			};
		};
	};
};

// Friendly fire reporting
tbf_sps_fnc_friendly = {
	private ["_shooter", "_weightedDistance", "_friendlyfire", "_friendlysuppressed"];
	_shooter = _this select 0;
	_weightedDistance = _this select 1;
	_friendlyfire = _shooter getVariable ["tbf_sps_friendlyfire", 0];
	_friendlysuppressed = player getVariable ["tbf_sps_friendlysuppressed", 0];

	_shooter setVariable ["tbf_sps_friendlyfire", _friendlyfire + _weightedDistance, true];
	player setVariable ["tbf_sps_friendlysuppressed", _friendlysuppressed + _weightedDistance];
	// diag_log str(_friendlysuppressed);
	if ((_friendlyfire + _weightedDistance) > tbf_sps_friendlythreshold) then {
		hintSilent format ["%1 is shooting at you"];
	};
};

// Note: infinite loop
tbf_sps_fnc_effects = {
	private ["_suppression", "_downtime", "_friendlysuppressed", "_newsuppression", "_enemysuppression", "_friendlyfire"];
	while {true} do
	{
		_suppression = player getVariable ["tbf_sps_suppression", 0];
		_downtime = player getVariable ["tbf_sps_downtime", time];
		_friendlysuppressed = player getVariable ["tbf_sps_friendlysuppressed", 0];

		if (_downtime < time) then {
			if (_suppression > 0) then {
				_newsuppression = _suppression - tbf_sps_suppressbleed;
				//diag_log str(_newsuppression);

				if (tbf_sps_speedenabled == 1) then {
					if ((speed player) < tbf_sps_speedthreshold) then {
						_newsuppression = _suppression - (tbf_sps_suppressbleed * tbf_sps_speedfactor);
					};
				};

				player setVariable ["tbf_sps_suppression", _newsuppression, false];
				_suppression = player getVariable ["tbf_sps_suppression", 0];

				if (_suppression <= 0) then {
					resetCamShake;
					// setAperture -1;
					player setVariable ["tbf_sps_suppression", nil, false];
					player setVariable ["tbf_sps_adrenaline", 0];
					player setVariable ["tbf_sps_friendlysuppressed", 0];
					// hintSilent "All suppression is gone now";
				};
			};
		};

		_enemysuppression = _suppression - _friendlysuppressed;
		// diag_log str(_enemysuppression);
		if ((_enemysuppression > tbf_sps_adrenalinethreshold) && (player getVariable ["tbf_sps_adrenaline", 0] == 0)) then {
			player setFatigue 0;
			player setVariable ["tbf_sps_adrenaline", 1];
			// hintSilent "Adrenaline active. Fatigue reset to 0";
		};
		"DynamicBlur" ppEffectEnable true;
		"DynamicBlur" ppEffectAdjust [(_suppression * (tbf_sps_blurfactor / 100))];
		"DynamicBlur" ppEffectCommit tbf_sps_effectinterval;

		tbf_sps_colorPP ppEffectAdjust [1, (1 + _suppression / 100 * 1.2), (0 - _suppression / 10000 * 1.7), [0.0, 0.0, 0.0, 0.0], [1, 1, 1, 1],  [0, 0, 0, 0.0]]; 
		tbf_sps_colorPP ppEffectCommit tbf_sps_effectinterval;

		_friendlyfire = player getVariable ["tbf_sps_friendlyfire", 0];
		if (_friendlyfire > 0) then {
			player setVariable ["tbf_sps_friendlyfire", _friendlyfire - tbf_sps_friendlybleed, true];
		};
	
		// Brightness effect
		// setAperture (35 - (_suppression / 2));
		sleep tbf_sps_effectinterval;
	};
};

// Used to determine player body parts positions, for later reference (and debug if coloured?).
// Note: infinite loop
tbf_sps_fnc_coverAdd = {
	private ["_model"];
	while {true} do
	{
		if (player getVariable ["tbf_sps_coverCheck", 0] == 0) then {
			player setVariable ["tbf_sps_coverCheck", 1];
			_model = "Sign_Sphere10cm_F";

			tbf_sps_refPoint1 = _model createVehicleLocal (player modelToWorld [0, -100, -5]);
			tbf_sps_refPoint2 = _model createVehicleLocal (player modelToWorld [0, -100, -5]);
			tbf_sps_refPoint3 = _model createVehicleLocal (player modelToWorld [0, -100, -5]);
			tbf_sps_refPoint4 = _model createVehicleLocal (player modelToWorld [0, -100, -5]);

			tbf_sps_refPoint1 setObjectTexture [0,"#(argb,8,8,3)color(0,0,1,0,ca)"];
			tbf_sps_refPoint2 setObjectTexture [0,"#(argb,8,8,3)color(1,0,0,0,ca)"];
			tbf_sps_refPoint3 setObjectTexture [0,"#(argb,8,8,3)color(0,1,1,0,ca)"];
			tbf_sps_refPoint4 setObjectTexture [0,"#(argb,8,8,3)color(0,1,1,0,ca)"];

			detach tbf_sps_refPoint1;
			detach tbf_sps_refPoint2;
			detach tbf_sps_refPoint3;
			detach tbf_sps_refPoint4;

			tbf_sps_refPoint1 attachTo [player, [0,0.35,0.23], "Neck"];
			tbf_sps_refPoint2 attachTo [player, [0.08,0.35,0.35], "pelvis"];
			tbf_sps_refPoint3 attachTo [player, [-0.45,0,0.15], "LeftShoulder"];
			tbf_sps_refPoint4 attachTo [player, [0.45,0,0.15], "RightShoulder"];
		};
		sleep 5;
	};
};

// Delay
sleep tbf_sps_delay;

// Determine cover areas near body
0 = [] spawn tbf_sps_fnc_coverAdd; // infinite loop

// Add fired eventhandler to all units
0 = [] spawn tbf_sps_fnc_applyUnits; // infinite loop
0 = [] spawn tbf_sps_fnc_applyVehicles; // infinite loop

// Effect loop
0 = [] spawn tbf_sps_fnc_effects; // infinite loop

diag_log "Suppression system initialised.";
