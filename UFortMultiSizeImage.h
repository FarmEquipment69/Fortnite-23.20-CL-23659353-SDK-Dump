// Class /Script/FortniteUI.FortMultiSizeImage
// Size: 0x600
class UFortMultiSizeImage : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FFortMultiSizeBrush MultiSizeBrush; // 0x150 (0x480)
	struct TEnumAsByte<EFortBrushSize> BrushSize; // 0x5d0 (0x1)
	unsigned char unreflected_5d1[0x3]; // 0x5d1 (0x3) 
	struct FLinearColor ColorAndOpacity; // 0x5d4 (0x10)
	unsigned char padding_5e4[0x1c]; // 0x5e4 (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortMultiSizeImage.SetMultiSizeBrush (Underlying native function: SetMultiSizeBrush 0xa622678)
	void SetMultiSizeBrush(struct FFortMultiSizeBrush& MultiSizeBrush); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeImage.SetColorAndOpacity (Underlying native function: SetColorAndOpacity 0xa621efc)
	void SetColorAndOpacity(struct FLinearColor& Color); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.FortMultiSizeImage.SetBrushSize (Underlying native function: SetBrushSize 0xa621e70)
	void SetBrushSize(struct TEnumAsByte<EFortBrushSize>& BrushSize); // (Final | Native | Public | BlueprintCallable)
};

