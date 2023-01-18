// Class /Script/FortniteUI.AthenaInventoryScreenContainer
// Size: 0x570
class UAthenaInventoryScreenContainer : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xd8]; // 0x3a8 (0xd8) 
	struct TWeakObjectPtr<class UClass> MyIslandWidgetClass; // 0x480 (0x28)
	struct TWeakObjectPtr<class UClass> CreativeInventoryWidgetClass; // 0x4a8 (0x28)
	class UClass* TabButtonClass; // 0x4d0 (0x8)
	struct FDataTableRowHandle BackInputRowHandle; // 0x4d8 (0x10)
	struct FDataTableRowHandle ToggleInputRowHandle; // 0x4e8 (0x10)
	struct TArray<struct FName> BlockedInputActions; // 0x4f8 (0x10)
	struct TArray<struct FName> AdditionalBlockedInputActions; // 0x508 (0x10)
	class UScaleBox* ScaleBoxLeto; // 0x518 (0x8)
	class UFortTabListWidgetBase_Legacy* TabListInventory; // 0x520 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherInventoryTabs; // 0x528 (0x8)
	class UPanelWidget* PanelMyIslandHost; // 0x530 (0x8)
	class UPanelWidget* PanelCreativeInventoryHost; // 0x538 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x540 (0x8)
	class UFortCreativeSettingsFlow* MyIslandWidget; // 0x548 (0x8)
	class UFortCreativeItemListMenu* CreativeInventoryWidget; // 0x550 (0x8)
	class UInputComponent* InventoryScreenInputComponent; // 0x558 (0x8)
	unsigned char padding_560[0x10]; // 0x560 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryScreenContainer.OnExtensionWidgetCreated (Has no native function)
	void OnExtensionWidgetCreated(enum EUIExtensionSlot& ExtensionSlot, class UUserWidget*& ExtensionWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryScreenContainer.GetPlayerInventoryWidget (Underlying native function: GetPlayerInventoryWidget 0xa5552ac)
	class UAthenaInventoryPanelContainer* GetPlayerInventoryWidget(); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteUI.AthenaInventoryScreenContainer.GetActiveTabWidget (Underlying native function: GetActiveTabWidget 0xa554f44)
	class UWidget* GetActiveTabWidget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

