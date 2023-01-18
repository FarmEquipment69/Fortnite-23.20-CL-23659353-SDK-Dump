// ScriptStruct /Script/FortniteGame.FortMissionRecord
// Size: 0x140
struct FFortMissionRecord
{
	struct FFortMissionEntry MissionEntry; // 0x0 (0x88)
	class UFortMissionGenerator* MissionGenerator; // 0x88 (0x8)
	struct FFortGeneratedDifficultyOptions GeneratedMissionOptions; // 0x90 (0x40)
	int DayGenerated; // 0xd0 (0x4)
	int UIIndex; // 0xd4 (0x4)
	struct FUniqueNetIdRepl QuestOwnerAccount; // 0xd8 (0x30)
	enum EFortMissionStatus MissionStatus; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	struct TArray<struct FFortObjectiveRecord> ObjectiveRecords; // 0x110 (0x10)
	struct TArray<unsigned char> MissionData; // 0x120 (0x10)
	struct FGuid MissionGuid; // 0x130 (0x10)
};

