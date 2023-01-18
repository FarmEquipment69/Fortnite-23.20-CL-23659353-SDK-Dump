// ScriptStruct /Script/FortniteGame.FortQuestObjectiveStatXPTableRow
// Size: 0x108
struct FFortQuestObjectiveStatXPTableRow : FTableRowBase
{
	enum EFortQuestObjectiveStatEvent Type; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FGameplayTagContainer TargetTags; // 0x10 (0x20)
	struct FGameplayTagContainer SourceTags; // 0x30 (0x20)
	struct FGameplayTagContainer ContextTags; // 0x50 (0x20)
	struct FGameplayTagContainer ExcludeTargetTags; // 0x70 (0x20)
	struct FGameplayTagContainer ExcludeSourceTags; // 0x90 (0x20)
	struct FGameplayTagContainer ExcludeContextTags; // 0xb0 (0x20)
	struct FString Condition; // 0xd0 (0x10)
	int CountThreshhold; // 0xe0 (0x4)
	int MaxCount; // 0xe4 (0x4)
	struct FPrimaryAssetId* AccoladePrimaryAssetId; // 0xe8 (0x8)
	bool bOnceOnly; // 0xf0 (0x1)
	enum EFortXPPropagationRule XPPropagationRule; // 0xf1 (0x1)
	bool bIsCached; // 0xf2 (0x1)
	unsigned char padding_f3[0x15]; // 0xf3 (0x15)
};

