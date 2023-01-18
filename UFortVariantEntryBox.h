// Class /Script/FortniteUI.FortVariantEntryBox
// Size: 0x2f8
class UFortVariantEntryBox : public UDynamicEntryBox
{
	class UAthenaCosmeticAccountItem* CurrentItem; // 0x230 (0x8)
	class UAthenaCosmeticItemDefinition* CurrentItemDef; // 0x238 (0x8)
	struct TArray<struct FMcpVariantChannelInfo> CurrentItemVariants; // 0x240 (0x10)
	struct TMap<struct FGameplayTag, class UFortVariantEditorWidgetBase*> ChannelWidgets; // 0x250 (0x50)
	unsigned char padding_2a0[0x58]; // 0x2a0 (0x58)
};

