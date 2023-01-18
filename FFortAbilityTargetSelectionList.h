// ScriptStruct /Script/FortniteGame.FortAbilityTargetSelectionList
// Size: 0x48
struct FFortAbilityTargetSelectionList
{
	struct TArray<struct FFortAbilityTargetSelection> List; // 0x0 (0x10)
	unsigned char bStopAtFirstSuccess; // 0x10 (0x1)
	unsigned char bKeepCheckingListOnIndestructibleHit; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FGameplayTagContainer AbilityTargetBlockedGameplayTags; // 0x18 (0x20)
	unsigned char bUseWeaponRanges; // 0x38 (0x1)
	unsigned char bUseMaxYawAngleToTarget; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float MaxYawAngleToTarget; // 0x3c (0x4)
	unsigned char padding_40[0x8]; // 0x40 (0x8)
};

