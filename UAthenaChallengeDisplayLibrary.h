// Class /Script/FortniteUI.AthenaChallengeDisplayLibrary
// Size: 0x28
class UAthenaChallengeDisplayLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeDisplayLibrary.GetChallengeStyleLightAccentColor (Underlying native function: GetChallengeStyleLightAccentColor 0xa4e0ad0)
	static struct FLinearColor GetChallengeStyleLightAccentColor(struct FFortChallengeSetStyle& DisplayStyle); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaChallengeDisplayLibrary.ApplyChallengeSetStyleColorsToMaterial (Underlying native function: ApplyChallengeSetStyleColorsToMaterial 0xa4e088c)
	static void ApplyChallengeSetStyleColorsToMaterial(struct FFortChallengeSetStyle& DisplayStyle, class UMaterialInstanceDynamic*& StyleMaterial); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaChallengeDisplayLibrary.ApplyChallengeSetStyleColorsToImageMaterial (Underlying native function: ApplyChallengeSetStyleColorsToImageMaterial 0xa4e0774)
	static void ApplyChallengeSetStyleColorsToImageMaterial(struct FFortChallengeSetStyle& DisplayStyle, class UImage*& ImageWidget); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

