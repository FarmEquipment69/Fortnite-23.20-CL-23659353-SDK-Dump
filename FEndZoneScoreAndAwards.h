// ScriptStruct /Script/FortniteGame.EndZoneScoreAndAwards
// Size: 0x70
struct FEndZoneScoreAndAwards
{
	bool bResultsPendingSave; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int TotalScore; // 0x4 (0x4)
	bool bCriticalMatchBonus; // 0x8 (0x1)
	bool bDidLeech; // 0x9 (0x1)
	enum EAthenaRebootEligiblityStatus EligibilityStatus; // 0xa (0x1)
	unsigned char unreflected_b[0x5]; // 0xb (0x5) 
	struct TArray<struct FFortQuestEarnedBadgeData> EarnedBadgeData; // 0x10 (0x10)
	struct TArray<struct FString> EarnedItemCaches; // 0x20 (0x10)
	int NumMissionPoints; // 0x30 (0x4)
	float MissionLeechScaling; // 0x34 (0x4)
	unsigned char unreflected_38[0x34]; // 0x38 (0x34) 
	int TotalSecondsInMatch; // 0x6c (0x4)
};

