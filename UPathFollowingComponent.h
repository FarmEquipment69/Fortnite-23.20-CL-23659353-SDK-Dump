// Class /Script/AIModule.PathFollowingComponent
// Size: 0x2b8
class UPathFollowingComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x38]; // 0xa0 (0x38) 
	class UNavMovementComponent* MovementComp; // 0xd8 (0x8)
	unsigned char unreflected_e0[0x8]; // 0xe0 (0x8) 
	class ANavigationData* MyNavData; // 0xe8 (0x8)
	unsigned char padding_f0[0x1c8]; // 0xf0 (0x1c8)

	/* Functions */

	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered (Underlying native function: OnNavDataRegistered 0xa1da6bc)
	void OnNavDataRegistered(class ANavigationData*& NavData); // (Final | Native | Protected)

	// Function /Script/AIModule.PathFollowingComponent.OnActorBump (Underlying native function: OnActorBump 0xa1da544)
	void OnActorBump(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Native | Public | HasOutParms | HasDefaults)

	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination (Underlying native function: GetPathDestination 0xa1da228)
	struct FVector GetPathDestination(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType (Underlying native function: GetPathActionType 0xa1da1b0)
	struct TEnumAsByte<EPathFollowingAction> GetPathActionType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

