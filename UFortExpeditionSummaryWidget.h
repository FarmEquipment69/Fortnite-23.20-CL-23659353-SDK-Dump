// Class /Script/SaveTheWorldUI.FortExpeditionSummaryWidget
// Size: 0x2e8
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{
	int AvailableExpeditions; // 0x290 (0x4)
	int CompletedExpeditions; // 0x294 (0x4)
	int LandVehiclesTotal; // 0x298 (0x4)
	int LandVehiclesAvailable; // 0x29c (0x4)
	int AirVehiclesTotal; // 0x2a0 (0x4)
	int AirVehiclesAvailable; // 0x2a4 (0x4)
	int SeaVehiclesTotal; // 0x2a8 (0x4)
	int SeaVehiclesAvailable; // 0x2ac (0x4)
	int LandExpeditionsTotal; // 0x2b0 (0x4)
	int LandExpeditionsAvailable; // 0x2b4 (0x4)
	int AirExpeditionsTotal; // 0x2b8 (0x4)
	int AirExpeditionsAvailable; // 0x2bc (0x4)
	int SeaExpeditionsTotal; // 0x2c0 (0x4)
	int SeaExpeditionsAvailable; // 0x2c4 (0x4)
	struct TArray<class UFortExpeditionItem*> InProgressExpeditions; // 0x2c8 (0x10)
	unsigned char padding_2d8[0x10]; // 0x2d8 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates (Underlying native function: UnbindInventoryDelegates 0x75742a4)
	void UnbindInventoryDelegates(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget (Underlying native function: OnRefreshSummaryWidget 0x7570aa8)
	void OnRefreshSummaryWidget(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates (Underlying native function: BindInventoryDelegates 0x756d130)
	void BindInventoryDelegates(); // (Final | Native | Public | BlueprintCallable)
};

