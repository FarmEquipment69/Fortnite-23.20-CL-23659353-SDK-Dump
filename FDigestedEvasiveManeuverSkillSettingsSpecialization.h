// ScriptStruct /Script/FortniteAI.DigestedEvasiveManeuverSkillSettingsSpecialization
// Size: 0xc0
struct FDigestedEvasiveManeuverSkillSettingsSpecialization
{
	float OddsToBeUsed; // 0x0 (0x4)
	float MaxDuration; // 0x4 (0x4)
	float MaxDurationRandomDeviation; // 0x8 (0x4)
	float Cooldown; // 0xc (0x4)
	float CooldownRandomDeviation; // 0x10 (0x4)
	float DistanceMinSquared; // 0x14 (0x4)
	float DistanceMaxSquared; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FGameplayTagQuery WeaponTagQuery; // 0x20 (0x48)
	struct FDigestedEvasiveManeuverSkillSettings EvasiveManeuverSkillSettings; // 0x68 (0x58)
};

