// Class /Script/SaveTheWorldUI.FortSquadSlotWidget
// Size: 0x1d8
class UFortSquadSlotWidget : public UWidget
{
	unsigned char unreflected_148[0x20]; // 0x148 (0x20) 
	enum EFortItemCardSize ItemCardSize; // 0x168 (0x1)
	unsigned char unreflected_169[0x3f]; // 0x169 (0x3f) 
	class UFortMultiSizeItemCard* SlottedItemCard; // 0x1a8 (0x8)
	unsigned char unreflected_1b0[0x8]; // 0x1b0 (0x8) 
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x1b8 (0x10)
	unsigned char padding_1c8[0x10]; // 0x1c8 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP (Underlying native function: SetIdOfSquadSlotToManageBP 0x75c1f74)
	void SetIdOfSquadSlotToManageBP(struct FName& SquadId, int& SquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetCardSize (Underlying native function: SetCardSize 0x75c1834)
	void SetCardSize(enum EFortItemCardSize& CardSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP (Underlying native function: IsSquadSlotLockedBP 0x75c09cc)
	bool IsSquadSlotLockedBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP (Underlying native function: GetItemInSquadSlotBP 0x75bf384)
	class UFortItem* GetItemInSquadSlotBP(class ULocalPlayer*& LocalPlayer); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP (Underlying native function: GetIdOfSquadSlotToManageBP 0x75bf048)
	void GetIdOfSquadSlotToManageBP(struct FName& OutSquadId, int& OutSquadSlotIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

