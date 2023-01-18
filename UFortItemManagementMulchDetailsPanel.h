// Class /Script/FortniteUI.FortItemManagementMulchDetailsPanel
// Size: 0x2b8
class UFortItemManagementMulchDetailsPanel : public UCommonUserWidget
{
	class UFortItemQuantityListBase* ResourceList; // 0x290 (0x8)
	struct TScriptInterface<class IFortItemManagementMulchPanel> HostItemManagementMulchPanel; // 0x298 (0x10)
	unsigned char unreflected_2a8[0x8]; // 0x2a8 (0x8) 
	class UFortInventoryContext* InventoryContext; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemManagementMulchDetailsPanel.IsSpaceAvailableForMulch (Underlying native function: IsSpaceAvailableForMulch 0xa7e7354)
	bool IsSpaceAvailableForMulch(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementMulchDetailsPanel.HandleSetOfItemsToMulchChangedBP (Has no native function)
	void HandleSetOfItemsToMulchChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementMulchDetailsPanel.HandleHostSet (Has no native function)
	void HandleHostSet(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemManagementMulchDetailsPanel.GetItemsToMulch (Underlying native function: GetItemsToMulch 0x7596fe8)
	struct TArray<class UFortItem*> GetItemsToMulch(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementMulchDetailsPanel.GetItemCountsToMulch (Underlying native function: GetItemCountsToMulch 0x7596cd8)
	struct TArray<int> GetItemCountsToMulch(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemManagementMulchDetailsPanel.CommitMulch (Underlying native function: CommitMulch 0x759576c)
	void CommitMulch(); // (Final | Native | Protected | BlueprintCallable)
};

