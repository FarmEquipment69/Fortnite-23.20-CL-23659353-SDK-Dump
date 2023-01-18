// Class /Script/FortniteUI.AthenaItemSelectorScreenBase
// Size: 0x970
class UAthenaItemSelectorScreenBase : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x10]; // 0x668 (0x10) 
	class UClass* TabButtonType; // 0x678 (0x8)
	struct TMap<enum EAthenaCustomizationCategory, struct FFortTabButtonLabelInfo> ItemCategoryButtonLabelInfo; // 0x680 (0x50)
	struct FFortTabButtonLabelInfo VariantButtonLabelInfo; // 0x6d0 (0xe0)
	class UCommonButtonBase* ButtonConfirmSelection; // 0x7b0 (0x8)
	class UCommonButtonBase* ButtonEditStyle; // 0x7b8 (0x8)
	class UCommonButtonBase* ButtonConfirmStyle; // 0x7c0 (0x8)
	class UCommonButtonBase* ButtonCommitArchiveChange; // 0x7c8 (0x8)
	class UCommonButtonBase* ButtonApplyToAll; // 0x7d0 (0x8)
	class UCommonButtonBase* ButtonCloseSortAndFilterBlade; // 0x7d8 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x7e0 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x7e8 (0x8)
	class UCommonButtonBase* ButtonUnfavorite; // 0x7f0 (0x8)
	class UWidget* WidgetArchiveModeButtonContainer; // 0x7f8 (0x8)
	class UFortHoldableButton* ButtonArchiveMode; // 0x800 (0x8)
	class UFortHoldableButton* ButtonUnarchiveMode; // 0x808 (0x8)
	class UFortHoldableButton* ButtonViewInBattlePass; // 0x810 (0x8)
	class UWidget* WidgetShowArchivedItemsButtonContainer; // 0x818 (0x8)
	class UCommonButtonBase* ButtonShowArchivedItems; // 0x820 (0x8)
	class UCommonButtonBase* ButtonHideArchivedItems; // 0x828 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x830 (0x8)
	class UAthenaCustomizationPicker* PickerItemSelector; // 0x838 (0x8)
	class UAthenaCustomizationPickerSortAndFilterBlade* BladeSortAndFilter; // 0x840 (0x8)
	class UVerticalBox* ItemInfo; // 0x848 (0x8)
	class UFortItemBaseWidget* ItemHeaderInfo; // 0x850 (0x8)
	bool bVariantZoomUsesSnap; // 0x858 (0x1)
	unsigned char unreflected_859[0x7]; // 0x859 (0x7) 
	class UFortItem* CurrentPreviewItem; // 0x860 (0x8)
	class UAthenaCosmeticItemDefinition* CurrentPreviewItemDef; // 0x868 (0x8)
	struct TArray<struct FMcpVariantChannelInfo> CurrentPreviewVariantChannels; // 0x870 (0x10)
	struct TArray<struct FMcpVariantChannelInfo> CachedVariantChannels; // 0x880 (0x10)
	unsigned char unreflected_890[0x1]; // 0x890 (0x1) 
	enum ELockerScreenState LockerState; // 0x891 (0x1)
	unsigned char unreflected_892[0x6]; // 0x892 (0x6) 
	class UFortVariantPicker* PickerVariantSelector; // 0x898 (0x8)
	class UAthenaCosmeticUnlockingInfo* UnlockingInfo; // 0x8a0 (0x8)
	unsigned char unreflected_8a8[0x41]; // 0x8a8 (0x41) 
	enum EAthenaCustomizationCategory CustomizeCategory; // 0x8e9 (0x1)
	unsigned char unreflected_8ea[0x6]; // 0x8ea (0x6) 
	struct TWeakObjectPtr<class UClass> LockerConfirmationModalClass; // 0x8f0 (0x28)
	struct FName ArchiveMaterialParameterName; // 0x918 (0x4)
	float ArchiveMaterialParameterEquippingValue; // 0x91c (0x4)
	float ArchiveMaterialParameterArchivingValue; // 0x920 (0x4)
	unsigned char unreflected_924[0x4]; // 0x924 (0x4) 
	class UUserWidget* TooltipLockerArchivingCleanup; // 0x928 (0x8)
	class UUserWidget* TooltipArchiveMode; // 0x930 (0x8)
	class UUserWidget* TooltipArchivedItems; // 0x938 (0x8)
	unsigned char unreflected_940[0x28]; // 0x940 (0x28) 
	int SubslotIndex; // 0x968 (0x4)
	unsigned char padding_96c[0x4]; // 0x96c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.StartItemCustomization (Underlying native function: StartItemCustomization 0xa48e334)
	void StartItemCustomization(struct FAthenaCustomizationParams& Params); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.SaveAndExit_ApplyToAllSlots (Underlying native function: SaveAndExit_ApplyToAllSlots 0xa48dc48)
	void SaveAndExitApplyToAllSlots(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.SaveAndExit (Underlying native function: SaveAndExit 0xa48dbc8)
	void SaveAndExit(bool& bApplyToAllSlots); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnUpdateLockerArchivingCleanupTooltipText (Has no native function)
	void OnUpdateLockerArchivingCleanupTooltipText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnUpdateExclusiveItemCallout (Has no native function)
	void OnUpdateExclusiveItemCallout(bool& bShouldShow, struct FText& CalloutText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnUpdateArchiveModeTooltipText (Has no native function)
	void OnUpdateArchiveModeTooltipText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnUpdateArchivedItemsTooltipText (Has no native function)
	void OnUpdateArchivedItemsTooltipText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnTabSelectionChanged (Has no native function)
	void OnTabSelectionChanged(bool& bShowingVariants); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnShowLockerArchivingCleanupTooltip (Has no native function)
	void OnShowLockerArchivingCleanupTooltip(bool& bShowTooltip); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnShowArchiveModeTooltip (Has no native function)
	void OnShowArchiveModeTooltip(bool& bShowTooltip); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnShowArchivedItemsTooltip (Has no native function)
	void OnShowArchivedItemsTooltip(bool& bShowTooltip); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnLockerScreenStateChanged (Has no native function)
	void OnLockerScreenStateChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnItemSelectionCommited (Underlying native function: OnItemSelectionCommited 0xa48da24)
	void OnItemSelectionCommited(class UFortItem*& SelectedItem); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnItemSelectedChanged (Underlying native function: OnItemSelectedChanged 0xa48d9a4)
	void OnItemSelectedChanged(class UFortItem*& SelectedItem); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnHideItemInfoHeader (Has no native function)
	void OnHideItemInfoHeader(bool& bShouldHide); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnFinishedItemSetup (Has no native function)
	void OnFinishedItemSetup(struct FText& CategoryDisplayName, struct FText& ItemDisplayTypeName, enum EAthenaCustomizationCategory& SelectedCategory, class UMaterialInstance*& OverrideSlotImage); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnFinishedItemSave (Has no native function)
	void OnFinishedItemSave(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.OnCurrentItemChanged (Has no native function)
	void OnCurrentItemChanged(class UFortItem*& SelectedItem); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.IsItemOwned (Underlying native function: IsItemOwned 0xa48d678)
	bool IsItemOwned(class UFortItem*& Item); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.IsAlternateActionHovered (Underlying native function: IsAlternateActionHovered 0xa48d5c4)
	void IsAlternateActionHovered(bool& bAlternateActionHovered); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleShowArchivedItemsTooltipDismissed (Underlying native function: HandleShowArchivedItemsTooltipDismissed 0xa48d0d0)
	void HandleShowArchivedItemsTooltipDismissed(); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleSearchTextChanged (Underlying native function: HandleSearchTextChanged 0xa48cdd8)
	void HandleSearchTextChanged(struct FText& NewText); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleScreenAnalytics (Underlying native function: HandleScreenAnalytics 0xa48cd5c)
	void HandleScreenAnalytics(bool& bItemChanged); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandlePickerMarkedItemsChanged (Has no native function)
	void HandlePickerMarkedItemsChanged(int& MarkedCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleLockerArchivingCleanupTooltipDismissed (Underlying native function: HandleLockerArchivingCleanupTooltipDismissed 0xa48c6ac)
	void HandleLockerArchivingCleanupTooltipDismissed(); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleCommitArchiveChangeClicked (Underlying native function: HandleCommitArchiveChangeClicked 0xa48c0f8)
	void HandleCommitArchiveChangeClicked(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleArchiveModeTooltipDismissed (Underlying native function: HandleArchiveModeTooltipDismissed 0xa48c01c)
	void HandleArchiveModeTooltipDismissed(); // (Final | Native | Private | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.HandleAboutToClose (Underlying native function: HandleAboutToClose 0xa48bfa4)
	void HandleAboutToClose(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.GetCurrentItem (Underlying native function: GetCurrentItem 0xa48b9dc)
	class UFortItem* GetCurrentItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.ExitEditStyle (Underlying native function: ExitEditStyle 0xa48b750)
	void ExitEditStyle(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.EnterEditStyle (Underlying native function: EnterEditStyle 0xa48b73c)
	void EnterEditStyle(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaItemSelectorScreenBase.BP_HandleBack (Has no native function)
	void BPHandleBack(); // (Event | Protected | BlueprintEvent)
};

