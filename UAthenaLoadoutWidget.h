// Class /Script/FortniteUI.AthenaLoadoutWidget
// Size: 0x538
class UAthenaLoadoutWidget : public UFortActivatablePanel
{
	struct TArray<class UAthenaLoadoutEntryWidget*> EntryWidgets; // 0x518 (0x10)
	class UClass* EntryWidgetClass; // 0x528 (0x8)
	unsigned char padding_530[0x8]; // 0x530 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaLoadoutWidget.OnLoadoutChosen (Underlying native function: OnLoadoutChosen 0x7570a10)
	void OnLoadoutChosen(class UFortAthenaInventoryLoadout*& SelectedLoadout); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaLoadoutWidget.AddEntryWidget (Has no native function)
	void AddEntryWidget(class UAthenaLoadoutEntryWidget*& NewWidget); // (Event | Protected | BlueprintEvent)
};

