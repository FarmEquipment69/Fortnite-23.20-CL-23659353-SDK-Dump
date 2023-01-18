// Class /Script/FortniteGame.FortTrackMovementComponent
// Size: 0x1c8
class UFortTrackMovementComponent : public UMovementComponent
{
	class AFortTrack* OptionalEditorPlacedTrack; // 0x108 (0x8)
	struct FVector TrackSnapExtent; // 0x110 (0x18)
	struct FVector TurnSpeed; // 0x128 (0x18)
	float SplineLocationOffsetZ; // 0x140 (0x4)
	float DiscoverSplineFrequency; // 0x144 (0x4)
	float TrackVelocity; // 0x148 (0x4)
	bool bReverseYawWhenReversedOnSpline; // 0x14c (0x1)
	unsigned char unreflected_14d[0x3]; // 0x14d (0x3) 
	struct FMulticastInlineDelegate OnOutOfTrack; // 0x150 (0x10)
	struct FMulticastInlineDelegate OnLostTrack; // 0x160 (0x10)
	struct FTrackMovement TrackMovement; // 0x170 (0x10)
	struct FRepTrackMovement ReplicatedTrackMovement; // 0x180 (0x18)
	unsigned char unreflected_198[0x1c]; // 0x198 (0x1c) 
	float ClientPredictionSpeedModifier; // 0x1b4 (0x4)
	unsigned char padding_1b8[0x10]; // 0x1b8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortTrackMovementComponent.OnRep_ReplicatedTrackMovement (Underlying native function: OnRep_ReplicatedTrackMovement 0x8b66ba8)
	void OnRepReplicatedTrackMovement(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortTrackMovementComponent.IsReverseDirection (Underlying native function: IsReverseDirection 0x8b667d4)
	bool IsReverseDirection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTrackMovementComponent.GetTrack (Underlying native function: GetTrack 0x8b664a0)
	class AFortTrack* GetTrack(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTrackMovementComponent.GetSpline (Underlying native function: GetSpline 0x8b66460)
	class USplineComponent* GetSpline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTrackMovementComponent.GetDistanceAlongSpline (Underlying native function: GetDistanceAlongSpline 0x77c2f54)
	float GetDistanceAlongSpline(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortTrackMovementComponent.FlipDirection (Underlying native function: FlipDirection 0x8b661c4)
	void FlipDirection(); // (Final | Native | Public | BlueprintCallable)
};

