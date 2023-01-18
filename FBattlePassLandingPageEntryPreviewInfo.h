// ScriptStruct /Script/BattlePassBase.BattlePassLandingPageEntryPreviewInfo
// Size: 0x88
struct FBattlePassLandingPageEntryPreviewInfo
{
	enum EBattlePassLandingPageSpecialEntryType SpecialEntryType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<enum EFortItemType> SubscriptionItemTypesToDisplay; // 0x8 (0x10)
	struct FGameplayTag SpecialCharacterVariantChannelToModify; // 0x18 (0x4)
	struct FGameplayTag SpecialCharacterActiveVariantTag; // 0x1c (0x4)
	struct TMap<struct FString, struct TWeakObjectPtr<class UMaterialInstance>> TemplateIdTileRenderMap; // 0x20 (0x50)
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> PreviewItems; // 0x70 (0x10)
	float TransitionTime; // 0x80 (0x4)
	unsigned char padding_84[0x4]; // 0x84 (0x4)
};

