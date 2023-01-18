// Class /Script/FortniteUI.HeistWidgetBase
// Size: 0x320
class UHeistWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x20]; // 0x2d0 (0x20) 
	enum EHeistExitCraftUIState CurrExitCraftUIState; // 0x2f0 (0x1)
	bool bDisplayBlingRow; // 0x2f1 (0x1)
	bool bCanDisplayVanUI; // 0x2f2 (0x1)
	unsigned char unreflected_2f3[0x1]; // 0x2f3 (0x1) 
	struct FGameplayTag SafeSupplyDropTag; // 0x2f4 (0x4)
	struct FGameplayTag BlingItemTag; // 0x2f8 (0x4)
	struct FGameplayTag CarryingBlingItemTag; // 0x2fc (0x4)
	int CurrBlingSupplyDropCount; // 0x300 (0x4)
	int CurrBlingItemCount; // 0x304 (0x4)
	int CurrBlingEnemyCount; // 0x308 (0x4)
	int CurrBlingAllyCount; // 0x30c (0x4)
	unsigned char padding_310[0x10]; // 0x310 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.HeistWidgetBase.UpdateAllUI (Underlying native function: UpdateAllUI 0xa580618)
	void UpdateAllUI(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.HeistWidgetBase.SetExitCraftUIState (Underlying native function: SetExitCraftUIState 0xa580074)
	void SetExitCraftUIState(enum EHeistExitCraftUIState& NewState); // (Final | Native | Protected)

	// Function /Script/FortniteUI.HeistWidgetBase.OnUpdateStateTimeText (Has no native function)
	void OnUpdateStateTimeText(struct FText& TimeText, enum EHeistExitCraftUIState& CurrState); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.HeistWidgetBase.OnUpdateStateText (Has no native function)
	void OnUpdateStateText(struct FText& StateText, enum EHeistExitCraftUIState& CurrState); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.HeistWidgetBase.OnUpdateExitCraftIcon (Has no native function)
	void OnUpdateExitCraftIcon(struct FHeistExitCraftIconData& ExitCraftIconData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.HeistWidgetBase.OnUpdateBlingIcon (Has no native function)
	void OnUpdateBlingIcon(struct FHeistBlingIconData*& BlingIconData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.HeistWidgetBase.OnSpecialActorRemoved (Underlying native function: OnSpecialActorRemoved 0xa57fdd8)
	void OnSpecialActorRemoved(struct FSpecialActorRepData& SpecialActorData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.HeistWidgetBase.OnSpecialActorAdded (Underlying native function: OnSpecialActorAdded 0xa57fdd8)
	void OnSpecialActorAdded(struct FSpecialActorRepData& SpecialActorData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.HeistWidgetBase.OnMutatorObjectUpdated (Underlying native function: OnMutatorObjectUpdated 0xa57f598)
	void OnMutatorObjectUpdated(struct FGameplayMutatorObjectDataArray& MutatorArray); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.HeistWidgetBase.OnHandleSpectatingChanged (Underlying native function: OnHandleSpectatingChanged 0xa57ef90)
	void OnHandleSpectatingChanged(class AFortPlayerStateZone*& SpectatingTarget); // (Final | Native | Protected)

	// Function /Script/FortniteUI.HeistWidgetBase.OnExitCraftsUIChanged (Has no native function)
	void OnExitCraftsUIChanged(enum EHeistExitCraftUIState& NewState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.HeistWidgetBase.OnDisplayExitCraftUI (Has no native function)
	void OnDisplayExitCraftUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.HeistWidgetBase.OnDisplayBlingUI (Has no native function)
	void OnDisplayBlingUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)
};

