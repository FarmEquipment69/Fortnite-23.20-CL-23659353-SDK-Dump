// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
// Size: 0x920
class UFortCharacterMovementMutatorComponent : public UActorComponent
{
	class ACharacter* CharacterOwner; // 0xa0 (0x8)
	class UFortMovementComp_CharacterAthena* MovementComponent; // 0xa8 (0x8)
	class UFortMovementComp_CharacterAthena* CDOMovementComponent; // 0xb0 (0x8)
	unsigned char unreflected_b8[0x10]; // 0xb8 (0x10) 
	struct FScalableFloat BuffetBubblesMoveToBoxSpeed; // 0xc8 (0x28)
	struct FScalableFloat BuffetBubblesRelativeVelocityInterpSpeed; // 0xf0 (0x28)
	struct FScalableFloat BuffetBubblesLocationInterpSpeed; // 0x118 (0x28)
	struct FScalableFloat BuffetBubblesRotationInterpSpeed; // 0x140 (0x28)
	struct FScalableFloat BuffetBubblesMinRelativeX; // 0x168 (0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeX; // 0x190 (0x28)
	struct FScalableFloat BuffetBubblesMinRelativeY; // 0x1b8 (0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeY; // 0x1e0 (0x28)
	struct FScalableFloat BuffetBubblesMinRelativeZ; // 0x208 (0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeZ; // 0x230 (0x28)
	struct FRotator BuffetBubblesRotationRate; // 0x258 (0x18)
	struct FScalableFloat BuffetBubblesMaxAcceleration; // 0x270 (0x28)
	struct FScalableFloat BuffetBubblesMaxRelativeSpeed; // 0x298 (0x28)
	struct FScalableFloat BuffetBubblesRelativeDeceleration; // 0x2c0 (0x28)
	struct FScalableFloat BuffetBubblesSphereRadius; // 0x2e8 (0x28)
	class AActor* BuffetBubblesFollowActor; // 0x310 (0x8)
	struct FVector BuffetBubblesInitialFollowBoxOffsetPercent; // 0x318 (0x18)
	unsigned char unreflected_330[0xe0]; // 0x330 (0xe0) 
	struct FBuffetBubblesReplicatedData BuffetBubblesReplicatedData; // 0x410 (0x80)
	unsigned char unreflected_490[0x280]; // 0x490 (0x280) 
	struct FScalableFloat BuffetBubblesIntroSpeed; // 0x710 (0x28)
	unsigned char unreflected_738[0x8]; // 0x738 (0x8) 
	struct FTransform BuffetBubblesIntroTargetTransform; // 0x740 (0x60)
	struct FScalableFloat BuffetFlyingMaxPitchDegrees; // 0x7a0 (0x28)
	struct FScalableFloat BuffetFlyingMaxSpeed; // 0x7c8 (0x28)
	struct FScalableFloat BuffetFlyingVelocityDirectionInterpSpeed; // 0x7f0 (0x28)
	struct FRotator BuffetFlyingRotationRate; // 0x818 (0x18)
	float BuffetFlyingMaxSpeedOverride; // 0x830 (0x4)
	float BuffetFlyingMaxSpeedInterpSpeed; // 0x834 (0x4)
	unsigned char unreflected_838[0x4]; // 0x838 (0x4) 
	float BuffetFlyingVelocityDirectionInterpSpeedOverride; // 0x83c (0x4)
	struct FScalableFloat BuffetFlyingRicochetSphereSize; // 0x840 (0x28)
	struct FScalableFloat BuffetFlyingRicochetRotationDuration; // 0x868 (0x28)
	struct FScalableFloat BuffetFlyingRicochetControlRotationInterpSpeed; // 0x890 (0x28)
	unsigned char unreflected_8b8[0x48]; // 0x8b8 (0x48) 
	struct FBuffetFlyingRicochetReplicatedData BuffetFlyingRicochetReplicatedData; // 0x900 (0x20)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform (Underlying native function: SetBuffetBubblesIntroTargetTransform 0x76c6cc0)
	void SetBuffetBubblesIntroTargetTransform(struct FTransform& Transform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent (Underlying native function: SetBuffetBubblesInitialFollowBoxOffsetPercent 0x76c6be4)
	void SetBuffetBubblesInitialFollowBoxOffsetPercent(struct FVector& BoxOffsetPercent); // (Final | Native | Protected | HasDefaults | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor (Underlying native function: SetBuffetBubblesFollowActor 0x76c6a88)
	void SetBuffetBubblesFollowActor(class AActor*& Actor); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed (Underlying native function: OverrideBuffetFlyingVelocityDirectionInterpSpeed 0x76c5ccc)
	void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float& Value, bool& bAsMultiplier); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed (Underlying native function: OverrideBuffetFlyingMaxSpeed 0x76c5be8)
	void OverrideBuffetFlyingMaxSpeed(float& Value, bool& bAsMultiplier, float& InterpSpeed); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData (Underlying native function: OnRep_BuffetFlyingRicochetReplicatedData 0x76c5598)
	void OnRepBuffetFlyingRicochetReplicatedData(); // (Final | Native | Private)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor (Underlying native function: OnRep_BuffetBubblesFollowActor 0x76c54ac)
	void OnRepBuffetBubblesFollowActor(); // (Final | Native | Protected)

	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged (Underlying native function: OnMovementModeChanged 0x76c4bb4)
	void OnMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PreviousMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Private)
};

