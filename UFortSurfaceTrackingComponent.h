// Class /Script/FortniteGame.FortSurfaceTrackingComponent
// Size: 0x160
class UFortSurfaceTrackingComponent : public UFortPawnComponent
{
	float MinimumCheckDistance; // 0xa0 (0x4)
	bool bUseMovementCompCurrentFloor; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	float SkinWidth; // 0xa8 (0x4)
	struct TEnumAsByte<ETraceTypeQuery> TraceTypeQuery; // 0xac (0x1)
	bool bDebug; // 0xad (0x1)
	unsigned char unreflected_ae[0x2]; // 0xae (0x2) 
	struct FMulticastInlineDelegate OnSurfaceTypeChanged; // 0xb0 (0x10)
	class AFortPawn* OwningPawn; // 0xc0 (0x8)
	unsigned char unreflected_c8[0x78]; // 0xc8 (0x78) 
	class AActor* CurrentSurfaceActor; // 0x140 (0x8)
	unsigned char padding_148[0x18]; // 0x148 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortSurfaceTrackingComponent.UpdateSurfaceType (Underlying native function: UpdateSurfaceType 0x871be78)
	void UpdateSurfaceType(bool& bAlwaysNotify, bool& bLookForGround); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortSurfaceTrackingComponent.HandleMovementModeChanged (Underlying native function: HandleMovementModeChanged 0x10995b8)
	void HandleMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortSurfaceTrackingComponent.GetCurrentSurfaceType (Underlying native function: GetCurrentSurfaceType 0x8719dcc)
	struct TEnumAsByte<EPhysicalSurface> GetCurrentSurfaceType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

