// ScriptStruct /Script/FortniteGame.FortBatchUpdatePlayer_Update
// Size: 0x100
struct FFortBatchUpdatePlayer_Update
{
	struct FUniqueNetIdRepl AccountId; // 0x0 (0x30)
	int TheaterNum; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FMcpProfileChangeRequest TheaterItemUpdate; // 0x38 (0x58)
	int OutpostNum; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FMcpProfileChangeRequest OutpostItemUpdate; // 0x98 (0x58)
	struct TArray<struct FFortQuestObjectiveCompletion> QuestObjectiveUpdates; // 0xf0 (0x10)
};

