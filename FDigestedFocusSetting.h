// ScriptStruct /Script/FortniteAI.DigestedFocusSetting
// Size: 0x68
struct FDigestedFocusSetting
{
	struct FGameplayTagQuery WeaponTagQuery; // 0x0 (0x48)
	bool bRequireAmmoToMatch; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	float IgnoreThreatTimeWhenNotAttacking; // 0x4c (0x4)
	float IgnoreThreatDeviationWhenNotAttacking; // 0x50 (0x4)
	float IgnoreThreatDuration; // 0x54 (0x4)
	float IgnoreThreatDurationDeviation; // 0x58 (0x4)
	float IgnoreThreatDistanceWhenFleeing; // 0x5c (0x4)
	float IgnoreThreatDirectionCosAngleWhenFleeing; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

