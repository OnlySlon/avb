# Система боепитания #

## ТЗ ##
  * После получения ручного вооружения магазины пустые (1 патрон - особенности движка, в будущем возможно исправим).
  * Количество магазинов ограничено в зависимости от вооружения (6 на автомат).
  * Снаряжение магазинов осуществляется на пунктах боепитания (очень быстро), из цинков, из пачек патрон, из других магазинов (MAGREPAC), совместимость на уровне патрона.
  * Техника изначально не заряжена.
## Init ##
```
outlw_magRepack_Var = [] execVM 'outlw_magRepack\MagRepack_init.sqf'
```

## Mag repack Переснаряжение магазинов ##

![https://tacbf-ru.googlecode.com/svn/wiki/Image/MagRepack_en.png](https://tacbf-ru.googlecode.com/svn/wiki/Image/MagRepack_en.png)

![https://tacbf-ru.googlecode.com/svn/wiki/Image/MagRepack.png](https://tacbf-ru.googlecode.com/svn/wiki/Image/MagRepack.png)

http://www.armaholic.com/page.php?id=19692

[Базовый мод](http://www.armaholic.com/page.php?id=19692)
# Клавиши Key: CTRL+R #

# EDIT Изменения #

outlw\_magrepack\MagRepack\_init.sqf

## Speed repack Увеличина скорость  снаряжения. ##
```
//outlw_MR_bulletTime = 0.8; // Seconds per individual bullet.
outlw_MR_bulletTime = 0.5; 
```

## Start message Убрано стартовое сообщение. ##

```
//systemChat "Mag Repack Initialized";
//systemChat ("Keybinding: " + (call outlw_MR_keyListToString));
```

## localization Локализация ##
add \outlw\_magrepack\stringtable.xml
```
<?xml version="1.0" encoding="utf-8"?>
<Project
  name="Arma3">
  <Package name="OUTLW_MR">
    <Container name="OUTLW_MR">
	<Key ID="STR_OUTLW_MR_SOURCE">
		<Original> Source</Original>
	        <Czech> Source</Czech>
	        <French> Source</French>
	        <German> Source</German>
	        <Italian> Source</Italian>
	        <Polish> Source</Polish>
	        <Portuguese> Source</Portuguese>
	        <Russian>Источник</Russian>
	        <Spanish> Source</Spanish>
	        <Lithuanian> Source</Lithuanian> 
	</Key>
	<Key ID="STR_OUTLW_MR_TARGET">
		<Original>Target </Original>
	        <Czech>Target </Czech>
	        <French>Target </French>
	        <German>Target </German>
	        <Italian>Target </Italian>
	        <Polish>Target </Polish>
	        <Portuguese>Target </Portuguese>
	        <Russian>Приемник</Russian>
	        <Spanish>Target </Spanish>
	        <Lithuanian>Target </Lithuanian> 
	</Key>
		  
	<Key ID="STR_OUTLW_MR_CLOSE">
		<Original>Close</Original>
	        <Czech>Close</Czech>
	        <French>Close</French>
	        <German>Close</German>
	        <Italian>Close</Italian>
	        <Polish>Close</Polish>
	        <Portuguese>Close</Portuguese>
	        <Russian>Закрыть</Russian>
	        <Spanish>Close</Spanish>
	        <Lithuanian>Close</Lithuanian> 
	</Key>
	<Key ID="STR_OUTLW_MR_MAGAZINE_REPACK">
		<Original>Magazines Repack</Original>
	        <Czech>Magazines Repack</Czech>
	        <French>Magazines Repack</French>
	        <German>Magazines Repack</German>
	        <Italian>Magazines Repack</Italian>
	        <Polish>Magazines Repack</Polish>
	        <Portuguese>Magazines Repack</Portuguese>
	        <Russian>Переснаряжение магазинов</Russian>
	        <Spanish>Magazines Repack</Spanish>
	        <Lithuanian>Magazines Repack</Lithuanian>  
	</Key>
        <Key ID="STR_OUTLW_MR_ALL_MAGAZINES">
		<Original>All Magazines</Original>
	        <Czech>All Magazines</Czech>
	        <French>All Magazines</French>
	        <German>All Magazines</German>
	        <Italian>All Magazines</Italian>
	        <Polish>All Magazines</Polish>
	        <Portuguese>All Magazines</Portuguese>
	        <Russian>Все магазины</Russian>
	        <Spanish>All Magazines</Spanish>
	        <Lithuanian>All Magazines</Lithuanian> 
	</Key>
	<Key ID="STR_OUTLW_MR_ALL_AMMO_TYPES">
		<Original>All Ammo Types</Original>
	        <Czech>All Ammo Types</Czech>
	        <French>All Ammo Types</French>
	        <German>All Ammo Types</German>
	        <Italian>All Ammo Types</Italian>
	        <Polish>All Ammo Types</Polish>
	        <Portuguese>All Ammo Types</Portuguese>
	        <Russian>Все типы патрон</Russian>
	        <Spanish>All Ammo Types</Spanish>
	        <Lithuanian>All Ammo Types</Lithuanian> 
	</Key>
        <Key ID="STR_OUTLW_MR_COMPATIBLE_MAGS">
		<Original>Compatible Magazines</Original>
	        <Czech>Compatible Magazines</Czech>
	        <French>Compatible Magazines</French>
	        <German>Compatible Magazines</German>
	        <Italian>Compatible Magazines</Italian>
	        <Polish>Compatible Magazines</Polish>
	        <Portuguese>Compatible Magazines</Portuguese>
	        <Russian>Совместимые магазины</Russian>
	        <Spanish>Compatible Magazines</Spanish>
	        <Lithuanian>Compatible Magazines</Lithuanian> 
	</Key>
		  <!-- Non-Full Magazines -->
		  <!-- Compatible, Non-Full -->
    </Container>
  </Package>
</Project>


```


## interface optimization Оптимизация интерфейса ##
Many changes Много изменений


## Color to scheme TacBF ##
В работе. WIP..

[Рackage](https://tacbf-ru.googlecode.com/svn/trunk/outlw_magrepack.pbo) - add to ../Addons Folder