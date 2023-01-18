// Class /Script/FortniteUI.FortPickupManagerWidget
// Size: 0x2b0
class UFortPickupManagerWidget : public UCommonUserWidget
{
	class UPanelWidget* PanelAllResources; // 0x290 (0x8)
	struct TArray<class UFortResourceWidget*> ResourceWidgets; // 0x298 (0x10)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPickupManagerWidget.OnResourceWidgetVisibilityChanged (Has no native function)
	void OnResourceWidgetVisibilityChanged(class UFortResourceWidget*& ResourceWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickupManagerWidget.OnResourceItemPickedUp (Has no native function)
	void OnResourceItemPickedUp(class UFortWorldItem*& Item, int& Count); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickupManagerWidget.OnRefreshCounts (Has no native function)
	void OnRefreshCounts(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickupManagerWidget.OnRefreshActiveResource (Has no native function)
	void OnRefreshActiveResource(struct TEnumAsByte<EFortResourceType>& CurrentResourceType); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickupManagerWidget.OnOutOfBuildingResources (Has no native function)
	void OnOutOfBuildingResources(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickupManagerWidget.OnLowOnBuildingResources (Has no native function)
	void OnLowOnBuildingResources(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickupManagerWidget.HandleWorldItemsChanged (Underlying native function: HandleWorldItemsChanged 0xa7c37a4)
	void HandleWorldItemsChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPickupManagerWidget.HandleWorldItemListChanged (Underlying native function: HandleWorldItemListChanged 0xa7c36b8)
	void HandleWorldItemListChanged(struct TArray<class UFortWorldItem*>& ItemsAdded, struct TArray<class UFortWorldItem*>& ItemsRemoved); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortPickupManagerWidget.HandleSetWorldResourceWidgetVisibility (Underlying native function: HandleSetWorldResourceWidgetVisibility 0xa7c35f0)
	void HandleSetWorldResourceWidgetVisibility(struct TEnumAsByte<EFortResourceType>& ResourceType, bool& bVisible); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPickupManagerWidget.HandleHUDElementVisibilityRefreshed (Underlying native function: HandleHUDElementVisibilityRefreshed 0xa7c3300)
	void HandleHUDElementVisibilityRefreshed(); // (Final | Native | Private)
};

