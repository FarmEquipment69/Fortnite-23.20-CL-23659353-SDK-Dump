// Class /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size: 0x28
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen (Underlying native function: ShowLoadingScreen 0x97d07f0)
	static void ShowLoadingScreen(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen (Underlying native function: SetLoadingScreen 0x97cfdd0)
	static void SetLoadingScreen(class UTexture*& Texture, struct FVector2D& Scale, struct FVector& Offset, bool& bShowLoadingMovie, bool& bShowOnSet); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen (Underlying native function: HideLoadingScreen 0x97cf4c4)
	static void HideLoadingScreen(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes (Underlying native function: ClearLoadingScreenSplashes 0x97cca68)
	static void ClearLoadingScreenSplashes(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash (Underlying native function: AddLoadingScreenSplash 0x97cbd94)
	static void AddLoadingScreenSplash(class UTexture*& Texture, struct FVector& Translation, struct FRotator& Rotation, struct FVector2D& Size, struct FRotator& DeltaRotation, bool& bClearBeforeAdd); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

