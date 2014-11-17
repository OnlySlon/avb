_caller = player;
if !(isNil{_caller getVariable "TurnScriptRunning"}) then
{
        // ONLY RUN THE SCRIPT ONCE EVERY 1 SECOND
}
else
{
         _caller setVariable ["TurnScriptRunning",1,false];
         _thingToPush = cursorTarget;
         _dist=player distance _thingToPush;
         //_name = vehicleVarName _thingToPush;
         // _distanceFromTarget = _caller distance _thingToPush;
         _thingToPushType = typeOf _thingToPush;
         _nameOfThingToPush = (getText (configFile >> "cfgVehicles" >> (_thingToPushType) >> "displayname"));
         // _weightOfThing = (getText (configFile >> "cfgVehicles" >> (_thingToPushType)  >> "weight"));

         if (!(isNull _thingToPush) and ((_thingToPush isKindOf "AllVehicles") or (_thingToPush isKindOf "Thing") or (_thingToPush isKindOf "Object") or (_thingToPush isKindOf "Ship")) and _dist<5)
         then
         {
            _thingToPush setVectorUp [0,0,1];
        };
sleep 2;
_caller setVariable ["TurnScriptRunning",nil,false];

};





