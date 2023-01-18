// Class /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
// Size: 0x2a8
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{
	class UPanelWidget* RecycleResultsWidget; // 0x290 (0x8)
	enum EFortItemCardSize ItemCardSize; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	class UFortAccountItem* ItemToRecycle; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle (Underlying native function: SetCurrentItemToRecycle 0x7573564)
	void SetCurrentItemToRecycle(class UFortAccountItem*& InItemToRecycle); // (Final | Native | Public | BlueprintCallable)
};

