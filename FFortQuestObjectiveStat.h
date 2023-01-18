// ScriptStruct /Script/FortniteGame.FortQuestObjectiveStat
// Size: 0x48
struct FFortQuestObjectiveStat
{
	struct TArray<struct FInlineObjectiveStatTagCheckEntry*> TagConditions; // 0x0 (0x10)
	struct FString Condition; // 0x10 (0x10)
	struct TArray<struct FString> TemplateIds; // 0x20 (0x10)
	bool bCollectPotentialLocationTags; // 0x30 (0x1)
	enum EFortQuestObjectiveStatEvent Type; // 0x31 (0x1)
	unsigned char bIsCached; // 0x32 (0x1)
	unsigned char bHasInclusiveTargetTags; // 0x32 (0x1)
	unsigned char bHasInclusiveSourceTags; // 0x32 (0x1)
	unsigned char bHasInclusiveContextTags; // 0x32 (0x1)
	unsigned char padding_33[0x15]; // 0x33 (0x15)
};

