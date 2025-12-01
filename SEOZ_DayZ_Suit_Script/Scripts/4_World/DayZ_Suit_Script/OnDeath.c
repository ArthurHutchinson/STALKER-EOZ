modded class PlayerBase
{
    const float CHANCE_TO_RUIN = 0.4875; // 48.75%
    override void EEKilled(Object killer)
	{
        float chanceToRuin = Math.RandomFloat01(); // 0 to 1 float.
        Weapon_Base wpn_in_hands = Weapon_Base.Cast(GetItemInHands());
        if(wpn_in_hands)
        {
            DamageItemRNG(wpn_in_hands, chanceToRuin);
        }
        super.EEKilled(killer);

        foreach(string slot_name: SUIT_SLOT_NAMES)
        {
            ItemBase item = ItemBase.Cast(FindAttachmentBySlotName(slot_name));
            chanceToRuin = Math.RandomFloat01(); // 0 to 1 float, rerolled per item.
            if (item) // Clothing
            {
                string cfg_Path = "cfgVehicles " + item.GetType();
                if (GetGame().ConfigIsExisting(cfg_Path)) // If not, it's a weapon.
                {
                    /*==================================
                            RUIN/DAMAGE ON DEATH
                        ONLY FOR SUITS AND RELATED ITEMS
                    ====================================*/
                    ref array<string> suitArr = new array<string>;
                    ref array<string> suitSlotArr = new array<string>;

                    GetGame().ConfigGetTextArray(cfg_Path + " suit", suitArr);
                    // We found a suit, now to damage the parts
					
                    if (item.ConfigGetBool("alwaysRuin"))
                    {
                        item.SetHealthLevel(GameConstants.STATE_RUINED);
                    }

                    if (suitArr.Count() >= 1)
                    {
                        DamageItemByConditionAndSeverity(item, chanceToRuin);
                        GetGame().ConfigGetTextArray(cfg_Path + " suitSlots", suitSlotArr);
                        for (int i = 0; i < suitArr.Count(); i++)
                        {
                            // Ruin / damage all slots.
                            // If Worn or below, ruin.
                            // If Pristine, badly damage.
                            ItemBase itemToDamage = ItemBase.Cast(FindAttachmentBySlotName(suitSlotArr.Get(i)));
                            if (itemToDamage)
                            {
                                DamageItemByConditionAndSeverity(itemToDamage, chanceToRuin, CHANCE_TO_RUIN, true);
                            }
                        }
                    }
                    else
                    {
						// RNG Base ruining on all clothing attached to the character.
                        DamageItemRNG(item, chanceToRuin);
                    }
                }
				else
				{
	                // RNG Based ruining on weapons
	                DamageItemRNG(item, chanceToRuin);
				}
            }
        }
    }

    void DamageItemByConditionAndSeverity(ItemBase item, float rolledNum, float chance = CHANCE_TO_RUIN, bool isSuit = false)
    {
        int damageLevel = item.GetHealthLevel();
        int newDmgLevel = item.GetHealthLevel();
		
		// Suit logic.
		if (isSuit)
		{
			switch(damageLevel)
			{
	            case GameConstants.STATE_RUINED:
	            case GameConstants.STATE_BADLY_DAMAGED:
	            case GameConstants.STATE_DAMAGED:
	            case GameConstants.STATE_WORN:
	                // RUIN
	                item.SetHealth(0.0);
	                break;
	            case GameConstants.STATE_PRISTINE:
	                // Badly Damage
	                newDmgLevel = Math.Max(item.GetHealthLevel(), GameConstants.STATE_BADLY_DAMAGED);
	                item.SetHealthLevel(newDmgLevel);
	                break;
        	}
			return;
		}
		// Reduces the health level state by one whole grade. (PRISTINE -> WORN -> DAMAGED...)
		newDmgLevel = Math.Clamp(damageLevel + CalculateSeverity(rolledNum), GameConstants.STATE_PRISTINE, GameConstants.STATE_RUINED);
		item.SetHealthLevel(newDmgLevel);
    }
    void DamageItemRNG(ItemBase item, float rolledNum, float chance = CHANCE_TO_RUIN)
    {
        // RNG Based ruining on weapons
        if (rolledNum <= chance)
        {
            item.SetHealth(0.0); // Ruin.
        }
        else
        {
            DamageItemByConditionAndSeverity(item, rolledNum); 
        }
    }
	int CalculateSeverity(float rolledNum, float chance = CHANCE_TO_RUIN)
	{
		float CHANCE_SEVERY_0 = Math.Clamp(chance + (chance/2), 0, 100);
		float CHANCE_SEVERY_1 = Math.Clamp(chance + (chance/4), 0, 100);
		float CHANCE_SEVERY_2 = Math.Clamp(chance + (chance/8), 0, 100);
		int severity = 1; // Default is one.
		// Example: 97%				(60% + 30% => 90%) 		97% > 90%. Crit Success. 			
		// Example: 88%				(60% + 15% => 75%) 		88% > 75%. Good Success.			
		// Example: 73%				(60% + 7.5% => 67.5%) 	73% > 67.5%. Moderate Success.			
		if (Math.IsInRange(rolledNum, CHANCE_SEVERY_0, 100)) // 90 -> 100
		{
			severity = 0; // Crit Success! No damage dealt.
		}
		else if (Math.IsInRange(rolledNum, CHANCE_SEVERY_1, CHANCE_SEVERY_0)) // 75 -> 90
		{
			severity = 1; // Good success! Only one damage level.
		}
		else if (Math.IsInRange(rolledNum, CHANCE_SEVERY_2, CHANCE_SEVERY_1)) // 67.5 -> 75
		{
			severity = 2; // Moderate success. Damage by two.
		}
		else // 60 -> 67.5
		{
			severity = 3; // Critical Failure.
		}
		
		// Zero is the minimum amount we'll EVER reduce by. (0..3)
		return severity;
	}
}