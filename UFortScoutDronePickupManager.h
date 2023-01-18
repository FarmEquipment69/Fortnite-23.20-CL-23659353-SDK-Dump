// Class /Script/ScoutDroneRuntime.FortScoutDronePickupManager
// Size: 0x1d0
class UFortScoutDronePickupManager : public UPawnComponent
{
	struct FScoutDronePickupTargets AttachedTargets; // 0xa0 (0x18)
	struct FName AttachPointSocketName; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FScoutDronePickupTargets PreviouslyAttachedTargets; // 0xc0 (0x18)
	struct FVector ItemOffset; // 0xd8 (0x18)
	struct FVector DBNOPawnOffset; // 0xf0 (0x18)
	float CurrentlyAppliedCameraOffset; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FScoutDroneCapsuleSizeData MaxExtraCapsuleDimensions; // 0x110 (0x50)
	struct FScalableFloat MaxPickupSpread; // 0x160 (0x28)
	struct FScalableFloat PickupTossSpeed; // 0x188 (0x28)
	struct FGameplayTagContainer ItemsPickupTags; // 0x1b0 (0x20)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerUpdateItemAttachment (Underlying native function: ServerUpdateItemAttachment 0x53582a0)
	void ServerUpdateItemAttachment(struct FVector& CalculatedItemOffset); // (Final | Net | NetReliable | Native | Event | Private | NetServer | HasDefaults)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.ServerDropAttachedActors (Underlying native function: ServerDropAttachedActors 0x5358260)
	void ServerDropAttachedActors(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnRep_AttachedTargets (Underlying native function: OnRep_AttachedTargets 0x5357da0)
	void OnRepAttachedTargets(); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.OnAttachedPawnDied (Underlying native function: OnAttachedPawnDied 0x5357aa0)
	void OnAttachedPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAPawnAtached (Underlying native function: HasAPawnAtached 0x5357990)
	bool HasAPawnAtached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.HasAnyAttachedActors (Underlying native function: HasAnyAttachedActors 0x53579c0)
	bool HasAnyAttachedActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsDetached (Has no native function)
	void BPOnActorsDetached(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDronePickupManager.BP_OnActorsAttached (Has no native function)
	void BPOnActorsAttached(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)
};

