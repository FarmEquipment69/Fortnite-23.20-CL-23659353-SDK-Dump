// Class /Script/UIFramework.UIFrameworkButton
// Size: 0xe8
class UUIFrameworkButton : public UUIFrameworkWidget
{
	unsigned char unreflected_90[0x18]; // 0x90 (0x18) 
	struct FUIFrameworkSimpleSlot Slot; // 0xa8 (0x40)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkButton.SetContent (Underlying native function: SetContent 0x70c5ac8)
	void SetContent(struct FUIFrameworkSimpleSlot& Content); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkButton.ServerClick (Underlying native function: ServerClick 0x70c5a28)
	void ServerClick(class APlayerController*& PlayerController); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/UIFramework.UIFrameworkButton.OnRep_Slot (Underlying native function: OnRep_Slot 0x70c5790)
	void OnRepSlot(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkButton.HandleClick (Underlying native function: HandleClick 0x52efa60)
	void HandleClick(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkButton.GetContent (Underlying native function: GetContent 0x70c5624)
	struct FUIFrameworkSimpleSlot GetContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

