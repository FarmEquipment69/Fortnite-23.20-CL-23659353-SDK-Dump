// Class /Script/SaveTheWorldUI.FortExpeditionDetailsWidget
// Size: 0x2d0
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{
	struct TWeakObjectPtr<class UFortExpeditionItem> Item; // 0x290 (0x8)
	class UFortSquadSlotsView* ExpeditionSquadSlotsView; // 0x298 (0x8)
	struct FName CurrentSquadId; // 0x2a0 (0x4)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	class UFortItemViewContext_ExpeditionSquadSlotsView* ItemViewContextExpeditionSlotsView; // 0x2a8 (0x8)
	unsigned char padding_2b0[0x20]; // 0x2b0 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetData (Underlying native function: SetData 0x735cf90)
	void SetData(class UFortExpeditionItem*& InItem); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId (Underlying native function: SetCurrentSquadId 0x7573678)
	void SetCurrentSquadId(struct FName& SquadId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition (Underlying native function: RequestAbandonExpedition 0x7572b0c)
	void RequestAbandonExpedition(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted (Underlying native function: HandleAbandonExpeditionCompleted 0x756eb4c)
	void HandleAbandonExpeditionCompleted(class UFortExpeditionItem*& Expedition, bool& bSuccess); // (Final | Native | Private)
};

