// ScriptStruct /Script/FortniteGame.FortUpdatedObjectiveStat
// Size: 0x20
struct FFortUpdatedObjectiveStat
{
	class UFortQuestItemDefinition* Quest; // 0x0 (0x8)
	struct FName BackendName; // 0x8 (0x4)
	int StatValue; // 0xc (0x4)
	int ShadowStatValue; // 0x10 (0x4)
	int StatDelta; // 0x14 (0x4)
	int CurrentStage; // 0x18 (0x4)
	bool bSharedQuestUpdate; // 0x1c (0x1)
	bool bShowToast; // 0x1d (0x1)
	unsigned char padding_1e[0x2]; // 0x1e (0x2)
};

