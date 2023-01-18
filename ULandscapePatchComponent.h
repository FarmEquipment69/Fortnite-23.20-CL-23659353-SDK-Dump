// Class /Script/LandscapePatch.LandscapePatchComponent
// Size: 0x320
class ULandscapePatchComponent : public USceneComponent
{
	struct TWeakObjectPtr<class ALandscape> Landscape; // 0x2a0 (0x28)
	struct TWeakObjectPtr<class ALandscapePatchManager> PatchManager; // 0x2c8 (0x28)
	bool bIsEnabled; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x2]; // 0x2f1 (0x2) 
	bool bPropertiesCopiedIndicator; // 0x2f3 (0x1)
	unsigned char unreflected_2f4[0x4]; // 0x2f4 (0x4) 
	struct TWeakObjectPtr<class ALandscapePatchManager> PreviousPatchManager; // 0x2f8 (0x28)

	/* Functions */

	// Function /Script/LandscapePatch.LandscapePatchComponent.SetPatchManager (Underlying native function: SetPatchManager 0x7fb8c2c)
	void SetPatchManager(class ALandscapePatchManager*& NewPatchManager); // (Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapePatchComponent.SetLandscape (Underlying native function: SetLandscape 0x7fb8ba8)
	void SetLandscape(class ALandscape*& NewLandscape); // (Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapePatchComponent.SetIsEnabled (Underlying native function: SetIsEnabled 0x7fb8b20)
	void SetIsEnabled(bool& bEnabledIn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate (Underlying native function: RequestLandscapeUpdate 0x7fb864c)
	void RequestLandscapeUpdate(bool& bInUserTriggeredUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapePatchComponent.MoveToTop (Underlying native function: MoveToTop 0x7fb8590)
	void MoveToTop(); // (Final | Native | Protected)

	// Function /Script/LandscapePatch.LandscapePatchComponent.IsEnabled (Underlying native function: IsEnabled 0x2687fbc)
	bool IsEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapePatchComponent.GetPatchManager (Underlying native function: GetPatchManager 0x7fb8340)
	class ALandscapePatchManager* GetPatchManager(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld (Underlying native function: GetLandscapeHeightmapCoordsToWorld 0x7fb82c4)
	struct FTransform GetLandscapeHeightmapCoordsToWorld(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

