class CfgPatches
{
	class SFM_Complete
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "DZ_Characters", "SFM", "SFM_2"};
	};
};
class CfgMods
{
    class SFM_Complete_Mod
    {
        name="SFM Complete";
        dir="SFMComplete";
        picture="";
        action="";
        author="SFMAuthorHere, Pisque";
		credits = "SFMAuthorHere, Pisque";
        overview = "";
		type = "mod";
		inputs = "";
        defines[] = {};
		dependencies[] = {"Core","Game","World","Mission"};
        class defs
		{
			class imageSets
			{
				files[]= {};
			};
			class widgetStyles
			{
				files[]= {};
			};

			class engineScriptModule 
			{ 
				files[] = { "SFMComplete/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "SFMComplete/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "SFMComplete/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "SFMComplete/Scripts/5_Mission" };
			};
		};
    };
};

class CfgVehicles
{

	// Organize by suit type, not faction.
	class SFM_SunriseVestFull_Base;
	class SFM_SunriseJacket_Base;
	class SFM_SunrisePants_Base;
	class SFM_SunriseGasBag;
	class SFM_SunriseBag1;
	class SFM_MercPants_ColorBase;

	// DUTY //
	// SUNRISE (DUTY)
	class SFMC_SunriseVestFull_Duty_1: SFM_SunriseVestFull_Base
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_Vest_Duty_co.paa","SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_RPS_Dark_co.paa","SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_Dark_co.paa"};
	};
	class SFMC_SunriseJacket_Duty: SFM_SunriseJacket_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_Duty_co.paa","SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_Duty_co.paa"};
	};
	class SFMC_SunrisePants_Duty: SFM_SunrisePants_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_Duty_co.paa"};
	};
	class SFMC_SunriseGasBag_Duty: SFM_SunriseGasBag
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\GasBag\SunriseM1_GasBag_Dark_co.paa"};
	};
	class SFMC_SunriseBag_Duty: SFM_SunriseBag1
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_Duty_co.paa"};
	};

	// DUTY HAS NO BERIL TEXTURES
	// Merc Suit for Duty is alrady done.
		// TODO: Add to Suits



	// TODO: Add Sunrise for Freedom
		// Freedom Sunrise Vest
	class SFMC_SunriseVestFull_Freedom_1: SFM_SunriseVestFull_Base
	{
		scope = 2;
		visibilityModifier = 0.95;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_Vest_Freedom_co.paa","SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_RPS_Freedom_co.paa","SFM\Set\SFM_Sunrise\Vest\data\SunriseM1_VestPlate_Freedom_co.paa"};
	}
		// Freedom Sunrise Jacket
	class SFMC_SunriseJacket_Freedom: SFM_SunriseJacket_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_Freedom_co.paa","SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_Freedom_co.paa"};
	}
		// Freedom Sunrise Pants
	class SFMC_SunrisePants_Freedom: SFM_SunrisePants_Base
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_Freedom_co.paa"};
	}


		// Freedom Sunrise Gas Bag
			// NO TEXTURE FOR FREEDOM GAS BAG
	
		// Freedom Sunrise Bag
	class SFMC_SunriseBag_Freedom: SFM_SunriseBag1
	{
		scope = 2;
		visibilityModifier = 0.9;
		hiddenSelectionsTextures[] = {"SFM\Set\SFM_Sunrise\Bag\data\SunriseM1_Bag_Freedom_co.paa"};
	}

	// TODO: Add Sunrise for Eco
		// Ecologist Sunrise Vest
		// Ecologist Sunrise Jacket
		// Ecologist Sunrise Pants
		// Ecologist Sunrise Gas Bag
		// Ecologist Sunrise Bag
	// TODO: Add Sunrise for Monolith
		// Monolith Sunrise Vest
		// Monolith Sunrise Jacket
		// Monolith Sunrise Pants
		// Monolith Sunrise Gas Bag
		// Monolith Sunrise Bag


	// TODO: Add SEVA for Freedom
		// Freedom SEVA Vest
		// Freedom SEVA Jacket
		// Freedom SEVA Pants
		// Freedom SEVA Gas Bag
	// TODO: Add SEVA for Monolith
		// Monolith SEVA Vest
		// Monolith SEVA Jacket
		// Monolith SEVA Pants
		// Monolith SEVA Gas Bag

	// TODO: Add Beril for Loner
		// Berill_shirt_stalker.paa NEED

	// TODO: Add Beril for Freedom
		// Freedom Beril Helmet
		// Freedom Beril Gasmask
		// Freedom Beril Vest
		// Freedom Beril Jacket
		// Freedom Beril Pants
	// TODO: Add Beril for Monolith
		// Monolith Beril Helmet
		// Monolith Beril Gasmask
		// Monolith Beril Vest
		// Monolith Beril Jacket
		// Monolith Beril Pants
	// TODO: Add Beril for Military
		// Military Beril Helmet
		// Military Beril Gasmask
		// Military Beril Vest
		// Military Beril Jacket
		// Military Beril Pants

	// TODO: Add Merc for Loner
		// Loner Merc Vest
		// Loner Merc Jacket
		// Loner Merc Pants
	// TODO: Add Merc for Freedom
		// Freedom Merc Vest
		// Freedom Merc Jacket
		// Freedom Merc Pants
	// TODO: Add Merc for Monolith
		// Monolith Merc Vest
		// Monolith Merc Jacket
		// Monolith Merc Pants

	// TODO: TEST ME

	// class SFMC_MercPants_Bandit: SFM_MercPants_ColorBase
	// {
	// 	scope = 2;
	// 	visibilityModifier = 0.9;
	// 	hiddenSelectionsTextures[] = {"SFM\Pants\SFM_MercPants\data\Merc_Pants_Bandit.paa"};
	// }

};