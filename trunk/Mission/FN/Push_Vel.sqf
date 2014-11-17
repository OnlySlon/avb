//SCR\Push\fnc_Push_vel.sqf
// PUSH AND KILL SCRIPT BY FEINT
// VERSION 2.0
// © 2013 ALL RIGHTS RESERVED
// TO MODIFY OR COPY FROM THIS FILE - CONTACT JON HILLENBRAND THROUGH HIS WEBSITE - WWW.JONHILLENBRAND.COM

push = {
_targetPush=_this select 0;
 _vel =  velocity _targetPush;
 _caller = _this select 1;
 _dir = direction _caller;
 _speed = _this select 2;
 _targetPush setVelocity [
            (_vel select 0) + (sin _dir * _speed),
            (_vel select 1) + (cos _dir * _speed),
            (_vel select 2)
         ];
};

_caller = player;
if !(isNil{_caller getVariable "pushScriptRunning"}) then
{

}
else
{
         _caller setVariable ["pushScriptRunning",1,false];
         _thingToPush = cursorTarget;
         _dist=player distance _thingToPush;
         //_name = vehicleVarName _thingToPush;
         // _distanceFromTarget = _caller distance _thingToPush;
         _thingToPushType = typeOf _thingToPush;
         _nameOfThingToPush = (getText (configFile >> "cfgVehicles" >> (_thingToPushType) >> "displayname"));
         // _weightOfThing = (getText (configFile >> "cfgVehicles" >> (_thingToPushType)  >> "weight"));

         if (!(isNull _thingToPush) and ((_thingToPush isKindOf "AllVehicles") or (_thingToPush isKindOf "Thing") or (_thingToPush isKindOf "Object")) and _dist<5)
         then
         {
            [_thingToPush,_caller,5] call push;
        };

        if (_thingToPush isKindOf "Ship")
          then
        {
            [_thingToPush,_caller,5] call push;
            _thingToPush setvelocity [0,0,0];
        };
sleep 2;
_caller setVariable ["pushScriptRunning",nil,false];
};

