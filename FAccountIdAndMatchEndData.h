// ScriptStruct /Script/FortniteGame.AccountIdAndMatchEndData
// Size: 0x1b8
struct FAccountIdAndMatchEndData
{
	struct FString AccountId; // 0x0 (0x10)
	struct TArray<struct FFortQuestObjectiveCompletion> Advance; // 0x10 (0x10)
	struct TArray<struct FFortQuestEarnedBadgeData> EarnedBadgeData; // 0x20 (0x10)
	struct TArray<struct FString> EarnedItemCaches; // 0x30 (0x10)
	int TotalScore; // 0x40 (0x4)
	bool bCriticalMatchBonus; // 0x44 (0x1)
	bool bDidLeech; // 0x45 (0x1)
	unsigned char unreflected_46[0x2]; // 0x46 (0x2) 
	int NumMissionPoints; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FString> ShuffledLoadoutUsed; // 0x50 (0x10)
	int ShuffledLockerUsedIndex; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct TArray<struct FString> UsedCosmetics; // 0x68 (0x10)
	int TheaterNum; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FMcpProfileChangeRequest TheaterItemUpdate; // 0x80 (0x58)
	int OutpostNum; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FMcpProfileChangeRequest OutpostItemUpdate; // 0xe0 (0x58)
	struct FString OutpostId; // 0x138 (0x10)
	struct FFortOutpostCoreInfo OutpostInfo; // 0x148 (0x28)
	struct FString DeployableBaseItemId; // 0x170 (0x10)
	struct FFortCloudSaveInfo CloudSaveInfo; // 0x180 (0x18)
	struct FString LockCode; // 0x198 (0x10)
	bool bAbandoning; // 0x1a8 (0x1)
	enum EAthenaRebootEligiblityStatus EligibilityStatus; // 0x1a9 (0x1)
	unsigned char unreflected_1aa[0x2]; // 0x1aa (0x2) 
	float MissionLeechScaling; // 0x1ac (0x4)
	int TotalSecondsInMatch; // 0x1b0 (0x4)
	unsigned char padding_1b4[0x4]; // 0x1b4 (0x4)
};
