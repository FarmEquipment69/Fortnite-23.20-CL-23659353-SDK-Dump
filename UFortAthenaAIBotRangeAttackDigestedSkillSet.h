// Class /Script/FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet
// Size: 0xe0
class UFortAthenaAIBotRangeAttackDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{
	struct TWeakObjectPtr<class AFortWeapon> CachedWeaponUsedToCalculateSkillSet; // 0x30 (0x8)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct TArray<struct FDigestedRangedWeaponSkillCategory> RangedWeaponCategorySkills; // 0x40 (0x10)
	float ChangeWeaponDelay; // 0x50 (0x4)
	float ChangeWeaponDelayDeviation; // 0x54 (0x4)
	float SwapInsteadOfReloadOdds; // 0x58 (0x4)
	float SwapInsteadOfReloadRangeMax; // 0x5c (0x4)
	struct FGameplayTagContainer SwapInsteadOfReloadIgnoredWeaponTags; // 0x60 (0x20)
	float InterruptReloadToShootOdds; // 0x80 (0x4)
	float ReloadPartiallyEmptyWeaponsOdds; // 0x84 (0x4)
	float UseCoverOdds; // 0x88 (0x4)
	float CoverDistanceMin; // 0x8c (0x4)
	struct FScalableFloat CoverDistanceMaxCurve; // 0x90 (0x28)
	float CoverDistanceToTargetMin; // 0xb8 (0x4)
	float CoverSearchCooldown; // 0xbc (0x4)
	float PostCoverCooldownMin; // 0xc0 (0x4)
	float PostCoverCooldownMax; // 0xc4 (0x4)
	bool bCanFindShootingPositionAround; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x3]; // 0xc9 (0x3) 
	float ShootingMaxRadiusAround; // 0xcc (0x4)
	float ShootingNextQueryCooldown; // 0xd0 (0x4)
	int CoverPeekCountMin; // 0xd4 (0x4)
	int CoverPeekCountMax; // 0xd8 (0x4)
	unsigned char padding_dc[0x4]; // 0xdc (0x4)
};

