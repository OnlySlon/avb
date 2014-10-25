

class CfgPatches
{
	class AVB_weapons_RPG7
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Data_F","A3_Weapons_F"};
		version = "0.01";
	};
};

class CfgMovesBasic
{
   class DefaultDie;
   class ManActions
   {
       GestureReloadRPG7V = "GestureReloadRPG7V";  
   };
   class Actions
   {
       class NoActions: ManActions
       {
           GestureReloadRPG7V[] = {"GestureReloadRPG7V", "Gesture"};
       };
   };
};

class CfgGesturesMale
{
   class Default;
   class States
   {
       class GestureReloadRPG7V: Default
       {
           file="a2_rpg7\reloadRPG7.rtm";
           looped = 0;
           speed = 0.4;
           mask = "launcher";
           headBobStrength = 0.2;
           headBobMode = 2;
           rightHandIKBeg = 1;
           rightHandIKEnd = 1;
           leftHandIKCurve[] = {0,1,0.05,0,0.95,0,1,1};
       };
   };
};

class CfgAmmo
{
    class R_PG32V_F;
    //PG7V
    //penetration: 260mm
    //max speed: 294m/s
    //muzzle velocity: 120m/s
    class R_PG7V_AT: R_PG32V_F
    {
        model = "a2_rpg7\PG7_Rocket";
        hit = 260;
        indirectHit = 20;
        indirectHitRange = 3;
        cost = 150;
        maxSpeed = 294;
        initTime = 0.1;
        sideAirFriction = 0.001;
        airFriction = 0.5;
        thrustTime = 0.5;
        thrust = 467;
        fuseDistance = 5;
        effectsMissile = "missile2";
        effectsMissileInit = "RocketBackEffectsNLAW";       
        timeToLive = 5;
    };
    class R_PG7V_AA: R_PG7V_AT
    {
        airLock = 1;
    };
    class R_PG7V_APERS: R_PG7V_AT
    {
        allowAgainstInfantry = 1;
    };
    class R_PG7V_APERS_AA: R_PG7V_AT
    {
        airLock = 1;
        allowAgainstInfantry = 1;
    };
    //PG7VM
    //penetration: 300mm
    //muzzle velocity: 140m/s
    class R_PG7VM_AT: R_PG7V_AT
    {
        model = "a2_rpg7\PG7VM_Rocket";
        hit = 300;
        cost = 200;
    };
    class R_PG7VM_AA: R_PG7VM_AT
    {
        airLock = 1;
    };
    class R_PG7VM_APERS: R_PG7VM_AT
    {
        allowAgainstInfantry = 1;
    };
    class R_PG7VM_APERS_AA: R_PG7VM_AT
    {
        airLock = 1;
        allowAgainstInfantry = 1;
    };
    //PG7VL
    //penetration: 500mm
    //muzzle velocity: 112m/s
    class R_PG7VL_AT: R_PG7V_AT
    {
        model = "a2_rpg7\PG7VL_Rocket";
        hit = 500;
        cost = 350;
        sideAirFriction = 0.1;
        airFriction = 0.6;
        thrust = 180;
        thrustTime = 0.5;
    };
    class R_PG7VL_AA: R_PG7VL_AT
    {
        airLock = 1;
    };
    class R_PG7VL_APERS: R_PG7VL_AT
    {
        allowAgainstInfantry = 1;
    };
    class R_PG7VL_APERS_AA: R_PG7VL_AT
    {
        airLock = 1;
        allowAgainstInfantry = 1;
    };
    //PG7VR
    //penetration: 600-650mm
    //muzzle velocity: 120m/s
    class R_PG7VR_AT: R_PG7V_AT
    {
        model = "a2_rpg7\PG7VR_Rocket";
        hit = 650;
        cost = 500;
        maxSpeed = 110;
        initTime = 0.15;
        airFriction = 1;
        sideAirFriction = 0.09;
        thrust = 120;
        thrustTime = 0.5;
    };
    //OG7V
    //remove rocket flames?
    //muzzle velocity: 152m/s
    class R_OG7V_AT: R_PG7V_AT
    {
        model = "a2_rpg7\OG7V_Rocket";
        hit = 20;
        indirectHit = 20;
        indirectHitRange = 7;
        cost = 200;
        class CamShakeExplode
        {
            power = "(110*0.2)";
            duration = "((round (110^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((5 + 110^0.5)*8)";
        };
        CraterEffects = "GrenadeCrater";
        ExplosionEffects = "GrenadeExplosion";
        airLock = 0;
        allowAgainstInfantry = 1;
        airFriction = 0.2;
        sideAirFriction = 0.1;
        initTime = 0;
        thrust = 0;
        thrustTime = 0.05;
    };
    class R_TBG7V_AT: R_PG7VR_AT
    {
        model = "a2_rpg7\TBG7V_Rocket";
        hit = 100;
        indirectHit = 90;
        indirectHitRange = 10;
        cost = 500;
        class CamShakeExplode
        {
            power = "(110*0.2)";
            duration = "((round (110^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((5 + 110^0.5)*8)";
        };
        CraterEffects="MK82_SmokeEmit";
        explosionEffects="MK82_Explode";
        airLock = 0;
        allowAgainstInfantry = 1;
    };
};




class CfgMagazines
{
    class RPG32_F;
    class RPG7_PG7V: RPG32_F
    {
        scope = 2;
        model = "a2_rpg7\PG7_proxy";
        modelSpecial = "a2_rpg7\rpg7_launcher_loaded";
        displayName = "PG-7V";
        displaynameshort = "PG-7V";
        descriptionShort = "Type: Single-stage HEAT<br />Rounds: 1<br />Used In: RPG-7V";
        ammo = "R_PG7V_AT";
        picture = "\a2_rpg7\icons\m_pg7_ca.paa";
        initSpeed = 120;
        maxLeadSpeed = 80;
        mass = 60;
    };
    class RPG7_PG7V_AA: RPG7_PG7V
    {
        ammo = "R_PG7V_AA";
        maxLeadSpeed = 150;
    };
    class RPG7_PG7V_APERS: RPG7_PG7V
    {
        ammo = "R_PG7V_APERS";
    };
    class RPG7_PG7V_APERS_AA: RPG7_PG7V_AA
    {
        ammo = "R_PG7V_APERS_AA";
    };
    class RPG7_PG7VM: RPG7_PG7V
    {
        model = "a2_rpg7\PG7VM_proxy";
        modelSpecial = "a2_rpg7\rpg7m_launcher_loaded";
        displayName = "PG-7VM";
        displaynameshort = "PG-7VM";
        ammo = "R_PG7VM_AT";
        picture = "\a2_rpg7\icons\m_pg7vm_ca.paa";
        //initSpeed = 140;
    };
    class RPG7_PG7VM_AA: RPG7_PG7VM
    {
        ammo = "R_PG7VM_AA";
        maxLeadSpeed = 150;
    };
    class RPG7_PG7VM_APERS: RPG7_PG7VM
    {
        ammo = "R_PG7VM_APERS";
    };
    class RPG7_PG7VM_APERS_AA: RPG7_PG7VM_AA
    {
        ammo = "R_PG7VM_APERS_AA";
    };
    class RPG7_PG7VL: RPG7_PG7V
    {
        model = "a2_rpg7\PG7VL_proxy";
        modelSpecial = "a2_rpg7\rpg7L_launcher_loaded";
        displayName = "PG-7VL";
        displaynameshort = "PG-7VL";
        ammo = "R_PG7VL_AT";
        picture = "\a2_rpg7\icons\m_PG7VL_ca.paa";
        initSpeed = 112;
        mass = 80;
    };
    class RPG7_PG7VL_AA: RPG7_PG7VL
    {
        ammo = "R_PG7VL_AA";
        maxLeadSpeed = 150;
    };
    class RPG7_PG7VL_APERS: RPG7_PG7VL
    {
        ammo = "R_PG7VL_APERS";
    };
    class RPG7_PG7VL_APERS_AA: RPG7_PG7VL_AA
    {
        ammo = "R_PG7VL_APERS_AA";
    };
    class RPG7_PG7VR: RPG7_PG7V
    {
        model = "a2_rpg7\PG7VR_proxy";
        modelSpecial = "a2_rpg7\rpg7VR_launcher_loaded";
        displayName = "PG-7VR";
        displaynameshort = "PG-7VR";
        descriptionShort = "Type: Tandem HEAT<br />Rounds: 1<br />Used In: RPG-7V";
        ammo = "R_PG7VR_AT";
        picture = "\a2_rpg7\icons\M_PG7VR_ca.paa";
        initspeed = 66;
        mass = 100;
    };
    class RPG7_OG7V: RPG7_PG7V
    {
        model = "a2_rpg7\OG7V_proxy";
        modelSpecial = "a2_rpg7\rpg7o_launcher_loaded";
        displayName = "OG-7V";
        displaynameshort = "OG-7V";
        descriptionShort = "Type: Fragmentation<br />Rounds: 1<br />Used In: RPG-7V";
        ammo = "R_OG7V_AT";
        picture = "\a2_rpg7\icons\M_OG7V_ca.paa";
        initspeed = 152;
        maxLeadSpeed = 23;
        mass = 40;
    };
    class RPG7_TBG7V: RPG7_PG7V
    {
        model = "a2_rpg7\TBG7V_proxy";
        modelSpecial = "a2_rpg7\tbg7v_launcher_loaded";
        displayName = "TBG-7V";
        displaynameshort = "TBG-7V";
        descriptionShort = "Type: Thermobaric<br />Rounds: 1<br />Used In: RPG-7V";
        ammo = "R_TBG7V_AT";
        picture = "\a2_rpg7\icons\m_tbg7v_ca.paa";
        initspeed = 66;
        maxLeadSpeed = 23;
        mass = 100;
    };
};

class CowsSlot;
class CfgWeapons
{
    class Launcher_Base_F;
    class launch_RPG32_F: Launcher_Base_F
    {
        class WeaponSlotsInfo;
    };
    class launch_RPG7V: launch_RPG32_F
    {
        scope = 2;
        displayName = "RPG-7V";
        descriptionShort = "Rocket Launcher";
        model = "a2_rpg7\rpg7_launcher";
        handAnim[] = {"OFP2_ManSkeleton","a2_rpg7\RPG7.rtm"};
        reloadAction = "GestureReloadRPG7V";
        modelOptics = "-";
        magazines[] = {"RPG7_PG7V","RPG7_PG7VM","RPG7_PG7VL","RPG7_PG7VR","RPG7_OG7V","RPG7_TBG7V",
                       "RPG7_PG7V_AA","RPG7_PG7VM_AA","RPG7_PG7VL_AA",
                       "RPG7_PG7V_APERS","RPG7_PG7VM_APERS","RPG7_PG7VL_APERS",
                       "RPG7_PG7V_APERS_AA","RPG7_PG7VM_APERS_AA","RPG7_PG7VL_APERS_AA"};
        weaponInfoType = "RscWeaponZeroing";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] = {"optic_PGO7V","optic_PGO7V2","optic_PGO7V3","optic_NSPU_RPG"};
            };
        };

        class OpticsModes
        {
            class irons
            {
                opticsID = 1;
                useModelOptics = 0;
                opticsPPEffects[] = {""};
                opticsZoomMin = 0.575;
                opticsZoomMax = 0.8;
                opticsZoomInit= 0.75;
                memoryPointCamera = "eye";
                visionMode[] = {};
                opticsFlare = 0;
                opticsDisablePeripherialVision = 0;
                distanceZoomMin = 200;
                distanceZoomMax = 500;
                cameraDir = "aimpoint";
                discreteDistance[] = {200,300,400,500};
                discreteDistanceCameraPoint[] = {"eye","eye2","eye3","eye4"};
                discreteDistanceInitIndex = 0;
            };
        };

        picture = "\a2_rpg7\icons\w_rpg7_ca.paa";
        aiRateOfFire = 7.0;
        aiRateOfFireDistance = 300;
        minRange = 10;
        midRange = 200;
        maxRange = 500;

        soundFly[] = {"a2_rpg7\Fly",0.77828,1,500};
        reloadMagazineSound[] = {"a2_rpg7\Reload",1.5,1,35};
        drySound[] = {"a2_rpg7\dry",1,1,10};
        begin1[] = {"a2_rpg7\RPG7V_s1",2,1,130};
        begin2[] = {"a2_rpg7\RPG7V_s2",2,1,130};
        begin3[] = {"a2_rpg7\RPG7V_s3",2,1,130};
        begin4[] = {"a2_rpg7\RPG7V_s4",2,1,130};
        soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25};
    };
    /*class launch_RPG7V: launch_RPG7
    {
        displayName = "RPG-7V";
        model = "a2_rpg7\rpg7v_launcher";
        picture = "\a2_rpg7\icons\w_rpg7v_ca.paa";
    };*/

    class ItemCore;
    class InventoryOpticsItem_Base_F;
    class optic_PGO7V: ItemCore
    {
        scope = 2;
        displayName = "PGO-7V";
        picture = "\a2_rpg7\icons\pgo7v_icon.paa";
        model = "\a2_rpg7\PGO7V_optic.p3d";
        descriptionShort = "Magnification: 4x";
        class ItemInfo: InventoryOpticsItem_Base_F
        {
            mass = 4;
            optics = 1;
            modelOptics = "\a2_rpg7\PGO7V_reticle.p3d";
            class OpticsModes
            {
                class regular
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsZoomMin = 0.175;
                    opticsZoomMax = 0.175;
                    opticsZoomInit = 0.175;
                    distanceZoomMin = 200;
                    distanceZoomMax = 200;
                    memoryPointCamera = "sighteye";
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "sightview";
                    visionMode[] = {"Normal"};
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                };
                class night: regular
                {
                    opticsID = 2;
                    modelOptics = "\a2_rpg7\PGO7V_reticle_night.p3d";
                };
            };
        };
    };
    class optic_PGO7V2: optic_PGO7V
    {
        displayName = "PGO-7V2";
        picture = "\a2_rpg7\icons\pgo7v2_icon.paa";
        model = "\a2_rpg7\PGO7V2_optic.p3d";
        class ItemInfo: ItemInfo
        {
            modelOptics = "\a2_rpg7\PGO7V2_reticle.p3d";
            class OpticsModes: OpticsModes
            {
                class regular: regular {};
                class night: regular
                {
                    opticsID = 2;
                    modelOptics = "\a2_rpg7\PGO7V2_reticle_night.p3d";
                };
            };
        };
    };
    class optic_PGO7V3: optic_PGO7V
    {
        displayName = "PGO-7V3";
        picture = "\a2_rpg7\icons\pgo7v3_icon.paa";
        model = "\a2_rpg7\PGO7V3_optic.p3d";
        class ItemInfo: ItemInfo
        {
            modelOptics = "\a2_rpg7\PGO7V3_reticle.p3d";
            class OpticsModes: OpticsModes
            {
                class regular: regular {};
                class night: regular
                {
                    opticsID = 2;
                    modelOptics = "\a2_rpg7\PGO7V3_reticle_night.p3d";
                };
            };
        };
    };
    //When shooting an RPG-7N1 (RPG-7DN1) with PG-7 and PG-7M grenades, or all other types of weapons,
    //the upper row of indicators is used for aimed firing at a range of up to 300m.
    //The lines marked with the numeral 4 are used for firing at a range of 400 m and 
    //the lower lines at 500 m.
    class optic_NSPU_RPG: optic_PGO7V
    {
        displayName = "NSPU (RPG-7 Cam)";
        descriptionShort = "Magnification: 4x";
        picture = "\a2_rpg7\icons\nspu_icon.paa";
        model = "\a2_rpg7\NSPU_optic.p3d";
        class ItemInfo: ItemInfo
        {
            mass = 10;
            modelOptics = "\a2_rpg7\NV_nspu_optic.p3d";
            class OpticsModes
            {
                class regular
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsZoomMin = 0.175;
                    opticsZoomMax = 0.175;
                    opticsZoomInit = 0.175;
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                    memoryPointCamera = "sighteye";
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "sightview";
                    visionMode[] = {"NVG"};
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                };
            };
        };
    };
};

class CfgVehicles 
{
	class NATO_Box_Base;
	class AVB_RPG7_Box: NATO_Box_Base
	{
		scope = 2;
		vehicleClass = "Ammo";
		displayName = "[AVB] RPG7";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
		icon = "iconCrateWpns";
		transportMaxWeapons = 25;
		transportMaxMagazines = 250;
		class TransportWeapons
		{
			class _xx_launch_RPG7V
			{
				weapon = "launch_RPG7V";
				count = 2; //Item Count Here
			};
		}; 
		class TransportMagazines
		{
			
			class _xx_RPG7_PG7V
			{
				magazine = "RPG7_PG7V";
				count = 10;
			};
			class _xx_RPG7_PG7VM
			{
				magazine = "RPG7_PG7VM";
				count = 10;
			};
			class _xx_RPG7_PG7VL
			{
				magazine = "RPG7_PG7VL";
				count = 10;
			};
			class _xx_RPG7_PG7VR
			{
				magazine = "RPG7_PG7VR";
				count = 10;
			};
			class _xx_RPG7_TBG7V
			{
				magazine = "RPG7_TBG7V";
				count = 10;
			};
			class _xx_RPG7_OG7V
			{
				magazine = "RPG7_OG7V";
				count = 10;
			};
		};
		class TransportItems
		{
			
			class _xx_optic_PGO7V
			{
				name = "optic_PGO7V";
				count = 4;
			};
			class _xx_optic_PGO7V2
			{
				name = "optic_PGO7V2";
				count = 4;
			};
			class _xx_optic_PGO7V3
			{
				name = "optic_PGO7V3";
				count = 4;
			};
			class _xx_optic_NSPU_RPG
			{
				name = "optic_NSPU_RPG";
				count = 4;
			};
		};
	};
};
