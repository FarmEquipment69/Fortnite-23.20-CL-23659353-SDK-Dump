// ScriptStruct /Script/FortniteAI.TeleportSettings
// Size: 0x38
struct FTeleportSettings
{
	struct FScalableFloat CheckTeleportConditionsTimeInterval; // 0x0 (0x28)
	float TeleportRange; // 0x28 (0x4)
	float TimeNeededOutsideTeleportRange; // 0x2c (0x4)
	struct FGameplayTag TeleportAbilityTag; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

