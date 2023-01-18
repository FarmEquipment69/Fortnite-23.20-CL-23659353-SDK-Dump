// ScriptStruct /Script/FortniteAI.EvasiveManeuverSkillSettingsSpecialization
// Size: 0x3c8
struct FEvasiveManeuverSkillSettingsSpecialization
{
	struct FScalableFloat OddsToBeUsed; // 0x0 (0x28)
	struct FScalableFloat MaxDuration; // 0x28 (0x28)
	struct FScalableFloat MaxDurationRandomDeviation; // 0x50 (0x28)
	struct FScalableFloat Cooldown; // 0x78 (0x28)
	struct FScalableFloat CooldownRandomDeviation; // 0xa0 (0x28)
	struct FString DebugName; // 0xc8 (0x10)
	struct FScalableFloat DistanceMin; // 0xd8 (0x28)
	struct FScalableFloat DistanceMax; // 0x100 (0x28)
	struct FGameplayTagQuery WeaponTagQuery; // 0x128 (0x48)
	struct FEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x170 (0x258)
};

