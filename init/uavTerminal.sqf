
//UAV Terminal Script
// by Shrike



waituntil {!(IsNull (findDisplay 46))};  _keyDown = (findDisplay 46) displayAddEventHandler ["KeyDown", "if (_this select 1 == 22) then {
if ((!visibleMap)) then {player action ['UAVTerminalOpen', player];};
if ((visibleMap)) then {openMap false;};    
if (( isUavConnected getConnectedUav player )) then {player connectTerminalToUAV objNull;};
}"];