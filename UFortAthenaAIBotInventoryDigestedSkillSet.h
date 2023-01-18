// Class /Script/FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet
// Size: 0x1a0
class UFortAthenaAIBotInventoryDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
	float DefaultWeaponSelectionDistance; // 0x30 (0x4)
	float DefaultWeaponSelectionDistanceDeviation; // 0x34 (0x4)
	bool bHasInfiniteResources; // 0x38 (0x1)
	bool bHasInfiniteAmmoForAllWeapons; // 0x39 (0x1)
	unsigned char unreflected_3a[0x6]; // 0x3a (0x6) 
	struct FGameplayTagContainer InventorySlotPreference[0x6]; // 0x40 (0x20) (ARRAY) 
	struct TArray<struct FDigestedBotEquipWeaponInfo> EquipWeaponInfo; // 0x100 (0x10)
	bool bShouldPrioritizeRangedWeaponWithoutTarget; // 0x110 (0x1)
	unsigned char unreflected_111[0x7]; // 0x111 (0x7) 
	struct FGameplayTagContainer InfiniteAmmoCheats; // 0x118 (0x20)
	struct TArray<struct FItemAndCount> MaterialItems; // 0x138 (0x10)
	float GiveMaterialsToBotFrequency; // 0x148 (0x4)
	unsigned char unreflected_14c[0x4]; // 0x14c (0x4) 
	struct FGameplayTagContainer CheckLoadedAmmoForInfiniteAmmoCheats; // 0x150 (0x20)
	float NoWeaponGiveWeaponAfterTime; // 0x170 (0x4)
	float NoWeaponNoPlayerConeDistance; // 0x174 (0x4)
	float NoWeaponNoPlayerConeFOV; // 0x178 (0x4)
	struct FName NoWeaponLootTierGroup; // 0x17c (0x4)
	struct FGameplayTagContainer IgnoredAsWeaponTags; // 0x180 (0x20)
};

