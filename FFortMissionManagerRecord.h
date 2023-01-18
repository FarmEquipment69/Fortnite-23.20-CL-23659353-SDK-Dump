// ScriptStruct /Script/FortniteGame.FortMissionManagerRecord
// Size: 0x38
struct FFortMissionManagerRecord
{
	class UClass* MissionManagerClass; // 0x0 (0x8)
	struct TArray<struct FFortMissionRecord> MissionRecords; // 0x8 (0x10)
	int NumRequiredMissionsOfType[0x4]; // 0x18 (0x4) (ARRAY) 
	struct TArray<unsigned char> MissionManagerData; // 0x28 (0x10)
};

