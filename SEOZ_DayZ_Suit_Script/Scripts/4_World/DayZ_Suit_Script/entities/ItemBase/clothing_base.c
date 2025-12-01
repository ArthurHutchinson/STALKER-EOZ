modded class Clothing extends Clothing_Base
{
	string  m_Description;
	string  cfg_Path;
	void Clothing()
	{
		cfg_Path = "cfgVehicles " + GetType();
		GetGame().ConfigGetText(cfg_Path + " descriptionShort", m_Description);
		ref array<string> suitArr = new array<string>;
        GetGame().ConfigGetTextArray(cfg_Path + " suit", suitArr);
        for (int i = 0; i < suitArr.Count(); i++)
        {
            if (i == 0) // On the first loop we do this, since we don't want all items saying "This suit contains..." even when it doesn't have a suit.
            {
                m_Description += "<b>\nThis suit contains:</b>"; // New line then the contents of our suit.
            }
            // Get the display names of the items in the list and add them to the description.
            m_Description += "\n<i>...a " + GetGame().ConfigGetTextOut("CfgVehicles " + suitArr[i] + " displayName") + "...</i>"; // italic name of our item.
        }
	}
    override bool DescriptionOverride(out string output)
	{
		output = m_Description;
		
		return true;
	}
}