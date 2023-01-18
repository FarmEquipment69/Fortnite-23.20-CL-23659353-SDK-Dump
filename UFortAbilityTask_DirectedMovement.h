// Class /Script/FortniteGame.FortAbilityTask_DirectedMovement
// Size: 0x100
class UFortAbilityTask_DirectedMovement : public UAbilityTask
{
	struct FMulticastInlineDelegate OnMovementComplete; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnMovementCancelled; // 0x88 (0x10)
	unsigned char unreflected_98[0x28]; // 0x98 (0x28) 
	struct FVector TargetLocation; // 0xc0 (0x18)
	class USceneComponent* TargetComponent; // 0xd8 (0x8)
	float MovementDistance; // 0xe0 (0x4)
	float IdealArrivalDistance; // 0xe4 (0x4)
	float DurationOfMovement; // 0xe8 (0x4)
	bool bModifyZ; // 0xec (0x1)
	bool bCancelOnFalling; // 0xed (0x1)
	unsigned char unreflected_ee[0x2]; // 0xee (0x2) 
	class UCharacterMovementComponent* MovementComponent; // 0xf0 (0x8)
	unsigned char padding_f8[0x8]; // 0xf8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_DirectedMovement.DirectedMovementToLocation (Underlying native function: DirectedMovementToLocation 0x8140540)
	static class UFortAbilityTask_DirectedMovement* DirectedMovementToLocation(class UGameplayAbility*& OwningAbility, struct FVector& MovementTargetLocation, struct TEnumAsByte<EFortDirectedMovementSpace>& MovementSpaceType, float& MovementDuration, float& CloseEnoughDistance, bool& ModifyZ, bool& bCancelOnFalling); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_DirectedMovement.DirectedMovementToComponent (Underlying native function: DirectedMovementToComponent 0x8140338)
	static class UFortAbilityTask_DirectedMovement* DirectedMovementToComponent(class UGameplayAbility*& OwningAbility, class USceneComponent*& TargetComponent, float& MaxMovementDistance, float& MovementDuration, float& IdealDistance, bool& ModifyZ, bool& bCancelOnFalling); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_DirectedMovement.DirectedMovementToActor (Underlying native function: DirectedMovementToActor 0x8140130)
	static class UFortAbilityTask_DirectedMovement* DirectedMovementToActor(class UGameplayAbility*& OwningAbility, class AActor*& TargetActor, float& MaxMovementDistance, float& MovementDuration, float& IdealDistance, bool& ModifyZ, bool& bCancelOnFalling); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAbilityTask_DirectedMovement.DirectedMovement (Underlying native function: DirectedMovement 0x813fecc)
	static class UFortAbilityTask_DirectedMovement* DirectedMovement(class UGameplayAbility*& OwningAbility, struct FVector& MovementDirection, struct TEnumAsByte<EFortDirectedMovementSpace>& MovementSpaceType, float& MovementDistance, float& MovementDuration, float& IdealDistance, bool& ModifyZ, bool& bCancelOnFalling); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

