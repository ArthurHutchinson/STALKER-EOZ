class CfgPatches
{
	class DayZSuit_Scripts
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "DZ_Characters", "SFM", "SFM_2", "SFM_Complete"};
	};
};
class CfgMods
{
    class DayZ_Suit_Script_Mod
    {
        name="Suit Script";
        dir="SEOZ_DayZ_Suit_Script";
        picture="";
        action="";
        author="Spaghetti-Bit";
		credits = "Spaghetti, Pisque as Data Entry";
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
				files[] = { "SEOZ_DayZ_Suit_Script/Scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "SEOZ_DayZ_Suit_Script/Scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "SEOZ_DayZ_Suit_Script/Scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "SEOZ_DayZ_Suit_Script/Scripts/5_Mission" };
			};
		};
    };
};

class CfgVehicles
{
	// TODO: Add BULAT SUIT (SKAT SUIT)
		// FOR BULAT SUIT USE SEVA SUIT NOT PS5M
	// TODO: Organize by suit type, not faction.

	class SFM_SunriseJacket1;
	class SFM_SevaJacketV1;
	class SFM_ZakatJacket1;
	class SFM_WFJacket_Stalker1;
	class SFM_SASJacket4;
	class SFM_SASJacket5;
	class SFM_PS5MS_Jacket_Neitral1;
	class SFM_SSP99M_Jacket_V1_Red;
	class SFM_SSP99M_Jacket_V2_Green;
	class SFP_Hazmat_tors;
	class SFMC_SunriseJacket_Duty;
	class SFM_SevaJacketV1_Dolg1;
	class SFM_PS5MS_Jacket_Dolg1;
	class sfm_sevajacketv1_freedumb;
	class SFM_PS5MS_Jacket_Freedumb;
	class SFM_ZakatJacket_Freedumb;
	class SFM_SASJacket_Freedumb;
	class SFM_WFJacket_Freedumb;
	class SFM_PS5MS_Jacket_IPSF;
	class SFM_MTV_Black;
	class SFM_SevaJacketV1_IPSF;
	class SFM_ZakatJacket_IPSF;

	  ///////////
	 // LONER //
	///////////

	class SFM_Suit_SunriseFull_1: SFM_SunriseJacket1
	{
		scope = 2;
		displayName = "Sunrise Suit";
		suit[] = {"SFM_SunriseVestFull_1","SFM_SunrisePants1"};
		suitSlots[] = {"Vest", "Legs"};
	};
	class SFM_Suit_SunriseFull_1_Gas: SFM_SunriseJacket1
	{
		scope = 2;
		displayName = "Sunrise Suit (Gas Tank)";
		suit[] = {"SFM_SunriseVestFull_1","SFM_SunrisePants1","SFM_SunriseGasBag"};
		suitSlots[] = {"Vest", "Legs","Back"};
	};

	class SFM_Suit_SevaFull: SFM_SevaJacketV1
	{
		scope = 2;
		displayName = "Seva Suit";
		suit[] = {"SFM_SevaVestFull","SFM_SevaPants","MilitaryBoots_Black","OMNOGloves_Gray","SFM_SevaGlass","SFM_SevaBag"};
		suitSlots[] = {"Vest","Legs","Feet","Gloves","Mask","Back"};
	};
	
	class SFM_Suit_Zakat: SFM_ZakatJacket1
	{
		scope = 2;
		displayName = "Zakat Suit";
		suit[] = {"SFM_ZakatVest2_1","SFM_ZakatPants1"};
		suitSlots[] = {"Vest","Legs"};
	};
	
	class SFM_Suit_WFJacket: SFM_WFJacket_Stalker1
	{
		scope = 2;
		displayName = "Wind of Freedom (loner) Suit";
		suit[] = {"SFM_WFPants_Stalker"};
		suitSlots[] = {"Legs"};
	};
	
	class SFM_WFVest: SFM_WFJacket_Stalker1
	{
		scope = 2;
		displayName = "Wind of Freedom (loner) Suit";
		suit[] = {"SFM_WFVest_Green","SFM_WFPants_Stalker"};
		suitSlots[] = {"Vest", "Legs"};
	};
	
	class SFM_Suit_SAS: SFM_SASJacket5
	{
		scope = 2;
		displayName = "SAS Suit";
		suit[] = {"SFM_ZakatVest3_1","SFM_SASPants5","MilitaryBoots_Black"};
		suitSlots[] = {"Vest","Legs","Feet"};
	};
	
	class SFM_Suit_SAS_2: SFM_SASJacket4
	{
		scope = 2;
		displayName = "SAS Suit";
		suit[] = {"SFM_ZakatVest3_1","SFM_SASPants4","MilitaryBoots_Black"};
		suitSlots[] = {"Vest","Legs","Feet"};
	};
	
	class SFM_Suit_SAS_Bag: SFM_SASJacket5
	{
		scope = 2;
		displayName = "SAS Suit (Mule)";
		suit[] = {"SFM_ZakatVest3_1","SFM_SASPants5","MilitaryBoots_Black","SFM_RaiderBags_Green"};
		suitSlots[] = {"Vest","Legs","Feet","back"};
	};
	
	class SFM_Suit_Beril: SFM_PS5MS_Jacket_Neitral1
	{
		scope = 2;
		displayName = "Beril Suit";
		suit[] = {"SFM_BerilVest_Voen1","SFM_PS5MS_Pants_Neitral1","MilitaryBoots_Black","SFM_BulatHelmet"};
		suitSlots[] = {"Vest","Legs","Feet","Headgear","back"};
	};

	// TODO: Make the shirt using Berill_shirt_stalker.paa
	// class SFM_Suit_Beril_Stalker: SFM_BerilVest_Stalker
	// {
	// 	// Had to use SFM_BerilJacket_Base because it uses the STALKER texture anyway. If it's bad, needs a new texture.
	// 	scope = 2;
	// 	displayName = "Berill Suit (Loner)";
	// 	suit[] = {"SFM_BerilJacket_Base","SFM_BerilPants_Stalker","SFM_BerilHelmet_Stalker","SFM_GasMask_XM40"};
	// 	suitSlots[] = {"Body","Legs","Headgear","Mask"};
	// };

	// TODO: Make suit Item for Loner Merc
	// class SFM_Suit_Loner_Merc: SFM_VestMerc_Stalker
	// {
	// 	scope = 2;
	// 	displayName = "Merc Suit (Loner)";
	// 	suit[] = {"SFM_MercJacket_neutral","SFM_MercPants_Stalker"};
	// 	// TODO: Merc Suit Stalker needs Pants.
	// 	suitSlots[] = {"Body","Legs"};
	// };

	  ///////////////
	 // ECOLOGIST //
	///////////////


	class SFM_Suit_SSP99M_Red: SFM_SSP99M_Jacket_V1_Red
	{
		// TODO: Add in the null/invisible slot for the 'vest' (NH should have one). Reason why is because when using the suit vests above will dupe the pants/jacket and drop it on the ground.
		scope = 2;
		displayName = "Ecologist Suit (Red)";
		suit[] = {"SFM_SSP99M_Back_Red","SFM_SSP99M_Pants_Red","SFM_SSP99M_Boots","SFM_SSP99M_Gloves","SFM_SevaGlass"};
		suitSlots[] = {"Back","Legs","Feet","Gloves","Mask"};
	};

	// TODO: Needs to be tested.
	
	class SFM_Suit_SSP99M_Green: SFM_SSP99M_Jacket_V2_Green
	{
		// TODO: Add in the null/invisible slot for the 'vest' (NH should have one). Reason why is because when using the suit vests above will dupe the pants/jacket and drop it on the ground.
		scope = 2;
		displayName = "Ecologist Suit (Green)";
		suit[] = {"SFM_SSP99M_Back_Green","SFM_SSP99M_Pants_Green","SFM_SSP99M_Boots","SFM_SSP99M_Gloves","SFM_SevaGlass"};
		suitSlots[] = {"Back","Legs","Feet","Gloves","Mask"};
	};
	
	class SFP_Suit_HazOP: SFP_Hazmat_tors
	{
		// TODO: Add in the null/invisible slot for the 'vest' (NH should have one). Reason why is because when using the suit vests above will dupe the pants/jacket and drop it on the ground.
		scope = 2;
		displayName = "Ecologist Combat Suit";
		suit[] = {"SFP_Hazmat_pants","SFP_Hazmat_Boots","SFP_Hazmat_Helm_mirror"};
		suitSlots[] = {"Legs","Feet","Headgear"};
	};

	// TODO: Make Suit Item for Eco Sunrise
		// Make the invidiual items for Eco Sunrise

	  //////////
	 // DUTY //
	//////////

	class SFM_Suit_Duty_Sunrise: SFMC_SunriseJacket_Duty
	{
		scope = 2;
		displayName = "Sunrise Suit (Duty)";
		suit[] = {"SFMC_SunriseVestFull_Duty_1","SFMC_SunrisePants_Duty"};
		suitSlots[] = {"Vest", "Legs"};
	};
	
	class SFM_Suit_Duty_Sunrise_Gas: SFMC_SunriseJacket_Duty
	{
		scope = 2;
		displayName = "Sunrise Suit (Duty) (Gas Tank)";
		suit[] = {"SFMC_SunriseVestFull_Duty_1","SFMC_SunrisePants_Duty","SFMC_SunriseGasBag_Duty"};
		suitSlots[] = {"Vest", "Legs","Back"};
	};

	class SFM_Suit_Duty_Seva: SFM_SevaJacketV1_Dolg1
	{
		scope = 2;
		displayName = "Seva Suit (Duty)";
		suit[] = {"SFM_SevaVestFull_Dolg1","SFM_SevaPants_Dolg1","MilitaryBoots_Black","OMNOGloves_Gray","SFM_SevaGlass","dzrp_Seva5M_Set_Dolg_GasBag"};
		suitSlots[] = {"Vest","Legs","Feet","Gloves","Mask","Back"};
	};
	
	class SFM_Suit_Bulat_Dolg: SFM_PS5MS_Jacket_Dolg1
	{
		scope = 2;
		displayName = "Seva Suit (Duty)";
		suit[] = {"SFM_Bulat_Vest_Dolg","SFM_PS5MS_Pants_Dolg1","MilitaryBoots_Black","SFM_BulatHelmet_Dolg1"};
		suitSlots[] = {"Vest","Legs","Feet","Headgear"};
	};

	// TODO: Make Suit Item for Duty Beril
		// MISSING DOLG TEXTURES IN HELMETS, VESTS, GASMASK... BUT JACKET AND PANTS ARE PRESENT???
	// TODO: Make Suit Item for Duty Merc

	  /////////////
	 // FREEDOM //
	/////////////

	// TODO: Make Suit Item for Freedom Sunrise
		// TODO: Make the invidiual items for Freedom Sunrise

	class SFM_Suit_Freedom_Seva: sfm_sevajacketv1_freedumb
	{
		scope = 2;
		displayName = "Seva Suit (Freedom)";
		suit[] = {"SFM_SevaVestFull_Svoboda1","SFM_SevaPants_Freedumb","MilitaryBoots_Black","OMNOGloves_Gray","SFM_SevaGlass","SFM_SevaBag_Svoboda"};
		suitSlots[] = {"Vest","Legs","Feet","Gloves","Mask","Back"};
	};

	// TODO: Make Suit Item for Freedom Beril
	class SFM_Suit_Freedom_Beril: SFM_PS5MS_Jacket_Freedumb
	{
		scope = 2;
		displayName = "Berill Suit (Freedom)";
		suit[] = {"SFM_BerilVest_Svoboda1","SFM_PS5MS_Pants_Freedumb","SFM_BerilHelmet_Svoboda1","SFM_GasMask_XM40"};
		suitSlots[] = {"Vest","Legs","Headgear","Mask"};
	};
	
	class SFM_Suit_ZakatVest_Freedom: SFM_ZakatJacket_Freedumb
	{
		scope = 2;
		displayName = "Zakat Suit (Freedom)";
		suit[] = {"SFM_ZakatVestFull_1","SFM_ZakatPants_Freedumb"};
		suitSlots[] = {"Vest","Legs"};
	};
	
	class SFM_Suit_MTV_Freedom: SFM_SASJacket_Freedumb
	{
		scope = 2;
		displayName = "SAS Suit (Freedom)";
		suit[] = {"SFM_MTV_Green","SFM_SASPants_Freedumb"};
		suitSlots[] = {"Vest","Legs"};
	};
	
	class SFM_Suit_WFVest_Freedom: SFM_WFJacket_Freedumb
	{
		scope = 2;
		displayName = "Wind of Freedom";
		suit[] = {"SFM_WFVest_Green","SFM_WFPants_Freedumb"};
		suitSlots[] = {"Vest","Legs"};
	};

	// TODO: Make Suit Item for Freedom Merc

	  //////////////
	 // MONOLITH //
	//////////////

	// TODO: Make Suit Item for Monolith Sunrise
		// TODO: Make the invidiual items for Monolith Sunrise
	// TODO: Make Suit Item for Monolith SEVA
		// TODO: Make the invidiual items for Monolith SEVA
	// TODO: Make Suit Item for Monolith Beril
	// TODO: Make Suit Item for Monolith Merc

	  //////////////
	 // MILITARY //
	//////////////

	// TODO: TEST

	class SFM_Suit_Military_Beril: SFM_PS5MS_Jacket_IPSF
	{
		scope = 2;
		displayName = "Berill Suit (Military)";
		suit[] = {"SFM_BerilVest_Base","SFM_PS5MS_Pants_IPSF","SFM_BerilHelmet_IPSF"};
		suitSlots[] = {"Vest","Legs","Headgear"};
	};

	class SFM_Suit_Military_SAS: SFM_MTV_Black
	{
		scope = 2;
		displayName = "SAS Suit (Military)";
		suit[] = {"SFM_MTV_Black","SFM_SASPants_IPSF"};
		suitSlots[] = {"Vest","Legs"};
	};

	class SFM_Suit_Military_SEVA: SFM_SevaJacketV1_IPSF
	{
		scope = 2;
		displayName = "SEVA Suit (Military)";
		suit[] = {"SFM_SevaVest3","SFM_SevaPants_IPSF","SFM_SevaGlass","SFM_SevaBag"};
		suitSlots[] = {"Vest","Legs","Mask","Back"};
	};

	class SFM_Suit_Military_Zakat: SFM_ZakatJacket_IPSF
	{
		scope = 2;
		displayName = "Zakat Suit (Military)";
		suit[] = {"SFM_ZakatPants_IPSF"};
		suitSlots[] = {"Legs"};
	};
	  ////////////
	 // BANDIT //
	////////////

	// TODO: TEST
	// class SFM_Suit_Bandit_Merc: SFM_VestMerc_Bandit
	// {
	// 	scope = 2;
	// 	displayName = "Merc Suit (Bandit)";
	// 	suit[] = {"SFM_MercJacket_bandit","SFMC_MercPants_Bandit"};
	// 	suitSlots[] = {"Body","Legs"};
	// };


	// smf_wfvest_green

};