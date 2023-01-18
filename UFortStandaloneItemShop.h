// Class /Script/FortniteUI.FortStandaloneItemShop
// Size: 0x638
class UFortStandaloneItemShop : public UFortStandaloneFrontend
{
	class UDynamicEntryBox* EntryBoxTabButtons; // 0x5e0 (0x8)
	struct FDataTableRowHandle NextTabInputAction; // 0x5e8 (0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x5f8 (0x10)
	class UCommonButtonGroupBase* TabsGroup; // 0x608 (0x8)
	struct TArray<struct FStandaloneItemShopTabInfo> TabInfos; // 0x610 (0x10)
	class UAthenaCustomizationScreenBase* ActivatableContentLocker; // 0x620 (0x8)
	class UAthenaItemShopScreen* ActivatableContentItemShop; // 0x628 (0x8)
	class UFortMtxStoreRootBase* ActivatableContentMtxStore; // 0x630 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortStandaloneItemShop.RegisterTab (Underlying native function: RegisterTab 0xa701004)
	void RegisterTab(struct FStandaloneItemShopTabInfo& TabInfo); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortStandaloneItemShop.OnTabSelected (Has no native function)
	void OnTabSelected(int& TabIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStandaloneItemShop.InitializeTabs (Has no native function)
	void InitializeTabs(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortStandaloneItemShop.HandleSelectedTabButtonChanged (Underlying native function: HandleSelectedTabButtonChanged 0xa6ff260)
	void HandleSelectedTabButtonChanged(class UCommonButtonBase*& SelectedButton, int& ButtonIndex); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortStandaloneItemShop.CreateTabs (Underlying native function: CreateTabs 0xa6fdc34)
	void CreateTabs(); // (Final | Native | Protected | BlueprintCallable)
};

