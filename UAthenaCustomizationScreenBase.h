// Class /Script/FortniteUI.AthenaCustomizationScreenBase
// Size: 0xde8
class UAthenaCustomizationScreenBase : public UFortItemPreviewScreen
{
	bool bCustomizationSelectionBeingProcessed; // 0x668 (0x1)
	unsigned char unreflected_669[0x7]; // 0x669 (0x7) 
	struct FAthenaCustomizationParams CustomizationParams; // 0x670 (0x48)
	enum EAthenaCustomizationCategory FirstCustomizationCategory; // 0x6b8 (0x1)
	unsigned char unreflected_6b9[0x197]; // 0x6b9 (0x197) 
	struct FText CategoryDisplayNames[0x17]; // 0x850 (0x18) (ARRAY) 
	struct FText ItemTypeDisplayNames[0x17]; // 0xa78 (0x18) (ARRAY) 
	unsigned char unreflected_ca0[0x30]; // 0xca0 (0x30) 
	class UClass* ItemSelectorScreenClass; // 0xcd0 (0x8)
	class UClass* LoadoutSelectorScreenClass; // 0xcd8 (0x8)
	class UClass* BannerSelectModalClass; // 0xce0 (0x8)
	class UClass* NameLoadoutPopupClass; // 0xce8 (0x8)
	unsigned char unreflected_cf0[0x8]; // 0xcf0 (0x8) 
	class UAthenaCustomizationSlotSelectorButton* LastHoveredSlot; // 0xcf8 (0x8)
	unsigned char unreflected_d00[0x8]; // 0xd00 (0x8) 
	struct FDataTableRowHandle OpenNameLoadoutInputAction; // 0xd08 (0x10)
	struct TArray<enum EAthenaCustomizationCategory> BuiltInEmoteCategoryPriorities; // 0xd18 (0x10)
	bool bDisplayBuiltInEmotesInEmoteRow; // 0xd28 (0x1)
	unsigned char unreflected_d29[0x7]; // 0xd29 (0x7) 
	class UWidgetAnimation* BoundAnimIntro; // 0xd30 (0x8)
	class UWidgetAnimation* BoundAnimOutro; // 0xd38 (0x8)
	class UWidget* ContainerLoadoutsGodTileArea; // 0xd40 (0x8)
	class UCommonButtonBase* ButtonLoadouts; // 0xd48 (0x8)
	class UCommonButtonBase* ButtonSavePreset; // 0xd50 (0x8)
	class UCommonButtonBase* ButtonRandomPresets; // 0xd58 (0x8)
	class UFortCosmeticLoadoutSelector* LoadoutSelector; // 0xd60 (0x8)
	class UFortCosmeticLoadoutCard* LoadoutCardAppliedAnimation; // 0xd68 (0x8)
	class UPanelWidget* PanelGearSlotRow; // 0xd70 (0x8)
	class UAthenaCustomizationSlotSelectorButton* SlotPickaxe; // 0xd78 (0x8)
	class UAthenaCustomizationSlotSelectorButton* SlotGlider; // 0xd80 (0x8)
	class UAthenaCustomizationSlotSelectorButton* SlotContrail; // 0xd88 (0x8)
	class UAthenaCustomizationSlotSelectorButton* SlotLoadingScreen; // 0xd90 (0x8)
	class UPanelWidget* PanelEmoteSlotRow; // 0xd98 (0x8)
	class UPanelWidget* PanelWrapSlotRow; // 0xda0 (0x8)
	class UPanelWidget* PanelAccountSlotRow; // 0xda8 (0x8)
	class UFortBannerSlotButton* BannerButton; // 0xdb0 (0x8)
	class UAthenaLockerItemInfo* ItemInfoDisplay; // 0xdb8 (0x8)
	class UCommonButtonBase* ButtonClearAllBangs; // 0xdc0 (0x8)
	class UCommonButtonBase* ButtonBackToGame; // 0xdc8 (0x8)
	unsigned char padding_dd0[0x18]; // 0xdd0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.ShowLockerSlot (Underlying native function: ShowLockerSlot 0xa48e234)
	void ShowLockerSlot(enum EAthenaCustomizationCategory& CustomizationCategory, int& SlotIndex, bool& bCanShowEmpty); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.ShouldDisplayNextRandomPresetName (Underlying native function: ShouldDisplayNextRandomPresetName 0xa48e120)
	bool ShouldDisplayNextRandomPresetName(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.ShiftItemsVariantOption (Underlying native function: ShiftItemsVariantOption 0x81210cc)
	void ShiftItemsVariantOption(class UAthenaCosmeticAccountItem*& Item, int& VariantChannelIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.SetCustomizationSelectionBeingProcessed (Underlying native function: SetCustomizationSelectionBeingProcessed 0xa48de1c)
	void SetCustomizationSelectionBeingProcessed(bool& bIsBeingProcessed); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.OnRefreshForNewLoadout (Has no native function)
	void OnRefreshForNewLoadout(struct FString& LoadoutName, bool& bIsShuffleTile); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.OnPlayerToggledRandomPresets (Has no native function)
	void OnPlayerToggledRandomPresets(bool& bNowEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.OnIntroAppliedPreset (Has no native function)
	void OnIntroAppliedPreset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.OnBeginSavingLoadouts (Has no native function)
	void OnBeginSavingLoadouts(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.OnBeginPickingLoadouts (Has no native function)
	void OnBeginPickingLoadouts(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.OnBeginPickingCustomizationSlot (Has no native function)
	void OnBeginPickingCustomizationSlot(class UAthenaCustomizationSlotSelectorButton*& SlotButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.HandleInventoryUpdated (Underlying native function: HandleInventoryUpdated 0xa48c40c)
	void HandleInventoryUpdated(struct TSet<struct FString>& ItemChangeFlags, int64_t& ProfileRevision); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.GetItemTypeDisplayNames (Underlying native function: GetItemTypeDisplayNames 0xa48bd3c)
	struct FText GetItemTypeDisplayNames(enum EAthenaCustomizationCategory& InCategory); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.GetFavoriteItemForCategory (Underlying native function: GetFavoriteItemForCategory 0xa48bab8)
	class UFortItem* GetFavoriteItemForCategory(enum EAthenaCustomizationCategory& CustomizationType, int& SubslotIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCustomizationScreenBase.GetCategoryDisplayName (Underlying native function: GetCategoryDisplayName 0xa48b900)
	struct FText GetCategoryDisplayName(enum EAthenaCustomizationCategory& InCategory); // (Final | Native | Public | BlueprintCallable)
};

