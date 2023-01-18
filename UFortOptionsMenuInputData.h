// Class /Script/FortniteUI.FortOptionsMenuInputData
// Size: 0x108
class UFortOptionsMenuInputData : public UDataAsset
{
	struct FName ActionName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText DisplayText; // 0x38 (0x18)
	struct FText PrimaryText; // 0x50 (0x18)
	struct FText SecondaryText; // 0x68 (0x18)
	int ElementNumber; // 0x80 (0x4)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	class UCommonTextBlock* TabText; // 0x88 (0x8)
	struct FFortActionKeyMapping ActionKeyMapping; // 0x90 (0x78)

	/* Functions */

	// Function /Script/FortniteUI.FortOptionsMenuInputData.GetInputScale (Underlying native function: GetInputScale 0x6a4ad48)
	float GetInputScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortOptionsMenuInputData.GetInputActionGroup (Underlying native function: GetInputActionGroup 0xa453f5c)
	enum EFortInputActionGroup GetInputActionGroup(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

