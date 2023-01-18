// Class /Script/UIFramework.UIFrameworkSimpleButton
// Size: 0xc0
class UUIFrameworkSimpleButton : public UUIFrameworkWidget
{
	struct FText Text; // 0x90 (0x18)
	unsigned char padding_a8[0x18]; // 0xa8 (0x18)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkSimpleButton.SetText (Underlying native function: SetText 0x70c5bc8)
	void SetText(struct FText& Text); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkSimpleButton.ServerClick (Underlying native function: ServerClick 0x70c5a28)
	void ServerClick(class APlayerController*& PlayerController); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/UIFramework.UIFrameworkSimpleButton.OnRep_Text (Underlying native function: OnRep_Text 0x70c57a4)
	void OnRepText(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkSimpleButton.HandleClick (Underlying native function: HandleClick 0x52efa80)
	void HandleClick(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkSimpleButton.GetText (Underlying native function: GetText 0x70c569c)
	struct FText GetText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

