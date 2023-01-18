// BlueprintGeneratedClass /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// Size: 0x1318
class AB_Athena_Pickaxe_Generic_C : public AFortWeaponPickaxeAthena
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1288 (0x8)
	class UParticleSystemComponent* MeleeHeavyPSC; // 0x1290 (0x8)
	class UParticleSystem* MeleeHeavyParticleSystem; // 0x1298 (0x8)
	class UParticleSystem* WeaponDurabilityDestroyEffect; // 0x12a0 (0x8)
	class UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x12a8 (0x8)
	bool UseDestroyEffect; // 0x12b0 (0x1)
	unsigned char unreflected_12b1[0x7]; // 0x12b1 (0x7) 
	class UParticleSystemComponent* AlterationAmbientPS; // 0x12b8 (0x8)
	struct FVector EffectsColorLevel; // 0x12c0 (0x18)
	bool Equipped; // 0x12d8 (0x1)
	bool bEquipPendingInstigator; // 0x12d9 (0x1)
	bool UseTimeofDayControl; // 0x12da (0x1)
	bool SwingRight; // 0x12db (0x1)
	unsigned char unreflected_12dc[0x4]; // 0x12dc (0x4) 
	class UFXSystemComponent* ImpactFX; // 0x12e0 (0x8)
	struct FRotator LeftSwingRotation; // 0x12e8 (0x18)
	struct FRotator RightSwingRotation; // 0x1300 (0x18)

	/* Functions */

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color (Has no native function)
	void MeleeEffectColor(struct FVector& MeleeColorSet); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Binding Time of Day Control (Has no native function)
	void BindingTimeofDayControl(bool& BindUnbindTF, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents (Has no native function)
	void UnbindSwingAnimTrailEvents(struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class APawn*& CallFuncGetInstigatorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class APlayerPawn_Generic_C*& K2NodeDynamicCastAsPlayerPawnGeneric, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, class APawn*& CallFuncGetInstigatorReturnValue1, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents (Has no native function)
	void BindSwingAnimTrailEvents(struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class APawn*& CallFuncGetInstigatorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class APlayerPawn_Generic_C*& K2NodeDynamicCastAsPlayerPawnGeneric, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, class APawn*& CallFuncGetInstigatorReturnValue1, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio (Has no native function)
	void PlayCQCPickaxeEnemyAudio(struct FHitResult& HitResult, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, class APawn*& CallFuncGetInstigatorReturnValue, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, bool& CallFuncIsValidReturnValue, unsigned char& CallFuncGetActorTeamReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationToLocalPlayerReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles (Has no native function)
	void SetActiveAlterationIdleParticles(bool& Active, bool& Reset, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity (Has no native function)
	void SetWpnRarity(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21 (Has no native function)
	void OnStatChangedF171C56748FEA3E19F93088E968D3E21(struct FName& StatName, int& StatValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2 (Has no native function)
	void OnLoaded5BC5DA3B4E308BE7A188FBB2571333D2(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight (Has no native function)
	void MeleeSwingRight(bool& FirstRight); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft (Has no native function)
	void MeleeSwingLeft(bool& FirstLeft); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft (Has no native function)
	void FootStepLeft(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight (Has no native function)
	void FootStepRight(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End (Has no native function)
	void MeleeSwingRightEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End (Has no native function)
	void MeleeSwingLeftEnd(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX (Has no native function)
	void OnPlayWeaponFireFX(bool& bPersistentFire, bool& bSecondaryFire); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts (Has no native function)
	void PlayRClickImpacts(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory (Has no native function)
	void OnEquippedWeaponDestory(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached (Has no native function)
	void OnWeaponAttached(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations (Has no native function)
	void OnInitCosmeticAlterations(struct FFortCosmeticModification& CosmeticMod); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged (Has no native function)
	void OnWeaponVisibilityChanged(bool& bVisible, bool& bSetForLocalControllerOnly); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached (Has no native function)
	void OnWeaponDetached(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics (Has no native function)
	void OnInitWeaponCosmetics(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch (Has no native function)
	void HandleKillWatch(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills (Has no native function)
	void UpdateBasedOnKills(int& WatchedKills); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify (Has no native function)
	void AnimTrailsNotify(bool& bActive); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable (Has no native function)
	void AnimTrailsDisable(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight (Has no native function)
	void SwingRight(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft (Has no native function)
	void SwingLeft(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd (Has no native function)
	void SwingRightEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd (Has no native function)
	void SwingLeftEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet (Has no native function)
	void OnInstigatorSet(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip (Has no native function)
	void K2OnUnEquip(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.TODCheck (Has no native function)
	void TODCheck(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayImpactFX (Has no native function)
	void OnPlayImpactFX(struct FHitResult& HitResult, struct TEnumAsByte<EPhysicalSurface>& ImpactPhysicalSurface, class UFXSystemComponent*& SpawnedPSC); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleWeaponHolstered (Has no native function)
	void HandleWeaponHolstered(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Vehicle Passenger (Has no native function)
	void VehiclePassenger(class AFortPlayerPawn*& FortPlayerPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic (Has no native function)
	void ExecuteUbergraphBAthenaPickaxeGeneric(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FName& TempnameVariable, bool& CallFuncIsDedicatedServerReturnValue, class UObject*& TempobjectVariable, class UObject*& K2NodeCustomEventLoaded, class UParticleSystem*& K2NodeDynamicCastAsParticleSystem, bool& K2NodeDynamicCastbSuccess, int& TempintVariable, int& TempintVariable1, int& TempintVariable2, int& TempintVariable3, double& CallFuncGetPIReturnValue, double& CallFuncMultiplyMultiplyFloatFloatReturnValue, int& TempintVariable4, double& CallFuncMultiplyDoubleDoubleReturnValue, int& TempintVariable5, int& TempintVariable6, int& TempintVariable7, int& TempintVariable8, int& TempintVariable9, int& TempintVariable10, int& TempintVariable11, int& TempintVariable12, struct FName& K2NodeCustomEventStatName, int& K2NodeCustomEventStatValue, bool& CallFuncIsDedicatedServerReturnValue1, bool& K2NodeEventFirstRight, bool& K2NodeEventFirstLeft, bool& K2NodeEventbPersistentFire, bool& K2NodeEventbSecondaryFire, struct FVector& CallFuncGetSocketLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, int& TempintVariable13, class APawn*& CallFuncGetInstigatorReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, int& TempintVariable14, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, bool& CallFuncIsDedicatedServerReturnValue2, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, struct FFortCosmeticModification& K2NodeEventCosmeticMod, bool& CallFuncIsAssetNullReturnValue, bool& K2NodeEventbVisible, bool& K2NodeEventbSetForLocalControllerOnly, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsDedicatedServerReturnValue3, class UFortWeaponItemDefinition*& CallFuncGetWeaponDataReturnValue, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetSmallPreviewImageReturnValue, class UTexture2D*& CallFuncGetOrLoadSynchronouslyReturnValue, int& K2NodeCustomEventWatchedKills, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess2, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue, class UFortAsyncAction_CosmeticAdaptiveStatWatcher*& CallFuncWatchCosmeticStatReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncGetUseAnimTrailsPSCReturnValue, struct FName& CallFuncGetAnimTrailsSecondSocketNameReturnValue, struct FName& CallFuncGetAnimTrailsFirstSocketNameReturnValue, float& CallFuncGetAnimTrailsWidthReturnValue, bool& CallFuncGetUseAnimTrailsPSCReturnValue1, int& TempintVariable15, class UFXSystemComponent*& CallFuncGetAnimTrailVFXComponentReturnValue, class UFXSystemComponent*& CallFuncGetAnimTrailVFXComponentReturnValue1, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent1, bool& K2NodeDynamicCastbSuccess4, bool& K2NodeCustomEventbActive, class UFXSystemComponent*& CallFuncGetSwingVFXComponentReturnValue, bool& CallFuncIsValidReturnValue4, int& TempintVariable16, int& TempintVariable17, class UFXSystemComponent*& CallFuncGetSwingVFXComponentReturnValue1, bool& CallFuncIsValidReturnValue5, class APawn*& CallFuncGetInstigatorReturnValue1, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess5, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess6, bool& CallFuncIsValidReturnValue6, class UFXSystemComponent*& CallFuncGetAnimTrailsPSCReturnValue, class APawn*& CallFuncGetInstigatorReturnValue2, class UParticleSystem*& CallFuncGetAnimTrailsPSCTemplateReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess7, struct FName& CallFuncGetAnimTrailsFirstSocketNameReturnValue1, struct FName& CallFuncGetAnimTrailsSecondSocketNameReturnValue1, float& CallFuncGetAnimTrailsWidthReturnValue1, class UNiagaraSystem*& CallFuncGetAnimTrailsNiagaraAssetReturnValue, class UFXSystemComponent*& CallFuncGetAnimTrailsPSCReturnValue1, bool& CallFuncGetUseAnimTrailsPSCReturnValue2, int& TempintVariable18, bool& CallFuncAttachesAnimTrailsToWeaponReturnValue, enum EFortDayPhase& K2NodeCustomEventCurrentDayPhase, enum EFortDayPhase& K2NodeCustomEventPreviousDayPhase, bool& K2NodeCustomEventbAtCreation, int& TempintVariable19, int& TempintVariable20, int& TempintVariable21, struct FHitResult& K2NodeEventHitResult, struct TEnumAsByte<EPhysicalSurface>& K2NodeEventImpactPhysicalSurface, class UFXSystemComponent*& K2NodeEventSpawnedPSC, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FRotator& CallFuncMakeRotFromXReturnValue, int& TempintVariable22, class UFXSystemComponent*& CallFuncGetSwingVFXComponentReturnValue2, int& TempintVariable23, int& TempintVariable24, int& TempintVariable25, bool& TempboolHasBeenInitdVariable, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, bool& TempboolIsClosedVariable, bool& CallFuncIsCosmeticObjectDisplayedInFrontendContextReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class APawn*& CallFuncGetInstigatorReturnValue3, class AFortPawn*& K2NodeDynamicCastAsFortPawn2, bool& K2NodeDynamicCastbSuccess8, int& TempintVariable26, class APawn*& CallFuncGetInstigatorReturnValue4, int& TempintVariable27, class AFortPawn*& K2NodeDynamicCastAsFortPawn3, bool& K2NodeDynamicCastbSuccess9, class AFortWeapon*& CallFuncGetCurrentWeaponReturnValue, int& TempintVariable28, bool& CallFuncEqualEqualObjectObjectReturnValue, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue1, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue2, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsValidReturnValue8, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, class AFortPlayerPawn*& K2NodeCustomEventFortPlayerPawn, class AActor*& K2NodeCustomEventNewVehicle, class AActor*& K2NodeCustomEventOldVehicle, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue, bool& CallFuncIsDrivingVehicleReturnValue, bool& CallFuncIsPassengerInVehicleReturnValue, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue, bool& CallFuncBooleanORReturnValue, int& TempintVariable29, int& TempintVariable30, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue3, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable, bool& TempboolVariable, int& K2NodeSelectDefault, struct FRotator& K2NodeSelectDefault1, bool& CallFuncIsValidReturnValue9, class APawn*& CallFuncGetInstigatorReturnValue5, class APlayerPawn_Generic_Parent_C*& K2NodeDynamicCastAsPlayerPawnGenericParent, bool& K2NodeDynamicCastbSuccess10, struct FTransform& CallFuncK2GetComponentToWorldReturnValue1, struct FRotator& CallFuncInverseTransformRotationReturnValue, struct FRotator& CallFuncComposeRotatorsReturnValue, struct FRotator& CallFuncTransformRotationReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FTransform& CallFuncGetSocketTransformReturnValue1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncDivideDoubleDoubleReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue2, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, double& CallFuncVSizeReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult1, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue2, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncDivideDoubleDoubleReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue4, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncMakeVectorReturnValue2, bool& CallFuncDoesSocketExistReturnValue, bool& CallFuncDoesSocketExistReturnValue1, bool& CallFuncBooleanANDReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast2); // (Final | 0x00008000 | HasDefaults)
};

