
class CfgPatches
{
	class 111_Vehicles
	{
			
		requiredAddons[] = {"rhs_c_cars","rhs_tigr","A3_Weapons_F", "a3_weapons_f_beta", "A3_Weapons_F_gamma", "A3_Characters_F", "A3_Characters_F_beta", "A3_Characters_F_gamma", "A3_Soft_F"};
		requiredVersion = 0.1;
		units[] = {"111SOG_offroad","111SOG_tigr"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};


//-------------------------------OFFROAD TRUCK----------------------------------//

class cfgVehicles 
{
	
	
	class Offroad_01_base_F;

	class 111SOG_offroad : Offroad_01_base_F 
		{
			//_generalMacro = C_Offroad_01_F;
			scope = 2;
			side = West;
			faction = "BLU_F";
			vehicleClass = "car";
			displayName = "111SOG Modified Offroad";
			author = "Shrike";
			weapons[] = {};
			audible = 50;
			armor = 100;
			armorWheels = 100;
			armorGlass = 50;
			armorEngine = 2.0;
			hiddenSelections[] = {"camo", "camo2"};
			hiddenSelectionsTextures[] = {"111SOG_Vehicles\Data\111SOG_offroad.paa","111SOG_Vehicles\Data\111SOG_offroad.paa"};
			availableForSupportTypes[] = {"Transport"};		
			typicalCargo[] = {};
			crew = "";
			preferRoads = true;
			brakeDistance = 7.0;
			class Turrets {};
			class EventHandlers {};
		
		
		};

	
//class rhs_tigr_base;
	
class rhs_tigr_vdv;//: rhs_tigr_base;
	
	class 111SOG_tigr: rhs_tigr_vdv
	{
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_tigr_msv.paa";
		displayName = "111SOG modified GAZ Tigr (Black)";
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_tigr\data\rhs_tigr_co_camo.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_01_co.paa","rhsafrf\addons\rhs_tigr\data\rhs_tigr_int_02_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		faction = "BLU_F";
		crew = "";
		rhs_decalParameters[] = {"['Number', cDecalsTigr4NumberPlaces, 'LicensePlate']","['Label', cDecalsTigrRightArmyPlaces, 'Platoon', 12]"};
		author = "Shrike";
	};
	
	
};
	
	
	
	

	
	
/*

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
