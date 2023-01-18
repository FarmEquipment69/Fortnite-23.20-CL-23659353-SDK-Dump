// BlueprintGeneratedClass /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
// Size: 0x1601
class AB_Athena_Pickaxe_DualWield_Generic_C : public AFortWeaponPickaxeDualWieldAthena
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1560 (0x8)
	bool Equipped; // 0x1568 (0x1)
	unsigned char unreflected_1569[0x7]; // 0x1569 (0x7) 
	class UParticleSystemComponent* AlterationAmbientPS; // 0x1570 (0x8)
	class UParticleSystem* MeleeHeavyParticleSystem; // 0x1578 (0x8)
	class UParticleSystemComponent* MeleeHeavyPSC; // 0x1580 (0x8)
	bool UseDestroyEffect; // 0x1588 (0x1)
	unsigned char unreflected_1589[0x7]; // 0x1589 (0x7) 
	class UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1590 (0x8)
	class UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1598 (0x8)
	class UParticleSystemComponent* OffhandAlterationAmbientPS; // 0x15a0 (0x8)
	bool bEquipPendingInstigator; // 0x15a8 (0x1)
	unsigned char unreflected_15a9[0x3]; // 0x15a9 (0x3) 
	struct FName OffhandSocketName; // 0x15ac (0x4)
	class UAnimMontage* MontageReference; // 0x15b0 (0x8)
	bool UseTimeofDayControl; // 0x15b8 (0x1)
	unsigned char unreflected_15b9[0x7]; // 0x15b9 (0x7) 
	class UFXSystemComponent* ImpactFX; // 0x15c0 (0x8)
	bool SwingRight; // 0x15c8 (0x1)
	unsigned char unreflected_15c9[0x7]; // 0x15c9 (0x7) 
	struct FRotator LeftSwingRotation; // 0x15d0 (0x18)
	struct FRotator RightSwingRotation; // 0x15e8 (0x18)
	bool SwingRight; // 0x1600 (0x1)

	/* Functions */

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control (Has no native function)
	void BindingTimeofDayControl(bool& BindUnbindTF, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity (Has no native function)
	void SetWpnRarity(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events (Has no native function)
	void UnbindDualMeleeSwingEvents(struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, class APawn*& CallFuncGetInstigatorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, class APlayerPawn_Generic_C*& K2NodeDynamicCastAsPlayerPawnGeneric, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, struct FDelegate& K2NodeCreateDelegateOutputDelegate15, class APawn*& CallFuncGetInstigatorReturnValue1, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events (Has no native function)
	void BindDualMeleeSwingEvents(struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, class APawn*& CallFuncGetInstigatorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, class APlayerPawn_Generic_C*& K2NodeDynamicCastAsPlayerPawnGeneric, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, struct FDelegate& K2NodeCreateDelegateOutputDelegate15, class APawn*& CallFuncGetInstigatorReturnValue1, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles (Has no native function)
	void SetActiveAlterationIdleParticles(bool& Active, bool& Reset, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8 (Has no native function)
	void OnStatChanged9F72D14C4573F491E38302B51F08A0B8(struct FName& StatName, int& StatValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D (Has no native function)
	void OnLoadedF1C7B8E24518F4F2DE2C8DBABB95E06D(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX (Has no native function)
	void OnPlayWeaponFireFX(bool& bPersistentFire, bool& bSecondaryFire); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts (Has no native function)
	void PlayRClickImpacts(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory (Has no native function)
	void OnEquippedWeaponDestory(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached (Has no native function)
	void OnWeaponAttached(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations (Has no native function)
	void OnInitCosmeticAlterations(struct FFortCosmeticModification& CosmeticMod); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged (Has no native function)
	void OnWeaponVisibilityChanged(bool& bVisible, bool& bSetForLocalControllerOnly); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached (Has no native function)
	void OnWeaponDetached(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics (Has no native function)
	void OnInitWeaponCosmetics(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End (Has no native function)
	void SwingLeftEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End (Has no native function)
	void SwingRightEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet (Has no native function)
	void OnInstigatorSet(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip (Has no native function)
	void K2OnUnEquip(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common (Has no native function)
	void SwingRightCommon(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common (Has no native function)
	void SwingLeftCommon(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left (Has no native function)
	void SwingLeft(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right (Has no native function)
	void SwingRight(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2 (Has no native function)
	void SwingLeft2(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2 (Has no native function)
	void SwingRight2(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify (Has no native function)
	void AnimTrailsNotify(bool& bActive); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable (Has no native function)
	void AnimTrailsDisable(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX (Has no native function)
	void OnPlayImpactFX(struct FHitResult& HitResult, struct TEnumAsByte<EPhysicalSurface>& ImpactPhysicalSurface, class UFXSystemComponent*& SpawnedPSC); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck (Has no native function)
	void TODCheck(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch (Has no native function)
	void HandleKillWatch(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills (Has no native function)
	void UpdateBasedOnKills(int& WatchedKills); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Vehicle Passenger (Has no native function)
	void VehiclePassenger(class AFortPlayerPawn*& FortPlayerPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic (Has no native function)
	void ExecuteUbergraphBAthenaPickaxeDualWieldGeneric(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncMultiplyMultiplyFloatFloatReturnValue, double& CallFuncGetPIReturnValue, struct FName& K2NodeCustomEventStatName, int& K2NodeCustomEventStatValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncGetPIReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, double& CallFuncMultiplyMultiplyFloatFloatReturnValue1, int& TempintVariable, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FName& TempnameVariable, struct TEnumAsByte<EPhysicalSurface>& TempbyteVariable, bool& CallFuncIsDedicatedServerReturnValue, bool& K2NodeEventbPersistentFire, bool& K2NodeEventbSecondaryFire, bool& CallFuncDoesSocketExistReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, class UObject*& TempobjectVariable, class APawn*& CallFuncGetInstigatorReturnValue, class UParticleSystem*& K2NodeDynamicCastAsParticleSystem, bool& K2NodeDynamicCastbSuccess, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, struct FFortCosmeticModification& K2NodeEventCosmeticMod, bool& K2NodeEventbVisible, bool& K2NodeEventbSetForLocalControllerOnly, bool& CallFuncIsAssetNullReturnValue, bool& CallFuncIsValidReturnValue, class UFortWeaponItemDefinition*& CallFuncGetWeaponDataReturnValue, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetSmallPreviewImageReturnValue, class UTexture2D*& CallFuncGetOrLoadSynchronouslyReturnValue, class UObject*& K2NodeCustomEventLoaded, bool& TempboolVariable, bool& CallFuncIsValidReturnValue1, int& TempintVariable1, class APawn*& CallFuncGetInstigatorReturnValue1, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess3, int& TempintVariable2, class UFXSystemComponent*& CallFuncGetAnimTrailsPSCReturnValue, class UFXSystemComponent*& CallFuncGetAnimTrailsOffhandPSCReturnValue, int& TempintVariable3, int& TempintVariable4, bool& CallFuncDoesSocketExistReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue1, bool& CallFuncK2AttachToComponentReturnValue, int& TempintVariable5, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue, class UFXSystemComponent*& CallFuncGetIdleOffhandVFXComponentReturnValue, class UFXSystemComponent*& CallFuncGetSwingOffhandVFXComponentReturnValue, bool& CallFuncIsValidReturnValue4, class UFXSystemComponent*& CallFuncGetSwingOffhandVFXComponentReturnValue1, bool& CallFuncIsValidReturnValue5, class UFXSystemComponent*& CallFuncGetSwingVFXComponentReturnValue, bool& CallFuncIsValidReturnValue6, class UFXSystemComponent*& CallFuncGetSwingVFXComponentReturnValue1, bool& CallFuncIsValidReturnValue7, enum EFortDualWieldSwingState& CallFuncGetCurrentSwingStateReturnValue, bool& K2NodeSwitchEnumCmpSuccess, bool& TempboolHasBeenInitdVariable, bool& K2NodeCustomEventbActive, bool& CallFuncGetUseAnimTrailsPSCReturnValue, struct FName& CallFuncGetAnimTrailsSecondSocketNameReturnValue, struct FName& CallFuncGetAnimTrailsFirstSocketNameReturnValue, float& CallFuncGetAnimTrailsWidthReturnValue, bool& CallFuncGetUseAnimTrailsOffhandPSCReturnValue, class UFXSystemComponent*& CallFuncGetAnimTrailsOffhandPSCReturnValue1, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent, bool& K2NodeDynamicCastbSuccess4, bool& CallFuncIsValidReturnValue8, struct FName& CallFuncGetAnimTrailsOffhandSecondSocketNameReturnValue, struct FName& CallFuncGetAnimTrailsOffhandFirstSocketNameReturnValue, float& CallFuncGetAnimTrailsOffhandWidthReturnValue, int& TempintVariable6, int& TempintVariable7, bool& CallFuncGetUseAnimTrailsOffhandPSCReturnValue1, class UFXSystemComponent*& CallFuncGetAnimTrailsOffhandPSCReturnValue2, bool& CallFuncGetUseAnimTrailsPSCReturnValue1, bool& CallFuncIsValidReturnValue9, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent1, bool& K2NodeDynamicCastbSuccess5, int& TempintVariable8, int& TempintVariable9, int& TempintVariable10, int& TempintVariable11, class UFXSystemComponent*& CallFuncGetAnimTrailVFXComponentReturnValue, class UFXSystemComponent*& CallFuncGetAnimTrailVFXComponentReturnValue1, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent2, bool& K2NodeDynamicCastbSuccess6, bool& CallFuncIsValidReturnValue10, class UParticleSystemComponent*& K2NodeDynamicCastAsCascadeParticleSystemComponent3, bool& K2NodeDynamicCastbSuccess7, bool& CallFuncIsValidReturnValue11, enum EFortDualWieldSwingState& CallFuncGetCurrentSwingStateReturnValue1, bool& K2NodeSwitchEnumCmpSuccess1, enum EFortDualWieldSwingState& CallFuncGetCurrentSwingStateReturnValue2, bool& K2NodeSwitchEnumCmpSuccess2, int& TempintVariable12, struct FHitResult& K2NodeEventHitResult, struct TEnumAsByte<EPhysicalSurface>& K2NodeEventImpactPhysicalSurface, class UFXSystemComponent*& K2NodeEventSpawnedPSC, bool& CallFuncIsValidReturnValue12, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FRotator& CallFuncMakeRotFromXReturnValue, struct FRotator& CallFuncInverseTransformRotationReturnValue, enum EFortDayPhase& K2NodeCustomEventCurrentDayPhase, enum EFortDayPhase& K2NodeCustomEventPreviousDayPhase, bool& K2NodeCustomEventbAtCreation, bool& TempboolIsClosedVariable, int& TempintVariable13, int& K2NodeCustomEventWatchedKills, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess8, class UFortAsyncAction_CosmeticAdaptiveStatWatcher*& CallFuncWatchCosmeticStatReturnValue, bool& CallFuncIsValidReturnValue13, int& TempintVariable14, int& TempintVariable15, int& TempintVariable16, int& TempintVariable17, int& TempintVariable18, int& TempintVariable19, bool& CallFuncIsCosmeticObjectDisplayedInFrontendContextReturnValue, struct FRotator& K2NodeSelectDefault, struct FTransform& CallFuncK2GetComponentToWorldReturnValue1, struct FRotator& CallFuncComposeRotatorsReturnValue, struct FRotator& CallFuncTransformRotationReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, bool& CallFuncIsSingleWieldingReturnValue, bool& CallFuncIsSingleWieldingReturnValue1, bool& CallFuncIsDualWieldingReturnValue, class UFXSystemComponent*& CallFuncGetIdleOffhandVFXComponentReturnValue1, bool& CallFuncIsCosmeticObjectDisplayedInFrontendContextReturnValue1, bool& CallFuncIsValidReturnValue14, class UNiagaraComponent*& K2NodeDynamicCastAsNiagaraParticleSystemComponent, bool& K2NodeDynamicCastbSuccess9, int& TempintVariable20, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue1, class UFXSystemComponent*& CallFuncGetIdleOffhandVFXComponentReturnValue2, bool& CallFuncIsValidReturnValue15, bool& CallFuncIsValidReturnValue16, class UNiagaraComponent*& K2NodeDynamicCastAsNiagaraParticleSystemComponent1, bool& K2NodeDynamicCastbSuccess10, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue2, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, enum EFortDayPhase& CallFuncGetPreviousDayPhaseReturnValue, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue, bool& CallFuncIsValidReturnValue17, int& TempintVariable21, int& TempintVariable22, int& TempintVariable23, int& TempintVariable24, int& TempintVariable25, class AFortPlayerPawn*& K2NodeCustomEventFortPlayerPawn, class AActor*& K2NodeCustomEventNewVehicle, class AActor*& K2NodeCustomEventOldVehicle, bool& CallFuncIsDrivingVehicleReturnValue, bool& CallFuncIsPassengerInVehicleReturnValue, class UFXSystemComponent*& CallFuncGetIdleVFXComponentReturnValue3, bool& CallFuncBooleanORReturnValue, class UFXSystemComponent*& CallFuncGetIdleOffhandVFXComponentReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsDedicatedServerReturnValue2, int& TempintVariable26, int& TempintVariable27, int& TempintVariable28, int& TempintVariable29, struct FTransform& CallFuncGetSocketTransformReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue1, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue2, struct FVector& CallFuncSubtractVectorVectorReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult1, double& CallFuncVSizeReturnValue, bool& CallFuncDoesSocketExistReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue2, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncDivideDoubleDoubleReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue4, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncMakeVectorReturnValue2, bool& CallFuncDoesSocketExistReturnValue3, int& TempintVariable30, bool& CallFuncBooleanANDReturnValue, int& K2NodeSelectDefault1, class APawn*& CallFuncGetInstigatorReturnValue2, class APlayerPawn_Generic_Parent_C*& K2NodeDynamicCastAsPlayerPawnGenericParent, bool& K2NodeDynamicCastbSuccess11, struct FTransform& CallFuncGetSocketTransformReturnValue2, struct FTransform& CallFuncGetSocketTransformReturnValue3, struct FVector& CallFuncBreakTransformLocation2, struct FRotator& CallFuncBreakTransformRotation2, struct FVector& CallFuncBreakTransformScale2, struct FVector& CallFuncBreakTransformLocation3, struct FRotator& CallFuncBreakTransformRotation3, struct FVector& CallFuncBreakTransformScale3, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, double& CallFuncBreakVectorX3, double& CallFuncBreakVectorY3, double& CallFuncBreakVectorZ3, double& CallFuncAddDoubleDoubleReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue4, double& CallFuncDivideDoubleDoubleReturnValue5, struct FVector& CallFuncGetSocketLocationReturnValue5, double& CallFuncMultiplyDoubleDoubleReturnValue4, struct FVector& CallFuncSubtractVectorVectorReturnValue1, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue2, struct FRotator& CallFuncConvVectorToRotatorReturnValue1, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult2, double& CallFuncVSizeReturnValue1, bool& CallFuncDoesSocketExistReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue5, double& CallFuncDivideDoubleDoubleReturnValue6, double& CallFuncDivideDoubleDoubleReturnValue7, struct FVector& CallFuncMakeVectorReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue8, double& CallFuncDivideDoubleDoubleReturnValue9, struct FVector& CallFuncMakeVectorReturnValue4, struct FVector& CallFuncMakeVectorReturnValue5, bool& CallFuncDoesSocketExistReturnValue5, bool& CallFuncBooleanANDReturnValue1, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast2, float& CallFuncSetFloatParameterParamImplicitCast3, float& CallFuncSetFloatParameterParamImplicitCast4, float& CallFuncSetFloatParameterParamImplicitCast5); // (Final | 0x00008000 | HasDefaults)
};

