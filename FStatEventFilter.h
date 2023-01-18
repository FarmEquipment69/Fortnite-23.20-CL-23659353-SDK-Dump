// ScriptStruct /Script/FortniteGame.StatEventFilter
// Size: 0x90
struct FStatEventFilter
{
	enum EFortQuestObjectiveStatEvent StatEvent; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UFortItemDefinition> ItemDefinition; // 0x8 (0x28)
	struct FGameplayTagContainer TargetTagsQuery; // 0x30 (0x20)
	struct FGameplayTagContainer SourceTagsQuery; // 0x50 (0x20)
	struct FGameplayTagContainer ContextTagsQuery; // 0x70 (0x20)
};

