// Class /Script/RidingCodeRuntime.RiderComponent
// Size: 0x640
class URiderComponent : public UFortPawnOverrideComponent
{
	struct FMulticastInlineDelegate OnStartedRiding; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnStoppedRiding; // 0xb0 (0x10)
	class UClass* RidingCameraModeClass; // 0xc0 (0x8)
	class UClass* RidingSprintCameraModeClass; // 0xc8 (0x8)
	float RidingCameraModeBlendTime; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FInterpOffset TargetingAdditionalViewTargetSpaceViewOffset; // 0xd8 (0x10)
	class UClass* RiderPropClass; // 0xe8 (0x8)
	class UClass* RidablePropClass; // 0xf0 (0x8)
	struct FVector RiderPropAttachLocationOffset; // 0xf8 (0x18)
	struct FRotator RiderPropAttachRotationOffset; // 0x110 (0x18)
	float RiderPropAttachScale; // 0x128 (0x4)
	struct FName RiderPropAttachSocket; // 0x12c (0x4)
	bool bUseClientAttachGuideSocket; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct FVector RiderPropAttachSoftBounds; // 0x138 (0x18)
	float RiderPropAttachSoftBoundsScalar; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	struct FVector RiderPropAttachHardBounds; // 0x158 (0x18)
	float RiderPropAttachSoftBoundsTargetingScalar; // 0x170 (0x4)
	float RiderPropAttachHardBoundsTargetingScalar; // 0x174 (0x4)
	float RiderPropAttachVerticalBufferTargetingScalar; // 0x178 (0x4)
	float RidingExitHoldTime; // 0x17c (0x4)
	struct FScalableFloat TimeBeforeReenteringRiding; // 0x180 (0x28)
	struct FGameplayTag RidingExitStartedEventTag; // 0x1a8 (0x4)
	struct FGameplayTag RidingExitStoppedEventTag; // 0x1ac (0x4)
	class UFXSystemAsset* ConnectorFXAsset; // 0x1b0 (0x8)
	struct FName ConnectorPropSourceMeshParameterName; // 0x1b8 (0x4)
	struct FName ConnectorPropTargetMeshParameterName; // 0x1bc (0x4)
	float SimulatedSmoothedRotationSpeed; // 0x1c0 (0x4)
	unsigned char unreflected_1c4[0x4]; // 0x1c4 (0x4) 
	struct FGameplayTagContainer ExcludedEmoteTags; // 0x1c8 (0x20)
	unsigned char unreflected_1e8[0x8]; // 0x1e8 (0x8) 
	class URidableComponent* ActiveRidable; // 0x1f0 (0x8)
	class URidableComponent* LastRidable; // 0x1f8 (0x8)
	class USceneComponent* RiderProp; // 0x200 (0x8)
	class UFXSystemComponent* ConnectorProp; // 0x208 (0x8)
	struct FVector PropAttachSeparation; // 0x210 (0x18)
	struct FVector AdditionalAttachOffset; // 0x228 (0x18)
	struct FVector SoftBoundsAttachmentOffset; // 0x240 (0x18)
	struct FVector HardBoundsAttachmentOffset; // 0x258 (0x18)
	struct FDataTableRowHandle PlaylistTagBlacklistRowHandle; // 0x270 (0x10)
	class UFortInputComponent* RiderInputComponent; // 0x280 (0x8)
	struct FGameplayTagContainer PendingFailedEmoteErrorTags; // 0x288 (0x20)
	struct FRiderDismountLaunchVelocity ExitLaunchVelocity; // 0x2a8 (0xa8)
	struct FRiderDismountLaunchVelocity JumpExitLaunchVelocity; // 0x350 (0xa8)
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	struct FRidingAnalyticsData_Stopped ActiveAnaltyicsData; // 0x400 (0x90)
	struct FVector RidableLocationLastFrame; // 0x490 (0x18)
	unsigned char unreflected_4a8[0x8]; // 0x4a8 (0x8) 
	struct FTimerHandle* RestoreCollisionHandle; // 0x4b0 (0x8)
	struct FRidableControlRuntimeData RidableControlRuntimeData; // 0x4b8 (0x40)
	unsigned char bIsSprintingReplay; // 0x4f8 (0x1)
	unsigned char unreflected_4f9[0x3]; // 0x4f9 (0x3) 
	struct TWeakObjectPtr<class AFortPlayerController> ClampedController; // 0x4fc (0x8)
	bool bIsPetting; // 0x504 (0x1)
	unsigned char unreflected_505[0x3]; // 0x505 (0x3) 
	struct FScalableFloat RidingCapsuleHalfHeight; // 0x508 (0x28)
	struct FScalableFloat RidingCapsuleRadius; // 0x530 (0x28)
	unsigned char unreflected_558[0x10]; // 0x558 (0x10) 
	struct FCollisionProfileName CollisionProfileName; // 0x568 (0x4)
	unsigned char unreflected_56c[0x4]; // 0x56c (0x4) 
	struct FScalableFloat TraceRadius; // 0x570 (0x28)
	struct FScalableFloat TraceLength; // 0x598 (0x28)
	unsigned char padding_5c0[0x80]; // 0x5c0 (0x80)

	/* Functions */

	// Function /Script/RidingCodeRuntime.RiderComponent.StopRidingActor (Underlying native function: StopRidingActor 0x735d84c)
	bool StopRidingActor(bool& bLaunchRider, bool& bFindDismountLocation, bool& bIsJumpExit); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/RidingCodeRuntime.RiderComponent.StartRidingActor (Underlying native function: StartRidingActor 0x735d7b8)
	bool StartRidingActor(class AActor*& TargetActor); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/RidingCodeRuntime.RiderComponent.ServerRidingExit (Underlying native function: ServerRidingExit 0x735d51c)
	void ServerRidingExit(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated (Underlying native function: OnRep_RidableControlRuntimeUpdated 0x29ab6c0)
	void OnRepRidableControlRuntimeUpdated(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay (Underlying native function: OnRep_IsSprintingReplay 0x735d414)
	void OnRepIsSprintingReplay(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable (Underlying native function: OnRep_ActiveRidable 0x735d400)
	void OnRepActiveRidable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.OnMovementModeChanged (Underlying native function: OnMovementModeChanged 0x735d2f0)
	void OnMovementModeChanged(class ACharacter*& InCharacter, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.IsRidingActor (Underlying native function: IsRidingActor 0x735d030)
	bool IsRidingActor(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStoppedRiding (Underlying native function: HandleStoppedRiding 0x735cf90)
	void HandleStoppedRiding(class URidableComponent*& Ridable); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStartedRiding (Underlying native function: HandleStartedRiding 0x735cf0c)
	void HandleStartedRiding(class URidableComponent*& Ridable); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitReleased (Underlying native function: HandleRidingExitReleased 0x735ced0)
	void HandleRidingExitReleased(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitPressed (Underlying native function: HandleRidingExitPressed 0x735cebc)
	void HandleRidingExitPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage (Underlying native function: HandleRiderTakenDamage 0x735cc70)
	void HandleRiderTakenDamage(class AActor*& DamageOnOwnerPawnDamageddActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderDidDamage (Underlying native function: HandleRiderDidDamage 0x735c98c)
	void HandleRiderDidDamage(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& HitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Protected | HasDefaults)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableFound (Has no native function)
	void HandleRidableFound(struct FHitResult& HitResult); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnTeleported (Underlying native function: HandlePawnTeleported 0x735c8f8)
	void HandlePawnTeleported(class AFortPawn*& TeleportedPawn); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding (Underlying native function: HandlePawnDiedWhileRiding 0x735c878)
	void HandlePawnDiedWhileRiding(class AFortPawn*& DeadPawn); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped (Underlying native function: HandleOnWeaponEquipped 0x735c7b0)
	void HandleOnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased (Underlying native function: HandleGamepadRidingExitReleased 0x735c79c)
	void HandleGamepadRidingExitReleased(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity (Underlying native function: HandleDeferredExitVelocity 0x735c6f8)
	void HandleDeferredExitVelocity(struct FVector& ExitVelocity); // (Final | Native | Protected | HasDefaults)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding (Underlying native function: HandleDBNOWhileRiding 0x735c6e4)
	void HandleDBNOWhileRiding(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding (Underlying native function: HandleActorEndPlayWhileRiding 0x735c620)
	void HandleActorEndPlayWhileRiding(class AActor*& Actor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure (Underlying native function: ClientNotifyEmoteFailure 0x735bf80)
	void ClientNotifyEmoteFailure(struct FGameplayTagContainer& ErrorTags); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization (Underlying native function: ClientHandleFinishedCharacterCustomization 0x2d150c4)
	void ClientHandleFinishedCharacterCustomization(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Protected)
};

