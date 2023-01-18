// ScriptStruct /Script/FortniteGame.QuestRecord
// Size: 0x28
struct FQuestRecord
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FObjectiveRecord*> Objectives; // 0x8 (0x10)
	struct TArray<struct FString> TrackedData; // 0x18 (0x10)
};

