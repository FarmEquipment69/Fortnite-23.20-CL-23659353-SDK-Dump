// Class /Script/FortniteUI.FortAthenaMOTDTeaserWidget
// Size: 0x2d8
class UFortAthenaMOTDTeaserWidget : public UCommonUserWidget
{
	class UClass* MOTDWidgetClass; // 0x290 (0x8)
	class UClass* MOTDSimpleNewsWidgetClass; // 0x298 (0x8)
	unsigned char unreflected_2a0[0x30]; // 0x2a0 (0x30) 
	class UFortAthenaMOTDTileListView* FortAthenaMOTDTileListView; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaMOTDTeaserWidget.ResetViewConfiguration (Has no native function)
	void ResetViewConfiguration(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDTeaserWidget.OpenMOTDScreen (Underlying native function: OpenMOTDScreen 0xa873410)
	void OpenMOTDScreen(int& FocusedNewsIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMOTDTeaserWidget.OnNewsPopulated (Has no native function)
	void OnNewsPopulated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDTeaserWidget.GetNewsCount (Underlying native function: GetNewsCount 0x276de64)
	int GetNewsCount(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMOTDTeaserWidget.GetNewsByIndex (Underlying native function: GetNewsByIndex 0x19e56b4)
	struct FAthenaMOTDBase GetNewsByIndex(int& Index); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

