//When player equips AT4s
launchIS_RPG18 = {_this removeMagazines "RPG18_HEAT"; _this addMagazine "RPG18_HEAT"};

//When player puts AT4s
launchIS_RPG18_put = {if !(_this hasWeapon "launch_RPG18_F") then {_this removeMagazines "RPG18_HEAT"}};

//When player fires AT4s
launchIS_RPG18_fired = {if (_this hasWeapon "launch_RPG18_F") then {_this addWeapon "launch_RPG18_EMPTY_F";
_this removeMagazines "RPG18_HEAT";
 unit action ["dropweapon",unit,0,0,"launch_RPG18_EMPTY_F"];
 };

RPG18rockettake = player addEventHandler ["Take", {if (_this select 2 == "launch_RPG18_F") then {(_this select 0) call launchIS_RPG18}}];

RPG18rocketput = player addEventHandler ["put", {(_this select 0) call launchIS_RPG18_put}];

RPG18rocketfired = player addEventHandler ["Fired", {if (_this select 1 == "launch_RPG18_F") then {(_this select 0) call launchIS_RPG18_fired}}];