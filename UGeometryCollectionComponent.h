// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xb20
class UGeometryCollectionComponent : public UMeshComponent
{
	unsigned char unreflected_580[0x8]; // 0x580 (0x8) 
	class AChaosSolverActor* ChaosSolverActor; // 0x588 (0x8)
	unsigned char unreflected_590[0xe8]; // 0x590 (0xe8) 
	class UGeometryCollection* RestCollection; // 0x678 (0x8)
	struct TArray<class AFieldSystemActor*> InitializationFields; // 0x680 (0x10)
	bool Simulating; // 0x690 (0x1)
	unsigned char unreflected_691[0x1]; // 0x691 (0x1) 
	enum EObjectStateTypeEnum ObjectType; // 0x692 (0x1)
	bool bForceMotionBlur; // 0x693 (0x1)
	bool EnableClustering; // 0x694 (0x1)
	unsigned char unreflected_695[0x3]; // 0x695 (0x3) 
	int ClusterGroupIndex; // 0x698 (0x4)
	int MaxClusterLevel; // 0x69c (0x4)
	struct TArray<float> DamageThreshold; // 0x6a0 (0x10)
	bool bUseSizeSpecificDamageThreshold; // 0x6b0 (0x1)
	unsigned char unreflected_6b1[0x3]; // 0x6b1 (0x3) 
	struct FGeometryCollectionDamagePropagationData DamagePropagationData; // 0x6b4 (0xc)
	bool bAllowRemovalOnSleep; // 0x6c0 (0x1)
	bool bAllowRemovalOnBreak; // 0x6c1 (0x1)
	enum EClusterConnectionTypeEnum ClusterConnectionType; // 0x6c2 (0x1)
	unsigned char unreflected_6c3[0x1]; // 0x6c3 (0x1) 
	int CollisionGroup; // 0x6c4 (0x4)
	float CollisionSampleFraction; // 0x6c8 (0x4)
	float LinearEtherDrag; // 0x6cc (0x4)
	float AngularEtherDrag; // 0x6d0 (0x4)
	unsigned char unreflected_6d4[0x4]; // 0x6d4 (0x4) 
	class UChaosPhysicalMaterial* PhysicalMaterial; // 0x6d8 (0x8)
	enum EInitialVelocityTypeEnum InitialVelocityType; // 0x6e0 (0x1)
	unsigned char unreflected_6e1[0x7]; // 0x6e1 (0x7) 
	struct FVector InitialLinearVelocity; // 0x6e8 (0x18)
	struct FVector InitialAngularVelocity; // 0x700 (0x18)
	class UPhysicalMaterial* PhysicalMaterialOverride; // 0x718 (0x8)
	struct FGeomComponentCacheParameters CacheParameters; // 0x720 (0x50)
	struct TArray<struct FTransform> RestTransforms; // 0x770 (0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x780 (0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x790 (0x10)
	unsigned char unreflected_7a0[0x18]; // 0x7a0 (0x18) 
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x7b8 (0x10)
	struct FMulticastInlineDelegate OnChaosRemovalEvent; // 0x7c8 (0x10)
	struct FMulticastInlineDelegate OnChaosCrumblingEvent; // 0x7d8 (0x10)
	float DesiredCacheTime; // 0x7e8 (0x4)
	bool CachePlayback; // 0x7ec (0x1)
	unsigned char unreflected_7ed[0x3]; // 0x7ed (0x3) 
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x7f0 (0x10)
	bool bNotifyBreaks; // 0x800 (0x1)
	bool bNotifyCollisions; // 0x801 (0x1)
	bool bNotifyTrailing; // 0x802 (0x1)
	bool bNotifyRemovals; // 0x803 (0x1)
	bool bNotifyCrumblings; // 0x804 (0x1)
	bool bCrumblingEventIncludesChildren; // 0x805 (0x1)
	bool bStoreVelocities; // 0x806 (0x1)
	bool bShowBoneColors; // 0x807 (0x1)
	class AGeometryCollectionISMPoolActor* ISMPool; // 0x808 (0x8)
	unsigned char unreflected_810[0x8]; // 0x810 (0x8) 
	bool bEnableReplication; // 0x818 (0x1)
	bool bEnableAbandonAfterLevel; // 0x819 (0x1)
	unsigned char unreflected_81a[0x2]; // 0x81a (0x2) 
	int ReplicationAbandonClusterLevel; // 0x81c (0x4)
	int ReplicationAbandonAfterLevel; // 0x820 (0x4)
	unsigned char unreflected_824[0x4]; // 0x824 (0x4) 
	struct FGeometryCollectionRepData RepData; // 0x828 (0x28)
	unsigned char unreflected_850[0x288]; // 0x850 (0x288) 
	class UBodySetup* DummyBodySetup; // 0xad8 (0x8)
	unsigned char unreflected_ae0[0x8]; // 0xae0 (0x8) 
	struct TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents; // 0xae8 (0x10)
	unsigned char padding_af8[0x28]; // 0xaf8 (0x28)

	/* Functions */

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection (Underlying native function: SetRestCollection 0x99cddac)
	void SetRestCollection(class UGeometryCollection*& RestCollectionIn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals (Underlying native function: SetNotifyRemovals 0x99cdbe8)
	void SetNotifyRemovals(bool& bNewNotifyRemovals); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings (Underlying native function: SetNotifyCrumblings 0x99cdb58)
	void SetNotifyCrumblings(bool& bNewNotifyCrumblings); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks (Underlying native function: SetNotifyBreaks 0x99cdac8)
	void SetNotifyBreaks(bool& bNewNotifyBreaks); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox (Underlying native function: SetAnchoredByTransformedBox 0x5fa3160)
	void SetAnchoredByTransformedBox(struct FBox& Box, struct FTransform& Transform, bool& bAnchored); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex (Underlying native function: SetAnchoredByIndex 0x5fa3040)
	void SetAnchoredByIndex(int& Index, bool& bAnchored); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox (Underlying native function: SetAnchoredByBox 0x5fa2e90)
	void SetAnchoredByBox(struct FBox& WorldSpaceBox, bool& bAnchored); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors (Underlying native function: RemoveAllAnchors 0x99cd700)
	void RemoveAllAnchors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision (Has no native function)
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // (Event | Public | HasOutParms | BlueprintEvent)

	// DelegateFunction /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature (Has no native function)
	void NotifyGeometryCollectionPhysicsStateChangeDelegateSignature(class UGeometryCollectionComponent*& FracturedComponent); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature (Has no native function)
	void NotifyGeometryCollectionPhysicsLoadingStateChangeDelegateSignature(class UGeometryCollectionComponent*& FracturedComponent); // (MulticastDelegate | Public | Delegate)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex (Underlying native function: GetRootIndex 0x5fa2e60)
	int GetRootIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents (Underlying native function: GetMassAndExtents 0x99cd458)
	void GetMassAndExtents(int& ItemIndex, float& OutMass, struct FBox& OutExtents); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds (Underlying native function: GetLocalBounds 0x5fa2e10)
	struct FBox GetLocalBounds(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel (Underlying native function: GetInitialLevel 0x99cd3cc)
	int GetInitialLevel(int& ItemIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo (Underlying native function: GetDebugInfo 0x5fa2dc0)
	struct FString GetDebugInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster (Underlying native function: CrumbleCluster 0x99cd310)
	void CrumbleCluster(int& ItemIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters (Underlying native function: CrumbleActiveClusters 0x99cd2d0)
	void CrumbleActiveClusters(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField (Underlying native function: ApplyPhysicsField 0x99cd180)
	void ApplyPhysicsField(bool& Enabled, enum EGeometryCollectionPhysicsTypeEnum& Target, class UFieldSystemMetaData*& MetaData, class UFieldNodeBase*& Field); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity (Underlying native function: ApplyLinearVelocity 0x99cd084)
	void ApplyLinearVelocity(int& ItemIndex, struct FVector& LinearVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField (Underlying native function: ApplyKinematicField 0x99ccfa8)
	void ApplyKinematicField(float& Radius, struct FVector& Position); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain (Underlying native function: ApplyInternalStrain 0x99ccdc4)
	void ApplyInternalStrain(int& ItemIndex, struct FVector& Location, float& Radius, int& PropagationDepth, float& PropagationFactor, float& Strain); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain (Underlying native function: ApplyExternalStrain 0x99ccbe0)
	void ApplyExternalStrain(int& ItemIndex, struct FVector& Location, float& Radius, int& PropagationDepth, float& PropagationFactor, float& Strain); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity (Underlying native function: ApplyBreakingLinearVelocity 0x99ccb08)
	void ApplyBreakingLinearVelocity(int& ItemIndex, struct FVector& LinearVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity (Underlying native function: ApplyBreakingAngularVelocity 0x99ccb08)
	void ApplyBreakingAngularVelocity(int& ItemIndex, struct FVector& AngularVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity (Underlying native function: ApplyAngularVelocity 0x99cca0c)
	void ApplyAngularVelocity(int& ItemIndex, struct FVector& AngularVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

