// ScriptStruct /Script/FortniteGame.FortFoundQuestMissions
// Size: 0x48
struct FFortFoundQuestMissions
{
	struct FString TheaterId; // 0x0 (0x10)
	bool bIsValidForAllPlayableMissions; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TArray<struct FFortAvailableMissionData> LinkedMissions; // 0x18 (0x10)
	struct TArray<struct FFortAvailableMissionData> TagMatchingMissions; // 0x28 (0x10)
	struct TArray<struct FFortAvailableMissionData> FallbackMatchingMissions; // 0x38 (0x10)
};

