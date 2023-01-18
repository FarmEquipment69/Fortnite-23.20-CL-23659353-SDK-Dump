// Class /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent
// Size: 0x268
class UGravityGunTargetTrackingComponent : public UActorComponent
{
	struct FScalableFloat AllowLargeObjects; // 0xa0 (0x28)
	struct FScalableFloat AllowMultipleGrabbers; // 0xc8 (0x28)
	struct FScalableFloat AllowVehicles; // 0xf0 (0x28)
	struct FScalableFloat AllowPickups; // 0x118 (0x28)
	struct FScalableFloat AllowProjectiles; // 0x140 (0x28)
	struct FScalableFloat AllowForay; // 0x168 (0x28)
	struct FScalableFloat AllowWhileInVehicle; // 0x190 (0x28)
	struct FName GrabbedByGravityGunTagName; // 0x1b8 (0x4)
	unsigned char unreflected_1bc[0x4]; // 0x1bc (0x4) 
	struct FGameplayTagContainer InvalidTargetTags; // 0x1c0 (0x20)
	struct FGameplayTagContainer TargetIsPlayerTag; // 0x1e0 (0x20)
	struct FGameplayTagContainer TargetIsAlreadyGrabbedTag; // 0x200 (0x20)
	struct FGameplayTagContainer TargetIsOwnVehicleTag; // 0x220 (0x20)
	struct FMulticastInlineDelegate FoundTargetDelegate; // 0x240 (0x10)
	struct FMulticastInlineDelegate DeactivateReticleDelegate; // 0x250 (0x10)
	unsigned char padding_260[0x8]; // 0x260 (0x8)

	/* Functions */

	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.IsValidTarget (Underlying native function: IsValidTarget 0x7294c34)
	bool IsValidTarget(class AActor*& OwningPlayer, class AActor*& PotentialTarget, struct FGameplayTagContainer& ReasonForFailure); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetProjectile (Underlying native function: FindTargetProjectile 0x72947bc)
	bool FindTargetProjectile(class AActor*& OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd, float& TargetingRadius); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MotherGameplayRuntime.GravityGunTargetTrackingComponent.FindTargetActor (Underlying native function: FindTargetActor 0x729424c)
	void FindTargetActor(class AActor*& OwningPlayer, struct FVector& TraceStart, struct FVector& TraceEnd); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)
};

