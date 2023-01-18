// Class /Script/Engine.SceneComponent
// Size: 0x2a0
class USceneComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct TWeakObjectPtr<class APhysicsVolume> PhysicsVolume; // 0xa8 (0x8)
	class USceneComponent* AttachParent; // 0xb0 (0x8)
	struct FName AttachSocketName; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct TArray<class USceneComponent*> AttachChildren; // 0xc0 (0x10)
	struct TArray<class USceneComponent*> ClientAttachedChildren; // 0xd0 (0x10)
	unsigned char unreflected_e0[0x48]; // 0xe0 (0x48) 
	struct FVector RelativeLocation; // 0x128 (0x18)
	struct FRotator RelativeRotation; // 0x140 (0x18)
	struct FVector RelativeScale3D; // 0x158 (0x18)
	struct FVector ComponentVelocity; // 0x170 (0x18)
	unsigned char bComponentToWorldUpdated; // 0x188 (0x1)
	unsigned char bAbsoluteLocation; // 0x188 (0x1)
	unsigned char bAbsoluteRotation; // 0x188 (0x1)
	unsigned char bAbsoluteScale; // 0x188 (0x1)
	unsigned char bVisible; // 0x188 (0x1)
	unsigned char bShouldBeAttached; // 0x188 (0x1)
	unsigned char bShouldSnapLocationWhenAttached; // 0x188 (0x1)
	unsigned char bShouldSnapRotationWhenAttached; // 0x189 (0x1)
	unsigned char bShouldSnapScaleWhenAttached; // 0x189 (0x1)
	unsigned char bShouldUpdatePhysicsVolume; // 0x189 (0x1)
	unsigned char bHiddenInGame; // 0x189 (0x1)
	unsigned char bBoundsChangeTriggersStreamingDataRebuild; // 0x189 (0x1)
	unsigned char bUseAttachParentBound; // 0x189 (0x1)
	unsigned char bComputeFastLocalBounds; // 0x189 (0x1)
	unsigned char bComputeBoundsOnceForGame; // 0x189 (0x1)
	unsigned char bComputedBoundsOnceForGame; // 0x18a (0x1)
	unsigned char bIsNotRenderAttachmentRoot; // 0x18a (0x1)
	struct TEnumAsByte<EComponentMobility> Mobility; // 0x18b (0x1)
	struct TEnumAsByte<EDetailMode> DetailMode; // 0x18c (0x1)
	struct FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x18d (0x1)
	unsigned char padding_18e[0x112]; // 0x18e (0x112)

	/* Functions */

	// Function /Script/Engine.SceneComponent.ToggleVisibility (Underlying native function: ToggleVisibility 0x9c1ac2c)
	void ToggleVisibility(bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetWorldScale3D (Underlying native function: SetWorldScale3D 0x26b0b0c)
	void SetWorldScale3D(struct FVector& NewScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetVisibility (Underlying native function: SetVisibility 0x11b9fa4)
	void SetVisibility(bool& bNewVisibility, bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetShouldUpdatePhysicsVolume (Underlying native function: SetShouldUpdatePhysicsVolume 0x9c1abac)
	void SetShouldUpdatePhysicsVolume(bool& bInShouldUpdatePhysicsVolume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetRelativeScale3D (Underlying native function: SetRelativeScale3D 0x2b41bf0)
	void SetRelativeScale3D(struct FVector& NewScale3D); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetMobility (Underlying native function: SetMobility 0x9c1ab28)
	void SetMobility(struct TEnumAsByte<EComponentMobility>& NewMobility); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetHiddenInGame (Underlying native function: SetHiddenInGame 0x11b8afc)
	void SetHiddenInGame(bool& NewHidden, bool& bPropagateToChildren); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.SetAbsolute (Underlying native function: SetAbsolute 0x26b7a3c)
	void SetAbsolute(bool& bNewAbsoluteLocation, bool& bNewAbsoluteRotation, bool& bNewAbsoluteScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.ResetRelativeTransform (Underlying native function: ResetRelativeTransform 0x9c1ab14)
	void ResetRelativeTransform(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.OnRep_Visibility (Underlying native function: OnRep_Visibility 0x9c1a9d0)
	void OnRepVisibility(bool& OldValue); // (Final | Native | Private)

	// Function /Script/Engine.SceneComponent.OnRep_Transform (Underlying native function: OnRep_Transform 0x2a06170)
	void OnRepTransform(); // (Final | Native | Private)

	// Function /Script/Engine.SceneComponent.OnRep_AttachSocketName (Underlying native function: OnRep_AttachSocketName 0x2758664)
	void OnRepAttachSocketName(); // (Final | Native | Private)

	// Function /Script/Engine.SceneComponent.OnRep_AttachParent (Underlying native function: OnRep_AttachParent 0x29e97f8)
	void OnRepAttachParent(); // (Final | Native | Private)

	// Function /Script/Engine.SceneComponent.OnRep_AttachChildren (Underlying native function: OnRep_AttachChildren 0x2d0ab18)
	void OnRepAttachChildren(); // (Final | Native | Private)

	// Function /Script/Engine.SceneComponent.K2_SetWorldTransform (Underlying native function: K2_SetWorldTransform 0x22c0e70)
	void K2SetWorldTransform(struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetWorldRotation (Underlying native function: K2_SetWorldRotation 0x161205c)
	void K2SetWorldRotation(struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetWorldLocationAndRotation (Underlying native function: K2_SetWorldLocationAndRotation 0x9c1a7d8)
	void K2SetWorldLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetWorldLocation (Underlying native function: K2_SetWorldLocation 0x23f5560)
	void K2SetWorldLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetRelativeTransform (Underlying native function: K2_SetRelativeTransform 0x277e308)
	void K2SetRelativeTransform(struct FTransform& NewTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetRelativeRotation (Underlying native function: K2_SetRelativeRotation 0x1610648)
	void K2SetRelativeRotation(struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetRelativeLocationAndRotation (Underlying native function: K2_SetRelativeLocationAndRotation 0x9c1a5e0)
	void K2SetRelativeLocationAndRotation(struct FVector& NewLocation, struct FRotator& NewRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_SetRelativeLocation (Underlying native function: K2_SetRelativeLocation 0x161235c)
	void K2SetRelativeLocation(struct FVector& NewLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_GetComponentToWorld (Underlying native function: K2_GetComponentToWorld 0x25bfdd4)
	struct FTransform K2GetComponentToWorld(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.K2_GetComponentScale (Underlying native function: K2_GetComponentScale 0x2944954)
	struct FVector K2GetComponentScale(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.K2_GetComponentRotation (Underlying native function: K2_GetComponentRotation 0x26fae10)
	struct FRotator K2GetComponentRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.K2_GetComponentLocation (Underlying native function: K2_GetComponentLocation 0x24a9654)
	struct FVector K2GetComponentLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.K2_DetachFromComponent (Underlying native function: K2_DetachFromComponent 0x121aeb0)
	void K2DetachFromComponent(enum EDetachmentRule& LocationRule, enum EDetachmentRule& RotationRule, enum EDetachmentRule& ScaleRule, bool& bCallModify); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AttachToComponent (Underlying native function: K2_AttachToComponent 0x2353eb8)
	bool K2AttachToComponent(class USceneComponent*& Parent, struct FName& SocketName, enum EAttachmentRule& LocationRule, enum EAttachmentRule& RotationRule, enum EAttachmentRule& ScaleRule, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AttachTo (Underlying native function: K2_AttachTo 0x9c1a4a0)
	bool K2AttachTo(class USceneComponent*& InParent, struct FName& InSocketName, struct TEnumAsByte<EAttachLocation>& AttachType, bool& bWeldSimulatedBodies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddWorldTransformKeepScale (Underlying native function: K2_AddWorldTransformKeepScale 0x9c1a2a0)
	void K2AddWorldTransformKeepScale(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddWorldTransform (Underlying native function: K2_AddWorldTransform 0x9c1a0a0)
	void K2AddWorldTransform(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddWorldRotation (Underlying native function: K2_AddWorldRotation 0x9c19efc)
	void K2AddWorldRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddWorldOffset (Underlying native function: K2_AddWorldOffset 0x9c19d58)
	void K2AddWorldOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddRelativeRotation (Underlying native function: K2_AddRelativeRotation 0x9c19b84)
	void K2AddRelativeRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddRelativeLocation (Underlying native function: K2_AddRelativeLocation 0x9c199e8)
	void K2AddRelativeLocation(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddLocalTransform (Underlying native function: K2_AddLocalTransform 0x9c197e8)
	void K2AddLocalTransform(struct FTransform& DeltaTransform, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddLocalRotation (Underlying native function: K2_AddLocalRotation 0x9c19644)
	void K2AddLocalRotation(struct FRotator& DeltaRotation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.K2_AddLocalOffset (Underlying native function: K2_AddLocalOffset 0x9c194a0)
	void K2AddLocalOffset(struct FVector& DeltaLocation, bool& bSweep, struct FHitResult& SweepHitResult, bool& bTeleport); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SceneComponent.IsVisible (Underlying native function: IsVisible 0x9c19478)
	bool IsVisible(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.IsSimulatingPhysics (Underlying native function: IsSimulatingPhysics 0x9c193e4)
	bool IsSimulatingPhysics(struct FName& BoneName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.IsAnySimulatingPhysics (Underlying native function: IsAnySimulatingPhysics 0x871a5b0)
	bool IsAnySimulatingPhysics(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetUpVector (Underlying native function: GetUpVector 0x9c1929c)
	struct FVector GetUpVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetSocketTransform (Underlying native function: GetSocketTransform 0x20acdd8)
	struct FTransform GetSocketTransform(struct FName& InSocketName, struct TEnumAsByte<ERelativeTransformSpace>& TransformSpace); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetSocketRotation (Underlying native function: GetSocketRotation 0x2ce9408)
	struct FRotator GetSocketRotation(struct FName& InSocketName); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetSocketQuaternion (Underlying native function: GetSocketQuaternion 0x9c191f8)
	struct FQuat GetSocketQuaternion(struct FName& InSocketName); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetSocketLocation (Underlying native function: GetSocketLocation 0x250b780)
	struct FVector GetSocketLocation(struct FName& InSocketName); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetShouldUpdatePhysicsVolume (Underlying native function: GetShouldUpdatePhysicsVolume 0x9c191dc)
	bool GetShouldUpdatePhysicsVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetRightVector (Underlying native function: GetRightVector 0x24a6e3c)
	struct FVector GetRightVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetRelativeTransform (Underlying native function: GetRelativeTransform 0x9c19160)
	struct FTransform GetRelativeTransform(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetPhysicsVolume (Underlying native function: GetPhysicsVolume 0x9c1913c)
	class APhysicsVolume* GetPhysicsVolume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetParentComponents (Underlying native function: GetParentComponents 0x9c19054)
	void GetParentComponents(struct TArray<class USceneComponent*>& Parents); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetNumChildrenComponents (Underlying native function: GetNumChildrenComponents 0x720d2a8)
	int GetNumChildrenComponents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetForwardVector (Underlying native function: GetForwardVector 0x243c100)
	struct FVector GetForwardVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetComponentVelocity (Underlying native function: GetComponentVelocity 0x9c19018)
	struct FVector GetComponentVelocity(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetChildrenComponents (Underlying native function: GetChildrenComponents 0xfb08bc)
	void GetChildrenComponents(bool& bIncludeAllDescendants, struct TArray<class USceneComponent*>& Children); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetChildComponent (Underlying native function: GetChildComponent 0x9c18f8c)
	class USceneComponent* GetChildComponent(int& ChildIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetAttachSocketName (Underlying native function: GetAttachSocketName 0x2d00a0c)
	struct FName GetAttachSocketName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetAttachParent (Underlying native function: GetAttachParent 0x76c2d0c)
	class USceneComponent* GetAttachParent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.GetAllSocketNames (Underlying native function: GetAllSocketNames 0x9c18f18)
	struct TArray<struct FName> GetAllSocketNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.DoesSocketExist (Underlying native function: DoesSocketExist 0x25f3870)
	bool DoesSocketExist(struct FName& InSocketName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SceneComponent.DetachFromParent (Underlying native function: DetachFromParent 0x9c18e4c)
	void DetachFromParent(bool& bMaintainWorldPosition, bool& bCallModify); // (Native | Public | BlueprintCallable)
};

