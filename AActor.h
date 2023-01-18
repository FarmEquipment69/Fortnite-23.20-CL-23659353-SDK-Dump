// Class /Script/Engine.Actor
// Size: 0x288
class AActor : public UObject
{
	struct FActorTickFunction PrimaryActorTick; // 0x28 (0x30)
	unsigned char bNetTemporary; // 0x58 (0x1)
	unsigned char bOnlyRelevantToOwner; // 0x58 (0x1)
	unsigned char bAlwaysRelevant; // 0x58 (0x1)
	unsigned char bReplicateMovement; // 0x58 (0x1)
	unsigned char bCallPreReplication; // 0x58 (0x1)
	unsigned char bCallPreReplicationForReplay; // 0x58 (0x1)
	unsigned char bHidden; // 0x58 (0x1)
	unsigned char bTearOff; // 0x59 (0x1)
	unsigned char bForceNetAddressable; // 0x59 (0x1)
	unsigned char bExchangedRoles; // 0x59 (0x1)
	unsigned char bNetLoadOnClient; // 0x59 (0x1)
	unsigned char bNetUseOwnerRelevancy; // 0x59 (0x1)
	unsigned char bRelevantForNetworkReplays; // 0x59 (0x1)
	unsigned char bRelevantForLevelBounds; // 0x59 (0x1)
	unsigned char bReplayRewindable; // 0x59 (0x1)
	unsigned char bAllowTickBeforeBeginPlay; // 0x5a (0x1)
	unsigned char bAutoDestroyWhenFinished; // 0x5a (0x1)
	unsigned char bCanBeDamaged; // 0x5a (0x1)
	unsigned char bBlockInput; // 0x5a (0x1)
	unsigned char bCollideWhenPlacing; // 0x5a (0x1)
	unsigned char bFindCameraComponentWhenViewTarget; // 0x5a (0x1)
	unsigned char bGenerateOverlapEventsDuringLevelStreaming; // 0x5a (0x1)
	unsigned char bIgnoresOriginShifting; // 0x5a (0x1)
	unsigned char bEnableAutoLODGeneration; // 0x5b (0x1)
	unsigned char bIsEditorOnlyActor; // 0x5b (0x1)
	unsigned char bActorSeamlessTraveled; // 0x5b (0x1)
	unsigned char bReplicates; // 0x5b (0x1)
	unsigned char bCanBeInCluster; // 0x5b (0x1)
	unsigned char bAllowReceiveTickEventOnDedicatedServer; // 0x5b (0x1)
	unsigned char bReplicateUsingRegisteredSubObjectList; // 0x5b (0x1)
	unsigned char bActorEnableCollision; // 0x5c (0x1)
	unsigned char bActorIsBeingDestroyed; // 0x5d (0x1)
	unsigned char bAsyncPhysicsTickEnabled; // 0x5d (0x1)
	enum EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5e (0x1)
	enum EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5f (0x1)
	float InitialLifeSpan; // 0x60 (0x4)
	float CustomTimeDilation; // 0x64 (0x4)
	struct TEnumAsByte<ENetRole> RemoteRole; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	int RayTracingGroupId; // 0x6c (0x4)
	struct FRepAttachment AttachmentReplication; // 0x70 (0x60)
	struct FRepMovement ReplicatedMovement; // 0xd0 (0x70)
	class AActor* Owner; // 0x140 (0x8)
	struct FName NetDriverName; // 0x148 (0x4)
	struct TEnumAsByte<ENetRole> Role; // 0x14c (0x1)
	struct TEnumAsByte<ENetDormancy> NetDormancy; // 0x14d (0x1)
	enum ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0x14e (0x1)
	struct TEnumAsByte<EAutoReceiveInput> AutoReceiveInput; // 0x14f (0x1)
	int InputPriority; // 0x150 (0x4)
	unsigned char unreflected_154[0x4]; // 0x154 (0x4) 
	class UInputComponent* InputComponent; // 0x158 (0x8)
	float NetCullDistanceSquared; // 0x160 (0x4)
	int NetTag; // 0x164 (0x4)
	float NetUpdateFrequency; // 0x168 (0x4)
	float MinNetUpdateFrequency; // 0x16c (0x4)
	float NetPriority; // 0x170 (0x4)
	unsigned char unreflected_174[0x4]; // 0x174 (0x4) 
	class APawn* Instigator; // 0x178 (0x8)
	struct TArray<class AActor*> Children; // 0x180 (0x10)
	class USceneComponent* RootComponent; // 0x190 (0x8)
	unsigned char unreflected_198[0x8]; // 0x198 (0x8) 
	struct TArray<struct FName> Layers; // 0x1a0 (0x10)
	struct TWeakObjectPtr<class UChildActorComponent> ParentComponent; // 0x1b0 (0x8)
	unsigned char unreflected_1b8[0x10]; // 0x1b8 (0x10) 
	struct TArray<struct FName> Tags; // 0x1c8 (0x10)
	struct FMulticastSparseDelegate OnTakeAnyDamage; // 0x1d8 (0x1)
	struct FMulticastSparseDelegate OnTakePointDamage; // 0x1d9 (0x1)
	struct FMulticastSparseDelegate OnTakeRadialDamage; // 0x1da (0x1)
	struct FMulticastSparseDelegate OnActorBeginOverlap; // 0x1db (0x1)
	struct FMulticastSparseDelegate OnActorEndOverlap; // 0x1dc (0x1)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x1dd (0x1)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x1de (0x1)
	struct FMulticastSparseDelegate OnClicked; // 0x1df (0x1)
	struct FMulticastSparseDelegate OnReleased; // 0x1e0 (0x1)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x1e1 (0x1)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x1e2 (0x1)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x1e3 (0x1)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x1e4 (0x1)
	struct FMulticastSparseDelegate OnActorHit; // 0x1e5 (0x1)
	struct FMulticastSparseDelegate OnDestroyed; // 0x1e6 (0x1)
	struct FMulticastSparseDelegate OnEndPlay; // 0x1e7 (0x1)
	unsigned char unreflected_1e8[0x80]; // 0x1e8 (0x80) 
	struct TArray<class UActorComponent*> InstanceComponents; // 0x268 (0x10)
	struct TArray<class UActorComponent*> BlueprintCreatedComponents; // 0x278 (0x10)

	/* Functions */

	// Function /Script/Engine.Actor.WasRecentlyRendered (Underlying native function: WasRecentlyRendered 0x9c330f4)
	bool WasRecentlyRendered(float& Tolerance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.TearOff (Underlying native function: TearOff 0x735d960)
	void TearOff(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetTickGroup (Underlying native function: SetTickGroup 0x9c32ff8)
	void SetTickGroup(struct TEnumAsByte<ETickingGroup>& NewTickGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetTickableWhenPaused (Underlying native function: SetTickableWhenPaused 0x9c33074)
	void SetTickableWhenPaused(bool& bTickableWhenPaused); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetReplicates (Underlying native function: SetReplicates 0x9c32f78)
	void SetReplicates(bool& bInReplicates); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetReplicateMovement (Underlying native function: SetReplicateMovement 0x9c32ef4)
	void SetReplicateMovement(bool& bInReplicateMovement); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetRayTracingGroupId (Underlying native function: SetRayTracingGroupId 0x9c32e6c)
	void SetRayTracingGroupId(int& InRaytracingGroupId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetOwner (Underlying native function: SetOwner 0x9c32de8)
	void SetOwner(class AActor*& NewOwner); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetNetDormancy (Underlying native function: SetNetDormancy 0x9c32d68)
	void SetNetDormancy(struct TEnumAsByte<ENetDormancy>& NewDormancy); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetLifeSpan (Underlying native function: SetLifeSpan 0x2436a1c)
	void SetLifeSpan(float& InLifespan); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetAutoDestroyWhenFinished (Underlying native function: SetAutoDestroyWhenFinished 0x9c32ca8)
	void SetAutoDestroyWhenFinished(bool& bVal); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorTickInterval (Underlying native function: SetActorTickInterval 0x9c32c24)
	void SetActorTickInterval(float& TickInterval); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorTickEnabled (Underlying native function: SetActorTickEnabled 0x239a884)
	void SetActorTickEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorScale3D (Underlying native function: SetActorScale3D 0x237a618)
	void SetActorScale3D(struct FVector& NewScale3D); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorRelativeScale3D (Underlying native function: SetActorRelativeScale3D 0x9c32b94)
	void SetActorRelativeScale3D(struct FVector& NewRelativeScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorHiddenInGame (Underlying native function: SetActorHiddenInGame 0x24954b8)
	void SetActorHiddenInGame(bool& bNewHidden); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.SetActorEnableCollision (Underlying native function: SetActorEnableCollision 0x255708c)
	void SetActorEnableCollision(bool& bNewActorEnableCollision); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.RemoveTickPrerequisiteComponent (Underlying native function: RemoveTickPrerequisiteComponent 0x9c32b10)
	void RemoveTickPrerequisiteComponent(class UActorComponent*& PrerequisiteComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.RemoveTickPrerequisiteActor (Underlying native function: RemoveTickPrerequisiteActor 0x9c32a8c)
	void RemoveTickPrerequisiteActor(class AActor*& PrerequisiteActor); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveRadialDamage (Has no native function)
	void ReceiveRadialDamage(float& DamageReceived, class UDamageType*& DamageType, struct FVector& Origin, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceivePointDamage (Has no native function)
	void ReceivePointDamage(float& Damage, class UDamageType*& DamageType, struct FVector& HitLocation, struct FVector& HitNormal, class UPrimitiveComponent*& HitComponent, struct FName& BoneName, struct FVector& ShotFromDirection, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FHitResult& HitInfo); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveHit (Has no native function)
	void ReceiveHit(class UPrimitiveComponent*& MyComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, bool& bSelfMoved, struct FVector& HitLocation, struct FVector& HitNormal, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveAsyncPhysicsTick (Has no native function)
	void ReceiveAsyncPhysicsTick(float& DeltaSeconds, float& SimSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveAnyDamage (Has no native function)
	void ReceiveAnyDamage(float& Damage, class UDamageType*& DamageType, class AController*& InstigatedBy, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnReleased (Has no native function)
	void ReceiveActorOnReleased(struct FKey& ButtonReleased); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchLeave (Has no native function)
	void ReceiveActorOnInputTouchLeave(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchEnter (Has no native function)
	void ReceiveActorOnInputTouchEnter(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchEnd (Has no native function)
	void ReceiveActorOnInputTouchEnd(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnInputTouchBegin (Has no native function)
	void ReceiveActorOnInputTouchBegin(struct TEnumAsByte<ETouchIndex>& FingerIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorOnClicked (Has no native function)
	void ReceiveActorOnClicked(struct FKey& ButtonPressed); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorEndOverlap (Has no native function)
	void ReceiveActorEndOverlap(class AActor*& OtherActor); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorEndCursorOver (Has no native function)
	void ReceiveActorEndCursorOver(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorBeginOverlap (Has no native function)
	void ReceiveActorBeginOverlap(class AActor*& OtherActor); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.ReceiveActorBeginCursorOver (Has no native function)
	void ReceiveActorBeginCursorOver(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.PrestreamTextures (Underlying native function: PrestreamTextures 0x2c985f8)
	void PrestreamTextures(float& Seconds, bool& bEnableStreaming, int& CinematicTextureGroups); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.OnRep_ReplicateMovement (Underlying native function: OnRep_ReplicateMovement 0x145ca48)
	void OnRepReplicateMovement(); // (Native | Public)

	// Function /Script/Engine.Actor.OnRep_ReplicatedMovement (Underlying native function: OnRep_ReplicatedMovement 0x14cfdb4)
	void OnRepReplicatedMovement(); // (Native | Public)

	// Function /Script/Engine.Actor.OnRep_Owner (Underlying native function: OnRep_Owner 0x14f9024)
	void OnRepOwner(); // (Native | Protected)

	// Function /Script/Engine.Actor.OnRep_Instigator (Underlying native function: OnRep_Instigator 0x14cbef4)
	void OnRepInstigator(); // (Native | Public)

	// Function /Script/Engine.Actor.OnRep_AttachmentReplication (Underlying native function: OnRep_AttachmentReplication 0x134bfb4)
	void OnRepAttachmentReplication(); // (Native | Public)

	// Function /Script/Engine.Actor.MakeNoise (Underlying native function: MakeNoise 0x9c32794)
	void MakeNoise(float& Loudness, class APawn*& NoiseInstigator, struct FVector& NoiseLocation, float& MaxRange, struct FName& tag); // (Final | BlueprintAuthorityOnly | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_TeleportTo (Underlying native function: K2_TeleportTo 0x287ff5c)
	bool K2TeleportTo(struct FVector& DestLocation, struct FRotator& DestRotation); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorTransform (Underlying native function: K2_SetActorTransform 0x24e0ea8)
	bool K2SetActorTransform(struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRotation (Underlying native function: K2_SetActorRotation 0x243c250)
	bool K2SetActorRotation(struct FRotator& NewRotation, bool& bTeleportPhysics); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRelativeTransform (Underlying native function: K2_SetActorRelativeTransform 0x9c32594)
	void K2SetActorRelativeTransform(struct FTransform& NewRelativeTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRelativeRotation (Underlying native function: K2_SetActorRelativeRotation 0x26033d4)
	void K2SetActorRelativeRotation(struct FRotator& NewRelativeRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorRelativeLocation (Underlying native function: K2_SetActorRelativeLocation 0x9c323f0)
	void K2SetActorRelativeLocation(struct FVector& NewRelativeLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorLocationAndRotation (Underlying native function: K2_SetActorLocationAndRotation 0x9c321e8)
	bool K2SetActorLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_SetActorLocation (Underlying native function: K2_SetActorLocation 0x29323c0)
	bool K2SetActorLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_OnReset (Has no native function)
	void K2OnReset(); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.K2_OnEndViewTarget (Has no native function)
	void K2OnEndViewTarget(class APlayerController*& PC); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.K2_OnBecomeViewTarget (Has no native function)
	void K2OnBecomeViewTarget(class APlayerController*& PC); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.Actor.K2_GetRootComponent (Underlying native function: K2_GetRootComponent 0x2451508)
	class USceneComponent* K2GetRootComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_GetComponentsByClass (Underlying native function: K2_GetComponentsByClass 0x1c7f66c)
	struct TArray<class UActorComponent*> K2GetComponentsByClass(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_GetActorRotation (Underlying native function: K2_GetActorRotation 0x234ce28)
	struct FRotator K2GetActorRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_GetActorLocation (Underlying native function: K2_GetActorLocation 0x205de1c)
	struct FVector K2GetActorLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.K2_DetachFromActor (Underlying native function: K2_DetachFromActor 0x9c320e0)
	void K2DetachFromActor(enum EDetachmentRule& LocationRule, enum EDetachmentRule& RotationRule, enum EDetachmentRule& ScaleRule); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_DestroyActor (Underlying native function: K2_DestroyActor 0x2793f5c)
	void K2DestroyActor(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachToComponent (Underlying native function: K2_AttachToComponent 0x2062dac)
	void K2AttachToComponent(class USceneComponent*& Parent, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachToActor (Underlying native function: K2_AttachToActor 0x2b41c80)
	void K2AttachToActor(class AActor*& ParentActor, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachRootComponentToActor (Underlying native function: K2_AttachRootComponentToActor 0x9c31f74)
	void K2AttachRootComponentToActor(class AActor*& InParentActor, struct FName& InSocketName, struct TEnumAsByte<EAttachLocation>& AttachLocationType, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AttachRootComponentTo (Underlying native function: K2_AttachRootComponentTo 0x9c31e28)
	void K2AttachRootComponentTo(class USceneComponent*& InParent, struct FName& InSocketName, struct TEnumAsByte<EAttachLocation>& AttachLocationType, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldTransformKeepScale (Underlying native function: K2_AddActorWorldTransformKeepScale 0x9c31c28)
	void K2AddActorWorldTransformKeepScale(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldTransform (Underlying native function: K2_AddActorWorldTransform 0x9c31a28)
	void K2AddActorWorldTransform(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldRotation (Underlying native function: K2_AddActorWorldRotation 0x9c31884)
	void K2AddActorWorldRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorWorldOffset (Underlying native function: K2_AddActorWorldOffset 0x9c316e0)
	void K2AddActorWorldOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorLocalTransform (Underlying native function: K2_AddActorLocalTransform 0x9c314e0)
	void K2AddActorLocalTransform(struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorLocalRotation (Underlying native function: K2_AddActorLocalRotation 0x9c3133c)
	void K2AddActorLocalRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.K2_AddActorLocalOffset (Underlying native function: K2_AddActorLocalOffset 0x9c31198)
	void K2AddActorLocalOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.IsOverlappingActor (Underlying native function: IsOverlappingActor 0x9c31108)
	bool IsOverlappingActor(class AActor*& Other); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.IsChildActor (Underlying native function: IsChildActor 0x9c3109c)
	bool IsChildActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.IsActorTickEnabled (Underlying native function: IsActorTickEnabled 0x9c31084)
	bool IsActorTickEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.IsActorBeingDestroyed (Underlying native function: IsActorBeingDestroyed 0x2d0f8a4)
	bool IsActorBeingDestroyed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.HasAuthority (Underlying native function: HasAuthority 0x22e8068)
	bool HasAuthority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetVerticalDistanceTo (Underlying native function: GetVerticalDistanceTo 0x9c30f50)
	float GetVerticalDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetVelocity (Underlying native function: GetVelocity 0x1de9ea8)
	struct FVector GetVelocity(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetTransform (Underlying native function: GetTransform 0x2713aac)
	struct FTransform GetTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetTickableWhenPaused (Underlying native function: GetTickableWhenPaused 0x9c30f38)
	bool GetTickableWhenPaused(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.GetSquaredHorizontalDistanceTo (Underlying native function: GetSquaredHorizontalDistanceTo 0x9c30dfc)
	float GetSquaredHorizontalDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetSquaredDistanceTo (Underlying native function: GetSquaredDistanceTo 0x9c30d6c)
	float GetSquaredDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetRemoteRole (Underlying native function: GetRemoteRole 0x8f998ec)
	struct TEnumAsByte<ENetRole> GetRemoteRole(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetRayTracingGroupId (Underlying native function: GetRayTracingGroupId 0x9c30d48)
	int GetRayTracingGroupId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetParentComponent (Underlying native function: GetParentComponent 0x86d0084)
	class UChildActorComponent* GetParentComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetParentActor (Underlying native function: GetParentActor 0x9c30d24)
	class AActor* GetParentActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetOwner (Underlying native function: GetOwner 0x27122cc)
	class AActor* GetOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetOverlappingComponents (Underlying native function: GetOverlappingComponents 0x9c30c88)
	void GetOverlappingComponents(struct TArray<class UPrimitiveComponent*>& OverlappingComponents); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetOverlappingActors (Underlying native function: GetOverlappingActors 0x9c30b98)
	void GetOverlappingActors(struct TArray<class AActor*>& OverlappingActors, class UClass*& ClassFilter); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLocalRole (Underlying native function: GetLocalRole 0x29696fc)
	struct TEnumAsByte<ENetRole> GetLocalRole(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLifeSpan (Underlying native function: GetLifeSpan 0x9c30b2c)
	float GetLifeSpan(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLevelTransform (Underlying native function: GetLevelTransform 0x9c30ad0)
	struct FTransform GetLevelTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetLevel (Underlying native function: GetLevel 0x9c30a94)
	class ULevel* GetLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInstigatorController (Underlying native function: GetInstigatorController 0x2532dbc)
	class AController* GetInstigatorController(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInstigator (Underlying native function: GetInstigator 0x22ba118)
	class APawn* GetInstigator(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInputVectorAxisValue (Underlying native function: GetInputVectorAxisValue 0x9c30938)
	struct FVector GetInputVectorAxisValue(struct FKey& InputAxisKey); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInputAxisValue (Underlying native function: GetInputAxisValue 0x9c308a8)
	float GetInputAxisValue(struct FName& InputAxisName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetInputAxisKeyValue (Underlying native function: GetInputAxisKeyValue 0x9c307c0)
	float GetInputAxisKeyValue(struct FKey& InputAxisKey); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetHorizontalDotProductTo (Underlying native function: GetHorizontalDotProductTo 0x9c30470)
	float GetHorizontalDotProductTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetHorizontalDistanceTo (Underlying native function: GetHorizontalDistanceTo 0x9c30330)
	float GetHorizontalDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetGameTimeSinceCreation (Underlying native function: GetGameTimeSinceCreation 0x9c30308)
	float GetGameTimeSinceCreation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetDotProductTo (Underlying native function: GetDotProductTo 0x9c2ffc0)
	float GetDotProductTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetDistanceTo (Underlying native function: GetDistanceTo 0x9c2ff30)
	float GetDistanceTo(class AActor*& OtherActor); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetComponentsByTag (Underlying native function: GetComponentsByTag 0x9c2fe20)
	struct TArray<class UActorComponent*> GetComponentsByTag(class UClass*& ComponentClass, struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetComponentsByInterface (Underlying native function: GetComponentsByInterface 0x9c2fd54)
	struct TArray<class UActorComponent*> GetComponentsByInterface(class UClass*& Interface); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetComponentByClass (Underlying native function: GetComponentByClass 0x1cbb0f0)
	class UActorComponent* GetComponentByClass(class UClass*& ComponentClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAttachParentSocketName (Underlying native function: GetAttachParentSocketName 0x9c2fc28)
	struct FName GetAttachParentSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAttachParentActor (Underlying native function: GetAttachParentActor 0x24711d0)
	class AActor* GetAttachParentActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAttachedActors (Underlying native function: GetAttachedActors 0x29d93c8)
	void GetAttachedActors(struct TArray<class AActor*>& OutActors, bool& bResetArray, bool& bRecursivelyIncludeAttachedActors); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetAllChildActors (Underlying native function: GetAllChildActors 0x9c2fb34)
	void GetAllChildActors(struct TArray<class AActor*>& ChildActors, bool& bIncludeDescendants); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorUpVector (Underlying native function: GetActorUpVector 0x9c2f9a4)
	struct FVector GetActorUpVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorTimeDilation (Underlying native function: GetActorTimeDilation 0x9c2f97c)
	float GetActorTimeDilation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorTickInterval (Underlying native function: GetActorTickInterval 0x23fe6e4)
	float GetActorTickInterval(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorScale3D (Underlying native function: GetActorScale3D 0x224cb08)
	struct FVector GetActorScale3D(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorRightVector (Underlying native function: GetActorRightVector 0x9c2f7e8)
	struct FVector GetActorRightVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorRelativeScale3D (Underlying native function: GetActorRelativeScale3D 0x9c2f790)
	struct FVector GetActorRelativeScale3D(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorForwardVector (Underlying native function: GetActorForwardVector 0x23697a4)
	struct FVector GetActorForwardVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorEyesViewPoint (Underlying native function: GetActorEyesViewPoint 0x9c2f6ac)
	void GetActorEyesViewPoint(struct FVector& OutLocation, struct FRotator& OutRotation); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorEnableCollision (Underlying native function: GetActorEnableCollision 0x9c2f694)
	bool GetActorEnableCollision(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.GetActorBounds (Underlying native function: GetActorBounds 0x29c348c)
	void GetActorBounds(bool& bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool& bIncludeFromChildActors); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.Actor.ForceNetUpdate (Underlying native function: ForceNetUpdate 0x2b3f178)
	void ForceNetUpdate(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.FlushNetDormancy (Underlying native function: FlushNetDormancy 0x9c2f680)
	void FlushNetDormancy(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.FinishAddComponent (Underlying native function: FinishAddComponent 0x9c2f424)
	void FinishAddComponent(class UActorComponent*& Component, bool& bManualAttachment, struct FTransform& RelativeTransform); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.EnableInput (Underlying native function: EnableInput 0x9c2f3a0)
	void EnableInput(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.DisableInput (Underlying native function: DisableInput 0x9c2f31c)
	void DisableInput(class APlayerController*& PlayerController); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.DetachRootComponentFromParent (Underlying native function: DetachRootComponentFromParent 0x9c2f29c)
	void DetachRootComponentFromParent(bool& bMaintainWorldPosition); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.CreateInputComponent (Underlying native function: CreateInputComponent 0x5ffc4c0)
	void CreateInputComponent(class UClass*& InputComponentToCreate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.AddTickPrerequisiteComponent (Underlying native function: AddTickPrerequisiteComponent 0x9c2f218)
	void AddTickPrerequisiteComponent(class UActorComponent*& PrerequisiteComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.AddTickPrerequisiteActor (Underlying native function: AddTickPrerequisiteActor 0x9c2f194)
	void AddTickPrerequisiteActor(class AActor*& PrerequisiteActor); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.Actor.AddComponentByClass (Underlying native function: AddComponentByClass 0x249b0b4)
	class UActorComponent* AddComponentByClass(class UClass*& Class, bool& bManualAttachment, struct FTransform& RelativeTransform, bool& bDeferredFinish); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.AddComponent (Underlying native function: AddComponent 0x145de90)
	class UActorComponent* AddComponent(struct FName& TemplateName, bool& bManualAttachment, struct FTransform& RelativeTransform, class UObject*& ComponentTemplateContext, bool& bDeferredFinish); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.Actor.ActorHasTag (Underlying native function: ActorHasTag 0x1e8a308)
	bool ActorHasTag(struct FName& tag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

