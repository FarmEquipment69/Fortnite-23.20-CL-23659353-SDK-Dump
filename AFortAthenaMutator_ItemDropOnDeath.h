// Class /Script/FortniteGame.FortAthenaMutator_ItemDropOnDeath
// Size: 0x448
class AFortAthenaMutator_ItemDropOnDeath : public AFortAthenaMutator
{
	enum ERespawnRequirements RespawnRequirements; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	struct FScalableFloat PercentAmmoToDrop; // 0x338 (0x28)
	struct FScalableFloat AmmoDespawnTime; // 0x360 (0x28)
	struct FScalableFloat AmmoStormDespawnTime; // 0x388 (0x28)
	struct FScalableFloat MaxAmmoTypeDrops; // 0x3b0 (0x28)
	struct FScalableFloat MaxResourceTypeDrops; // 0x3d8 (0x28)
	struct TArray<struct FItemsToDropOnDeath> ItemsToDrop; // 0x400 (0x10)
	struct FScalableFloat ShouldNonParticipantAIAlsoDropItems; // 0x410 (0x28)
	struct TArray<struct FName> LootTierGroupsToDrop; // 0x438 (0x10)
};

