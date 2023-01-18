// Class /Script/FortniteUI.AthenaLoadoutEntryWidget
// Size: 0x2a0
class UAthenaLoadoutEntryWidget : public UCommonUserWidget
{
	class UFortAthenaInventoryLoadout* SelectedLoadout; // 0x290 (0x8)
	unsigned char padding_298[0x8]; // 0x298 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLoadoutEntryWidget.SetLoadout (Underlying native function: SetLoadout 0x735cf90)
	void SetLoadout(class UFortAthenaInventoryLoadout*& NewLoadout); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLoadoutEntryWidget.OnLoadoutPicked (Underlying native function: OnLoadoutPicked 0xa4b01f8)
	void OnLoadoutPicked(); // (Final | Native | Public | BlueprintCallable)
};

