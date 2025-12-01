class CfgPatches
{
    class RuinArmbandOnDeath
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};


class CfgMods
{
    class RuinArmbandOnDeath
    {
        dir = "RuinArmbandOnDeath";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "Ruin Armband On Death";
        credits = "";
        author = "Pisque";
        authorID = "";
        version = "1.0";
        type = "mod";
        dependencies[] = {"World"};


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
				files[] = { "RuinArmbandOnDeath/scripts/1_Core"};
			};

			class gameScriptModule
			{
				files[] = { "RuinArmbandOnDeath/scripts/3_Game" };
			};
			class worldScriptModule
			{
				files[] = { "RuinArmbandOnDeath/scripts/4_World" };
			};

			class missionScriptModule 
			{
				files[] = { "RuinArmbandOnDeath/scripts/5_Mission" };
			};
		};
    };
};