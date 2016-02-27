# ТЗ #

Возможность устанавливать видеокамеру в любом месте с функцией удаленного просмотра  информации с нее, и управления направлением камеры (возможно параллельное управление направлением зарядом (клеймор) или статическим вооружением).
Возможность синхронизировать камеру с подрывными зарядами, стационарным вооружением.

Ограничения: расстояние до камеры..., мониторинг 1 объекта (пока)...

Оборудование:

1. Монитор камеры - позволяет просматривать изображение с камерs и управлять ей, предмет в инвентаре на своем месте (как терминал UAF).

2. Камера - небольшой статичный объект, может быть установлен, и снят. Управляется Монитором камеры.

3. Подрывной заряд с камерой - небольшой статичный объект, может быть установлен, снят, подорван. Управляется Монитором камеры.

4. Мина Клеймор  с камерой - небольшой статичный объект, может быть установлен, снят, подорван. Управляется Монитором камеры с управлением направленного взрыва.


Управление:
Акшен меню (возможно отдельное меню игрока интерактивное меню).

Если в инвентаре есть оборудование с камерой - меню Установить....

После установки объекта с камерой - меню - Просмотр... (Диалог с видом с камеры и кнопками ее управления). + на экране небольшой вид с камеры типа http://www.youtube.com/watch?v=BhXBJ7C7dHQ   !!!! Можно видеть что происходит в режиме боя!!!!.

Рядом с камерой, меню снятия камеры и укладки в инвентарь.

Игровой противовес  что-то типа комплекса ПЕЛЕНА... http://www.sis-tss.ru/2010-06-26-06-15-19/6631-apparatura-radioelektronnogo-kompleksa-pelena-7e.html заряд либо подрывается в зоне ее действия либо небоступен для подрыва, видеосвязь обрывается...


# Реализация #

Портирование монитора:

![http://avb.googlecode.com/svn/wiki/Images/minecam.png](http://avb.googlecode.com/svn/wiki/Images/minecam.png)

Недостаки - звуки с А2
```
Cannot load sound 'ca\ui\data\sound\onover.wss'
Cannot load sound 'ca\ui\data\sound\new1.wss'
Cannot load sound 'ca\ui\data\sound\onclick.wss'
```

Прототип боковой камеры:

![http://avb.googlecode.com/svn/wiki/Images/minecam1.png](http://avb.googlecode.com/svn/wiki/Images/minecam1.png)

Ящик в монитором и камерой

![http://avb.googlecode.com/svn/wiki/Images/boxCam.png](http://avb.googlecode.com/svn/wiki/Images/boxCam.png)

```
class NATO_Box_Base;

	class hunteridol_Box_Weapons: NATO_Box_Base
	{
		mapSize = 1.81;
		//author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "hunteridol_Box_Weapons";
		scope = 2;
		displayName = "Ящик с hunteridol [AVB]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 160;
		transportMaxMagazines = 0;

		class TransportWeapons
		{
			class _xx_ItemHiObj
			{
				weapon = "ItemHiObj";
				count = 1;
			};
			class _xx_ItemHiCam
			{
				weapon = "ItemHiCam";
				count = 1;
			};
		};
	};

```

Недостатки = текстуры, материалы с А2....
В работе....