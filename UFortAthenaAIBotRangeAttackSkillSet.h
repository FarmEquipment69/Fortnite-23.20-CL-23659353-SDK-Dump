// Class /Script/FortniteAI.FortAthenaAIBotRangeAttackSkillSet
// Size: 0x330
class UFortAthenaAIBotRangeAttackSkillSet : public UFortAthenaAIBotSkillSet
{
	struct TArray<struct FRangedWeaponSkillCategory> RangedWeaponSkills; // 0x30 (0x10)
	struct FScalableFloat ChangeWeaponDelay; // 0x40 (0x28)
	struct FScalableFloat ChangeWeaponDelayDeviation; // 0x68 (0x28)
	struct FScalableFloat SwapInsteadOfReloadOdds; // 0x90 (0x28)
	struct FScalableFloat SwapInsteadOfReloadRangeMax; // 0xb8 (0x28)
	struct FGameplayTagContainer SwapInsteadOfReloadIgnoredWeaponTags; // 0xe0 (0x20)
	struct FScalableFloat InterruptReloadToShootOdds; // 0x100 (0x28)
	struct FScalableFloat ReloadPartiallyEmptyWeaponsOdds; // 0x128 (0x28)
	struct FScalableFloat UseCoverOdds; // 0x150 (0x28)
	struct FScalableFloat CoverDistanceMin; // 0x178 (0x28)
	struct FScalableFloat CoverDistanceMaxCurve; // 0x1a0 (0x28)
	struct FScalableFloat CoverDistanceToTargetMin; // 0x1c8 (0x28)
	struct FScalableFloat CoverSearchCooldown; // 0x1f0 (0x28)
	struct FScalableFloat PostCoverCooldownMin; // 0x218 (0x28)
	struct FScalableFloat PostCoverCooldownMax; // 0x240 (0x28)
	struct FScalableFloat CanFindShootingPositionAround; // 0x268 (0x28)
	struct FScalableFloat ShootingMaxRadiusAround; // 0x290 (0x28)
	struct FScalableFloat ShootingNextQueryCooldown; // 0x2b8 (0x28)
	struct FScalableFloat CoverPeekCountMin; // 0x2e0 (0x28)
	struct FScalableFloat CoverPeekCountMax; // 0x308 (0x28)
};

