//hint format ["%1", _this];
_Muzzle=currentMuzzle player;
_Weapon=currentWeapon player;
disableSerialization;
_c=_this select 0;
_ld=_this select 1;

_data = parseNumber (_c lbData _ld);

closeDialog 0;
player action ["loadmagazine", player, player, 0, _data ,_Weapon, _Muzzle];
//_mags=magazinesDetail player;

//hint format ["%1", CurrentMags select _mag];