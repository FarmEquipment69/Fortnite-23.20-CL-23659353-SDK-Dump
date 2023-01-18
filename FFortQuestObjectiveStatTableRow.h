// ScriptStruct /Script/FortniteGame.FortQuestObjectiveStatTableRow
// Size: 0xb8
struct FFortQuestObjectiveStatTableRow : FTableRowBase
{
	enum EFortQuestObjectiveStatEvent Type; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FGameplayTagContainer TargetTagContainer; // 0x10 (0x20)
	struct FGameplayTagContainer SourceTagContainer; // 0x30 (0x20)
	struct FGameplayTagContainer ContextTagContainer; // 0x50 (0x20)
	struct FString Condition; // 0x70 (0x10)
	struct FString TemplateId; // 0x80 (0x10)
	struct TArray<struct FString> AlternateTemplateIds; // 0x90 (0x10)
	bool bIsCached; // 0xa0 (0x1)
	unsigned char padding_a1[0x17]; // 0xa1 (0x17)
};

