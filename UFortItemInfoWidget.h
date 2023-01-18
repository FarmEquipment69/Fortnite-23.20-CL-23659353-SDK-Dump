// Class /Script/FortniteUI.FortItemInfoWidget
// Size: 0x2b0
class UFortItemInfoWidget : public UCommonUserWidget
{
	class UCommonTextBlock* TextName; // 0x290 (0x8)
	class UCommonTextBlock* TextItemType; // 0x298 (0x8)
	class UCommonTextBlock* TextDesc; // 0x2a0 (0x8)
	class UOverlay* OverlayMainView; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemInfoWidget.SetRarityMaterialValues (Has no native function)
	void SetRarityMaterialValues(class UFortItemDefinition*& ItemDefinition); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemInfoWidget.PopulateUsingItemDefinition (Underlying native function: PopulateUsingItemDefinition 0xa849190)
	void PopulateUsingItemDefinition(class UFortItemDefinition*& NewItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemInfoWidget.PopulateUsingItem (Underlying native function: PopulateUsingItem 0xa8490cc)
	void PopulateUsingItem(class UFortItem*& NewItem); // (Final | Native | Protected | BlueprintCallable)
};

