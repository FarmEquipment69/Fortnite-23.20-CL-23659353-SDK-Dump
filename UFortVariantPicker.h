// Class /Script/FortniteUI.FortVariantPicker
// Size: 0x520
class UFortVariantPicker : public UCommonActivatableWidget
{
	bool bShowCapeRestriction; // 0x3a8 (0x1)
	unsigned char unreflected_3a9[0x7]; // 0x3a9 (0x7) 
	class UAthenaVariantPickerConfig* ConfigurationData; // 0x3b0 (0x8)
	struct FDataTableRowHandle PrimaryTabLeftAction; // 0x3b8 (0x10)
	struct FDataTableRowHandle PrimaryTabRightAction; // 0x3c8 (0x10)
	struct FDataTableRowHandle SecondaryTabLeftAction; // 0x3d8 (0x10)
	struct FDataTableRowHandle SecondaryTabRightAction; // 0x3e8 (0x10)
	class UScrollBox* ScrollBoxVariants; // 0x3f8 (0x8)
	class UFortVariantEntryBox* EntryBoxVariantOptions; // 0x400 (0x8)
	class UFortVariantEntryBox* EntryBoxVariantOptionsNoScroll; // 0x408 (0x8)
	class UCommonTextBlock* TextNoCapes; // 0x410 (0x8)
	class UWidget* ContainerTabs; // 0x418 (0x8)
	class UHorizontalBox* HBoxPrimaryTabNav; // 0x420 (0x8)
	class UCommonTextBlock* TextPrimaryFilter; // 0x428 (0x8)
	class UDynamicEntryBox* EntryBoxPrimaryTabs; // 0x430 (0x8)
	class UCommonActionWidget* ActionWidgetPrimaryTabLeft; // 0x438 (0x8)
	class UCommonActionWidget* ActionWidgetPrimaryTabRight; // 0x440 (0x8)
	class UCommonButtonGroupLegacy* PrimaryTabButtonGroup; // 0x448 (0x8)
	class UWidget* ContainerSecondaryTabs; // 0x450 (0x8)
	class UCommonTextBlock* TextSecondaryFilter; // 0x458 (0x8)
	class UDynamicEntryBox* EntryBoxSecondaryTabs; // 0x460 (0x8)
	class UCommonActionWidget* ActionWidgetSecondaryTabLeft; // 0x468 (0x8)
	class UCommonActionWidget* ActionWidgetSecondaryTabRight; // 0x470 (0x8)
	class UCommonButtonGroupLegacy* SecondaryTabButtonGroup; // 0x478 (0x8)
	struct FFortVariantFilterContext FilterContext; // 0x480 (0x30)
	class UAthenaCosmeticItemDefinition* CustomizingItemDef; // 0x4b0 (0x8)
	unsigned char padding_4b8[0x68]; // 0x4b8 (0x68)

	/* Functions */

	// Function /Script/FortniteUI.FortVariantPicker.InitFromCosmeticItemDef (Underlying native function: InitFromCosmeticItemDef 0xa9547b0)
	void InitFromCosmeticItemDef(class UAthenaCosmeticItemDefinition*& InCosmeticItemDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortVariantPicker.InitFromCosmeticItem (Underlying native function: InitFromCosmeticItem 0xa954730)
	void InitFromCosmeticItem(class UAthenaCosmeticAccountItem*& InCosmeticItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortVariantPicker.HandleSecondaryTabSelectionChanged (Underlying native function: HandleSecondaryTabSelectionChanged 0xa9544a0)
	void HandleSecondaryTabSelectionChanged(class UCommonButtonLegacy*& TabButton, int& TabIdx); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortVariantPicker.HandlePrimaryTabSelectionChanged (Underlying native function: HandlePrimaryTabSelectionChanged 0xa9542f4)
	void HandlePrimaryTabSelectionChanged(class UCommonButtonLegacy*& TabButton, int& TabIdx); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortVariantPicker.Campaign_HandleSecondaryTabRight (Underlying native function: Campaign_HandleSecondaryTabRight 0xa953a8c)
	void CampaignHandleSecondaryTabRight(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortVariantPicker.Campaign_HandleSecondaryTabLeft (Underlying native function: Campaign_HandleSecondaryTabLeft 0xa953a08)
	void CampaignHandleSecondaryTabLeft(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortVariantPicker.Campaign_HandlePrimaryTabRight (Underlying native function: Campaign_HandlePrimaryTabRight 0xa953984)
	void CampaignHandlePrimaryTabRight(bool& bPassThrough); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortVariantPicker.Campaign_HandlePrimaryTabLeft (Underlying native function: Campaign_HandlePrimaryTabLeft 0xa953900)
	void CampaignHandlePrimaryTabLeft(bool& bPassThrough); // (Final | Native | Private | HasOutParms)
};

