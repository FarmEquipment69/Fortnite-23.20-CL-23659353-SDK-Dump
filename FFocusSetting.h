// ScriptStruct /Script/FortniteAI.FocusSetting
// Size: 0x140
struct FFocusSetting
{
	struct FGameplayTagQuery WeaponTagQuery; // 0x0 (0x48)
	bool bRequireAmmoToMatch; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FScalableFloat IgnoreThreatTimeWhenNotAttacking; // 0x50 (0x28)
	struct FScalableFloat IgnoreThreatDeviationWhenNotAttacking; // 0x78 (0x28)
	struct FScalableFloat IgnoreThreatDuration; // 0xa0 (0x28)
	struct FScalableFloat IgnoreThreatDurationDeviation; // 0xc8 (0x28)
	struct FScalableFloat IgnoreThreatDistanceWhenFleeing; // 0xf0 (0x28)
	struct FScalableFloat IgnoreThreatDirectionAngleWhenFleeing; // 0x118 (0x28)
};

