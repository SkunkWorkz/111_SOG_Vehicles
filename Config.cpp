
class CfgPatches
{
	class 111_Vehicles
	{
			
		requiredAddons[] = {"rhs_c_cars","rhs_tigr","A3_Weapons_F","a3_weapons_f_beta","A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"111SOG_offroad","111SOG_tigr"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


//-------------------------------OFFROAD TRUCK----------------------------------//
//B_G_Offroad_01_F ; C_Offroad_01_F ; R3F_ENI_Offroad ; O_G_Offroad_01_F ;

class CfgVehicles
{
	class Offroad_01_base_F;
	class 111SOG_offroad : Offroad_01_base_F 
	{
			
			scope = 2;
			side = 1;
			faction = "BLU_F";
			vehicleClass = "car";
			displayName = "111SOG Modified Offroad";
			author = "Shrike";
			weapons[] = {};
			audible = 50;
			armor = 100;
			armorWheels = 100;
			transportMaxBackpacks = 0;
			armorLights = 0.08;
			armorGlass = 50;
			armorEngine = 10.0;
			hiddenSelections[] = {"camo", "camo2"};
			hiddenSelectionsTextures[] = {"111_SOG_Vehicles\Data\111SOG_offroad_1.paa","111_SOG_Vehicles\Data\111SOG_offroad_1.paa"};
			availableForSupportTypes[] = {"Transport"};		
			typicalCargo[] = {};
			crew = "";
			preferRoads = true;
			brakeDistance = 7.0;
			class Turrets {};
			class EventHandlers 
			{
				Init = "[_this select 0] execVM ""\111_SOG_Vehicles\init\init.sqf"";";
			};
			enableGPS = 1;
			features = 
			"Randomization: Yes, 12 skins, disabled by: this setVariable 		[""BIS_enableRandomization"",false];						<br />Specific skin may be set by: this setVariable [""color"",X]; (the number ranges from 0 to 11)						<br />Camo selections: 2 - the body, wheels and accessories						<br />Script door sources: None						<br />Script animations: HideDoor1, HideDoor2, HideDoor3, HidePolice, HideServices, HideBackpacks, HideBumper1, HideBumper2, HideConstruction						<br />Executed scripts: \A3\Soft_F_Bootcamp\Offroad_01\scripts\randomize_colors.sqf, \A3\Soft_F_Bootcamp\Offroad_01\scripts\repair_init.sqf 						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: 1 to 3";
		class SimpleObject
		{
			autoGeneratedData = 0;
			eden = 1;
			animate[] = {{"damagehide",0},{"damagehidevez",0},{"damagehidehlaven",0},{"wheel_1_1_destruct",0},{"wheel_1_2_destruct",0},{"wheel_1_3_destruct",0},{"wheel_1_4_destruct",0},{"wheel_2_1_destruct",0},{"wheel_2_2_destruct",0},{"wheel_2_3_destruct",0},{"wheel_2_4_destruct",0},{"wheel_1_1_destruct_unhide",0},{"wheel_1_2_destruct_unhide",0},{"wheel_1_3_destruct_unhide",0},{"wheel_1_4_destruct_unhide",0},{"wheel_2_1_destruct_unhide",0},{"wheel_2_2_destruct_unhide",0},{"wheel_2_3_destruct_unhide",0},{"wheel_2_4_destruct_unhide",0},{"wheel_1_3_damage",0},{"wheel_1_4_damage",0},{"wheel_2_3_damage",0},{"wheel_2_4_damage",0},{"wheel_1_3_damper_damage_backanim",0},{"wheel_1_4_damper_damage_backanim",0},{"wheel_2_3_damper_damage_backanim",0},{"wheel_2_4_damper_damage_backanim",0},{"glass1_destruct",0},{"glass2_destruct",0},{"glass3_destruct",0},{"glass4_destruct",0},{"glass5_destruct",0},{"glass6_destruct",0},{"wheel_1_1",1},{"wheel_2_1",1},{"wheel_1_2",1},{"wheel_2_2",1},{"pedal_thrust",0},{"pedal_brake",1},{"wheel_1_1_damage",0},{"wheel_1_2_damage",0},{"wheel_2_1_damage",0},{"wheel_2_2_damage",0},{"wheel_1_1_damper_damage_backanim",0},{"wheel_1_2_damper_damage_backanim",0},{"wheel_2_1_damper_damage_backanim",0},{"wheel_2_2_damper_damage_backanim",0},{"wheel_1_1_damper",0.24},{"wheel_2_1_damper",0.25},{"wheel_1_2_damper",0.5},{"wheel_2_2_damper",0.47},{"drivingwheel",0},{"steering_1_1",0},{"steering_2_1",0},{"indicatorspeed",0},{"damagehidemph",0},{"fuel",1},{"damagehidefuel",0},{"indicatorrpm",0},{"damagehiderpm",0},{"prop_02",0},{"damagehidetemp",0},{"damagehidedoor1",0},{"hideglass2",1},{"damagehideglass2",0},{"hidepolice",1},{"damagehidepolice",0},{"hideservices",1},{"damagehideservices",0},{"damageunhideservices",1},{"damagehidebackpack_proxy",0},{"damagehidebumper_1_proxy",0},{"damageunhidebumper1",1},{"damagehidebumper_2_proxy",0},{"damageunhidebumper2",1},{"damagehideconstruction_proxy",0},{"damageunhideconstruction",1},{"reverse_light",0},{"daylights",0},{"beacon1",58.48},{"beaconsstart",0},{"beaconsservicesstart",0},{"beacon2",58.48},{"beacon3",58.48},{"beacon4",58.48},{"beacon5",58.48},{"beacon6",58.48},{"beacons1",58.48},{"beacons2",58.48},{"beacons3",58.48},{"beacons4",58.48},{"z_services_civ_hide",0},{"z_services_civ_destruct_hide",0},{"z_services_ig_hide",0},{"z_services_ig_destruct_hide",0}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 1.599;
			verticalOffsetWorld = -0.092;
			//init = "[this, false, true] call bis_fnc_initVehicle;";
			//Init = "[_this select 0] execVM ""\111_SOG_Vehicles\init\init.sqf"";";
		};

	};
//class rhs_tigr_base;
	
class rhs_tigr_vdv;//: rhs_tigr_base;
	
	class 111SOG_tigr: rhs_tigr_vdv
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_msv.paa";
		displayName = "111SOG modified GAZ Tigr (Black)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		side = 1;
		faction = "BLU_F";
		crew = "";
		rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']","['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
		author = "Shrike";
	};
	
	
};
	
	
	
	

	
	
/*
	//class B_G_Offroad_01_F;
	//class 111SOG_offroad: B_G_Offroad_01_F
_this animate ["HidePolice", 1];
_this animate ["HideServices", 1];
_this animate ["HideBackpacks", 1];
_this animate ["HideBumper1", 1];
_this animate ["HideBumper2", 1];
_this animate ["HideConstruction", 1];
_this animate ["HideDoor1", 1]; 
_this animate ["HideDoor2", 1];
_this animate ["HideDoor3", 1];
_this animate ["HideGlass2", 1]; (Suppose Glass1 & 3 might also excist?)
And for the colors (change _rnd1 to prefered color. Not sure which is which):
_rnd1 = floor random 6;
_this setObjectTexture [0, ["\A3\soft_F\Offroad\Data\offroad_ext_co.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE01_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE02_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE03_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE04_CO.paa",
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE05_CO.paa"] select _rnd1 ];

_this setObjectTexture [1, ["\A3\soft_F\Offroad\Data\offroad_ext_co.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE01_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE02_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE03_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE04_CO.paa", 
"\A3\soft_F\Offroad\Data\Offroad_ext_BASE05_CO.paa"] select _rnd1 ];
*/
