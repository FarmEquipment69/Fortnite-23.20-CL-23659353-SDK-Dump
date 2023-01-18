// Class /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton
// Size: 0x1480
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton
{
	unsigned char unreflected_1480[0x1480]; 

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleSlottingRestrictionReasonsChanged (Has no native function)
	void HandleSlottingRestrictionReasonsChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.HandleItemSlottedToDifferentSquad (Has no native function)
	void HandleItemSlottedToDifferentSquad(struct FHomebaseSquadSlotId*& SquadSlotId); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton.GetSlottingRestrictionReasons (Underlying native function: GetSlottingRestrictionReasons 0x75bf638)
	struct TArray<enum EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

