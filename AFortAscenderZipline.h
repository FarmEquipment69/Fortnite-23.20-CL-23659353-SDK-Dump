// Class /Script/AscenderCodeRuntime.FortAscenderZipline
// Size: 0xfe8
class AFortAscenderZipline : public AFortAthenaSplineZipline
{
	struct FMulticastInlineDelegate OnAscenderSetupComplete; // 0xc98 (0x10)
	struct FName SplineTopAttachPointName; // 0xca8 (0x4)
	bool bAutoFindSplineEndLocation; // 0xcac (0x1)
	unsigned char unreflected_cad[0x3]; // 0xcad (0x3) 
	float SplineOffsetFromGround; // 0xcb0 (0x4)
	float CableOffsetFromSplineEnd; // 0xcb4 (0x4)
	float SplineLength; // 0xcb8 (0x4)
	unsigned char unreflected_cbc[0x4]; // 0xcbc (0x4) 
	class UStaticMesh* SplineStaticMesh; // 0xcc0 (0x8)
	struct TEnumAsByte<ESplineMeshAxis> MeshForwardAxis; // 0xcc8 (0x1)
	bool bHandleReturning; // 0xcc9 (0x1)
	unsigned char unreflected_cca[0x2]; // 0xcca (0x2) 
	float HandleReturnSpeed; // 0xccc (0x4)
	bool bCableDropping; // 0xcd0 (0x1)
	unsigned char unreflected_cd1[0x3]; // 0xcd1 (0x3) 
	float CableDropSpeed; // 0xcd4 (0x4)
	float YawRotationOffsetWhileUsingHandle; // 0xcd8 (0x4)
	float YawRotationOffsetWhileSlidingDown; // 0xcdc (0x4)
	bool bUseComplexSplineCollision; // 0xce0 (0x1)
	unsigned char unreflected_ce1[0x3]; // 0xce1 (0x3) 
	float SimpleSplineCollisionRadius; // 0xce4 (0x4)
	float SimpleSplineCollisionHeightExtension; // 0xce8 (0x4)
	unsigned char unreflected_cec[0x4]; // 0xcec (0x4) 
	struct FScalableFloat DescendMinDistanceFromBottom; // 0xcf0 (0x28)
	struct FScalableFloat AscendReachedEndHorizontalLaunchSpeed; // 0xd18 (0x28)
	struct FScalableFloat AscendReachedEndVerticalLaunchSpeed; // 0xd40 (0x28)
	struct FScalableFloat AscendJumpedOffHorizontalLaunchSpeed; // 0xd68 (0x28)
	struct FScalableFloat AscendJumpedOffVerticalLaunchSpeed; // 0xd90 (0x28)
	struct FScalableFloat DescendReachedEndHorizontalLaunchSpeed; // 0xdb8 (0x28)
	struct FScalableFloat DescendReachedEndVerticalLaunchSpeed; // 0xde0 (0x28)
	struct FScalableFloat DescendJumpedOffHorizontalLaunchSpeed; // 0xe08 (0x28)
	struct FScalableFloat DescendJumpedOffVerticalLaunchSpeed; // 0xe30 (0x28)
	struct FScalableFloat HandleActorHitPlayerHorizontalLaunchSpeed; // 0xe58 (0x28)
	struct FScalableFloat HandleActorHitPlayerVerticalLaunchSpeed; // 0xe80 (0x28)
	struct FVector HandleDestroyBuildingsOverlapExtents; // 0xea8 (0x18)
	struct FVector PlayerDestroyBuildingsOverlapExtents; // 0xec0 (0x18)
	struct FVector InitialSplineEndLocation; // 0xed8 (0x18)
	struct FVector CurrentSplineEndLocation; // 0xef0 (0x18)
	struct FVector TargetSplineEndLocation; // 0xf08 (0x18)
	struct FVector CurrentHandleLocation; // 0xf20 (0x18)
	struct TWeakObjectPtr<class UPrimitiveComponent> CurrentInteractComponent; // 0xf38 (0x8)
	struct TWeakObjectPtr<class AFortPlayerPawn> PawnUsingHandle; // 0xf40 (0x8)
	struct TWeakObjectPtr<class AFortPlayerPawn> PreviousPawnUsingHandle; // 0xf48 (0x8)
	class USplineMeshComponent* SplineMesh; // 0xf50 (0x8)
	class UCapsuleComponent* SimpleSplineMeshCollision; // 0xf58 (0x8)
	struct TWeakObjectPtr<class ABuildingActor> FloorActor; // 0xf60 (0x8)
	struct TArray<struct TWeakObjectPtr<class AFortPlayerPawn>> RotationLockedPawns; // 0xf68 (0x10)
	unsigned char unreflected_f78[0x68]; // 0xf78 (0x68) 
	class UFortLinkToActorComponent* LinkToActorComponent; // 0xfe0 (0x8)

	/* Functions */

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.SetupAscender (Underlying native function: SetupAscender 0x53245a0)
	void SetupAscender(bool& bFromConstruction, bool& bFromReplication); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_TargetSplineEndLocation (Underlying native function: OnRep_TargetSplineEndLocation 0x726069c)
	void OnRepTargetSplineEndLocation(); // (Final | Native | Protected)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_PawnUsingHandle (Underlying native function: OnRep_PawnUsingHandle 0x7260688)
	void OnRepPawnUsingHandle(); // (Final | Native | Protected)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.OnRep_InitialSplineEndLocation (Underlying native function: OnRep_InitialSplineEndLocation 0x726061c)
	void OnRepInitialSplineEndLocation(); // (Final | Native | Protected)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandlePawnUsingHandleDied (Underlying native function: HandlePawnUsingHandleDied 0x726059c)
	void HandlePawnUsingHandleDied(class AFortPawn*& DeadPawn); // (Final | Native | Protected)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorHealthChanged (Underlying native function: HandleFloorActorHealthChanged 0x7260588)
	void HandleFloorActorHealthChanged(); // (Final | Native | Protected)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.HandleFloorActorDestroyed (Underlying native function: HandleFloorActorDestroyed 0x7260508)
	void HandleFloorActorDestroyed(class AActor*& Actor); // (Final | Native | Protected)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetTopComponent (Has no native function)
	class UPrimitiveComponent* GetTopComponent(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetPawnUsingHandle (Underlying native function: GetPawnUsingHandle 0x726049c)
	class AFortPlayerPawn* GetPawnUsingHandle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetInteractComponentOverride (Underlying native function: GetInteractComponentOverride 0x72603d0)
	class UPrimitiveComponent* GetInteractComponentOverride(class AFortPlayerPawn*& InteractingPawn, class UPrimitiveComponent*& InteractComponent); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.GetHandleComponent (Has no native function)
	class UPrimitiveComponent* GetHandleComponent(); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringHandle (Has no native function)
	void BPHandleUpdatedLoweringHandle(); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleUpdatedLoweringCable (Has no native function)
	void BPHandleUpdatedLoweringCable(); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringHandle (Has no native function)
	void BPHandleStoppedLoweringHandle(); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStoppedLoweringCable (Has no native function)
	void BPHandleStoppedLoweringCable(); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringHandle (Has no native function)
	void BPHandleStartedLoweringHandle(); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandleStartedLoweringCable (Has no native function)
	void BPHandleStartedLoweringCable(); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStoppedUsingHandle (Has no native function)
	void BPHandlePlayerStoppedUsingHandle(class AFortPlayerPawn*& Player); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.BP_HandlePlayerStartedUsingHandle (Has no native function)
	void BPHandlePlayerStartedUsingHandle(class AFortPlayerPawn*& Player); // (Event | Public | BlueprintEvent)

	// Function /Script/AscenderCodeRuntime.FortAscenderZipline.ApplyStructureDamage (Has no native function)
	void ApplyStructureDamage(class ABuildingSMActor*& BuildingActor, class AActor*& DamageSource); // (Event | Public | BlueprintCallable | BlueprintEvent | Const)
};

