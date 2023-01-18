// Class /Script/FortniteUI.AthenaInventoryItemTileButton
// Size: 0x1450
class UAthenaInventoryItemTileButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UAthenaItemIcon* ItemIcon; // 0x1438 (0x8)
	unsigned char padding_1440[0x10]; // 0x1440 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryItemTileButton.OnItemChanged (Has no native function)
	void OnItemChanged(class UFortItem*& Item); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaInventoryItemTileButton.GetItemToRepresent (Underlying native function: GetItemToRepresent 0xa48bc0c)
	class UFortItem* GetItemToRepresent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

