/*
	Light toggle script - turns on search light

	_v - vehicle name
	_a - animation name
	_t - turret path, default [0]

	a: reyhard
*/

params["_v","_a",["_t",[0]]];

private _p = call rhsusf_fnc_findPlayer;
private _delete = false;
private _d = objNull;

if(_v animationSourcePhase _a == 1)then{
	_v animateSource [_a,0];

	if(isnull (_v turretUnit _t))then{
		_delete=true;
		_d = createAgent ["VirtualMan_F", [0,0,0], [], 0, "FORM"];
		_d moveInTurret [_v,_t];
	};

	(_v turretUnit _t) action ["searchlightOff",  _v];
	if(_delete)then{moveout _d; deleteVehicle _d;};
}else{
	_v animateSource [_a,1];

	if(isnull (_v turretUnit _t))then{
		_delete=true;
		_d = createAgent ["VirtualMan_F", [0,0,0], [], 0, "FORM"];
		_d moveInTurret [_v,_t];
	};

	(_v turretUnit _t) action ["searchlightOn",  _v];
	if(_delete)then{moveout _d; deleteVehicle _d;};
};