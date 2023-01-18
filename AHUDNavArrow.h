// Class /Script/FortniteGame.HUDNavArrow
// Size: 0x428
class AHUDNavArrow : public ANavArrow
{
	struct FVector LocationRelativeToCamera; // 0x290 (0x18)
	struct FScalableFloat PitchRelativeToCamera; // 0x2a8 (0x28)
	struct FScalableFloat ArrowSizeRelativeToScreen; // 0x2d0 (0x28)
	struct FScalableFloat ArrowPlacementHeightRelativeToScreen; // 0x2f8 (0x28)
	struct FScalableFloat DefaultApproachRadius; // 0x320 (0x28)
	struct FScalableFloat DefaultDepartRadius; // 0x348 (0x28)
	class UCurveFloat* ScaleCurve; // 0x370 (0x8)
	class UStaticMeshComponent* ArrowComponent; // 0x378 (0x8)
	unsigned char padding_380[0xa8]; // 0x380 (0xa8)

	/* Functions */

	// Function /Script/FortniteGame.HUDNavArrow.SetDepartRadius (Underlying native function: SetDepartRadius 0x8547240)
	void SetDepartRadius(float& InDepartRadius); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HUDNavArrow.SetApproachRadius (Underlying native function: SetApproachRadius 0x85471b8)
	void SetApproachRadius(float& InApproachRadius); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.HUDNavArrow.InitializeTrackerComponent (Underlying native function: InitializeTrackerComponent 0x854642c)
	void InitializeTrackerComponent(class UDestinationTrackerPawnComponent*& InDestinationComponent); // (Native | Public | BlueprintCallable)
};

