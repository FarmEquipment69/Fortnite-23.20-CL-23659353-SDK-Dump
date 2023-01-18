// Class /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel
// Size: 0x2e8
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{
	unsigned char unreflected_290[0x20]; // 0x290 (0x20) 
	class UFortSquadSlotItemDetailsHostPanel* ItemDetailsPanel; // 0x2b0 (0x8)
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x2b8 (0x10)
	unsigned char padding_2c8[0x20]; // 0x2c8 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot (Underlying native function: TryGetItemToPreviewInSlot 0x75c30d0)
	bool TryGetItemToPreviewInSlot(class UFortItem*& OutItemToPreviewInSlot); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget (Underlying native function: SetScrollWidget 0x75c2a3c)
	void SetScrollWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP (Underlying native function: SetIdOfSquadSlotToManageBP 0x75c1b64)
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int& SquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP (Underlying native function: IsSquadSlotLockedBP 0x75c08dc)
	bool IsSquadSlotLockedBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP (Has no native function)
	void HandleSquadSlotStateChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP (Has no native function)
	void HandleSquadSlotRestrictionFactorsChangedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP (Has no native function)
	void HandleDifferentSquadSlotSetBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons (Underlying native function: GetSlottingRestrictionReasons 0x75bf5fc)
	struct TArray<enum EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP (Underlying native function: GetItemInSquadSlotBP 0x75bf184)
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP (Underlying native function: GetIdOfSquadSlotToManageBP 0x75bebfc)
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int& OutSquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

