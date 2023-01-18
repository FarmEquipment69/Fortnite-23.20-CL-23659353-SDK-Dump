// Class /Script/FortniteGame.FortItemPreviewActor
// Size: 0x3b0
class AFortItemPreviewActor : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	class UMaterialInstance* SpecialEventMaterial; // 0x290 (0x8)
	struct FCharacterDisplaySettings CurrentDisplayInfo; // 0x298 (0x90)
	class USceneComponent* ItemPreviewRootComponent; // 0x328 (0x8)
	class USceneComponent* UserRotationComponent; // 0x330 (0x8)
	float ZoomLevel; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	struct FRotator PedestalRotationOffset; // 0x340 (0x18)
	unsigned char padding_358[0x58]; // 0x358 (0x58)

	/* Functions */

	// Function /Script/FortniteGame.FortItemPreviewActor.OnSetFloorMaterial (Has no native function)
	void OnSetFloorMaterial(class UMaterialInterface*& InMaterialInstance); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortItemPreviewActor.OnPreviewVisualsSpawned (Has no native function)
	void OnPreviewVisualsSpawned(bool& bUseSecondaryTransitionEffects, bool& bShowFloor); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortItemPreviewActor.OnCurrentVisualsCleanedUp (Has no native function)
	void OnCurrentVisualsCleanedUp(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortItemPreviewActor.OnAllLODStreamingComplete (Has no native function)
	void OnAllLODStreamingComplete(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortItemPreviewActor.IsSceneTransitioning (Underlying native function: IsSceneTransitioning 0x8a07dc0)
	bool IsSceneTransitioning(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortItemPreviewActor.ArePreviewVisualsReady (Underlying native function: ArePreviewVisualsReady 0x8a05ac8)
	bool ArePreviewVisualsReady(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

