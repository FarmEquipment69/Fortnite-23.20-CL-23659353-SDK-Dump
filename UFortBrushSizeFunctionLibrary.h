// Class /Script/FortniteGame.FortBrushSizeFunctionLibrary
// Size: 0x28
class UFortBrushSizeFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortBrushSizeFunctionLibrary.ShrinkBrushSize (Underlying native function: ShrinkBrushSize 0x80a49f0)
	static struct TEnumAsByte<EFortBrushSize> ShrinkBrushSize(struct TEnumAsByte<EFortBrushSize>& OriginalBrushSize, int& Steps); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortBrushSizeFunctionLibrary.GrowBrushSize (Underlying native function: GrowBrushSize 0x80a4924)
	static struct TEnumAsByte<EFortBrushSize> GrowBrushSize(struct TEnumAsByte<EFortBrushSize>& OriginalBrushSize, int& Steps); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

