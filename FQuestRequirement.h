// ScriptStruct /Script/FortniteGame.QuestRequirement
// Size: 0x20
struct FQuestRequirement
{
	class UFortQuestItemDefinition* QuestDef; // 0x0 (0x8)
	enum EFortQuestState DesiredState; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TArray<struct FObjectiveRequirement*> Objectives; // 0x10 (0x10)
};

