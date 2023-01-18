// ScriptStruct /Script/FortniteGame.MissionGenerationInfo
// Size: 0x58
struct FMissionGenerationInfo
{
	int NumMissionsRequired; // 0x0 (0x4)
	int MaxMissionsAllowed; // 0x4 (0x4)
	int NumMissionsGeneratedMatchingRequirements; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FGameplayTagQuery MissionTagRequirements; // 0x10 (0x48)
};

