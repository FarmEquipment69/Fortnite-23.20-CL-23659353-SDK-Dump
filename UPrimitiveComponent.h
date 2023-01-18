// Class /Script/Engine.PrimitiveComponent
// Size: 0x540
class UPrimitiveComponent : public USceneComponent
{
	unsigned char unreflected_2a0[0x10]; // 0x2a0 (0x10) 
	float MinDrawDistance; // 0x2b0 (0x4)
	float LDMaxDrawDistance; // 0x2b4 (0x4)
	float CachedMaxDrawDistance; // 0x2b8 (0x4)
	struct TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup; // 0x2bc (0x1)
	struct TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup; // 0x2bd (0x1)
	struct TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality; // 0x2be (0x1)
	enum ELightmapType LightmapType; // 0x2bf (0x1)
	enum EHLODBatchingPolicy HLODBatchingPolicy; // 0x2c0 (0x1)
	unsigned char bEnableAutoLODGeneration; // 0x2c1 (0x1)
	unsigned char bIsActorTextureStreamingBuiltData; // 0x2c1 (0x1)
	unsigned char bIsValidTextureStreamingBuiltData; // 0x2c1 (0x1)
	unsigned char bNeverDistanceCull; // 0x2c1 (0x1)
	unsigned char bAlwaysCreatePhysicsState; // 0x2c2 (0x1)
	unsigned char bGenerateOverlapEvents; // 0x2c2 (0x1)
	unsigned char bMultiBodyOverlap; // 0x2c2 (0x1)
	unsigned char bTraceComplexOnMove; // 0x2c2 (0x1)
	unsigned char bReturnMaterialOnMove; // 0x2c2 (0x1)
	unsigned char bUseViewOwnerDepthPriorityGroup; // 0x2c2 (0x1)
	unsigned char bAllowCullDistanceVolume; // 0x2c2 (0x1)
	unsigned char bVisibleInReflectionCaptures; // 0x2c3 (0x1)
	unsigned char bVisibleInRealTimeSkyCaptures; // 0x2c3 (0x1)
	unsigned char bVisibleInRayTracing; // 0x2c3 (0x1)
	unsigned char bRenderInMainPass; // 0x2c3 (0x1)
	unsigned char bRenderInDepthPass; // 0x2c3 (0x1)
	unsigned char bReceivesDecals; // 0x2c3 (0x1)
	unsigned char bOwnerNoSee; // 0x2c3 (0x1)
	unsigned char bOnlyOwnerSee; // 0x2c3 (0x1)
	unsigned char bTreatAsBackgroundForOcclusion; // 0x2c4 (0x1)
	unsigned char bUseAsOccluder; // 0x2c4 (0x1)
	unsigned char bSelectable; // 0x2c4 (0x1)
	unsigned char bForceMipStreaming; // 0x2c4 (0x1)
	unsigned char bHasPerInstanceHitProxies; // 0x2c4 (0x1)
	unsigned char CastShadow; // 0x2c4 (0x1)
	unsigned char bEmissiveLightSource; // 0x2c4 (0x1)
	unsigned char bAffectDynamicIndirectLighting; // 0x2c4 (0x1)
	unsigned char bAffectIndirectLightingWhileHidden; // 0x2c5 (0x1)
	unsigned char bAffectDistanceFieldLighting; // 0x2c5 (0x1)
	unsigned char bCastDynamicShadow; // 0x2c5 (0x1)
	unsigned char bCastStaticShadow; // 0x2c5 (0x1)
	unsigned char bCastVolumetricTranslucentShadow; // 0x2c5 (0x1)
	unsigned char bCastContactShadow; // 0x2c5 (0x1)
	unsigned char bSelfShadowOnly; // 0x2c5 (0x1)
	unsigned char bCastFarShadow; // 0x2c5 (0x1)
	unsigned char bCastInsetShadow; // 0x2c6 (0x1)
	unsigned char bCastCinematicShadow; // 0x2c6 (0x1)
	unsigned char bCastHiddenShadow; // 0x2c6 (0x1)
	unsigned char bCastShadowAsTwoSided; // 0x2c6 (0x1)
	unsigned char bLightAsIfStatic; // 0x2c6 (0x1)
	unsigned char bLightAttachmentsAsGroup; // 0x2c6 (0x1)
	unsigned char bExcludeFromLightAttachmentGroup; // 0x2c6 (0x1)
	unsigned char bReceiveMobileCSMShadows; // 0x2c6 (0x1)
	unsigned char bSingleSampleShadowFromStationaryLights; // 0x2c7 (0x1)
	unsigned char bIgnoreRadialImpulse; // 0x2c7 (0x1)
	unsigned char bIgnoreRadialForce; // 0x2c7 (0x1)
	unsigned char bApplyImpulseOnDamage; // 0x2c7 (0x1)
	unsigned char bReplicatePhysicsToAutonomousProxy; // 0x2c7 (0x1)
	unsigned char bFillCollisionUnderneathForNavmesh; // 0x2c7 (0x1)
	unsigned char AlwaysLoadOnClient; // 0x2c7 (0x1)
	unsigned char AlwaysLoadOnServer; // 0x2c7 (0x1)
	unsigned char bUseEditorCompositing; // 0x2c8 (0x1)
	unsigned char bIsBeingMovedByEditor; // 0x2c8 (0x1)
	unsigned char bRenderCustomDepth; // 0x2c8 (0x1)
	unsigned char bVisibleInSceneCaptureOnly; // 0x2c8 (0x1)
	unsigned char bHiddenInSceneCapture; // 0x2c8 (0x1)
	unsigned char bRayTracingFarField; // 0x2c8 (0x1)
	unsigned char bHasNoStreamableTextures; // 0x2c8 (0x1)
	struct TEnumAsByte<EHasCustomNavigableGeometry> bHasCustomNavigableGeometry; // 0x2c9 (0x1)
	unsigned char unreflected_2ca[0x1]; // 0x2ca (0x1) 
	struct TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn; // 0x2cb (0x1)
	struct FLightingChannels LightingChannels; // 0x2cc (0x1)
	unsigned char unreflected_2cd[0x3]; // 0x2cd (0x3) 
	int RayTracingGroupId; // 0x2d0 (0x4)
	int VisibilityId; // 0x2d4 (0x4)
	int CustomDepthStencilValue; // 0x2d8 (0x4)
	unsigned char unreflected_2dc[0x4]; // 0x2dc (0x4) 
	struct FCustomPrimitiveData CustomPrimitiveData; // 0x2e0 (0x10)
	struct FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x2f0 (0x10)
	unsigned char unreflected_300[0x8]; // 0x300 (0x8) 
	int TranslucencySortPriority; // 0x308 (0x4)
	float TranslucencySortDistanceOffset; // 0x30c (0x4)
	struct TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x310 (0x10)
	int8_t VirtualTextureLodBias; // 0x320 (0x1)
	int8_t VirtualTextureCullMips; // 0x321 (0x1)
	int8_t VirtualTextureMinCoverage; // 0x322 (0x1)
	enum ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x323 (0x1)
	unsigned char unreflected_324[0x10]; // 0x324 (0x10) 
	float BoundsScale; // 0x334 (0x4)
	unsigned char unreflected_338[0x10]; // 0x338 (0x10) 
	struct TArray<class AActor*> MoveIgnoreActors; // 0x348 (0x10)
	struct TArray<class UPrimitiveComponent*> MoveIgnoreComponents; // 0x358 (0x10)
	unsigned char unreflected_368[0x10]; // 0x368 (0x10) 
	struct FBodyInstance BodyInstance; // 0x378 (0x188)
	struct FMulticastSparseDelegate OnComponentHit; // 0x500 (0x1)
	struct FMulticastSparseDelegate OnComponentBeginOverlap; // 0x501 (0x1)
	struct FMulticastSparseDelegate OnComponentEndOverlap; // 0x502 (0x1)
	struct FMulticastSparseDelegate OnComponentWake; // 0x503 (0x1)
	struct FMulticastSparseDelegate OnComponentSleep; // 0x504 (0x1)
	unsigned char unreflected_505[0x1]; // 0x505 (0x1) 
	struct FMulticastSparseDelegate OnComponentPhysicsStateChanged; // 0x506 (0x1)
	struct FMulticastSparseDelegate OnBeginCursorOver; // 0x507 (0x1)
	struct FMulticastSparseDelegate OnEndCursorOver; // 0x508 (0x1)
	struct FMulticastSparseDelegate OnClicked; // 0x509 (0x1)
	struct FMulticastSparseDelegate OnReleased; // 0x50a (0x1)
	struct FMulticastSparseDelegate OnInputTouchBegin; // 0x50b (0x1)
	struct FMulticastSparseDelegate OnInputTouchEnd; // 0x50c (0x1)
	struct FMulticastSparseDelegate OnInputTouchEnter; // 0x50d (0x1)
	struct FMulticastSparseDelegate OnInputTouchLeave; // 0x50e (0x1)
	enum ERayTracingGroupCullingPriority RayTracingGroupCullingPriority; // 0x50f (0x1)
	enum ERendererStencilMask CustomDepthStencilWriteMask; // 0x510 (0x1)
	unsigned char unreflected_511[0x1f]; // 0x511 (0x1f) 
	unsigned char ExcludeFromHLODLevels; // 0x530 (0x1)
	unsigned char unreflected_531[0x7]; // 0x531 (0x7) 
	class UPrimitiveComponent* LODParentPrimitive; // 0x538 (0x8)

	/* Functions */

	// Function /Script/Engine.PrimitiveComponent.WasRecentlyRendered (Underlying native function: WasRecentlyRendered 0x9c17960)
	bool WasRecentlyRendered(float& Tolerance); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.WakeRigidBody (Underlying native function: WakeRigidBody 0x9c178dc)
	void WakeRigidBody(struct FName& BoneName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.WakeAllRigidBodies (Underlying native function: WakeAllRigidBodies 0x8ddee5c)
	void WakeAllRigidBodies(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetWalkableSlopeOverride (Underlying native function: SetWalkableSlopeOverride 0x9c170b4)
	void SetWalkableSlopeOverride(struct FWalkableSlopeOverride& NewOverride); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetVisibleInSceneCaptureOnly (Underlying native function: SetVisibleInSceneCaptureOnly 0x9c17014)
	void SetVisibleInSceneCaptureOnly(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetVisibleInRayTracing (Underlying native function: SetVisibleInRayTracing 0x9c16f94)
	void SetVisibleInRayTracing(bool& bNewVisibleInRayTracing); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetVectorParameterForDefaultCustomPrimitiveData (Underlying native function: SetVectorParameterForDefaultCustomPrimitiveData 0x9c16eac)
	void SetVectorParameterForDefaultCustomPrimitiveData(struct FName& ParameterName, struct FVector4& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetVectorParameterForCustomPrimitiveData (Underlying native function: SetVectorParameterForCustomPrimitiveData 0x9c16dc4)
	void SetVectorParameterForCustomPrimitiveData(struct FName& ParameterName, struct FVector4& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetUseCCD (Underlying native function: SetUseCCD 0x9c16cfc)
	void SetUseCCD(bool& InUseCCD, struct FName& BoneName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetTranslucentSortPriority (Underlying native function: SetTranslucentSortPriority 0x2518424)
	void SetTranslucentSortPriority(int& NewTranslucentSortPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetTranslucencySortDistanceOffset (Underlying native function: SetTranslucencySortDistanceOffset 0x9c16c54)
	void SetTranslucencySortDistanceOffset(float& NewTranslucencySortDistanceOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetSingleSampleShadowFromStationaryLights (Underlying native function: SetSingleSampleShadowFromStationaryLights 0x9c16bb8)
	void SetSingleSampleShadowFromStationaryLights(bool& bNewSingleSampleShadowFromStationaryLights); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetSimulatePhysics (Underlying native function: SetSimulatePhysics 0x9c16b34)
	void SetSimulatePhysics(bool& bSimulate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetScalarParameterForDefaultCustomPrimitiveData (Underlying native function: SetScalarParameterForDefaultCustomPrimitiveData 0x9c16a6c)
	void SetScalarParameterForDefaultCustomPrimitiveData(struct FName& ParameterName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetScalarParameterForCustomPrimitiveData (Underlying native function: SetScalarParameterForCustomPrimitiveData 0x9c169a4)
	void SetScalarParameterForCustomPrimitiveData(struct FName& ParameterName, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetRenderInMainPass (Underlying native function: SetRenderInMainPass 0x9c16924)
	void SetRenderInMainPass(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetRenderInDepthPass (Underlying native function: SetRenderInDepthPass 0x9c16884)
	void SetRenderInDepthPass(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetRenderCustomDepth (Underlying native function: SetRenderCustomDepth 0x1460648)
	void SetRenderCustomDepth(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetReceivesDecals (Underlying native function: SetReceivesDecals 0x215ee10)
	void SetReceivesDecals(bool& bNewReceivesDecals); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetPhysMaterialOverride (Underlying native function: SetPhysMaterialOverride 0x9c16200)
	void SetPhysMaterialOverride(class UPhysicalMaterial*& NewPhysMaterial); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInRadians (Underlying native function: SetPhysicsMaxAngularVelocityInRadians 0x9c166ec)
	void SetPhysicsMaxAngularVelocityInRadians(float& NewMaxAngVel, bool& bAddToCurrent, struct FName& BoneName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetPhysicsMaxAngularVelocityInDegrees (Underlying native function: SetPhysicsMaxAngularVelocityInDegrees 0x9c165d4)
	void SetPhysicsMaxAngularVelocityInDegrees(float& NewMaxAngVel, bool& bAddToCurrent, struct FName& BoneName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetPhysicsLinearVelocity (Underlying native function: SetPhysicsLinearVelocity 0x9c164b8)
	void SetPhysicsLinearVelocity(struct FVector& NewVel, bool& bAddToCurrent, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetPhysicsAngularVelocityInRadians (Underlying native function: SetPhysicsAngularVelocityInRadians 0x9c1639c)
	void SetPhysicsAngularVelocityInRadians(struct FVector& NewAngVel, bool& bAddToCurrent, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetPhysicsAngularVelocityInDegrees (Underlying native function: SetPhysicsAngularVelocityInDegrees 0x9c16284)
	void SetPhysicsAngularVelocityInDegrees(struct FVector& NewAngVel, bool& bAddToCurrent, struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetOwnerNoSee (Underlying native function: SetOwnerNoSee 0x9c16180)
	void SetOwnerNoSee(bool& bNewOwnerNoSee); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetOnlyOwnerSee (Underlying native function: SetOnlyOwnerSee 0x9c16100)
	void SetOnlyOwnerSee(bool& bNewOnlyOwnerSee); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetNotifyRigidBodyCollision (Underlying native function: SetNotifyRigidBodyCollision 0x9c1607c)
	void SetNotifyRigidBodyCollision(bool& bNewNotifyRigidBodyCollision); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetMaterialByName (Underlying native function: SetMaterialByName 0x9c15fb4)
	void SetMaterialByName(struct FName& MaterialSlotName, class UMaterialInterface*& Material); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetMaterial (Underlying native function: SetMaterial 0x2445a30)
	void SetMaterial(int& ElementIndex, class UMaterialInterface*& Material); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetMassScale (Underlying native function: SetMassScale 0x9c15ee8)
	void SetMassScale(struct FName& BoneName, float& InMassScale); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetMassOverrideInKg (Underlying native function: SetMassOverrideInKg 0x9c15de4)
	void SetMassOverrideInKg(struct FName& BoneName, float& MassInKg, bool& bOverrideMass); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetLinearDamping (Underlying native function: SetLinearDamping 0x9c15c54)
	void SetLinearDamping(float& InDamping); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetLightingChannels (Underlying native function: SetLightingChannels 0x9c15b48)
	void SetLightingChannels(bool& bChannel0, bool& bChannel1, bool& bChannel2); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetLightAttachmentsAsGroup (Underlying native function: SetLightAttachmentsAsGroup 0x9c15a40)
	void SetLightAttachmentsAsGroup(bool& bInLightAttachmentsAsGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetHiddenInSceneCapture (Underlying native function: SetHiddenInSceneCapture 0x9c159a0)
	void SetHiddenInSceneCapture(bool& bValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetGenerateOverlapEvents (Underlying native function: SetGenerateOverlapEvents 0x248b4ec)
	void SetGenerateOverlapEvents(bool& bInGenerateOverlapEvents); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetExcludeFromLightAttachmentGroup (Underlying native function: SetExcludeFromLightAttachmentGroup 0x9c15900)
	void SetExcludeFromLightAttachmentGroup(bool& bInExcludeFromLightAttachmentGroup); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetExcludeForSpecificHLODLevels (Underlying native function: SetExcludeForSpecificHLODLevels 0x5ff4c60)
	void SetExcludeForSpecificHLODLevels(struct TArray<int>& InExcludeForSpecificHLODLevels); // (Final | Native | Private | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetExcludedFromHLODLevel (Underlying native function: SetExcludedFromHLODLevel 0x5ff4d40)
	void SetExcludedFromHLODLevel(enum EHLODLevelExclusion& HLODLevel, bool& bExcluded); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetEnableGravity (Underlying native function: SetEnableGravity 0x9c1587c)
	void SetEnableGravity(bool& bGravityEnabled); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetEmissiveLightSource (Underlying native function: SetEmissiveLightSource 0x9c157dc)
	void SetEmissiveLightSource(bool& NewEmissiveLightSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector4 (Underlying native function: SetDefaultCustomPrimitiveDataVector4 0x9c156f4)
	void SetDefaultCustomPrimitiveDataVector4(int& DataIndex, struct FVector4& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector3 (Underlying native function: SetDefaultCustomPrimitiveDataVector3 0x9c15620)
	void SetDefaultCustomPrimitiveDataVector3(int& DataIndex, struct FVector& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataVector2 (Underlying native function: SetDefaultCustomPrimitiveDataVector2 0x9c1551c)
	void SetDefaultCustomPrimitiveDataVector2(int& DataIndex, struct FVector2D& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetDefaultCustomPrimitiveDataFloat (Underlying native function: SetDefaultCustomPrimitiveDataFloat 0x9c15454)
	void SetDefaultCustomPrimitiveDataFloat(int& DataIndex, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataVector4 (Underlying native function: SetCustomPrimitiveDataVector4 0x2d877c4)
	void SetCustomPrimitiveDataVector4(int& DataIndex, struct FVector4& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataVector3 (Underlying native function: SetCustomPrimitiveDataVector3 0x2da6314)
	void SetCustomPrimitiveDataVector3(int& DataIndex, struct FVector& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataVector2 (Underlying native function: SetCustomPrimitiveDataVector2 0x9c15350)
	void SetCustomPrimitiveDataVector2(int& DataIndex, struct FVector2D& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCustomPrimitiveDataFloat (Underlying native function: SetCustomPrimitiveDataFloat 0x2097b34)
	void SetCustomPrimitiveDataFloat(int& DataIndex, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCustomDepthStencilWriteMask (Underlying native function: SetCustomDepthStencilWriteMask 0x9c152c4)
	void SetCustomDepthStencilWriteMask(enum ERendererStencilMask& WriteMaskBit); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCustomDepthStencilValue (Underlying native function: SetCustomDepthStencilValue 0x14603d0)
	void SetCustomDepthStencilValue(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCullDistance (Underlying native function: SetCullDistance 0x2206b44)
	void SetCullDistance(float& NewCullDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetConstraintMode (Underlying native function: SetConstraintMode 0x9c15240)
	void SetConstraintMode(struct TEnumAsByte<EDOFMode>& ConstraintMode); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCollisionResponseToChannel (Underlying native function: SetCollisionResponseToChannel 0x1a4af14)
	void SetCollisionResponseToChannel(struct TEnumAsByte<ECollisionChannel>& Channel, struct TEnumAsByte<ECollisionResponse>& NewResponse); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCollisionResponseToAllChannels (Underlying native function: SetCollisionResponseToAllChannels 0x25f764c)
	void SetCollisionResponseToAllChannels(struct TEnumAsByte<ECollisionResponse>& NewResponse); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCollisionProfileName (Underlying native function: SetCollisionProfileName 0x9c15178)
	void SetCollisionProfileName(struct FName& InCollisionProfileName, bool& bUpdateOverlaps); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCollisionObjectType (Underlying native function: SetCollisionObjectType 0x9c150f4)
	void SetCollisionObjectType(struct TEnumAsByte<ECollisionChannel>& Channel); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCollisionEnabled (Underlying native function: SetCollisionEnabled 0x2460940)
	void SetCollisionEnabled(struct TEnumAsByte<ECollisionEnabled>& NewType); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCenterOfMass (Underlying native function: SetCenterOfMass 0x9c14ffc)
	void SetCenterOfMass(struct FVector& CenterOfMassOffset, struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCastShadow (Underlying native function: SetCastShadow 0x13130dc)
	void SetCastShadow(bool& NewCastShadow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCastInsetShadow (Underlying native function: SetCastInsetShadow 0x9c14f7c)
	void SetCastInsetShadow(bool& bInCastInsetShadow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCastHiddenShadow (Underlying native function: SetCastHiddenShadow 0x9c14efc)
	void SetCastHiddenShadow(bool& NewCastHiddenShadow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetCastContactShadow (Underlying native function: SetCastContactShadow 0x9c14e5c)
	void SetCastContactShadow(bool& bInCastContactShadow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetBoundsScale (Underlying native function: SetBoundsScale 0x2973758)
	void SetBoundsScale(float& NewBoundsScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetAngularDamping (Underlying native function: SetAngularDamping 0x9c14dd4)
	void SetAngularDamping(float& InDamping); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetAllUseCCD (Underlying native function: SetAllUseCCD 0x9c14d50)
	void SetAllUseCCD(bool& InUseCCD); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetAllPhysicsLinearVelocity (Underlying native function: SetAllPhysicsLinearVelocity 0x9c14c74)
	void SetAllPhysicsLinearVelocity(struct FVector& NewVel, bool& bAddToCurrent); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInRadians (Underlying native function: SetAllPhysicsAngularVelocityInRadians 0x9c14b94)
	void SetAllPhysicsAngularVelocityInRadians(struct FVector& NewAngVel, bool& bAddToCurrent); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetAllPhysicsAngularVelocityInDegrees (Underlying native function: SetAllPhysicsAngularVelocityInDegrees 0x9c14a90)
	void SetAllPhysicsAngularVelocityInDegrees(struct FVector& NewAngVel, bool& bAddToCurrent); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.SetAllMassScale (Underlying native function: SetAllMassScale 0x9c14a08)
	void SetAllMassScale(float& InMassScale); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.ScaleByMomentOfInertia (Underlying native function: ScaleByMomentOfInertia 0x9c14914)
	struct FVector ScaleByMomentOfInertia(struct FVector& InputVector, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.PutRigidBodyToSleep (Underlying native function: PutRigidBodyToSleep 0x9c146e8)
	void PutRigidBodyToSleep(struct FName& BoneName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.K2_SphereTraceComponent (Underlying native function: K2_SphereTraceComponent 0x9c14164)
	bool K2SphereTraceComponent(struct FVector& TraceStart, struct FVector& TraceEnd, float& SphereRadius, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.K2_SphereOverlapComponent (Underlying native function: K2_SphereOverlapComponent 0x9c13e60)
	bool K2SphereOverlapComponent(struct FVector& InSphereCentre, float& InSphereRadius, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.K2_LineTraceComponent (Underlying native function: K2_LineTraceComponent 0x9c13b38)
	bool K2LineTraceComponent(struct FVector& TraceStart, struct FVector& TraceEnd, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.K2_IsQueryCollisionEnabled (Underlying native function: K2_IsQueryCollisionEnabled 0x9c13af4)
	bool K2IsQueryCollisionEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.K2_IsPhysicsCollisionEnabled (Underlying native function: K2_IsPhysicsCollisionEnabled 0x9c13ac4)
	bool K2IsPhysicsCollisionEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.K2_IsCollisionEnabled (Underlying native function: K2_IsCollisionEnabled 0x9c13a98)
	bool K2IsCollisionEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.K2_BoxOverlapComponent (Underlying native function: K2_BoxOverlapComponent 0x9c137bc)
	bool K2BoxOverlapComponent(struct FVector& InBoxCentre, struct FBox& InBox, bool& bTraceComplex, bool& bShowTrace, bool& bPersistentShowTrace, struct FVector& HitLocation, struct FVector& HitNormal, struct FName& BoneName, struct FHitResult& OutHit); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.IsOverlappingComponent (Underlying native function: IsOverlappingComponent 0x9c1372c)
	bool IsOverlappingComponent(class UPrimitiveComponent*& OtherComp); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.IsOverlappingActor (Underlying native function: IsOverlappingActor 0x9c13608)
	bool IsOverlappingActor(class AActor*& Other); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.IsGravityEnabled (Underlying native function: IsGravityEnabled 0x9c135e0)
	bool IsGravityEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.IsExcludedFromHLODLevel (Underlying native function: IsExcludedFromHLODLevel 0x5ff4bb0)
	bool IsExcludedFromHLODLevel(enum EHLODLevelExclusion& HLODLevel); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.IsAnyRigidBodyAwake (Underlying native function: IsAnyRigidBodyAwake 0x9c135b8)
	bool IsAnyRigidBodyAwake(); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.PrimitiveComponent.InvalidateLumenSurfaceCache (Underlying native function: InvalidateLumenSurfaceCache 0x9c13584)
	void InvalidateLumenSurfaceCache(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.IgnoreComponentWhenMoving (Underlying native function: IgnoreComponentWhenMoving 0x9c13470)
	void IgnoreComponentWhenMoving(class UPrimitiveComponent*& Component, bool& bShouldIgnore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.IgnoreActorWhenMoving (Underlying native function: IgnoreActorWhenMoving 0x264222c)
	void IgnoreActorWhenMoving(class AActor*& Actor, bool& bShouldIgnore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.GetWalkableSlopeOverride (Underlying native function: GetWalkableSlopeOverride 0x9c13440)
	struct FWalkableSlopeOverride GetWalkableSlopeOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetPhysicsLinearVelocityAtPoint (Underlying native function: GetPhysicsLinearVelocityAtPoint 0x9c132a4)
	struct FVector GetPhysicsLinearVelocityAtPoint(struct FVector& Point, struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.GetPhysicsLinearVelocity (Underlying native function: GetPhysicsLinearVelocity 0x9c13204)
	struct FVector GetPhysicsLinearVelocity(struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.GetPhysicsAngularVelocityInRadians (Underlying native function: GetPhysicsAngularVelocityInRadians 0x9c13164)
	struct FVector GetPhysicsAngularVelocityInRadians(struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetPhysicsAngularVelocityInDegrees (Underlying native function: GetPhysicsAngularVelocityInDegrees 0x9c130c4)
	struct FVector GetPhysicsAngularVelocityInDegrees(struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetOverlappingComponents (Underlying native function: GetOverlappingComponents 0x9c13028)
	void GetOverlappingComponents(struct TArray<class UPrimitiveComponent*>& OutOverlappingComponents); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetOverlappingActors (Underlying native function: GetOverlappingActors 0x9c12f38)
	void GetOverlappingActors(struct TArray<class AActor*>& OverlappingActors, class UClass*& ClassFilter); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetNumMaterials (Underlying native function: GetNumMaterials 0x285664c)
	int GetNumMaterials(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetMaterialFromCollisionFaceIndex (Underlying native function: GetMaterialFromCollisionFaceIndex 0x9c12e2c)
	class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int& FaceIndex, int& SectionIndex); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetMaterial (Underlying native function: GetMaterial 0x224c37c)
	class UMaterialInterface* GetMaterial(int& ElementIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetMassScale (Underlying native function: GetMassScale 0x9c12d98)
	float GetMassScale(struct FName& BoneName); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetMass (Underlying native function: GetMass 0x85bd594)
	float GetMass(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetLinearDamping (Underlying native function: GetLinearDamping 0x9c12d6c)
	float GetLinearDamping(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetInertiaTensor (Underlying native function: GetInertiaTensor 0x9c12cc4)
	struct FVector GetInertiaTensor(struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetGenerateOverlapEvents (Underlying native function: GetGenerateOverlapEvents 0x9c12838)
	bool GetGenerateOverlapEvents(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetExcludeForSpecificHLODLevels (Underlying native function: GetExcludeForSpecificHLODLevels 0x5ff4b60)
	struct TArray<int> GetExcludeForSpecificHLODLevels(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCustomPrimitiveDataIndexForVectorParameter (Underlying native function: GetCustomPrimitiveDataIndexForVectorParameter 0x9c12780)
	int GetCustomPrimitiveDataIndexForVectorParameter(struct FName& ParameterName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCustomPrimitiveDataIndexForScalarParameter (Underlying native function: GetCustomPrimitiveDataIndexForScalarParameter 0x9c126f4)
	int GetCustomPrimitiveDataIndexForScalarParameter(struct FName& ParameterName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCollisionResponseToChannel (Underlying native function: GetCollisionResponseToChannel 0x24b93a8)
	struct TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(struct TEnumAsByte<ECollisionChannel>& Channel); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCollisionProfileName (Underlying native function: GetCollisionProfileName 0x9c126c0)
	struct FName GetCollisionProfileName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCollisionObjectType (Underlying native function: GetCollisionObjectType 0x2da7c4c)
	struct TEnumAsByte<ECollisionChannel> GetCollisionObjectType(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCollisionEnabled (Underlying native function: GetCollisionEnabled 0x8e1c3f4)
	struct TEnumAsByte<ECollisionEnabled> GetCollisionEnabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetClosestPointOnCollision (Underlying native function: GetClosestPointOnCollision 0x9c1258c)
	float GetClosestPointOnCollision(struct FVector& Point, struct FVector& OutPointOnBody, struct FName& BoneName); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetCenterOfMass (Underlying native function: GetCenterOfMass 0x9c124ec)
	struct FVector GetCenterOfMass(struct FName& BoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetBodyInstanceAsyncPhysicsTickHandle (Underlying native function: GetBodyInstanceAsyncPhysicsTickHandle 0x9c123d8)
	struct FBodyInstanceAsyncPhysicsTickHandle* GetBodyInstanceAsyncPhysicsTickHandle(struct FName& BoneName, bool& bGetWelded, int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.GetAngularDamping (Underlying native function: GetAngularDamping 0x9c123ac)
	float GetAngularDamping(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.CreateDynamicMaterialInstance (Underlying native function: CreateDynamicMaterialInstance 0x1569460)
	class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int& ElementIndex, class UMaterialInterface*& SourceMaterial, struct FName& OptionalName); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamicFromMaterial (Underlying native function: CreateAndSetMaterialInstanceDynamicFromMaterial 0x9c12250)
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int& ElementIndex, class UMaterialInterface*& Parent); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.CreateAndSetMaterialInstanceDynamic (Underlying native function: CreateAndSetMaterialInstanceDynamic 0x9c121bc)
	class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int& ElementIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreComponents (Underlying native function: CopyArrayOfMoveIgnoreComponents 0x9c12148)
	struct TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.CopyArrayOfMoveIgnoreActors (Underlying native function: CopyArrayOfMoveIgnoreActors 0x9c120d4)
	struct TArray<class AActor*> CopyArrayOfMoveIgnoreActors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.ClearMoveIgnoreComponents (Underlying native function: ClearMoveIgnoreComponents 0x9c120a4)
	void ClearMoveIgnoreComponents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.ClearMoveIgnoreActors (Underlying native function: ClearMoveIgnoreActors 0x9c12088)
	void ClearMoveIgnoreActors(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.CanCharacterStepUp (Underlying native function: CanCharacterStepUp 0x9c11ff4)
	bool CanCharacterStepUp(class APawn*& Pawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PrimitiveComponent.AddVelocityChangeImpulseAtLocation (Underlying native function: AddVelocityChangeImpulseAtLocation 0x9c11ec4)
	void AddVelocityChangeImpulseAtLocation(struct FVector& Impulse, struct FVector& Location, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddTorqueInRadians (Underlying native function: AddTorqueInRadians 0x9c11db4)
	void AddTorqueInRadians(struct FVector& Torque, struct FName& BoneName, bool& bAccelChange); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddTorqueInDegrees (Underlying native function: AddTorqueInDegrees 0x9c11ca8)
	void AddTorqueInDegrees(struct FVector& Torque, struct FName& BoneName, bool& bAccelChange); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddRadialImpulse (Underlying native function: AddRadialImpulse 0x9c11b10)
	void AddRadialImpulse(struct FVector& Origin, float& Radius, float& Strength, struct TEnumAsByte<ERadialImpulseFalloff>& Falloff, bool& bVelChange); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddRadialForce (Underlying native function: AddRadialForce 0x9c11978)
	void AddRadialForce(struct FVector& Origin, float& Radius, float& Strength, struct TEnumAsByte<ERadialImpulseFalloff>& Falloff, bool& bAccelChange); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddImpulseAtLocation (Underlying native function: AddImpulseAtLocation 0x9c117b4)
	void AddImpulseAtLocation(struct FVector& Impulse, struct FVector& Location, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddImpulse (Underlying native function: AddImpulse 0x9c116a4)
	void AddImpulse(struct FVector& Impulse, struct FName& BoneName, bool& bVelChange); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddForceAtLocationLocal (Underlying native function: AddForceAtLocationLocal 0x9c114d8)
	void AddForceAtLocationLocal(struct FVector& Force, struct FVector& Location, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddForceAtLocation (Underlying native function: AddForceAtLocation 0x9c113a8)
	void AddForceAtLocation(struct FVector& Force, struct FVector& Location, struct FName& BoneName); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddForce (Underlying native function: AddForce 0x9c11298)
	void AddForce(struct FVector& Force, struct FName& BoneName, bool& bAccelChange); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddAngularImpulseInRadians (Underlying native function: AddAngularImpulseInRadians 0x9c10f60)
	void AddAngularImpulseInRadians(struct FVector& Impulse, struct FName& BoneName, bool& bVelChange); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PrimitiveComponent.AddAngularImpulseInDegrees (Underlying native function: AddAngularImpulseInDegrees 0x9c10e54)
	void AddAngularImpulseInDegrees(struct FVector& Impulse, struct FName& BoneName, bool& bVelChange); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

