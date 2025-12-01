modded class PlayerBase
{
    override void EEKilled(Object killer)
    {
        super.EEKilled(killer);


        // Inventory slot ID for armband is InventorySlots.ARMBAND
        EntityAI armband = GetInventory().FindAttachment(InventorySlots.ARMBAND);


        if (armband)
        {
        // Ruin the armband (set health to 0 in all hit zones)
        armband.SetHealth01("", "", 0.0);
        };
    };
};