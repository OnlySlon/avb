# AltReload Альтернативная перезарядка #

## Problem Проблема ##

При отключенном Action LoadMagazine невозможно перезарядить альтернативные магазины.

With deactivated Action LoadMagazine impossible to reload alternative Magazine.

[LoadMagazine Doc](https://community.bistudio.com/wiki/Arma_3_Actions#LoadMagazine) - неопределенная информация.

# Solution Решение #

```
unit action ["loadMagazine", <target>, <magazine creator>, <ID MAGAZIN Player>, <number> ,<weapon name>, <muzzle name>]
```

Sample script:
```
magazinesDetail player;
//return ["Магазин на 16 9-мм патронов(16/16)[id/cr:7/0]"]
_Muzzle=currentMuzzle player;
_Weapon=currentWeapon player;
_id = 7;//[id/cr:7/0]
player action ["loadmagazine", player, player, 0, _id ,_Weapon, _Muzzle];
```

[Sample Mission](http://avb.googlecode.com/svn/wiki/SRC/Alt_reload.Stratis.7z) - Key ALT + ActionKeys "ReloadMagazine" , + Push Script "TAB" , + Turn Script "CTRL"+"TAB".Use Arsenal for ower magazins.