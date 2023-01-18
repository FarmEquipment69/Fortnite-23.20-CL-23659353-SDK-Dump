// Class /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget
// Size: 0x540
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy
{
	struct TWeakObjectPtr<class UFortExpeditionItem> Item; // 0x4e0 (0x8)
	struct FName CurrentSquadId; // 0x4e8 (0x4)
	unsigned char unreflected_4ec[0x4]; // 0x4ec (0x4) 
	class UFortSquadSlotsView* ExpeditionSquadSlotsView; // 0x4f0 (0x8)
	class UFortSquadSlotDetailsPanel* ExpeditionSquadSlotDetails; // 0x4f8 (0x8)
	class UFortSquadSlotItemPicker* ExpeditionSquadSlotPicker; // 0x500 (0x8)
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContextExpeditionSlotsView; // 0x508 (0x8)
	class UFortItemViewContext_ExpeditionSquadSlotItemPicker* ItemViewContextExpeditionSlotItemPicker; // 0x510 (0x8)
	unsigned char padding_518[0x28]; // 0x518 (0x28)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData (Underlying native function: SetData 0x75707fc)
	void SetData(class UFortExpeditionItem*& InItem); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId (Underlying native function: SetCurrentSquadId 0x75735e4)
	void SetCurrentSquadId(struct FName& SquadId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker (Has no native function)
	void OnRequestClosePicker(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget (Underlying native function: OnRefreshBuildSquadWidget 0x7181fa8)
	void OnRefreshBuildSquadWidget(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked (Underlying native function: IsSquadSlotLocked 0x75703e8)
	bool IsSquadSlotLocked(int& SlotIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart (Underlying native function: IsExpeditionValidToStart 0x75700a4)
	bool IsExpeditionValidToStart(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition (Underlying native function: HandleRequestStartExpedition 0x756f6bc)
	void HandleRequestStartExpedition(bool& bPassThrough); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected (Underlying native function: HandleDifferentSquadSlotSelected 0x756f040)
	void HandleDifferentSquadSlotSelected(int& SquadSlotIndex); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState (Underlying native function: ClearTemporaryExpeditionSquadState 0x756d630)
	void ClearTemporaryExpeditionSquadState(bool& bPreviewOnly); // (Final | Native | Public | BlueprintCallable)
};

