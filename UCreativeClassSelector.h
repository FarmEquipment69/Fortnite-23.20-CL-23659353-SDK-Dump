// Class /Script/CRD_ClassSelectorUI.CreativeClassSelector
// Size: 0x4e0
class UCreativeClassSelector : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	class UClassSelectorTabButtons* TabButtonsTeamSelection; // 0x3b8 (0x8)
	class UCommonListView* ListViewClasses; // 0x3c0 (0x8)
	struct TArray<class UCreativeClassItemInfo*> ClassItemInfos; // 0x3c8 (0x10)
	class UScrollBox* LoadoutScrollBox; // 0x3d8 (0x8)
	class UClassSelectorLoadoutContainer* LoadoutContainerInventory; // 0x3e0 (0x8)
	class UClassSelectorLoadoutContainer* LoadoutContainerResources; // 0x3e8 (0x8)
	class UCommonButtonBase* ButtonSelectLoadout; // 0x3f0 (0x8)
	class UCommonButtonBase* ButtonRandomClass; // 0x3f8 (0x8)
	class UWidgetSwitcher* SwitcherDescriptions; // 0x400 (0x8)
	class UPanelWidget* ClassAndTeamDescriptionContainer; // 0x408 (0x8)
	class UPanelWidget* ItemDescriptionContainer; // 0x410 (0x8)
	class UPanelWidget* InventoryPanel; // 0x418 (0x8)
	class UPanelWidget* ResourcesPanel; // 0x420 (0x8)
	class UCommonTextBlock* ItemRarity; // 0x428 (0x8)
	class UCommonTextBlock* ItemName; // 0x430 (0x8)
	class UCommonTextBlock* ItemDescription; // 0x438 (0x8)
	class UPanelWidget* TeamDescriptionContainer; // 0x440 (0x8)
	class UClassSelectorTeamInfoWidget* TeamInfoWidgetFullView; // 0x448 (0x8)
	class UClassSelectorTeamInfoWidget* TeamInfoWidgetTeamsOnly; // 0x450 (0x8)
	class UWidgetSwitcher* DisplaySwitcher; // 0x458 (0x8)
	class UPanelWidget* ClassAndTeamSelectionContainer; // 0x460 (0x8)
	class UPanelWidget* OnlyTeamSelectionContainer; // 0x468 (0x8)
	class UPanelWidget* InvalidDataContainer; // 0x470 (0x8)
	class UClassSelectorTeamTiles* TeamTiles; // 0x478 (0x8)
	class UClass* TeamSelectionTabClass; // 0x480 (0x8)
	bool bIsModalVersion; // 0x488 (0x1)
	bool bEnableModalTimeLimit; // 0x489 (0x1)
	unsigned char unreflected_48a[0x2]; // 0x48a (0x2) 
	int ModalTimeLimitInSeconds; // 0x48c (0x4)
	unsigned char unreflected_490[0x10]; // 0x490 (0x10) 
	enum EClassSelectorDisplayMode DisplayMode; // 0x4a0 (0x1)
	bool bDeferRespawn; // 0x4a1 (0x1)
	unsigned char unreflected_4a2[0x6]; // 0x4a2 (0x6) 
	struct FDataTableRowHandle ReturnToClassSelectionInputAction; // 0x4a8 (0x10)
	float LoadoutScrollPadding; // 0x4b8 (0x4)
	unsigned char unreflected_4bc[0x1c]; // 0x4bc (0x1c) 
	class UCreativeClassItemInfo* SelectedClassItemInfo; // 0x4d8 (0x8)

	/* Functions */

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnTimerCountdown (Has no native function)
	void OnTimerCountdown(int& RemainingTime); // (Event | Protected | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnLoadoutCommitted (Has no native function)
	void OnLoadoutCommitted(struct FText& NewClassName, struct FText& NewTeamName, bool& bNewLoadout); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectorUIPopulated (Has no native function)
	void OnClassSelectorUIPopulated(bool& bHasValidData); // (Event | Protected | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.OnClassSelectionChanged (Has no native function)
	void OnClassSelectionChanged(struct FText& NewClassName, struct FText& NewClassDescription); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0x7362d64)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Protected)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelector.GetFirstLoadoutItem (Underlying native function: GetFirstLoadoutItem 0x7362d28)
	class UWidget* GetFirstLoadoutItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

