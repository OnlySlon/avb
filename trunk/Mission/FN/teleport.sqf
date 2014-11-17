hint "Click on map to teleport";
//onMapSingleClick "grp1 move _pos; onMapSingleClick ''; true";
onMapSingleClick "vehicle player setPos [_pos select 0,_pos select 1,0]; onMapSingleClick ''; true";
openMap true;
//closeDialog 0;

//hint ""Click on map to teleport"";onMapSingleClick ""vehicle player setPos [_pos select 0,_pos select 1,0]; onMapSingleClick '';""; openMap true;