/*init script by Firewill */
private ["_plane","_pilot","_gh_ex","_gh_ex_l1","_gh_ex_l2","_gh_ex_probe","_gh_ex_r1","_gh_ex_r2","_gh_ex_sensor","_gh_texture","_gh_custom"];

_plane = _this select 0;
_pilot = driver _plane;
_planetype = typeof _plane;
_fueltank = 0;

_plane setVariable ["GH_ACC_INST_CHECK","no",true];

_kit_check = _plane getVariable ["GH_Kit_Check",false];

_plane setVariable ["GH_FLIR_CHK","no",true];//initialize for marker variable check


_plane setVariable ["GH_HF1","NO",true];
_plane setVariable ["GH_HF2","NO",true];
_plane setVariable ["GH_HF3","NO",true];
_plane setVariable ["GH_HF4","NO",true];	
_plane setVariable ["GH_HF5","NO",true];
_plane setVariable ["GH_HF6","NO",true];
_plane setVariable ["GH_HF7","NO",true];
_plane setVariable ["GH_HF8","NO",true];	
_plane setVariable ["GH_HF9","NO",true];
_plane setVariable ["GH_HF10","NO",true];
_plane setVariable ["GH_HF11","NO",true];
_plane setVariable ["GH_HF12","NO",true];	
_plane setVariable ["GH_HF13","NO",true];
_plane setVariable ["GH_HF14","NO",true];
_plane setVariable ["GH_HF15","NO",true];
_plane setVariable ["GH_HF16","NO",true];	

_gh_texture = getText (configFile >> "CfgVehicles" >> _planetype >> "FIR_UH80R_Custom_Texture");

if (_kit_check) then
{
_gh_ex = _plane getVariable ["GH_Ex","no"];
_gh_ex_l1 = _plane getVariable ["GH_Ex_l1","empty"];
_gh_ex_l2 = _plane getVariable ["GH_Ex_l2","empty"];
_gh_ex_r1 = _plane getVariable ["GH_Ex_r1","empty"];
_gh_ex_r2 = _plane getVariable ["GH_Ex_r2","empty"];
_gh_ex_probe = _plane getVariable ["GH_Ex_Probe","no"];
_gh_ex_sensor = _plane getVariable ["GH_Ex_Sensor","empty"];
_gh_custom = _plane getVariable ["GH_Kit_Custom",false];


[_plane,_gh_ex,_gh_ex_l1,_gh_ex_l2,_gh_ex_r1,_gh_ex_r2,_gh_ex_probe,_gh_ex_sensor,_gh_texture] spawn FIR_fnc_GH_loadout_set;

}
else
{

};
_EHfiredIdx = _plane addEventHandler ["fired", {[_this] execVM "FIR_Ghosthawk_Acc\Script\fire.sqf"}];




_plane setVariable ["GH_Fueltanks",_fueltank,true];



_fueltank = _plane getVariable "GH_Fueltanks"; // get fueltanks count variable from GH_Fueltanks Variable.

	
Switch (_fueltank) Do
{
	case 0:
	{
		_plane setfuel 0.4;
	};
	case 1:
	{
		_plane setfuel 0.55;
	};
	case 2:
	{
		_plane setfuel 0.7;
	};
	case 3:
	{
		_plane setfuel 0.85;
	};
	case 4:
	{
		_plane setfuel 1;
	};
};

////////////////////////////////////////////////////////////////////////////////////////
_plane linkItem "B_UavTerminal";

_pilot linkItem "B_UavTerminal";

//[] execVM "\Fir_Ghosthawk_Acc\script\FlirMarker.sqf";
//myscript = this execvm "flirmarker.sqf";


if(!isServer) exitwith{};


//[] execVM "\Fir_Ghosthawk_Acc\script\Autopilot\AutoPilotInit.sqf";





//"DEVAS_AutoPilotON" addPublicVariableEventHandler 
//{
//    [_this select 1]  spawn DEVAS_AutoPilot;
//};


