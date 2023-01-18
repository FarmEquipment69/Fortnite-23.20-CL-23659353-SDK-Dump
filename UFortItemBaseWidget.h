// Class /Script/FortniteUI.FortItemBaseWidget
// Size: 0x2a8
class UFortItemBaseWidget : public UCommonUserWidget
{
	struct FFortItemQuantityPair ItemQuantityPair; // 0x290 (0xc)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	class UFortItemDefinition* ItemDefinition; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemBaseWidget.SetItemQuantityPairToRepresent (Underlying native function: SetItemQuantityPairToRepresent 0xa826c9c)
	bool SetItemQuantityPairToRepresent(struct FFortItemQuantityPair& InItemQuantityPair); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemBaseWidget.SetItemDefinitionToRepresent (Underlying native function: SetItemDefinitionToRepresent 0xa826c1c)
	void SetItemDefinitionToRepresent(class UFortItemDefinition*& InItemDefinition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortItemBaseWidget.OnItemDefinitionChanged (Has no native function)
	void OnItemDefinitionChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemBaseWidget.OnItemCountChanged (Has no native function)
	void OnItemCountChanged(int& NewCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemBaseWidget.HandleItemCountChanged (Underlying native function: HandleItemCountChanged 0xa825d98)
	void HandleItemCountChanged(class UFortItemDefinition*& Definition, int& Delta); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortItemBaseWidget.GetQuantity (Underlying native function: GetQuantity 0xa825cdc)
	int GetQuantity(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemBaseWidget.GetItemDefinition (Underlying native function: GetItemDefinition 0xa825c30)
	class UFortItemDefinition* GetItemDefinition(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

