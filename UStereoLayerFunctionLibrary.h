// Class /Script/Engine.StereoLayerFunctionLibrary
// Size: 0x28
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.StereoLayerFunctionLibrary.ShowSplashScreen (Underlying native function: ShowSplashScreen 0x97d07f0)
	static void ShowSplashScreen(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerFunctionLibrary.SetSplashScreen (Underlying native function: SetSplashScreen 0x9f8de40)
	static void SetSplashScreen(class UTexture*& Texture, struct FVector2D& Scale, struct FVector& Offset, bool& bShowLoadingMovie, bool& bShowOnSet); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.StereoLayerFunctionLibrary.HideSplashScreen (Underlying native function: HideSplashScreen 0x97cf4c4)
	static void HideSplashScreen(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.StereoLayerFunctionLibrary.EnableAutoLoadingSplashScreen (Underlying native function: EnableAutoLoadingSplashScreen 0x9f8dc88)
	static void EnableAutoLoadingSplashScreen(bool& InAutoShowEnabled); // (Final | Native | Static | Public | BlueprintCallable)
};

