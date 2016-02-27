# Система подавления игроков #
## ТЗ ##
  * Имитация подавления игрока вражеским огнем, с целью невозможности ведения прицельного ответного огня.
  * 
## Init ##
```
[] execVM "\AVB\Suppress\suppress.sqf"; 
```



## Suppression TacBF ##
// Adanteh © 2013
// Script to change brightness and contrast of NVGs
// This file falls under Gnu GPL license
// http://www.gnu.org/copyleft/gpl.html


Welcome to the suppression test.
The system measures the distance of the bullet passing by and adds a general 'suppression' value to the player based on that.
This suppression value only starts to decrease after an amount of time based on the suppression you have accumulated. The more suppression, the higher that time will be.
Both the suppression value and time to decrease are capped right now.
This means that it won't ever take longer then 5 seconds before suppression effects start to decrease after all suppression stopped and that there is a maximum amount of blur you can get.
The effects based on the suppression value are higher fatigue (More aim-sway, no sprinting), blur and cam-shake.


# Переведите плиз по человечески #