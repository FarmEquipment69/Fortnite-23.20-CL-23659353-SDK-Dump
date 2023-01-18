// Class /Script/FortniteUI.AthenaItemShopReactiveTileText
// Size: 0x360
class UAthenaItemShopReactiveTileText : public UCommonTextBlock
{
	int MaxCharacterCountBeforeScaling; // 0x350 (0x4)
	float MaxScaleDownPercentage; // 0x354 (0x4)
	bool bDebugScaling; // 0x358 (0x1)
	unsigned char unreflected_359[0x3]; // 0x359 (0x3) 
	float InitialFontSize; // 0x35c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopReactiveTileText.SetMaxCharacterCountBeforeScaling (Underlying native function: SetMaxCharacterCountBeforeScaling 0xa580124)
	void SetMaxCharacterCountBeforeScaling(int& InMaxCharacterCountBeforeScaling); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaItemShopReactiveTileText.GetMaxCharacterCountBeforeScaling (Underlying native function: GetMaxCharacterCountBeforeScaling 0xa57cd18)
	int GetMaxCharacterCountBeforeScaling(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

