// Class /Script/FortniteAI.FortAthenaAIBotInventorySkillSet
// Size: 0x2b0
class UFortAthenaAIBotInventorySkillSet : public UFortAthenaAIBotSkillSet
{
	struct FScalableFloat DefaultWeaponSelectionDistance; // 0x30 (0x28)
	struct FScalableFloat DefaultWeaponSelectionDistanceDeviation; // 0x58 (0x28)
	struct FScalableFloat HasInfiniteResources; // 0x80 (0x28)
	struct FGameplayTagContainer InventorySlotPreference[0x6]; // 0xa8 (0x20) (ARRAY) 
	struct TArray<struct FBotEquipWeaponInfo> EquipWeaponInfo; // 0x168 (0x10)
	struct FScalableFloat ShouldPrioritizeRangedWeaponWithoutTarget; // 0x178 (0x28)
	struct FScalableFloat HasInfiniteAmmoForAllWeapons; // 0x1a0 (0x28)
	struct TArray<struct FWeaponAmmoCheat> AmmoCheats; // 0x1c8 (0x10)
	struct TArray<struct FItemAndCount> MaterialItems; // 0x1d8 (0x10)
	struct FScalableFloat GiveMaterialsToBotFrequency; // 0x1e8 (0x28)
	struct FScalableFloat NoWeaponGiveWeaponAfterTime; // 0x210 (0x28)
	struct FScalableFloat NoWeaponNoPlayerConeDistance; // 0x238 (0x28)
	struct FScalableFloat NoWeaponNoPlayerConeFOV; // 0x260 (0x28)
	struct FName NoWeaponLootTierGroup; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	struct FGameplayTagContainer IgnoredAsWeaponTags; // 0x290 (0x20)
};

