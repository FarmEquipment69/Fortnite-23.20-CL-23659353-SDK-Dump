// BlueprintGeneratedClass /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// Size: 0x5640
class APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5350 (0x8)
	class UParticleSystemComponent* EffectWaterInteractionFX; // 0x5358 (0x8)
	class UParticleSystemComponent* AnimTrailPS; // 0x5360 (0x8)
	bool IsInWater; // 0x5368 (0x1)
	unsigned char unreflected_5369[0x7]; // 0x5369 (0x7) 
	struct FRotator RunWalkParticleRotation; // 0x5370 (0x18)
	int WaterCounter; // 0x5388 (0x4)
	unsigned char unreflected_538c[0x4]; // 0x538c (0x4) 
	double TickDeltaSeconds; // 0x5390 (0x8)
	class USoundBase* SoundShieldImpact; // 0x5398 (0x8)
	class USoundBase* SoundShieldDestroyed; // 0x53a0 (0x8)
	class USoundBase* SoundShieldDestroyed1P; // 0x53a8 (0x8)
	class USoundBase* SoundShieldFullyCharged; // 0x53b0 (0x8)
	class USoundBase* SoundShieldStartRecharge; // 0x53b8 (0x8)
	bool BodyValid; // 0x53c0 (0x1)
	bool BackpackValid; // 0x53c1 (0x1)
	bool HatValid; // 0x53c2 (0x1)
	bool FaceValid; // 0x53c3 (0x1)
	bool CharmValid; // 0x53c4 (0x1)
	bool HeadValid; // 0x53c5 (0x1)
	unsigned char unreflected_53c6[0x2]; // 0x53c6 (0x2) 
	struct TArray<class UMaterialInstanceDynamic*> TempArray; // 0x53c8 (0x10)
	class USceneComponent* SoundPlayerHit; // 0x53d8 (0x8)
	class UClass* SpeechBubbleWidgetClass; // 0x53e0 (0x8)
	struct FText LastSpeechText; // 0x53e8 (0x18)
	bool UseAnimTrailsNotifies; // 0x5400 (0x1)
	unsigned char unreflected_5401[0x7]; // 0x5401 (0x7) 
	double Timewhenyoullbeabletosplashagain; // 0x5408 (0x8)
	class AActor* CurrentWaterMeshActor; // 0x5410 (0x8)
	struct FHitResult WaterTraceHitLocation; // 0x5418 (0xe0)
	struct FVector StableVelocityVector; // 0x54f8 (0x18)
	class UParticleSystem* PlayerRunTemplateGround; // 0x5510 (0x8)
	class UParticleSystem* PlayerWalkTemplateGround; // 0x5518 (0x8)
	class UParticleSystem* PlayerRunTemplateWater; // 0x5520 (0x8)
	class UParticleSystem* PlayerWalkTemplateWater; // 0x5528 (0x8)
	class USkeletalMesh* PawnCharmSkeletalMesh; // 0x5530 (0x8)
	class UParticleSystemComponent* AnimTrailsPSRef; // 0x5538 (0x8)
	class UMaterialInterface* WeaponMaterialOverride; // 0x5540 (0x8)
	bool TickWaterLevel; // 0x5548 (0x1)
	unsigned char unreflected_5549[0x7]; // 0x5549 (0x7) 
	class UTextureRenderTarget2D* WetnessDepthTexture; // 0x5550 (0x8)
	class UMaterialInstanceDynamic* WaterLevelMID; // 0x5558 (0x8)
	class UMaterialInstanceDynamic* WaterDecayMID; // 0x5560 (0x8)
	bool WasRTTEnabledVarSet; // 0x5568 (0x1)
	bool IsRTTEnabled; // 0x5569 (0x1)
	unsigned char unreflected_556a[0x6]; // 0x556a (0x6) 
	double StartingMinCapsuleShadowVis; // 0x5570 (0x8)
	bool IsShielded; // 0x5578 (0x1)
	unsigned char unreflected_5579[0x7]; // 0x5579 (0x7) 
	double InstigatorCheckDistanceSqrd; // 0x5580 (0x8)
	double SlideDustActivateSpeed; // 0x5588 (0x8)
	bool CanSpawnSlideKickupFX; // 0x5590 (0x1)
	unsigned char unreflected_5591[0x7]; // 0x5591 (0x7) 
	class UParticleSystem* EffectPlayerShieldActivate; // 0x5598 (0x8)
	class UParticleSystem* EffectPLayerShieldBreak; // 0x55a0 (0x8)
	bool GhostMode; // 0x55a8 (0x1)
	unsigned char unreflected_55a9[0x7]; // 0x55a9 (0x7) 
	class UFXSystemComponent* OverrideAnimTrail; // 0x55b0 (0x8)
	struct FMulticastInlineDelegate AnimNotifyBegin; // 0x55b8 (0x10)
	struct FMulticastInlineDelegate AnimNotifyEnd; // 0x55c8 (0x10)
	class USoundBase* SoundShieldDestroyed2D; // 0x55d8 (0x8)
	class USoundBase* SoundShieldDestroyedCrit2D; // 0x55e0 (0x8)
	class UFXSystemComponent* AnimTrailFX; // 0x55e8 (0x8)
	struct FMulticastInlineDelegate PlayDamageEffect; // 0x55f0 (0x10)
	struct FName ComponentTagAnimTrailFXConst; // 0x5600 (0x4)
	unsigned char unreflected_5604[0x4]; // 0x5604 (0x4) 
	double ReppedCapsuleExtraHalfHeight; // 0x5608 (0x8)
	double CachedCapsuleHalfHeight; // 0x5610 (0x8)
	struct FMulticastInlineDelegate OnCharacterPartsMIDInitialized; // 0x5618 (0x10)
	struct FMulticastInlineDelegate OnShieldBreak; // 0x5628 (0x10)
	class USkeletalMeshComponent* NullPartMesh; // 0x5638 (0x8)

	/* Functions */

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color (Has no native function)
	void MeleeEffectColor(struct FVector& MeleeColorSet); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UpdateViewTargetAudioParameters (Has no native function)
	void UpdateViewTargetAudioParameters(bool& CallFuncIsDedicatedServerReturnValue, class UAudioParameterComponent*& CallFuncGetAudioParameterComponentReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput1, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput2, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, unsigned char& CallFuncGetTeamReturnValue, bool& CallFuncIsValidReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationToLocalPlayerReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_CapsuleEnlarged (Has no native function)
	void OnRepCapsuleEnlarged(bool& CallFuncHasAuthorityReturnValue, double& CallFuncAddDoubleDoubleReturnValue, bool& CallFuncNearlyEqualFloatFloatReturnValue, float& CallFuncGetUnscaledCapsuleHalfHeightReturnValue, float& CallFuncSetCapsuleHalfHeightHalfHeightImplicitCast, double& K2NodeVariableSetCachedCapsuleHalfHeightImplicitCast); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayShieldDestroyedSound (Has no native function)
	void PlayShieldDestroyedSound(struct FGameplayCueParameters& GameplayCueParameters, class APawn*& InstigatorLocal, float& CallFuncBreakGameplayCueParametersNormalizedMagnitude, float& CallFuncBreakGameplayCueParametersRawMagnitude, struct FGameplayEffectContextHandle& CallFuncBreakGameplayCueParametersEffectContext, struct FGameplayTag& CallFuncBreakGameplayCueParametersMatchedTagName, struct FGameplayTag& CallFuncBreakGameplayCueParametersOriginalTag, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedSourceTags, struct FGameplayTagContainer& CallFuncBreakGameplayCueParametersAggregatedTargetTags, struct FVector& CallFuncBreakGameplayCueParametersLocation, struct FVector& CallFuncBreakGameplayCueParametersNormal, class AActor*& CallFuncBreakGameplayCueParametersInstigator, class AActor*& CallFuncBreakGameplayCueParametersEffectCauser, class UObject*& CallFuncBreakGameplayCueParametersSourceObject, class UPhysicalMaterial*& CallFuncBreakGameplayCueParametersPhysicalMaterial, int& CallFuncBreakGameplayCueParametersGameplayEffectLevel, int& CallFuncBreakGameplayCueParametersAbilityLevel, class USceneComponent*& CallFuncBreakGameplayCueParametersTargetAttachComponent, bool& CallFuncBreakGameplayCueParametersbReplicateLocationWhenUsingMinimalRepProxy, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsCriticalHitReturnValue, bool& CallFuncIsLocallyViewedReturnValue, bool& TempboolVariable, class USoundBase*& K2NodeSelectDefault, class USoundBase*& CallFuncGetAudioForDamageEventAudioAsset, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay (Has no native function)
	void ReInitFrontendPetDisplay(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled (Has no native function)
	void ArethewindandwaterRTTpassesenabled(bool& NewParam, float& CallFuncGetScalarParameterValueReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick (Has no native function)
	void DisableWaterLevelTick(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh (Has no native function)
	void CreateandDuplicateEffectPoseableSkeletalMesh(class UMaterialInterface*& MaterialtoApply, struct TArray<class UMaterialInstanceDynamic*>& EmptyMIDArray, int& TranslucentSortPriority, class UPoseableMeshComponent*& PoseableMesh, struct TEnumAsByte<EFortCustomPartType>& CustomBodyType, class USkeletalMeshComponent*& PartMesh, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncIsValidReturnValue, int& CallFuncGetNumMaterialsReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanORReturnValue, int& CallFuncArrayLastIndexReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncNotEqualIntIntReturnValue, int& CallFuncArrayAddReturnValue, int& TempintVariable, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, class UMaterialInterface*& CallFuncArrayGetItem1, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& TempintVariable1, bool& TempboolVariable, bool& CallFuncLessEqualIntIntReturnValue1, class USceneComponent*& K2NodeSelectDefault, struct FTransform& CallFuncGetRelativeTransformReturnValue, int& CallFuncAddIntIntReturnValue1, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult, struct FTransform& TempstructVariable, bool& TempboolVariable1, class UPoseableMeshComponent*& CallFuncAddComponentReturnValue, class USkinnedMeshComponent*& K2NodeSelectDefault1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody (Has no native function)
	void SlaveAMeshToTheBody(class USkeletalMeshComponent*& Mesh, class USkeletalMeshComponent*& Master, class USkinnedMeshComponent*& MasterToUse, struct FName& CallFuncGetAttachSocketNameReturnValue, bool& CallFuncEqualEqualNameNameReturnValue, class USceneComponent*& CallFuncGetAttachParentReturnValue, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncIsValidReturnValue, struct FTransform& CallFuncGetRelativeTransformReturnValue, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent (Has no native function)
	void CreateandDuplicateEffectSkeletalMeshesParent(class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface*& MaterialtoApply, struct TArray<class UMaterialInstanceDynamic*>& EmptyMIDArray, int& TranslucentSortPriority, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& CustomBodyType, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncIsValidReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, int& CallFuncGetNumMaterialsReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncSubtractIntIntReturnValue, int& CallFuncArrayLastIndexReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncNotEqualIntIntReturnValue, int& CallFuncArrayAddReturnValue, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncIsValidReturnValue2, int& TempintVariable, bool& TempboolVariable, bool& CallFuncLessEqualIntIntReturnValue, class USceneComponent*& K2NodeSelectDefault, struct FTransform& CallFuncGetRelativeTransformReturnValue, int& CallFuncAddIntIntReturnValue, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult, struct FTransform& TempstructVariable, bool& TempboolVariable1, class USkeletalMeshComponent*& CallFuncAddComponentReturnValue, class USkeletalMeshComponent*& K2NodeSelectDefault1, int& TempintVariable1, int& CallFuncAddIntIntReturnValue1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, class UMaterialInterface*& CallFuncArrayGetItem1, bool& CallFuncLessEqualIntIntReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class USceneComponent*& CallFuncK2GetRootComponentReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight (Has no native function)
	void MeleeSwingRight(bool& FirstRight); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft (Has no native function)
	void MeleeSwingLeft(bool& FirstLeft); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight_End (Has no native function)
	void MeleeSwingRightEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft_End (Has no native function)
	void MeleeSwingLeftEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded (Has no native function)
	void OnLanded(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped (Has no native function)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft (Has no native function)
	void FootStepLeft(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight (Has no native function)
	void FootStepRight(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized (Has no native function)
	void OnCharacterPartsReinitialized(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 (Has no native function)
	void GameplayCueAbilitiesActivationGenericHarvestBuffTier1(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 (Has no native function)
	void GameplayCueAbilitiesActivationGenericHarvestBuffTier2(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Exited/Entered WaterVolume (Has no native function)
	void ExitedEnteredWaterVolume(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed (Has no native function)
	void CharacterDestroyed(class AActor*& DestroyedActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed (Has no native function)
	void BindOnDestroyed(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify (Has no native function)
	void AnimTrailsNotify(bool& bActive); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup (Has no native function)
	void AnimTrailsSetup(class UParticleSystem*& ParticleSystemReference, class UNiagaraSystem*& NiagaraSystemReference, struct FName& FirstSocketName, struct FName& SecondSocketName, float& Width, class UFXSystemComponent*& OverrideParticleComp, struct FName& OverideFirstSocketName, struct FName& OverideSecondSocketName); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable (Has no native function)
	void AnimTrailsDisable(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop (Has no native function)
	void GameplayCueAbilitiesSpookyMistLoop(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed (Has no native function)
	void GameplayCueShieldPotionConsumed(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded (Has no native function)
	void GameplayCueDamageShielded(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed (Has no native function)
	void GameplayCueShieldDestroyed(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied (Has no native function)
	void GameplayCueShieldReapplied(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Loop.Shadow.Bomb (Has no native function)
	void GameplayCueLoopShadowBomb(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ToggleLandFX (Has no native function)
	void ToggleLandFX(bool& NewHidden); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnMovementStyleChanged (Has no native function)
	void OnMovementStyleChanged(struct TEnumAsByte<EFortMovementStyle>& PreviousMovementStyle, struct TEnumAsByte<EFortMovementStyle>& NewMovementStyle); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.K2_OnBecomeViewTarget (Has no native function)
	void K2OnBecomeViewTarget(class APlayerController*& PC); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.K2_OnEndViewTarget (Has no native function)
	void K2OnEndViewTarget(class APlayerController*& PC); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PawnUniqueIDSet (Has no native function)
	void PawnUniqueIDSet(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Hide VFX In Frontend Hologram (Has no native function)
	void HideVFXInFrontendHologram(bool& isFrontEndHologram); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnPart (Has no native function)
	void OnPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnPartApplied (Has no native function)
	void OnPartApplied(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic (Has no native function)
	void ExecuteUbergraphPlayerPawnAthenaGeneric(int& EntryPoint, class UMaterialInstanceDynamic*& TempobjectVariable, float& CallFuncGetScalarParameterValueReturnValue, int& TempintVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncGetNumMaterialsReturnValue, int& CallFuncSubtractIntIntReturnValue, int& TempintVariable1, double& CallFuncMakeLiteralDoubleReturnValue, int& CallFuncAddIntIntReturnValue1, struct TArray<class UMaterialInterface*>& K2NodeMakeArrayArray, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, int& CallFuncGetNumMaterialsReturnValue1, int& CallFuncSubtractIntIntReturnValue1, bool& TempboolVariable, float& CallFuncGetScalarParameterValueReturnValue1, double& CallFuncMakeLiteralDoubleReturnValue1, struct TArray<class UMaterialInterface*>& K2NodeMakeArrayArray1, int& TempintVariable2, class UMaterialInterface*& CallFuncGetMaterialReturnValue, bool& CallFuncIsValidReturnValue4, int& CallFuncArrayAddReturnValue, bool& CallFuncIsValidReturnValue5, int& CallFuncGetNumMaterialsReturnValue2, int& CallFuncSubtractIntIntReturnValue2, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue2, int& TempintVariable3, bool& TempboolVariable1, class UMaterialInterface*& CallFuncGetMaterialReturnValue1, bool& CallFuncLessEqualIntIntReturnValue1, int& CallFuncAddIntIntReturnValue3, double& CallFuncMakeLiteralDoubleReturnValue2, struct TArray<class UMaterialInstanceDynamic*>& K2NodeMakeArrayArray2, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsValidReturnValue7, int& CallFuncGetNumMaterialsReturnValue3, int& CallFuncSubtractIntIntReturnValue3, double& CallFuncMakeLiteralDoubleReturnValue3, int& TempintVariable4, struct TArray<class UMaterialInterface*>& K2NodeMakeArrayArray3, int& CallFuncAddIntIntReturnValue4, bool& TempboolVariable2, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9, int& CallFuncGetNumMaterialsReturnValue4, int& CallFuncSubtractIntIntReturnValue4, bool& TempboolVariable3, int& TempintVariable5, int& CallFuncAddIntIntReturnValue5, double& CallFuncMakeLiteralDoubleReturnValue4, struct TArray<class UMaterialInterface*>& K2NodeMakeArrayArray4, int& TempintVariable6, int& CallFuncAddIntIntReturnValue6, int& TempintVariable7, class UMaterialInterface*& CallFuncGetMaterialReturnValue2, int& CallFuncArrayAddReturnValue1, bool& CallFuncLessEqualIntIntReturnValue2, int& CallFuncAddIntIntReturnValue7, bool& CallFuncIsValidReturnValue10, bool& CallFuncIsValidReturnValue11, int& CallFuncGetNumMaterialsReturnValue5, int& CallFuncSubtractIntIntReturnValue5, class UMaterialInterface*& CallFuncGetMaterialReturnValue3, bool& CallFuncLessEqualIntIntReturnValue3, double& CallFuncMakeLiteralDoubleReturnValue5, bool& CallFuncIsDedicatedServerReturnValue1, struct TArray<class UMaterialInterface*>& K2NodeMakeArrayArray5, int& CallFuncArrayAddReturnValue2, bool& CallFuncIsDedicatedServerReturnValue2, bool& K2NodeEventFirstRight, bool& K2NodeEventFirstLeft, float& K2NodeEventDamage1, struct FGameplayTagContainer& K2NodeEventDamageTags1, struct FVector& K2NodeEventMomentum1, struct FHitResult& K2NodeEventHitInfo1, class AFortPawn*& K2NodeEventInstigatedBy1, class AActor*& K2NodeEventDamageCauser1, struct FGameplayEffectContextHandle& K2NodeEventEffectContext1, struct FHitResult& K2NodeEventHit, class AFortWeapon*& K2NodeEventNewWeapon, class AFortWeapon*& K2NodeEventPrevWeapon, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType7, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters7, bool& K2NodeSwitchEnumCmpSuccess, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType6, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters6, bool& K2NodeSwitchEnumCmpSuccess1, bool& TempboolVariable4, bool& CallFuncIsPlayerControlledReturnValue, float& CallFuncGetScalarParameterValueReturnValue2, int& CallFuncRoundReturnValue, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, class AController*& CallFuncGetControllerReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, int& TempintVariable8, int& TempintArrayIndexVariable, int& CallFuncAddIntIntReturnValue8, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue9, int& TempintVariable9, class UMaterialInterface*& CallFuncGetMaterialReturnValue4, int& CallFuncArrayAddReturnValue3, bool& CallFuncLessEqualIntIntReturnValue4, int& CallFuncAddIntIntReturnValue10, bool& TempboolVariable5, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& CallFuncIsValidReturnValue12, bool& CallFuncIsValidReturnValue13, bool& CallFuncIsDedicatedServerReturnValue3, bool& CallFuncArethewindandwaterRTTpassesenabledNewParam, class AActor*& K2NodeCustomEventDestroyedActor, bool& K2NodeEventbActive, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut, class UParticleSystem*& K2NodeEventParticleSystemReference, class UNiagaraSystem*& K2NodeEventNiagaraSystemReference, struct FName& K2NodeEventFirstSocketName, struct FName& K2NodeEventSecondSocketName, float& K2NodeEventWidth, class UFXSystemComponent*& K2NodeEventOverrideParticleComp, struct FName& K2NodeEventOverideFirstSocketName, struct FName& K2NodeEventOverideSecondSocketName, bool& CallFuncIsValidReturnValue14, class UFXSystemAsset*& CallFuncGetFXSystemAssetReturnValue, bool& CallFuncIsValidReturnValue15, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType5, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters5, bool& K2NodeSwitchEnumCmpSuccess2, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue16, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut1, int& TempintVariable10, class UMaterialInterface*& CallFuncGetMaterialReturnValue5, int& CallFuncArrayAddReturnValue4, bool& CallFuncLessEqualIntIntReturnValue5, int& CallFuncAddIntIntReturnValue11, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType4, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters4, bool& K2NodeSwitchEnumCmpSuccess3, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType3, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters3, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType2, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters2, bool& K2NodeSwitchEnumCmpSuccess4, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType1, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters, bool& K2NodeSwitchEnumCmpSuccess5, bool& K2NodeSwitchEnumCmpSuccess6, bool& CallFuncIsValidReturnValue17, bool& CallFuncIsDedicatedServerReturnValue4, class UFXSystemComponent*& CallFuncSetAssetOrSpawnAltFXAttachedReturnValue, bool& K2NodeCustomEventNewHidden, struct TEnumAsByte<EFortMovementStyle>& K2NodeEventPreviousMovementStyle, struct TEnumAsByte<EFortMovementStyle>& K2NodeEventNewMovementStyle, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncBooleanANDReturnValue, class APlayerController*& K2NodeEventPC1, class APlayerController*& K2NodeEventPC, bool& K2NodeCustomEventisFrontEndHologram, bool& CallFuncIsValidReturnValue18, bool& CallFuncIsDedicatedServerReturnValue5, int& CallFuncArrayAddUniqueReturnValue, bool& CallFuncIsValidReturnValue19, int& CallFuncArrayAddUniqueReturnValue1, class AFortPlayerPawn*& K2NodeCustomEventPawn1, class UCustomCharacterPart*& K2NodeCustomEventPart1, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart1, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType1, bool& CallFuncIsValidReturnValue20, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, class USceneComponent*& CallFuncArrayGetItem, class UFXSystemComponent*& K2NodeDynamicCastAsFXSystemComponent, bool& K2NodeDynamicCastbSuccess1, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncComponentHasTagReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, int& TempintVariable11, int& CallFuncAddIntIntReturnValue12, class UMaterialInstanceDynamic*& TempobjectVariable1, class UMaterialInstanceDynamic*& TempobjectVariable2, class UMaterialInstanceDynamic*& TempobjectVariable3, int& CallFuncArrayAddReturnValue5, int& CallFuncArrayAddReturnValue6, int& CallFuncArrayAddReturnValue7, int& CallFuncArrayAddReturnValue8, bool& K2NodeSwitchEnumCmpSuccess7, int& CallFuncArrayAddReturnValue9, class AFortPlayerPawn*& K2NodeCustomEventPawn, class UCustomCharacterPart*& K2NodeCustomEventPart, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType, bool& CallFuncIsValidReturnValue21, bool& CallFuncIsValidReturnValue22, bool& CallFuncIsValidReturnValue23, bool& CallFuncIsValidReturnValue24, bool& CallFuncIsValidReturnValue25, bool& CallFuncIsValidReturnValue26, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncIsValidReturnValue27, int& CallFuncArrayAddReturnValue10, int& CallFuncArrayAddReturnValue11, class UMaterialInterface*& CallFuncGetMaterialReturnValue6, int& CallFuncGetNumMaterialsReturnValue6, bool& CallFuncIsValidReturnValue28, int& CallFuncSubtractIntIntReturnValue6, bool& CallFuncLessEqualIntIntReturnValue6, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess2, int& CallFuncArrayAddReturnValue12, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue1, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, bool& CallFuncIsValidReturnValue29, int& CallFuncArrayAddReturnValue13, int& CallFuncArrayAddReturnValue14, class UMaterialInterface*& CallFuncGetMaterialReturnValue7, int& CallFuncGetNumMaterialsReturnValue7, bool& CallFuncIsValidReturnValue30, int& CallFuncSubtractIntIntReturnValue7, bool& CallFuncLessEqualIntIntReturnValue7, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic1, bool& K2NodeDynamicCastbSuccess3, int& CallFuncArrayAddReturnValue15, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue2, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue2, bool& CallFuncIsValidReturnValue31, int& CallFuncArrayAddReturnValue16, int& CallFuncArrayAddReturnValue17, class UMaterialInterface*& CallFuncGetMaterialReturnValue8, int& CallFuncGetNumMaterialsReturnValue8, bool& CallFuncIsValidReturnValue32, int& CallFuncSubtractIntIntReturnValue8, bool& CallFuncLessEqualIntIntReturnValue8, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic2, bool& K2NodeDynamicCastbSuccess4, int& CallFuncArrayAddReturnValue18, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue3, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue3, bool& CallFuncIsValidReturnValue33, int& CallFuncArrayAddReturnValue19, int& CallFuncArrayAddReturnValue20, class UMaterialInterface*& CallFuncGetMaterialReturnValue9, int& CallFuncGetNumMaterialsReturnValue9, bool& CallFuncIsValidReturnValue34, int& CallFuncSubtractIntIntReturnValue9, bool& CallFuncLessEqualIntIntReturnValue9, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic3, bool& K2NodeDynamicCastbSuccess5, int& CallFuncArrayAddReturnValue21, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue4, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue4, bool& CallFuncIsValidReturnValue35, int& CallFuncArrayAddReturnValue22, int& CallFuncArrayAddReturnValue23, class UMaterialInterface*& CallFuncGetMaterialReturnValue10, int& CallFuncGetNumMaterialsReturnValue10, bool& CallFuncIsValidReturnValue36, int& CallFuncSubtractIntIntReturnValue10, bool& CallFuncLessEqualIntIntReturnValue10, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic4, bool& K2NodeDynamicCastbSuccess6, int& CallFuncArrayAddReturnValue24, class USkeletalMesh*& CallFuncGetSkeletalMeshAssetReturnValue5, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue5, bool& CallFuncIsValidReturnValue37, int& CallFuncArrayAddReturnValue25, int& CallFuncArrayAddReturnValue26, class UMaterialInterface*& CallFuncGetMaterialReturnValue11, int& CallFuncGetNumMaterialsReturnValue11, bool& CallFuncIsValidReturnValue38, int& CallFuncSubtractIntIntReturnValue11, bool& CallFuncLessEqualIntIntReturnValue11, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic5, bool& K2NodeDynamicCastbSuccess7, int& CallFuncArrayAddReturnValue27, class UMaterialInstanceDynamic*& TempobjectVariable4, int& CallFuncArrayAddReturnValue28, class UMaterialInstanceDynamic*& TempobjectVariable5, int& CallFuncArrayAddReturnValue29, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast1, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast2, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast3, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast4, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast5, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast6, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast7, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast8, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast9, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast10, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast11, double& CallFuncRoundAImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnShieldBreak__DelegateSignature (Has no native function)
	void OnShieldBreakDelegateSignature(bool& IsOverShield); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsMIDInitialized__DelegateSignature (Has no native function)
	void OnCharacterPartsMIDInitializedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayDamageEffect__DelegateSignature (Has no native function)
	void PlayDamageEffectDelegateSignature(struct FGameplayTagContainer& DamageTags, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature (Has no native function)
	void AnimNotifyEndDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature (Has no native function)
	void AnimNotifyBeginDelegateSignature(bool& bActive); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

