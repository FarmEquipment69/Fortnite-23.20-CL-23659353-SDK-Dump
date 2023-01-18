// Class /Script/Engine.ImportanceSamplingLibrary
// Size: 0x28
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.ImportanceSamplingLibrary.RandomSobolFloat (Underlying native function: RandomSobolFloat 0x9e3131c)
	static float RandomSobolFloat(int& Index, int& Dimension, float& Seed); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.RandomSobolCell3D (Underlying native function: RandomSobolCell3D 0x9e311a8)
	static struct FVector RandomSobolCell3D(int& Index, int& NumCells, struct FVector& Cell, struct FVector& Seed); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.RandomSobolCell2D (Underlying native function: RandomSobolCell2D 0x9e31050)
	static struct FVector2D RandomSobolCell2D(int& Index, int& NumCells, struct FVector2D& Cell, struct FVector2D& Seed); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.NextSobolFloat (Underlying native function: NextSobolFloat 0x9e2fffc)
	static float NextSobolFloat(int& Index, int& Dimension, float& PreviousValue); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.NextSobolCell3D (Underlying native function: NextSobolCell3D 0x9e2fedc)
	static struct FVector NextSobolCell3D(int& Index, int& NumCells, struct FVector& PreviousValue); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.NextSobolCell2D (Underlying native function: NextSobolCell2D 0x9e2fdd8)
	static struct FVector2D NextSobolCell2D(int& Index, int& NumCells, struct FVector2D& PreviousValue); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.MakeImportanceTexture (Underlying native function: MakeImportanceTexture 0x9e2ead0)
	static struct FImportanceTexture MakeImportanceTexture(class UTexture2D*& Texture, struct TEnumAsByte<EImportanceWeight>& WeightingFunc); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.ImportanceSample (Underlying native function: ImportanceSample 0x9e2dfb8)
	static void ImportanceSample(struct FImportanceTexture& Texture, struct FVector2D& Rand, int& Samples, float& Intensity, struct FVector2D& SamplePosition, struct FLinearColor& SampleColor, float& SampleIntensity, float& SampleSize); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.ImportanceSamplingLibrary.BreakImportanceTexture (Underlying native function: BreakImportanceTexture 0x9e29730)
	static void BreakImportanceTexture(struct FImportanceTexture& ImportanceTexture, class UTexture2D*& Texture, struct TEnumAsByte<EImportanceWeight>& WeightingFunc); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

