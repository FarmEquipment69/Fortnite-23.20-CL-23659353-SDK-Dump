// BlueprintGeneratedClass /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C
// Size: 0x4a38
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4440 (0x8)
	class UMotionWarpingComponent* MotionWarping; // 0x4448 (0x8)
	class UParticleSystemComponent* SplashEffectsForEnteringOrExitingWater; // 0x4450 (0x8)
	class UParticleSystemComponent* GamplayWindInteractionEffects; // 0x4458 (0x8)
	class UParticleSystemComponent* EffectPlayerRunLand; // 0x4460 (0x8)
	class UParticleSystemComponent* EffectPlayerWalkLand; // 0x4468 (0x8)
	class UParticleSystemComponent* EffectPlayerWalkWater; // 0x4470 (0x8)
	class UParticleSystemComponent* EffectPlayerRunWater; // 0x4478 (0x8)
	class UParticleSystemComponent* EffectWaterInteractionFX; // 0x4480 (0x8)
	class UParticleSystemComponent* HitDamageParticles; // 0x4488 (0x8)
	class UWidgetComponent* SpeechBubbleComponent; // 0x4490 (0x8)
	class USpotLightComponent* PlayerLight; // 0x4498 (0x8)
	float ShatterShieldPush3B96BD02488A8F69F3D086A2B7978EC8; // 0x44a0 (0x4)
	float ShatterShieldOpacity3B96BD02488A8F69F3D086A2B7978EC8; // 0x44a4 (0x4)
	float ShatterShieldHighlightCracks3B96BD02488A8F69F3D086A2B7978EC8; // 0x44a8 (0x4)
	struct TEnumAsByte<ETimelineDirection> ShatterShieldDirection3B96BD02488A8F69F3D086A2B7978EC8; // 0x44ac (0x1)
	unsigned char unreflected_44ad[0x3]; // 0x44ad (0x3) 
	class UTimelineComponent* ShatterShield; // 0x44b0 (0x8)
	class USoundBase* HitByHuskRangedSound; // 0x44b8 (0x8)
	class USoundBase* HitByHuskMeleeSound; // 0x44c0 (0x8)
	class UAnimMontage* SoulSuckVictimMontage; // 0x44c8 (0x8)
	double PlayerSpeed; // 0x44d0 (0x8)
	double RunParticleActivateSpeed; // 0x44d8 (0x8)
	double WalkDustActivateSpeed; // 0x44e0 (0x8)
	double WalkParticleResetSpeed; // 0x44e8 (0x8)
	struct FVector PreviousVelocityVector; // 0x44f0 (0x18)
	bool CanSpawnRunKickupFX; // 0x4508 (0x1)
	bool CanSpawnWalkKickupFX; // 0x4509 (0x1)
	bool CanSpawnDustLandFX; // 0x450a (0x1)
	unsigned char unreflected_450b[0x5]; // 0x450b (0x5) 
	struct FRotator RunWalkParticleRotation; // 0x4510 (0x18)
	bool IsNinjaInShadowStance; // 0x4528 (0x1)
	unsigned char unreflected_4529[0x7]; // 0x4529 (0x7) 
	struct FGameplayTagContainer GameplayTagsForHitByHuskMeleeSound; // 0x4530 (0x20)
	class UMaterialInterface* ShieldMaterial; // 0x4550 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> BodyShieldMIDArray; // 0x4558 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> HeadShieldMIDArray; // 0x4568 (0x10)
	bool ShieldActive; // 0x4578 (0x1)
	unsigned char unreflected_4579[0x7]; // 0x4579 (0x7) 
	class USoundBase* SoundShieldImpact; // 0x4580 (0x8)
	class USoundBase* SoundShieldDestroyed; // 0x4588 (0x8)
	class USoundBase* SoundShieldFullyCharged; // 0x4590 (0x8)
	double ShieldShatterOpacity; // 0x4598 (0x8)
	double RegenOpacity; // 0x45a0 (0x8)
	double DamageOpacity; // 0x45a8 (0x8)
	double DefaultShieldopacity; // 0x45b0 (0x8)
	double ShieldPushMinValue; // 0x45b8 (0x8)
	bool ShieldVisibleHit; // 0x45c0 (0x1)
	bool ShieldVisibleRecover; // 0x45c1 (0x1)
	bool ShieldVisibleShatter; // 0x45c2 (0x1)
	bool ShieldVisibleFullHealth; // 0x45c3 (0x1)
	unsigned char unreflected_45c4[0x4]; // 0x45c4 (0x4) 
	double FullyRegenedShieldhealthOpacity; // 0x45c8 (0x8)
	struct FGameplayTagContainer TCGameplayCueDamageShielded; // 0x45d0 (0x20)
	bool LatestDamageIsShieldDamage; // 0x45f0 (0x1)
	unsigned char unreflected_45f1[0x7]; // 0x45f1 (0x7) 
	double DamageTaken; // 0x45f8 (0x8)
	double LastShieldDamageTime; // 0x4600 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> CharmShieldMIDArray; // 0x4608 (0x10)
	bool BodyValid; // 0x4618 (0x1)
	bool BackpackValid; // 0x4619 (0x1)
	bool HatValid; // 0x461a (0x1)
	bool FaceValid; // 0x461b (0x1)
	bool CharmValid; // 0x461c (0x1)
	bool HeadValid; // 0x461d (0x1)
	bool OnPlayerBuiltFloor; // 0x461e (0x1)
	unsigned char unreflected_461f[0x1]; // 0x461f (0x1) 
	struct FGameplayTag EventNeedRoadsActive; // 0x4620 (0x4)
	struct FGameplayTag EventNeedRoadsDeactive; // 0x4624 (0x4)
	struct FGameplayTagContainer TCWhereWereGoingWeNeedRoads; // 0x4628 (0x20)
	class UParticleSystem* EffectPlayerLandedDust; // 0x4648 (0x8)
	class USkeletalMeshComponent* ShieldBodySkeletalMesh; // 0x4650 (0x8)
	class USkeletalMeshComponent* ShieldHeadSkeletalMesh; // 0x4658 (0x8)
	class USkeletalMeshComponent* ShieldCharmSkeletalMesh; // 0x4660 (0x8)
	class USceneComponent* SoundPlayerHit; // 0x4668 (0x8)
	class UForceFeedbackEffect* DamageForceFeedback; // 0x4670 (0x8)
	class UParticleSystem* EffectPlayerLandedWindVectorP; // 0x4678 (0x8)
	class UClass* SpeechBubbleWidgetClass; // 0x4680 (0x8)
	struct FText LastSpeechText; // 0x4688 (0x18)
	class UClass* DamageCameraShake; // 0x46a0 (0x8)
	bool UseAnimTrailsNotifies; // 0x46a8 (0x1)
	unsigned char unreflected_46a9[0x7]; // 0x46a9 (0x7) 
	struct FVector StableVelocityVector; // 0x46b0 (0x18)
	bool TickWaterLevel; // 0x46c8 (0x1)
	unsigned char unreflected_46c9[0x7]; // 0x46c9 (0x7) 
	class UTextureRenderTarget2D* WetnessDepthTexture; // 0x46d0 (0x8)
	class UMaterialInstanceDynamic* WaterLevelMID; // 0x46d8 (0x8)
	class UMaterialInstanceDynamic* WaterDecayMID; // 0x46e0 (0x8)
	bool WasRTTEnabledVarSet; // 0x46e8 (0x1)
	bool IstheWindWaterSceneCaptureEnabled; // 0x46e9 (0x1)
	unsigned char unreflected_46ea[0x6]; // 0x46ea (0x6) 
	class AActor* CachedEffect; // 0x46f0 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> WaterInteractionWakeMIDS; // 0x46f8 (0x10)
	struct FLinearColor WaterTraceImpactNormalAndZHeightLocation; // 0x4708 (0x10)
	struct FVector PlayerVelocity; // 0x4718 (0x18)
	bool EnableRunWalkWaterGroundFX; // 0x4730 (0x1)
	unsigned char unreflected_4731[0x7]; // 0x4731 (0x7) 
	struct TArray<class UMaterialInstanceDynamic*> PreviousMID; // 0x4738 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PreviousWeaponMID; // 0x4748 (0x10)
	class USkeletalMeshComponent* DuplicateCharacterMesh; // 0x4758 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> PreviousHeadMID; // 0x4760 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PreviousBodyMID; // 0x4770 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PreviousHatMID; // 0x4780 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PreviousBackpackMID; // 0x4790 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PreviousCharmMID; // 0x47a0 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PreviousFaceMID; // 0x47b0 (0x10)
	struct FMulticastInlineDelegate SwingRight; // 0x47c0 (0x10)
	struct FMulticastInlineDelegate SwingRightEnd; // 0x47d0 (0x10)
	struct FMulticastInlineDelegate SwingLeft; // 0x47e0 (0x10)
	struct FMulticastInlineDelegate SwingLeftEnd; // 0x47f0 (0x10)
	struct FMulticastInlineDelegate AnimNotifyBegin; // 0x4800 (0x10)
	struct FMulticastInlineDelegate AnimNotifyEnd; // 0x4810 (0x10)
	class UFXSystemComponent* OverrideAnimTrail; // 0x4820 (0x8)
	struct FMulticastInlineDelegate SwingRight2; // 0x4828 (0x10)
	struct FMulticastInlineDelegate SwingLeft2; // 0x4838 (0x10)
	class UFXSystemComponent* AnimTrailFX; // 0x4848 (0x8)
	bool BlockedByPawns; // 0x4850 (0x1)
	unsigned char unreflected_4851[0x7]; // 0x4851 (0x7) 
	struct FGameplayAttribute AttributeCurrentShieldConst; // 0x4858 (0x38)
	struct FGameplayAttribute AttributeShieldConst; // 0x4890 (0x38)
	struct FGameplayAttribute AttributeCurrentHealthConst; // 0x48c8 (0x38)
	struct FGameplayAttribute AttributeMaxHealthConst; // 0x4900 (0x38)
	struct FCameraLensInterfaceClassSupport* LensEffectInterfaceClassPlayerHealthDamage; // 0x4938 (0x8)
	struct FCameraLensInterfaceClassSupport* LensEffectInterfaceClassPlayerShieldDamage; // 0x4940 (0x8)
	struct FCameraLensInterfaceClassSupport* LensEffectInterfaceClassDirectionalPlayerShieldDamage; // 0x4948 (0x8)
	struct FCameraLensInterfaceClassSupport* LensEffectInterfaceClassDirectionalPlayerHealthDamage; // 0x4950 (0x8)
	struct TArray<class UMaterialInstanceDynamic*> TempDIMArray; // 0x4958 (0x10)
	struct TMap<struct TEnumAsByte<EFortCustomPartType>, bool> PartValid; // 0x4968 (0x50)
	struct TArray<struct TEnumAsByte<EFortCustomPartType>> ShieldPartList; // 0x49b8 (0x10)
	struct TArray<struct FCharacterPartMidArrayStruct> ShieldMIDArrays; // 0x49c8 (0x10)
	struct TMap<struct TEnumAsByte<EFortCustomPartType>, class USkeletalMeshComponent*> ShieldSkMeshes; // 0x49d8 (0x50)
	int LShieldMIDIndex; // 0x4a28 (0x4)
	unsigned char unreflected_4a2c[0x4]; // 0x4a2c (0x4) 
	class USkeletalMeshComponent* NullPartMesh; // 0x4a30 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color (Has no native function)
	void MeleeEffectColor(struct FVector& MeleeColorSet); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.On Set Material Part (Has no native function)
	void OnSetMaterialPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType, bool& K2NodeSwitchEnumCmpSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Set Part Material (Has no native function)
	void SetPartMaterial(struct TArray<class UMaterialInstanceDynamic*>& Array, class USkeletalMeshComponent*& MeshPart, int& TempintArrayIndexVariable, bool& CallFuncIsValidReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue1, class UMaterialInstanceDynamic*& CallFuncGetMIDForSkeletalMeshComponentReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, int& CallFuncArrayLengthReturnValue, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Find Shield MID Array (Has no native function)
	void FindShieldMIDArray(struct TEnumAsByte<EFortCustomPartType>& PartType, bool& Found, int& Index, struct TArray<class UMaterialInstanceDynamic*>& MIDs, int& LIndex, bool& LFound, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FCharacterPartMidArrayStruct& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Setup Duplicate FX Mesh (Has no native function)
	void SetupDuplicateFXMesh(class UMaterialInterface*& MaterialtoApply, struct TEnumAsByte<EFortCustomPartType>& PartType, struct TArray<class UMaterialInstanceDynamic*>& EmptyMIDArray, class USkeletalMeshComponent*& DuplicatedMesh, bool& TransferMaterialParameters, int& TranslucentSortOrder, class USkeletalMeshComponent*& MeshPart, bool& ObjectsValid, int& TempintVariable, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue, bool& CallFuncIsValidReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncBooleanORReturnValue, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue1, bool& CallFuncIsValidReturnValue2, struct TArray<struct FSkeletalMaterial>& CallFuncGetMaterialsReturnValue, int& CallFuncArrayLastIndexReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, bool& CallFuncFindStoredCharPartMaterialsFound, int& CallFuncFindStoredCharPartMaterialsIndex, struct TArray<class UMaterialInstanceDynamic*>& CallFuncFindStoredCharPartMaterialsMIDs, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInterface*& CallFuncArrayGetItem, int& CallFuncArrayAddReturnValue, int& CallFuncArrayLastIndexReturnValue1, int& CallFuncMinReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, bool& TempboolVariable, int& CallFuncArrayAddReturnValue1, int& K2NodeSelectDefault, bool& CallFuncLessEqualIntIntReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GetHealthPercent2 (Has no native function)
	double GetHealthPercent2(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GetShieldPercent2 (Has no native function)
	double GetShieldPercent2(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_BlockedByPawns (Has no native function)
	void OnRepBlockedByPawns(bool& TempboolVariable, struct TEnumAsByte<ECollisionResponse>& TempbyteVariable, struct TEnumAsByte<ECollisionResponse>& TempbyteVariable1, struct TEnumAsByte<ECollisionResponse>& K2NodeSelectDefault); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.PlayHitSound (Has no native function)
	void PlayHitSound(class AFortPawn*& Instigator, class AActor*& DamageCauser, class AActor*& HitSource, class USoundBase*& HitSound, bool& TempboolVariable, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface1, bool& K2NodeDynamicCastbSuccess1, bool& TempboolVariable1, bool& CallFuncIsValidReturnValue, bool& TempboolVariable2, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& TempboolVariable3, class USoundBase*& K2NodeSelectDefault, class USoundBase*& K2NodeSelectDefault1, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue1, bool& TempboolVariable4, class USoundBase*& K2NodeSelectDefault2, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, class AController*& CallFuncGetControllerReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.EnableWaterAudio (Has no native function)
	void EnableWaterAudio(bool& IsEnteringWater, class USoundBase*& TempobjectVariable, class USoundBase*& TempobjectVariable1, bool& TempboolVariable, class USoundBase*& TempobjectVariable2, class USoundBase*& TempobjectVariable3, bool& TempboolVariable1, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsLocallyControlledReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, class USoundBase*& K2NodeSelectDefault, struct FVector& CallFuncAddVectorVectorReturnValue1, bool& CallFuncIsLocallyControlledReturnValue1, class USoundBase*& K2NodeSelectDefault1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Set Body Type Sounds (Has no native function)
	void SetBodyTypeSounds(struct TEnumAsByte<EFortCustomBodyType>& CallFuncGetCharacterBodyTypeReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Duplicate Mesh MIDs (Has no native function)
	void SetScalarParameteronDuplicateMeshMIDs(struct FName& ParameterName, double& ParameterValue, bool& CallFuncIsValidReturnValue, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Weapons Mesh (Has no native function)
	void RestorePreviousMaterialsonWeaponsMesh(class AFortWeapon*& WeapontoRestore, int& TempintArrayIndexVariable, class UMaterialInstanceDynamic*& CallFuncGetMIDForSkeletalMeshComponentReturnValue, bool& CallFuncIsDedicatedServerReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncIsValidReturnValue, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Character Mesh (Has no native function)
	void RestorePreviousMaterialsonCharacterMesh(bool& CallFuncIsDedicatedServerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Override Materials and Copy Parameters on Weapons Mesh (Has no native function)
	void OverrideMaterialsandCopyParametersonWeaponsMesh(class UMaterialInterface*& MaterialtoApply, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncIsValidReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncIsDedicatedServerReturnValue, int& TempintLoopCounterVariable, int& TempintArrayIndexVariable, bool& CallFuncLessIntIntReturnValue, class UMaterialInterface*& CallFuncArrayGetItem, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue2, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess, int& CallFuncAddIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter (Has no native function)
	void TriggerGameplayWindEmitter(struct TEnumAsByte<PlayerWindParticleEmitters>& PlayerWindParticleEmitterToFire, int& TempintVariable, int& TempintVariable1, unsigned char& CallFuncConvIntToByteReturnValue, int& CallFuncAddIntIntReturnValue, unsigned char& CallFuncGetValidValueReturnValue, unsigned char& CallFuncConvIntToByteReturnValue1, struct FString& CallFuncGetEnumeratorUserFriendlyNameReturnValue, unsigned char& CallFuncGetEnumeratorValueFromIndexReturnValue, struct FName& CallFuncConvStringToNameReturnValue, int& CallFuncConvByteToIntReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, int& CallFuncMakeLiteralIntReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled (Has no native function)
	void ArethewindandwaterRTTpassesenabled(bool& NewParam, float& CallFuncGetScalarParameterValueReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick (Has no native function)
	void DisableWaterLevelTick(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor (Has no native function)
	void OnRepOnPlayerBuiltFloor(struct FGameplayEventData& K2NodeMakeStructGameplayEventData); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh (Has no native function)
	void CreateandDuplicateEffectPoseableSkeletalMesh(class UMaterialInterface*& MaterialtoApply, struct TArray<class UMaterialInstanceDynamic*>& EmptyMIDArray, int& TranslucentSortPriority, class UPoseableMeshComponent*& PoseableMesh, struct TEnumAsByte<EFortCustomPartType>& CustomBodyType, class USkeletalMeshComponent*& PartMesh, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, bool& CallFuncIsValidReturnValue, int& CallFuncGetNumMaterialsReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanORReturnValue, int& CallFuncArrayLastIndexReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncNotEqualIntIntReturnValue, int& CallFuncArrayAddReturnValue, int& TempintVariable, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, class UMaterialInterface*& CallFuncArrayGetItem1, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& TempintVariable1, bool& TempboolVariable, bool& CallFuncLessEqualIntIntReturnValue1, class USceneComponent*& K2NodeSelectDefault, struct FTransform& CallFuncGetRelativeTransformReturnValue, int& CallFuncAddIntIntReturnValue1, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult, struct FTransform& TempstructVariable, bool& TempboolVariable1, class UPoseableMeshComponent*& CallFuncAddComponentReturnValue, class USkinnedMeshComponent*& K2NodeSelectDefault1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody (Has no native function)
	void SlaveAMeshToTheBody(class USkeletalMeshComponent*& Mesh, class USkeletalMeshComponent*& Master, class USkinnedMeshComponent*& MasterToUse, struct FName& CallFuncGetAttachSocketNameReturnValue, bool& CallFuncEqualEqualNameNameReturnValue, class USceneComponent*& CallFuncGetAttachParentReturnValue, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncIsValidReturnValue, struct FTransform& CallFuncGetRelativeTransformReturnValue, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop (Has no native function)
	void SetShieldMidsInternalLoop(double& HighlightCracks, bool& SetHighlightCracks, double& Push, bool& SetPush, struct TArray<class UMaterialInstanceDynamic*>& MIDArray, int& TempintLoopCounterVariable, int& CallFuncArrayLengthReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncLessIntIntReturnValue, int& TempintArrayIndexVariable, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1); // (Private | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids (Has no native function)
	void SetShieldMids(double& HighlightCracks, bool& SetHighlightCracks, double& Push, bool& SetPush, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FCharacterPartMidArrayStruct& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity (Has no native function)
	void FindShieldOpacity(double& CurrentShieldOpacity, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, struct FCharacterPartMidArrayStruct& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, int& CallFuncAddIntIntReturnValue1, bool& CallFuncLessIntIntReturnValue1, double& CallFuncFMaxReturnValue, double& CallFuncFMaxReturnValue1, double& CallFuncFMaxReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent (Has no native function)
	void CreateandDuplicateEffectSkeletalMeshesParent(class USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, class UMaterialInterface*& MaterialtoApply, struct TArray<class UMaterialInstanceDynamic*>& EmptyMIDArray, int& TranslucentSortPriority, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& CustomBodyType, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, class USkeletalMesh*& CallFuncGetSkeletalMeshDEPRECATEDReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncIsValidReturnValue, struct TArray<class UMaterialInterface*>& CallFuncGetMaterialsReturnValue, int& CallFuncGetNumMaterialsReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncSubtractIntIntReturnValue, int& CallFuncArrayLastIndexReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, bool& CallFuncNotEqualIntIntReturnValue, int& CallFuncArrayAddReturnValue, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncIsValidReturnValue2, bool& TempboolHasBeenInitdVariable, bool& TempboolIsClosedVariable, int& TempintVariable, bool& TempboolVariable, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, class USceneComponent*& K2NodeSelectDefault, class UMaterialInterface*& CallFuncArrayGetItem1, struct FTransform& CallFuncGetRelativeTransformReturnValue, struct FHitResult& CallFuncK2SetRelativeTransformSweepHitResult, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& TempintVariable1, bool& CallFuncLessEqualIntIntReturnValue1, int& CallFuncAddIntIntReturnValue1, struct FTransform& TempstructVariable, bool& TempboolVariable1, class USkeletalMeshComponent*& CallFuncAddComponentReturnValue, class USkeletalMeshComponent*& K2NodeSelectDefault1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncArethewindandwaterRTTpassesenabledNewParam, bool& CallFuncK2AttachToComponentReturnValue1); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__FinishedFunc (Has no native function)
	void ShatterShieldFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__UpdateFunc (Has no native function)
	void ShatterShieldUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded (Has no native function)
	void OnLanded(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped (Has no native function)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft (Has no native function)
	void FootStepLeft(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight (Has no native function)
	void FootStepRight(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized (Has no native function)
	void OnCharacterPartsReinitialized(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 (Has no native function)
	void GameplayCueAbilitiesActivationGenericHarvestBuffTier1(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 (Has no native function)
	void GameplayCueAbilitiesActivationGenericHarvestBuffTier2(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera (Has no native function)
	void SetFirstPersonCamera(bool& bNewUseFirstPersonCamera); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera (Has no native function)
	void InternalSetFirstPersonCamera(bool& NewUseFirstPersonCamera); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged (Has no native function)
	void OnBaseChanged(class AActor*& NewBase); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed (Has no native function)
	void ReceivePossessed(class AController*& NewController); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence (Has no native function)
	void OnDisplaySentence(struct FText& SpeechText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence (Has no native function)
	void OnClearSentence(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap (Has no native function)
	void ClientBindWeaponSwap(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap (Has no native function)
	void BindWeaponSwap(double& InDuration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon (Has no native function)
	void MultiSwapWeapon(class AFortWeapon*& New, class AFortWeapon*& Prev); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap (Has no native function)
	void UnBindWeaponSwap(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap (Has no native function)
	void MultiEndSwap(class AFortWeapon*& CurrentWeapon); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect (Has no native function)
	void PlayGameplayWindEffect(struct TEnumAsByte<PlayerWindParticleEmitters>& PlayerWindParticleEmitterToFire); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Exited/Entered Water Volume (Has no native function)
	void ExitedEnteredWaterVolume(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash (Has no native function)
	void PlayerCreatesaSplash(struct FTransform& NewTransform); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ReinitializeWeaponMaterials (Has no native function)
	void ReinitializeWeaponMaterials(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged (Has no native function)
	void GameplayCueShieldFullyCharged(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded (Has no native function)
	void GameplayCueDamageShielded(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed (Has no native function)
	void GameplayCueShieldDestroyed(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage (Has no native function)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredVehicle (Has no native function)
	void OnEnteredVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedVehicle (Has no native function)
	void OnExitedVehicle(); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft (Has no native function)
	void MeleeSwingLeft(bool& FirstLeft); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight (Has no native function)
	void MeleeSwingRight(bool& FirstRight); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft_End (Has no native function)
	void MeleeSwingLeftEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight_End (Has no native function)
	void MeleeSwingRightEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredWaterVolume (Has no native function)
	void OnEnteredWaterVolume(); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedWaterVolume (Has no native function)
	void OnExitedWaterVolume(); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetBlockedByPawns (Has no native function)
	void SetBlockedByPawns(bool& bLocked); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleLandFX (Has no native function)
	void ToggleLandFX(bool& NewHidden); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility (Has no native function)
	void ToggleShieldVisibility(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnPartApplied (Has no native function)
	void OnPartApplied(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnBackpack (Has no native function)
	void OnBackpack(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Character MIDs (Has no native function)
	void SetScalarParameteronCharacterMIDs(struct FName& ParameterName, double& ParameterValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnMeshPart (Has no native function)
	void OnMeshPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Athena.Equipping (Has no native function)
	void GameplayCueAthenaEquipping(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE (Has no native function)
	void OnLandCE(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnMeshPart3 (Has no native function)
	void OnMeshPart3(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnMeshPartComplete (Has no native function)
	void OnMeshPartComplete(class AFortPlayerPawn*& Pawn, class USkeletalMeshComponent*& BaseMesh, struct TArray<class UCustomCharacterPart*>& PartsArray, struct TArray<class USkeletalMeshComponent*>& ValidSkeletalMeshComponentPartArray); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnMeshPart2 (Has no native function)
	void OnMeshPart2(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnBackpackPart (Has no native function)
	void OnBackpackPart(class AFortPlayerPawn*& Pawn, class UCustomCharacterPart*& Part, class USkeletalMeshComponent*& MeshPart, struct TEnumAsByte<EFortCustomPartType>& PartType); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable (Has no native function)
	void AnimTrailsDisable(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup (Has no native function)
	void AnimTrailsSetup(class UParticleSystem*& ParticleSystemReference, class UNiagaraSystem*& NiagaraSystemReference, struct FName& FirstSocketName, struct FName& SecondSocketName, float& Width, class UFXSystemComponent*& OverrideParticleComp, struct FName& OverideFirstSocketName, struct FName& OverideSecondSocketName); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify (Has no native function)
	void AnimTrailsNotify(bool& bActive); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic (Has no native function)
	void ExecuteUbergraphPlayerPawnGeneric(int& EntryPoint, int& TempintVariable, class UCanvas*& CallFuncBeginDrawCanvasToRenderTargetCanvas, struct FVector2D& CallFuncBeginDrawCanvasToRenderTargetSize, struct FDrawToRenderTargetContext& CallFuncBeginDrawCanvasToRenderTargetContext, int& TempintArrayIndexVariable, int& TempintVariable1, bool& TempboolIsClosedVariable, int& CallFuncAddIntIntReturnValue, double& CallFuncGetWorldDeltaSecondsReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, int& CallFuncArrayLengthReturnValue, struct FVector& CallFuncGetVelocityReturnValue, bool& TempboolVariable, struct FVector& CallFuncGetVelocityReturnValue1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, bool& TempboolHasBeenInitdVariable, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue1, struct FName& TempnameVariable, bool& TempboolVariable1, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, bool& TempboolVariable2, int& CallFuncAddIntIntReturnValue2, bool& TempboolIsClosedVariable1, struct FVector& CallFuncGetVelocityReturnValue2, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, bool& CallFuncGreaterDoubleDoubleReturnValue2, struct FVector& CallFuncMakeVectorReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue3, bool& TempboolVariable3, bool& CallFuncLessDoubleDoubleReturnValue1, struct FName& TempnameVariable1, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncHasAuthorityReturnValue, struct FName& TempnameVariable2, bool& CallFuncHasAuthorityReturnValue1, bool& TempboolIsClosedVariable2, struct FName& TempnameVariable3, bool& CallFuncHasAuthorityReturnValue2, bool& CallFuncIsValidReturnValue, int& TempintArrayIndexVariable2, bool& TempboolHasBeenInitdVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegateHandleController& CallFuncWhenCosmeticSpecificPartAppliedDelegateHandleControllerOut, int& TempintLoopCounterVariable2, int& CallFuncAddIntIntReturnValue3, int& TempintArrayIndexVariable3, int& TempintArrayIndexVariable4, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, int& CallFuncGetNumMaterialsReturnValue, int& CallFuncSubtractIntIntReturnValue, int& TempintVariable2, int& CallFuncAddIntIntReturnValue4, int& TempintLoopCounterVariable3, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue5, double& CallFuncMakeLiteralDoubleReturnValue, struct TArray<class UMaterialInterface*>& K2NodeMakeArrayArray, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegateHandleController& CallFuncWhenCosmeticsAppliedDelegateHandleControllerOut, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut1, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, int& CallFuncGetNumMaterialsReturnValue1, int& CallFuncSubtractIntIntReturnValue1, class UMaterialInterface*& CallFuncGetMaterialReturnValue, bool& CallFuncLessEqualIntIntReturnValue, bool& TempboolVariable4, int& TempintLoopCounterVariable4, int& CallFuncAddIntIntReturnValue6, double& CallFuncMakeLiteralDoubleReturnValue1, struct TArray<class UMaterialInstanceDynamic*>& K2NodeMakeArrayArray1, int& TempintVariable3, bool& CallFuncIsMovingOnGroundReturnValue, bool& CallFuncNotPreBoolReturnValue, int& CallFuncAddIntIntReturnValue7, struct TArray<class AActor*>& TempobjectVariable, bool& CallFuncIsDedicatedServerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut2, bool& CallFuncIsDedicatedServerReturnValue2, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsDedicatedServerReturnValue3, float& K2NodeEventDamage2, struct FGameplayTagContainer& K2NodeEventDamageTags2, struct FVector& K2NodeEventMomentum2, struct FHitResult& K2NodeEventHitInfo2, class AFortPawn*& K2NodeEventInstigatedBy2, class AActor*& K2NodeEventDamageCauser2, struct FGameplayEffectContextHandle& K2NodeEventEffectContext2, struct FHitResult& K2NodeEventHit, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue6, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncVSizeSquaredReturnValue, struct FRotator& CallFuncMakeRotFromXReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue4, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsValidReturnValue8, class AFortWeapon*& K2NodeEventNewWeapon, class AFortWeapon*& K2NodeEventPrevWeapon, double& CallFuncRandomFloatInRangeReturnValue, float& K2NodeEventDeltaSeconds, struct FRotator& CallFuncMakeRotatorReturnValue, struct FVector& CallFuncGetVelocityReturnValue3, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, struct FVector& CallFuncMakeVectorReturnValue2, double& CallFuncVSizeReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegateHandleController& CallFuncWhenCosmeticSpecificPartAppliedDelegateHandleControllerOut1, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType6, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters6, bool& K2NodeSwitchEnumCmpSuccess, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType5, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters5, bool& K2NodeSwitchEnumCmpSuccess1, bool& K2NodeEventbNewUseFirstPersonCamera, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegateHandleController& CallFuncWhenCosmeticPartAppliedDelegateHandleControllerOut3, class AB_Ranged_Generic_C*& K2NodeDynamicCastAsBRangedGeneric, bool& K2NodeDynamicCastbSuccess, class AController*& CallFuncGetControllerReturnValue, class AFortWeap_BuildingToolBase*& K2NodeDynamicCastAsFortWeapBuildingToolBase, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess2, class UStaticMeshComponent*& CallFuncGetPencilMeshComponentReturnValue, bool& CallFuncIsUsingFirstPersonCameraReturnValue, class AFortWeap_BuildingToolBase*& K2NodeDynamicCastAsFortWeapBuildingToolBase1, bool& K2NodeDynamicCastbSuccess3, class UStaticMeshComponent*& CallFuncGetPencilMeshComponentReturnValue1, bool& CallFuncIsValidReturnValue9, bool& CallFuncIsValidReturnValue10, bool& CallFuncIsPlayerControlledReturnValue, float& CallFuncGetScalarParameterValueReturnValue, int& CallFuncRoundReturnValue, bool& TempboolIsClosedVariable3, bool& K2NodeCustomEventNewUseFirstPersonCamera, class AActor*& K2NodeEventNewBase, class ABuildingSMActor*& K2NodeDynamicCastAsBuildingStaticMesh, bool& K2NodeDynamicCastbSuccess4, bool& CallFuncIsPlayerBuiltReturnValue, bool& CallFuncIsValidReturnValue11, bool& CallFuncIsDedicatedServerReturnValue4, class AController*& K2NodeEventNewController, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FText& K2NodeEventSpeechText, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput, bool& CallFuncHasAllMatchingGameplayTagsReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, bool& TempboolVariable5, int& CallFuncArrayLengthReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FTransform& CallFuncGetTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FRotator& CallFuncComposeRotatorsReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, class AFortWeapon*& K2NodeCustomEventNewWeapon, class AFortWeapon*& K2NodeCustomEventPrevWeapon, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, double& K2NodeCustomEventInDuration, class AFortWeapon*& K2NodeCustomEventNew, class AFortWeapon*& K2NodeCustomEventPrev, bool& CallFuncIsValidReturnValue12, bool& CallFuncIsValidReturnValue13, class AFortWeapon*& K2NodeCustomEventCurrentWeapon, bool& CallFuncIsValidReturnValue14, int& TempintVariable4, bool& CallFuncIsDedicatedServerReturnValue5, int& CallFuncAddIntIntReturnValue8, bool& TempboolHasBeenInitdVariable2, int& TempintVariable5, class UMaterialInterface*& CallFuncGetMaterialReturnValue1, int& CallFuncArrayAddReturnValue, bool& CallFuncLessEqualIntIntReturnValue1, int& CallFuncAddIntIntReturnValue9, struct FTransform& TempstructVariable, class UUserWidget*& CallFuncCreateReturnValue, class USkeletalMeshComponent*& CallFuncAddComponentReturnValue, struct TScriptInterface<class IFortInitializeFromObjectInterface>& K2NodeDynamicCastAsFortInitializefromObjectInterface, bool& K2NodeDynamicCastbSuccess5, bool& CallFuncHasAuthorityReturnValue3, bool& CallFuncIsDedicatedServerReturnValue6, float& K2NodeEventDamage1, struct FGameplayTagContainer& K2NodeEventDamageTags1, struct FVector& K2NodeEventMomentum1, struct FHitResult& K2NodeEventHitInfo1, class AController*& K2NodeEventInstigatedBy1, class AActor*& K2NodeEventDamageCauser1, struct FGameplayEffectContextHandle& K2NodeEventEffectContext1, class AController*& CallFuncGetControllerReturnValue1, bool& CallFuncEqualEqualObjectObjectReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController1, bool& K2NodeDynamicCastbSuccess6, float& CallFuncGetScalarParameterValueReturnValue1, class AFortWindManager*& CallFuncGetWindManagerReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue5, class AWindManager_C*& K2NodeDynamicCastAsWindManager, bool& K2NodeDynamicCastbSuccess7, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UTextureRenderTarget2D*& CallFuncCreateRenderTarget2DReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, struct TEnumAsByte<EFortCustomPartType>& TempbyteVariable, int& CallFuncArrayLengthReturnValue2, struct TEnumAsByte<PlayerWindParticleEmitters>& K2NodeCustomEventPlayerWindParticleEmitterToFire, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue2, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue3, bool& TempboolHasBeenInitdVariable3, bool& CallFuncBooleanORReturnValue, struct FTransform& K2NodeEventNewTransform, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, struct FVector& CallFuncBreakTransformLocation2, struct FRotator& CallFuncBreakTransformRotation2, struct FVector& CallFuncBreakTransformScale2, double& CallFuncBreakVectorX3, double& CallFuncBreakVectorY3, double& CallFuncBreakVectorZ3, bool& CallFuncIsValidReturnValue15, bool& CallFuncIsValidReturnValue16, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, bool& TempboolHasBeenInitdVariable4, bool& CallFuncIsDBNOReturnValue, bool& CallFuncIsSkydivingReturnValue, bool& CallFuncShouldPlayDeathAnimationReturnValue, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType4, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters4, bool& K2NodeSwitchEnumCmpSuccess2, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType3, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters3, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType2, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, bool& K2NodeSwitchEnumCmpSuccess3, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType1, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters1, bool& K2NodeEventFirstLeft, bool& K2NodeEventFirstRight, struct FVector& CallFuncK2GetComponentLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue2, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AFortGameState*& K2NodeDynamicCastAsFortGameState, bool& K2NodeDynamicCastbSuccess8, bool& CallFuncDBNOEnabledForGameModeReturnValue, bool& CallFuncIsValidReturnValue17, struct FTransform& CallFuncGetTransformReturnValue1, class USkeletalMeshComponent*& CallFuncArrayGetItem1, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class ADuplicateResOutMesh_C*& CallFuncFinishSpawningActorReturnValue, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue1, bool& K2NodeCustomEventBlocked, bool& K2NodeCustomEventNewHidden, class UAnimMontage*& TempobjectVariable1, int& TempintArrayIndexVariable5, bool& TempboolHasBeenInitdVariable5, class AFortPlayerController*& CallFuncArrayGetItem2, class AFortPlayerPawn*& CallFuncGetPlayerPawnReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FVector& CallFuncSubtractVectorVectorReturnValue1, double& CallFuncVSizeReturnValue1, bool& CallFuncIsWeaponHiddenByHolsteringReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& TempboolIsClosedVariable4, bool& CallFuncIsDedicatedServerReturnValue7, bool& CallFuncHasAuthorityReturnValue4, bool& CallFuncIsDedicatedServerReturnValue8, int& CallFuncArrayLengthReturnValue4, class USkeletalMeshComponent*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, bool& CallFuncLessIntIntReturnValue2, bool& CallFuncIsValidReturnValue18, struct TArray<class UMaterialInstanceDynamic*>& K2NodeMakeArrayArray2, bool& CallFuncBooleanANDReturnValue, double& CallFuncMakeLiteralDoubleReturnValue2, struct TEnumAsByte<EFortCustomPartType>& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue5, struct FCharacterPartMidArrayStruct& K2NodeMakeStructCharacterPartMidArrayStruct, bool& CallFuncLessIntIntReturnValue3, int& CallFuncArrayAddReturnValue1, bool& CallFuncFindShieldMIDArrayFound, int& CallFuncFindShieldMIDArrayIndex, struct TArray<class UMaterialInstanceDynamic*>& CallFuncFindShieldMIDArrayMIDs, class USkeletalMeshComponent*& CallFuncMapFindValue1, bool& CallFuncMapFindReturnValue1, bool& CallFuncIsValidReturnValue19, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanORReturnValue1, class AFortPlayerPawn*& K2NodeCustomEventPawn6, class UCustomCharacterPart*& K2NodeCustomEventPart5, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart5, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType5, bool& CallFuncBooleanORReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanORReturnValue3, bool& CallFuncSetupDuplicateFXMeshObjectsValid, class AFortPlayerPawn*& K2NodeCustomEventPawn5, class UCustomCharacterPart*& K2NodeCustomEventPart4, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart4, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType4, bool& CallFuncIsValidReturnValue20, bool& CallFuncIsValidReturnValue21, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue4, class UMaterialInterface*& CallFuncGetMaterialReturnValue2, int& CallFuncArrayAddReturnValue2, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic, bool& K2NodeDynamicCastbSuccess9, int& CallFuncGetNumMaterialsReturnValue2, int& CallFuncSubtractIntIntReturnValue2, int& CallFuncArrayAddReturnValue3, bool& CallFuncLessEqualIntIntReturnValue2, struct FName& K2NodeCustomEventParameterName, double& K2NodeCustomEventParameterValue, bool& CallFuncIsValidReturnValue22, bool& TempboolVariable6, int& CallFuncArrayAddReturnValue4, class AFortPlayerPawn*& K2NodeCustomEventPawn4, class UCustomCharacterPart*& K2NodeCustomEventPart3, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart3, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType3, struct TEnumAsByte<EGameplayCueEvent>& K2NodeGameplayCueEventEventType, struct FGameplayCueParameters& K2NodeGameplayCueEventParameters, bool& CallFuncNotPreBoolReturnValue2, int& TempintVariable6, int& CallFuncAddIntIntReturnValue10, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult1, class UAnimMontage*& TempobjectVariable2, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult2, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult3, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult4, struct FVector& CallFuncGetVelocityReturnValue4, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncBreakVectorX4, double& CallFuncBreakVectorY4, double& CallFuncBreakVectorZ4, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FVector& CallFuncMakeVectorReturnValue3, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult5, struct FRotator& CallFuncMakeRotFromXReturnValue1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue2, struct FVector& CallFuncK2GetComponentLocationReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue2, struct FHitResult& CallFuncLineTraceSingleOutHit, bool& CallFuncLineTraceSingleReturnValue, bool& CallFuncBreakHitResultbBlockingHit1, bool& CallFuncBreakHitResultbInitialOverlap1, float& CallFuncBreakHitResultTime1, float& CallFuncBreakHitResultDistance1, struct FVector& CallFuncBreakHitResultLocation1, struct FVector& CallFuncBreakHitResultImpactPoint1, struct FVector& CallFuncBreakHitResultNormal1, struct FVector& CallFuncBreakHitResultImpactNormal1, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat1, class AActor*& CallFuncBreakHitResultHitActor1, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent1, struct FName& CallFuncBreakHitResultHitBoneName1, struct FName& CallFuncBreakHitResultBoneName1, int& CallFuncBreakHitResultHitItem1, int& CallFuncBreakHitResultElementIndex1, int& CallFuncBreakHitResultFaceIndex1, struct FVector& CallFuncBreakHitResultTraceStart1, struct FVector& CallFuncBreakHitResultTraceEnd1, struct FVector& CallFuncGetVelocityReturnValue5, struct FVector& CallFuncCrossVectorVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue1, bool& CallFuncEqualEqualVectorVectorReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, bool& CallFuncBooleanORReturnValue4, bool& CallFuncBooleanORReturnValue5, bool& TempboolIsClosedVariable5, class UAnimMontage*& TempobjectVariable3, struct FCharacterPartMidArrayStruct& CallFuncArrayGetItem4, int& CallFuncArrayLengthReturnValue6, bool& CallFuncLessIntIntReturnValue4, bool& TempboolVariable7, class AFortPlayerPawn*& K2NodeCustomEventPawn3, class UCustomCharacterPart*& K2NodeCustomEventPart2, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart2, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType2, class UAnimMontage*& K2NodeSelectDefault, bool& CallFuncIsValidReturnValue23, class UAnimMontage*& K2NodeSelectDefault1, float& CallFuncPlayLocalAnimMontageReturnValue, bool& CallFuncIsValidReturnValue24, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue5, class UMaterialInterface*& CallFuncGetMaterialReturnValue3, int& CallFuncArrayAddReturnValue5, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic1, bool& K2NodeDynamicCastbSuccess10, int& CallFuncGetNumMaterialsReturnValue3, int& CallFuncSubtractIntIntReturnValue3, bool& CallFuncLessEqualIntIntReturnValue3, class AFortPlayerPawn*& K2NodeCustomEventPawn2, class USkeletalMeshComponent*& K2NodeCustomEventBaseMesh, struct TArray<class UCustomCharacterPart*>& K2NodeCustomEventPartsArray, struct TArray<class USkeletalMeshComponent*>& K2NodeCustomEventValidSkeletalMeshComponentPartArray, class AFortPlayerPawn*& K2NodeCustomEventPawn1, class UCustomCharacterPart*& K2NodeCustomEventPart1, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart1, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType1, class AFortPlayerPawn*& K2NodeCustomEventPawn, class UCustomCharacterPart*& K2NodeCustomEventPart, class USkeletalMeshComponent*& K2NodeCustomEventMeshPart, struct TEnumAsByte<EFortCustomPartType>& K2NodeCustomEventPartType, bool& CallFuncIsValidReturnValue25, bool& CallFuncIsValidReturnValue26, bool& CallFuncIsValidReturnValue27, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue6, int& CallFuncArrayAddReturnValue6, class UMaterialInterface*& CallFuncGetMaterialReturnValue4, int& CallFuncArrayAddReturnValue7, class UMaterialInstanceDynamic*& K2NodeDynamicCastAsMaterialInstanceDynamic2, bool& K2NodeDynamicCastbSuccess11, int& CallFuncGetNumMaterialsReturnValue4, int& CallFuncSubtractIntIntReturnValue4, int& CallFuncArrayAddReturnValue8, bool& CallFuncLessEqualIntIntReturnValue4, bool& TempboolHasBeenInitdVariable6, bool& CallFuncIsValidReturnValue28, bool& CallFuncIsValidReturnValue29, int& CallFuncGetNumMaterialsReturnValue5, class UMaterialInterface*& CallFuncGetMaterialReturnValue5, int& CallFuncSubtractIntIntReturnValue5, int& CallFuncArrayAddReturnValue9, bool& CallFuncLessEqualIntIntReturnValue5, float& CallFuncGetScalarParameterValueReturnValue2, int& CallFuncRoundReturnValue1, struct FCharacterPartMidArrayStruct& K2NodeMakeStructCharacterPartMidArrayStruct1, int& CallFuncArrayAddReturnValue10, int& CallFuncArrayAddReturnValue11, int& CallFuncArrayAddReturnValue12, bool& CallFuncIsLocallyControlledReturnValue, float& CallFuncGetScalarParameterValueReturnValue3, int& CallFuncRoundReturnValue2, int& CallFuncArrayAddReturnValue13, int& K2NodeSelectDefault2, bool& TempboolIsClosedVariable6, bool& TempboolTrueifbreakwashitVariable, bool& CallFuncNotPreBoolReturnValue3, bool& TempboolHasBeenInitdVariable7, struct FCameraLensInterfaceClassSupport*& K2NodeSelectDefault3, class UClass*& CallFuncGetInterfaceClassReturnValue, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncSpawnGenericCameraLensEffectReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, double& CallFuncGetHealthPercent2ReturnValue, class AB_PlayerShieldDamage_CameraLensEffect_C*& K2NodeDynamicCastAsBPlayerShieldDamageCameraLensEffect, bool& K2NodeDynamicCastbSuccess12, class AB_PlayerHealthDamage_CameraLensEffect_C*& K2NodeDynamicCastAsBPlayerHealthDamageCameraLensEffect, bool& K2NodeDynamicCastbSuccess13, double& CallFuncGetShieldPercent2ReturnValue, class AFortWindManager*& CallFuncGetWindManagerReturnValue1, bool& CallFuncIsDedicatedServerReturnValue9, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncNotPreBoolReturnValue4, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput1, bool& CallFuncHasMatchingGameplayTagReturnValue1, bool& CallFuncNotPreBoolReturnValue5, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FVector& CallFuncK2GetActorLocationReturnValue3, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue2, int& TempintArrayIndexVariable6, struct FRotator& CallFuncConvVectorToRotatorReturnValue2, class UMaterialInstanceDynamic*& CallFuncArrayGetItem5, struct FVector& CallFuncGetSocketLocationReturnValue1, struct FHitResult& CallFuncK2SetWorldLocationAndRotationSweepHitResult, struct FHitResult& CallFuncK2SetWorldLocationAndRotationSweepHitResult1, double& CallFuncGetGameTimeInSecondsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, bool& TempboolHasBeenInitdVariable8, bool& TempboolIsClosedVariable7, bool& CallFuncNotPreBoolReturnValue6, struct FCameraLensInterfaceClassSupport*& K2NodeSelectDefault4, class UClass*& CallFuncGetInterfaceClassReturnValue1, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncSpawnGenericCameraLensEffectDirectionalReturnValue, int& TempintLoopCounterVariable5, bool& CallFuncHasAnyTagsReturnValue, bool& CallFuncLessIntIntReturnValue5, int& CallFuncAddIntIntReturnValue11, int& CallFuncRandomIntegerReturnValue, int& TempintLoopCounterVariable6, struct FName& K2NodeSelectDefault5, float& CallFuncPlayLocalAnimMontageReturnValue1, bool& CallFuncLessIntIntReturnValue6, int& CallFuncAddIntIntReturnValue12, bool& CallFuncBooleanANDReturnValue2, class AController*& CallFuncGetControllerReturnValue2, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController2, bool& K2NodeDynamicCastbSuccess14, bool& CallFuncNotPreBoolReturnValue7, bool& CallFuncIsLocalPlayerControllerReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue2, bool& CallFuncBooleanANDReturnValue3, bool& CallFuncIsValidReturnValue30, bool& CallFuncIsValidReturnValue31, class UParticleSystem*& K2NodeEventParticleSystemReference, class UNiagaraSystem*& K2NodeEventNiagaraSystemReference, struct FName& K2NodeEventFirstSocketName, struct FName& K2NodeEventSecondSocketName, float& K2NodeEventWidth, class UFXSystemComponent*& K2NodeEventOverrideParticleComp, struct FName& K2NodeEventOverideFirstSocketName, struct FName& K2NodeEventOverideSecondSocketName, bool& K2NodeEventbActive, bool& CallFuncIsValidReturnValue32, class UFXSystemAsset*& CallFuncGetFXSystemAssetReturnValue, bool& CallFuncIsValidReturnValue33, class UFXSystemComponent*& CallFuncSetAssetOrSpawnAltFXAttachedReturnValue, bool& TempboolHasBeenInitdVariable9, bool& TempboolIsClosedVariable8, bool& CallFuncIsDedicatedServerReturnValue10, bool& TempboolIsClosedVariable9, double& CallFuncAddDoubleDoubleReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast, double& CallFuncAddDoubleDoubleBImplicitCast, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast1, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast2, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast3, double& K2NodeVariableSetDamageTakenImplicitCast, float& CallFuncMakeRotatorYawImplicitCast, double& CallFuncRoundAImplicitCast, double& K2NodeVariableSetShieldShatterOpacityImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, double& CallFuncSetShieldMidsHighlightCracksImplicitCast, double& CallFuncGreaterDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast4, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast5, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast1, double& CallFuncRoundAImplicitCast1, double& CallFuncRoundAImplicitCast2); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft2__DelegateSignature (Has no native function)
	void SwingLeft2DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight2__DelegateSignature (Has no native function)
	void SwingRight2DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_End__DelegateSignature (Has no native function)
	void AnimNotifyEndDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_Begin__DelegateSignature (Has no native function)
	void AnimNotifyBeginDelegateSignature(bool& bActive); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeftEnd__DelegateSignature (Has no native function)
	void SwingLeftEndDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft__DelegateSignature (Has no native function)
	void SwingLeftDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRightEnd__DelegateSignature (Has no native function)
	void SwingRightEndDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight__DelegateSignature (Has no native function)
	void SwingRightDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

