// ScriptStruct /Script/FortniteUI.AthenaVariantFilterTabInfo
// Size: 0x78
struct FAthenaVariantFilterTabInfo
{
	struct TWeakObjectPtr<class UObject> Icon; // 0x0 (0x28)
	struct FText Label; // 0x28 (0x18)
	struct FGameplayTagContainer IncludedVariantChannels; // 0x40 (0x20)
	struct TArray<struct FMcpVariantChannelInfo> ForcedVariantSelections; // 0x60 (0x10)
	float ZoomLevel; // 0x70 (0x4)
	bool bDisableScrollBox; // 0x74 (0x1)
	unsigned char padding_75[0x3]; // 0x75 (0x3)
};

