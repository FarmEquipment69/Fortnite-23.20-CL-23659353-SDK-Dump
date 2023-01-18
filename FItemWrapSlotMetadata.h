// ScriptStruct /Script/FortniteGame.ItemWrapSlotMetadata
// Size: 0x90
struct FItemWrapSlotMetadata
{
	struct FGameplayTagQuery MatchCriteria; // 0x0 (0x48)
	struct TArray<struct FItemWrapPreviewEntry> PreviewList; // 0x48 (0x10)
	enum EFortItemType PreviewListItemDefinitionType; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct TWeakObjectPtr<class UTexture2D> SlotImage; // 0x60 (0x28)
	int PreviewListSortOrder; // 0x88 (0x4)
	unsigned char padding_8c[0x4]; // 0x8c (0x4)
};

