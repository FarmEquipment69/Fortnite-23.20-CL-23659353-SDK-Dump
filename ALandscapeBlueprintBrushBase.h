// Class /Script/Landscape.LandscapeBlueprintBrushBase
// Size: 0x288
class ALandscapeBlueprintBrushBase : public AActor
{

	/* Functions */

	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate (Underlying native function: RequestLandscapeUpdate 0x7fb864c)
	void RequestLandscapeUpdate(bool& bInUserTriggered); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render (Underlying native function: Render 0x993185c)
	class UTextureRenderTarget2D* Render(bool& InIsHeightmap, class UTextureRenderTarget2D*& InCombinedResult, struct FName& InWeightmapLayerName); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize (Underlying native function: Initialize 0x99316cc)
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint*& InLandscapeSize, struct FIntPoint*& InLandscapeRenderTargetSize); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies (Has no native function)
	void GetBlueprintRenderDependencies(struct TArray<class UObject*>& OutStreamableAssets); // (Event | Public | HasOutParms | BlueprintEvent)
};

