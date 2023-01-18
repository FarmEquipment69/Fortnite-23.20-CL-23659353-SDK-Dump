// BlueprintGeneratedClass /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C
// Size: 0x18a0
class AB_Ranged_Generic_C : public AFortWeaponRanged
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1560 (0x8)
	class UNiagaraComponent* ReloadNiagaraEmpty; // 0x1568 (0x8)
	class UParticleSystemComponent* ReloadEmpty; // 0x1570 (0x8)
	class UParticleSystemComponent* MuzzleEmpty; // 0x1578 (0x8)
	float AnimateScopePostProcessDownSightPostProcessAmount393D8BA5486879173797EF8C9B8D4642; // 0x1580 (0x4)
	struct TEnumAsByte<ETimelineDirection> AnimateScopePostProcessDirection393D8BA5486879173797EF8C9B8D4642; // 0x1584 (0x1)
	unsigned char unreflected_1585[0x3]; // 0x1585 (0x3) 
	class UTimelineComponent* AnimateScopePostProcess; // 0x1588 (0x8)
	class UParticleSystem* MuzzleParticleSystem; // 0x1590 (0x8)
	class UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1598 (0x8)
	class UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x15a0 (0x8)
	bool UseDestroyEffect; // 0x15a8 (0x1)
	bool UseReloadParticles; // 0x15a9 (0x1)
	unsigned char unreflected_15aa[0x6]; // 0x15aa (0x6) 
	class UParticleSystem* ReloadParticleSystem; // 0x15b0 (0x8)
	double LastPlayFXTime; // 0x15b8 (0x8)
	double MinPlayFXTime; // 0x15c0 (0x8)
	bool UseShellsOnFire; // 0x15c8 (0x1)
	bool UseShellsOnReload; // 0x15c9 (0x1)
	bool UseShellsOnPump; // 0x15ca (0x1)
	unsigned char unreflected_15cb[0x1]; // 0x15cb (0x1) 
	struct FName ReloadSocketName; // 0x15cc (0x4)
	struct TArray<class AFortAIPawn*> ArrayOfActiveEnemyAI; // 0x15d0 (0x10)
	bool ScopeRenderEnemiesToCustomDepthBuffer; // 0x15e0 (0x1)
	unsigned char unreflected_15e1[0x3]; // 0x15e1 (0x3) 
	struct FName ShellsSocketName; // 0x15e4 (0x4)
	struct TEnumAsByte<En_ShellTypes_01> ShellTypeSelect; // 0x15e8 (0x1)
	unsigned char unreflected_15e9[0x7]; // 0x15e9 (0x7) 
	double ShellsSpawnRateScale; // 0x15f0 (0x8)
	struct FVector ShellsRotationRate; // 0x15f8 (0x18)
	struct FVector ShellsVelocity; // 0x1610 (0x18)
	struct FVector ShellsGravity; // 0x1628 (0x18)
	struct FVector ShellsSize; // 0x1640 (0x18)
	double TargetScopeVignetteBlurScreenPercentage; // 0x1658 (0x8)
	double ScopeCameraOffsetX; // 0x1660 (0x8)
	double ScopeCameraOffsetY; // 0x1668 (0x8)
	double ScopeCameraOffsetAmount; // 0x1670 (0x8)
	double InheritParentVelocity; // 0x1678 (0x8)
	double CylindricalRadius; // 0x1680 (0x8)
	double CylindricalHeight; // 0x1688 (0x8)
	struct FLinearColor ShellColor; // 0x1690 (0x10)
	class UNiagaraComponent* SpawnedShells; // 0x16a0 (0x8)
	bool DebugShellsSocket; // 0x16a8 (0x1)
	unsigned char unreflected_16a9[0x7]; // 0x16a9 (0x7) 
	class USoundBase* SoundScopeZoomIn; // 0x16b0 (0x8)
	class USoundBase* SoundScopeZoomOut; // 0x16b8 (0x8)
	class UParticleSystemComponent* AlterationAmbientPS; // 0x16c0 (0x8)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x16c8 (0x20)
	bool IsWindEnabled; // 0x16e8 (0x1)
	unsigned char unreflected_16e9[0x7]; // 0x16e9 (0x7) 
	class UParticleSystem* MuzzleWindParticleSystem; // 0x16f0 (0x8)
	class UParticleSystem* MuzzleParticleSystem1P; // 0x16f8 (0x8)
	bool ShouldHideReticleAfterDelay; // 0x1700 (0x1)
	unsigned char unreflected_1701[0x7]; // 0x1701 (0x7) 
	class UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x1708 (0x8)
	int StencilBufferValue; // 0x1710 (0x4)
	unsigned char unreflected_1714[0x4]; // 0x1714 (0x4) 
	class UCurveFloat* CurvePitchOffset; // 0x1718 (0x8)
	class USoundBase* SoundScopedInLoop; // 0x1720 (0x8)
	class UAudioComponent* ScopeZoomInComp; // 0x1728 (0x8)
	class UAudioComponent* ScopedInLoopComp; // 0x1730 (0x8)
	class UAudioComponent* ScopeZoomOutComp; // 0x1738 (0x8)
	double AlterationAmbientPSMaxDrawDistance; // 0x1740 (0x8)
	double MuzzlePSMaxDrawDistance; // 0x1748 (0x8)
	double BeamPSMaxDrawDistance; // 0x1750 (0x8)
	double ReloadPSMaxDrawDistance; // 0x1758 (0x8)
	double ShellsPSMaxDrawDistance; // 0x1760 (0x8)
	struct FMulticastInlineDelegate onAimDownSightsChanged; // 0x1768 (0x10)
	bool IsMuzzleNiagara; // 0x1778 (0x1)
	unsigned char unreflected_1779[0x7]; // 0x1779 (0x7) 
	class UNiagaraSystem* MuzzleNiagaraSystemInstance; // 0x1780 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> MuzzleNiagaraSystemAsset; // 0x1788 (0x28)
	class UNiagaraComponent* MuzzleNiagaraComponentInstance; // 0x17b0 (0x8)
	struct TArray<class UParticleSystemComponent*> MuzzleParticleSystemComponents; // 0x17b8 (0x10)
	double MuzzleChanceOfLargeFlash; // 0x17c8 (0x8)
	double MuzzleFlashLargeMinScale; // 0x17d0 (0x8)
	double MuzzleFlashLargeMaxScale; // 0x17d8 (0x8)
	double MuzzleFlashSmallMinScale; // 0x17e0 (0x8)
	double MuzzleFlashSmallMaxScale; // 0x17e8 (0x8)
	struct FTimerHandle* ScopeEffectDelay1Handle; // 0x17f0 (0x8)
	struct FTimerHandle* ScopeEffectDelay2Handle; // 0x17f8 (0x8)
	struct FScalableFloat UseNativeFX; // 0x1800 (0x28)
	bool IsReloadNiagara; // 0x1828 (0x1)
	unsigned char unreflected_1829[0x7]; // 0x1829 (0x7) 
	class UNiagaraSystem* ReloadNiagaraAsset; // 0x1830 (0x8)
	struct FScalableFloat UseUpdatedFeedback; // 0x1838 (0x28)
	struct FMulticastInlineDelegate OnStartFiring; // 0x1860 (0x10)
	struct FMulticastInlineDelegate OnPersistentFireStopped; // 0x1870 (0x10)
	class UStaticMesh* ScopeMesh; // 0x1880 (0x8)
	class UStaticMeshComponent* ScopeMesh1PSpawned; // 0x1888 (0x8)
	struct TArray<class UMaterialInterface*> ScopeMaterialOverrides; // 0x1890 (0x10)

	/* Functions */

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback (Has no native function)
	void StopLocalForceFeedback(class UForceFeedbackEffect*& ForceFeedbackEffect, struct FName& tag, class AController*& CallFuncGetInstigatorControllerReturnValue, bool& CallFuncIsValidReturnValue, class APlayerController*& K2NodeDynamicCastAsPlayerController, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsLocalControllerReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback (Has no native function)
	void PlayLocalForceFeedback(class UForceFeedbackEffect*& ForceFeedbackEffect, struct FName& tag, bool& bLooping, class AController*& CallFuncGetInstigatorControllerReturnValue, bool& CallFuncIsValidReturnValue, class APlayerController*& K2NodeDynamicCastAsPlayerController, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsLocalControllerReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp (Has no native function)
	void getScopeComp(class UStaticMeshComponent*& ScopeComponent); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.initScope (Has no native function)
	void initScope(int& TempintArrayIndexVariable, class UStaticMeshComponent*& CallFuncgetScopeCompscopeComponent, bool& CallFuncIsValidReturnValue, bool& CallFuncIsDedicatedServerReturnValue, struct FTransform& TempstructVariable, class UStaticMeshComponent*& CallFuncgetScopeCompscopeComponent1, bool& CallFuncIsValidReturnValue1, class UStaticMeshComponent*& CallFuncAddComponentReturnValue, int& TempintLoopCounterVariable, class UMaterialInterface*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncUseScopeTargetingReturnValue, bool& CallFuncSetStaticMeshReturnValue, bool& CallFuncIsValidReturnValue3); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled (Has no native function)
	void IsNewFeedbackEnabled(bool& Enabled, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted (Has no native function)
	void LocalReloadStarted(float& ReloadTime, enum EFortWeaponReloadType& ReloadType); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetCorrectMuzzleNiagaraSystem (Has no native function)
	void GetCorrectMuzzleNiagaraSystem(struct TWeakObjectPtr<class UNiagaraSystem>& OutNiagaraSystem, bool& TempboolVariable, bool& CallFuncIsValidReturnValue, bool& CallFuncIsQuartzGunfireEnabledReturnValue, struct TWeakObjectPtr<class UNiagaraSystem>& K2NodeSelectDefault); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio (Has no native function)
	void PlayScopeOutAudio(bool& CallFuncIsValidReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters (Has no native function)
	void GetScopeParameters(class UStaticMeshComponent*& ScopeComponent, struct FVector2D& DepthOfFieldVignetteRange, struct FVector& WeaponSightsOffset, class UStaticMeshComponent*& CallFuncgetScopeCompscopeComponent, bool& CallFuncIsValidReturnValue, struct FVector2D& CallFuncMakeVector2DReturnValue, struct FVector& CallFuncMakeVectorReturnValue); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents (Has no native function)
	void GetActiveMuzzleComponents(struct TArray<class UFXSystemComponent*>& NewParam, struct TWeakObjectPtr<class UNiagaraSystem>& CallFuncGetCorrectMuzzleNiagaraSystemOutNiagaraSystem, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue, class UNiagaraSystem*& K2NodeDynamicCastAsNiagaraSystem, bool& K2NodeDynamicCastbSuccess, struct TArray<class UFXSystemComponent*>& K2NodeMakeArrayArray, bool& CallFuncIsValidReturnValue, struct TWeakObjectPtr<class UNiagaraSystem>& CallFuncGetCorrectMuzzleNiagaraSystemOutNiagaraSystem1, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue1, bool& CallFuncIsValidReturnValue1, class UNiagaraSystem*& K2NodeDynamicCastAsNiagaraSystem1, bool& K2NodeDynamicCastbSuccess1, struct FName& CallFuncGetMuzzleSocketNameReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, struct TArray<class UFXSystemComponent*>& K2NodeMakeArrayArray1, bool& CallFuncIsValidReturnValue2); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent (Has no native function)
	void SetActiveMuzzleComponent(bool& NiagaraEnabled); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio (Has no native function)
	void StopScopedAudio(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio (Has no native function)
	void StartScopedAudio(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams (Has no native function)
	void SetPostProcessParams(double& InputPin); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles (Has no native function)
	void SetActiveAlterationIdleParticles(bool& Active, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle (Has no native function)
	void ShowReticle(class AController*& CallFuncGetInstigatorControllerReturnValue, class AFortPlayerControllerZone*& K2NodeDynamicCastAsFortPlayerControllerZone, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideReticle (Has no native function)
	void HideReticle(class AController*& CallFuncGetInstigatorControllerReturnValue, class AFortPlayerControllerZone*& K2NodeDynamicCastAsFortPlayerControllerZone, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle (Has no native function)
	void ActivateOrDeactivateWindParticle(bool& bNewActive); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX (Has no native function)
	void DeactivateMuzzleFX(int& TempintVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncGetValueAsBoolReturnValue, struct TArray<class UFXSystemComponent*>& CallFuncGetActiveMuzzleComponentsNewParam, class UFXSystemComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX (Has no native function)
	void DeactivateReloadSmokeFX(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX (Has no native function)
	void ActivateReloadSmokeFX(bool& CallFuncShouldPlayReloadFXReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX (Has no native function)
	void ActivateShellsFX(bool& bool, int& TempintVariable, int& TempintVariable1, int& TempintVariable2, int& TempintVariable3, bool& CallFuncGetValueAsBoolReturnValue, struct FVector& CallFuncConvFloatToVectorReturnValue, bool& CallFuncIsValidReturnValue, int& TempintVariable4, struct TEnumAsByte<En_ShellTypes_01>& TempbyteVariable, int& K2NodeSelectDefault, float& CallFuncActivateShellsFXNativeSpawnRateScaleImplicitCast, float& CallFuncConvFloatToVectorInFloatImplicitCast, float& CallFuncActivateShellsFXNativeRadiusImplicitCast, float& CallFuncActivateShellsFXNativeHeightImplicitCast, float& CallFuncActivateShellsFXNativeCullDistanceImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX (Has no native function)
	void DeactivateShellsFX(bool& CallFuncGetValueAsBoolReturnValue, bool& CallFuncIsActiveReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX (Has no native function)
	void SetupShellFX(class UNiagaraSystem*& TempobjectVariable, class UNiagaraSystem*& TempobjectVariable1, bool& TempboolVariable, int& TempintVariable, int& TempintVariable1, int& TempintVariable2, struct FVector& CallFuncConvFloatToVectorReturnValue, bool& CallFuncShouldPlayPersistentFireFXReturnValue, struct TEnumAsByte<En_ShellTypes_01>& TempbyteVariable, class UNiagaraSystem*& K2NodeSelectDefault, float& CallFuncGetNumericCVarOutValue, bool& CallFuncGetNumericCVarReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, double& CallFuncFMaxReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, int& TempintVariable3, double& CallFuncMultiplyDoubleDoubleReturnValue, int& TempintVariable4, bool& CallFuncDoesSocketExistReturnValue, int& K2NodeSelectDefault1, float& CallFuncSetVariableFloatInValueImplicitCast, float& CallFuncSetVariableFloatInValueImplicitCast1, float& CallFuncConvFloatToVectorInFloatImplicitCast, double& CallFuncFMaxAImplicitCast, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX (Has no native function)
	void UpdateShellEmittersFX(struct TArray<struct TEnumAsByte<En_ShellTypes_01>>& KeystoCheck, struct TArray<struct FName>& ValuestoRunThrough, int& CallFuncGetShellReloadCounterReturnValue, bool& TempboolVariable, int& CallFuncMaxReturnValue, float& CallFuncConvIntToFloatReturnValue, double& K2NodeSelectDefault, bool& CallFuncIsValidReturnValue, double& K2NodeSelectOption1ImplicitCast, float& CallFuncSetVariableFloatInValueImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX (Has no native function)
	void MuzzlePlayReloadFX(struct TEnumAsByte<EFortReloadFXState>& Selection, bool& K2NodeSwitchEnumCmpSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX (Has no native function)
	void MuzzleFlashFX(bool& PersistentFire, int& TempintVariable, int& CallFuncAddIntIntReturnValue, struct TArray<class UFXSystemComponent*>& CallFuncGetActiveMuzzleComponentsNewParam, bool& CallFuncIsUsingScopeReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem, bool& CallFuncNotPreBoolReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncGetValueAsBoolReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, struct TWeakObjectPtr<class UNiagaraSystem>& CallFuncGetCorrectMuzzleNiagaraSystemOutNiagaraSystem, float& CallFuncActivateMuzzleFlashFXNativeMuzzleFlashSmallMaxScaleImplicitCast, float& CallFuncActivateMuzzleFlashFXNativeMuzzleFlashSmallMinScaleImplicitCast, float& CallFuncActivateMuzzleFlashFXNativeMuzzleFlashLargeMaxScaleImplicitCast, float& CallFuncActivateMuzzleFlashFXNativeMuzzleFlashLargeMinScaleImplicitCast, float& CallFuncActivateMuzzleFlashFXNativeMuzzleChanceOfLargeFlashImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity (Has no native function)
	void SetWpnRarity(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale (Has no native function)
	void AddRandomScale(int& TempintVariable, int& TempintVariable1, int& CallFuncAddIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, double& CallFuncRandomFloatInRangeReturnValue, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncRandomFloatInRangeReturnValue1, struct FVector& CallFuncMakeVectorReturnValue1, struct TArray<class UFXSystemComponent*>& CallFuncGetActiveMuzzleComponentsNewParam, double& CallFuncRandomFloatInRangeReturnValue2, class UFXSystemComponent*& CallFuncArrayGetItem, bool& CallFuncLessEqualDoubleDoubleReturnValue, int& CallFuncArrayLengthReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem1, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(int& ValidMuzzleSocketCount, int& TempintArrayIndexVariable, bool& CallFuncGreaterEqualIntIntReturnValue, float& CallFuncGetScalarParameterValueReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct TWeakObjectPtr<class UNiagaraSystem>& CallFuncGetCorrectMuzzleNiagaraSystemOutNiagaraSystem, struct FTransform& TempstructVariable, bool& CallFuncIsNiagaraEffectEnabledSoftPtrReturnValue, class UParticleSystemComponent*& CallFuncAddComponentReturnValue, int& TempintArrayIndexVariable1, struct TArray<struct FName>& CallFuncGetUniqueMuzzleSocketNamesNames, struct TArray<struct FName>& CallFuncGetUniqueMuzzleSocketNamesNames1, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncIsDedicatedServerReturnValue, class UParticleSystemComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue2, bool& CallFuncArrayIsValidIndexReturnValue, struct FName& CallFuncGetMuzzleSocketNameReturnValue, bool& CallFuncArrayIsValidIndexReturnValue1, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& TempintLoopCounterVariable1, bool& CallFuncIsValidReturnValue, bool& CallFuncLessIntIntReturnValue1, int& CallFuncAddIntIntReturnValue1, struct FTransform& TempstructVariable1, class UParticleSystemComponent*& CallFuncAddComponentReturnValue1, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc (Has no native function)
	void AnimateScopePostProcessFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc (Has no native function)
	void AnimateScopePostProcessUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc (Has no native function)
	void AnimateScopePostProcessToggleScopeEventFunc(); // (BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72 (Has no native function)
	void OnLoaded4D1409A247BFDB4C074B628406FC7A72(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632 (Has no native function)
	void OnLoaded4DE6158742ED7EE528BC98A240A81632(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA (Has no native function)
	void OnLoaded3A9BBE884A5C5966375089938B7DC0CA(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9 (Has no native function)
	void OnLoaded83457BA843174AC6288682A342EBEAD9(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4 (Has no native function)
	void OnLoaded5B08633343C4DA6FF40449A8A36357E4(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX (Has no native function)
	void OnPlayWeaponFireFX(bool& bPersistentFire, bool& bSecondaryFire); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX (Has no native function)
	void OnStopWeaponFireFX(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX (Has no native function)
	void OnPlayReloadFX(struct TEnumAsByte<EFortReloadFXState>& ReloadStage); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting (Has no native function)
	void OnSetTargeting(bool& bNewIsTargeting); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip (Has no native function)
	void K2OnUnEquip(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables (Has no native function)
	void InitializeScopeVariables(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths (Has no native function)
	void UpdateEnemyCustomDepths(bool& EnableOrDisable, int& StencilBufferValue); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached (Has no native function)
	void OnWeaponAttached(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration (Has no native function)
	void OnInitAlteration(class UFortAlterationItemDefinition*& NewAlteration); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations (Has no native function)
	void OnInitCosmeticAlterations(struct FFortCosmeticModification& CosmeticMod); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump) (Has no native function)
	void ShellsONonPump(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory (Has no native function)
	void OnEquippedWeaponDestory(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough (Has no native function)
	void SetWeaponPierceThrough(bool& Enable, int& TargetLimit); // (Net | NetReliable | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep (Has no native function)
	void SetWeaponPierceThroughClientRep(bool& Enable, int& TargetLimit); // (Net | NetReliable | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged (Has no native function)
	void OnWeaponVisibilityChanged(bool& bVisible, bool& bSetForLocalControllerOnly); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh (Has no native function)
	void HideWeaponMesh(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh (Has no native function)
	void ShowWeaponMesh(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon (Has no native function)
	void HideWeapon(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon (Has no native function)
	void ShowWeapon(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP (Has no native function)
	void ReverseScopePP(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound (Has no native function)
	void ResetDoonceScopeSound(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff (Has no native function)
	void UnhideThirdPersonStuff(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP (Has no native function)
	void PlayScopePP(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff (Has no native function)
	void HideFirstPersonStuff(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX (Has no native function)
	void AbortScopeFX(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff (Has no native function)
	void HideThirdPersonStuff(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2 (Has no native function)
	void UnhideFirstPersonStuffPart2(int& WhichCall); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1 (Has no native function)
	void UnhideFirstPersonStuffPart1(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX (Has no native function)
	void ForceScopeFX(); // (Event | Public | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange (Has no native function)
	void BindFireRateChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange (Has no native function)
	void PitchUpOnRateOfFireChange(float& NewRateOfFire); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn (Has no native function)
	void ShellEjectionFixOn(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality (Has no native function)
	void BindonEffectsQuality(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff (Has no native function)
	void ShellEjectionOff(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly (Has no native function)
	void ForceScopeBackImmediatly(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX (Has no native function)
	void OnPlayImpactFX(struct FHitResult& HitResult, struct TEnumAsByte<EPhysicalSurface>& ImpactPhysicalSurface, class UFXSystemComponent*& SpawnedPSC); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated (Has no native function)
	void OnStartOverheated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject (Has no native function)
	void LoadNiagaraMuzzleSoftObject(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData (Has no native function)
	void OnApplyFireModeData(class UFortWeaponFireModeData*& FireModeData); // (Event | Protected | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2 (Has no native function)
	void ScopeEffectDelay2(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1 (Has no native function)
	void ScopeEffectDelay1(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic (Has no native function)
	void ExecuteUbergraphBRangedGeneric(int& EntryPoint, double& CallFuncGetPIReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncMultiplyMultiplyFloatFloatReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncIsDedicatedServerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncIsDedicatedServerReturnValue1, class APawn*& CallFuncGetInstigatorReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& K2NodeEventbPersistentFire, bool& K2NodeEventbSecondaryFire, int& TempintLoopCounterVariable, struct TEnumAsByte<EFortReloadFXState>& K2NodeEventReloadStage, int& CallFuncAddIntIntReturnValue, class APawn*& CallFuncGetInstigatorReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess1, double& K2NodeMathExpressionReturnValue, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, bool& CallFuncIsValidReturnValue2, bool& K2NodeMathExpressionReturnValue1, bool& CallFuncIsValidReturnValue3, bool& TempboolIsClosedVariable, bool& K2NodeEventbNewIsTargeting, bool& CallFuncSetHiddenInGameControllerOnlyReturnValue, class APawn*& CallFuncGetInstigatorReturnValue2, class AFortPawn*& K2NodeDynamicCastAsFortPawn2, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue4, struct TArray<class AFortAIPawn*>& CallFuncGetAllActorsOfClassOutActors, bool& K2NodeCustomEventEnableOrDisable, int& K2NodeCustomEventStencilBufferValue, class APawn*& CallFuncGetInstigatorReturnValue3, class AFortPawn*& K2NodeDynamicCastAsFortPawn3, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsValidReturnValue5, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue1, bool& CallFuncIsValidReturnValue6, bool& TempboolHasBeenInitdVariable, class UFortAlterationItemDefinition*& K2NodeEventNewAlteration, struct FFortCosmeticModification& K2NodeEventCosmeticMod, struct TWeakObjectPtr<class UFXSystemAsset>& CallFuncSelectAltSystemAssetReturnValue, bool& CallFuncIsAssetNullReturnValue, bool& CallFuncIsAssetNullReturnValue1, bool& CallFuncNotPreBoolReturnValue, struct TWeakObjectPtr<class UFXSystemAsset>& CallFuncSelectAltSystemAssetReturnValue1, bool& CallFuncIsAssetNullReturnValue2, bool& CallFuncIsAssetNullReturnValue3, class UStaticMeshComponent*& CallFuncgetScopeCompscopeComponent, bool& CallFuncUseScopeTargetingReturnValue, bool& CallFuncSetHiddenInGameOtherLocalControllersOnlyReturnValue, bool& CallFuncIsValidReturnValue7, struct FVector& CallFuncGetSocketLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, int& TempintVariable, class UStaticMeshComponent*& CallFuncgetScopeCompscopeComponent1, int& CallFuncAddIntIntReturnValue1, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue1, struct FVector& CallFuncGetSocketLocationReturnValue2, struct FVector& CallFuncInverseTransformLocationReturnValue, struct FVector& CallFuncInverseTransformLocationReturnValue1, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, bool& CallFuncIsValidReturnValue8, bool& K2NodeCustomEventEnable1, int& K2NodeCustomEventTargetLimit1, int& CallFuncSelectIntReturnValue, class UObject*& K2NodeCustomEventLoaded3, class UStaticMeshComponent*& CallFuncgetScopeCompscopeComponent2, bool& K2NodeCustomEventEnable, int& K2NodeCustomEventTargetLimit, int& CallFuncSelectIntReturnValue1, bool& CallFuncIsValidReturnValue9, bool& CallFuncIsUsingFirstPersonCameraReturnValue, class AController*& CallFuncGetInstigatorControllerReturnValue, class AFortPlayerControllerZone*& K2NodeDynamicCastAsFortPlayerControllerZone, bool& K2NodeDynamicCastbSuccess4, class AFortWindManager*& CallFuncGetWindManagerReturnValue, class APawn*& CallFuncGetInstigatorReturnValue4, class AFortPawn*& K2NodeDynamicCastAsFortPawn4, bool& K2NodeDynamicCastbSuccess5, bool& CallFuncIsValidReturnValue10, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue2, bool& CallFuncIsValidReturnValue11, bool& CallFuncUseScopeTargetingReturnValue1, class UObject*& TempobjectVariable, bool& CallFuncUseScopeTargetingReturnValue2, bool& K2NodeEventbVisible, bool& K2NodeEventbSetForLocalControllerOnly, int& CallFuncGetRenderingDetailModeReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue12, bool& CallFuncSetHiddenInGameControllerOnlyReturnValue1, class UObject*& K2NodeCustomEventLoaded4, int& K2NodeCustomEventWhichCall, class APawn*& CallFuncGetInstigatorReturnValue5, class AFortPawn*& K2NodeDynamicCastAsFortPawn5, bool& K2NodeDynamicCastbSuccess6, bool& CallFuncIsValidReturnValue13, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, float& K2NodeCustomEventNewRateOfFire, float& CallFuncGetWeaponRateOfFireModifierReturnValue, float& CallFuncGetFloatValueReturnValue, bool& CallFuncIsInAthenaReturnValue, bool& CallFuncHasAuthorityReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UFortGameUserSettings*& CallFuncGetFortGameUserSettingsReturnValue, int& TempintArrayIndexVariable, class UObject*& TempobjectVariable1, class UParticleSystem*& K2NodeDynamicCastAsParticleSystem, bool& K2NodeDynamicCastbSuccess7, bool& CallFuncIsDedicatedServerReturnValue2, struct FHitResult& K2NodeEventHitResult, struct TEnumAsByte<EPhysicalSurface>& K2NodeEventImpactPhysicalSurface, class UFXSystemComponent*& K2NodeEventSpawnedPSC, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& CallFuncGetIsTargetingReturnValue, bool& CallFuncGetIsTargetingReturnValue1, bool& CallFuncGetIsTargetingReturnValue2, struct FSlateBrush& CallFuncGetWeaponDataSmallPreviewImageBrushReturnValue, struct TEnumAsByte<EFortWeaponTriggerType>& CallFuncGetWeaponDataTriggerTypeReturnValue, class UTexture2D*& K2NodeDynamicCastAsTexture2D, bool& K2NodeDynamicCastbSuccess8, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncShouldPlayPersistentFireFXReturnValue, class AFortAIPawn*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncIsValidReturnValue14, bool& CallFuncEqualEqualByteByteReturnValue, class APawn*& CallFuncGetInstigatorReturnValue6, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess9, bool& CallFuncIsValidReturnValue15, bool& CallFuncIsInVehicleReturnValue, int& TempintArrayIndexVariable1, bool& CallFuncShouldPlayShellFXReturnValue, class UFortWeaponFireModeData*& K2NodeEventFireModeData, bool& CallFuncIsValidReturnValue16, bool& CallFuncIsValidReturnValue17, class UParticleSystemComponent*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, bool& CallFuncIsDedicatedServerReturnValue3, bool& CallFuncIsValidReturnValue18, bool& CallFuncIsValidReturnValue19, bool& CallFuncGetValueAsBoolReturnValue, struct TWeakObjectPtr<class UNiagaraSystem>& CallFuncGetCorrectMuzzleNiagaraSystemOutNiagaraSystem, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue, bool& CallFuncIsAssetNullReturnValue4, class UNiagaraSystem*& K2NodeDynamicCastAsNiagaraSystem, bool& K2NodeDynamicCastbSuccess10, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncIsValidReturnValue20, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncBooleanANDReturnValue1, int& TempintLoopCounterVariable1, bool& CallFuncLessIntIntReturnValue1, int& CallFuncAddIntIntReturnValue2, class UObject*& K2NodeCustomEventLoaded2, class APawn*& CallFuncGetInstigatorReturnValue7, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess11, bool& CallFuncIsInVehicleReturnValue1, bool& CallFuncIsValidReturnValue21, struct TArray<class UFXSystemComponent*>& CallFuncGetActiveMuzzleComponentsNewParam, bool& CallFuncIsValidReturnValue22, class UFXSystemComponent*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue2, class UParticleSystemComponent*& CallFuncGetBeamPSCReturnValue, bool& CallFuncGetUseBeamParticlesReturnValue, bool& CallFuncBooleanANDReturnValue2, class APawn*& CallFuncGetInstigatorReturnValue8, class APlayerPawn_Generic_Parent_C*& K2NodeDynamicCastAsPlayerPawnGenericParent, bool& K2NodeDynamicCastbSuccess12, float& CallFuncGetNumericCVarOutValue, bool& CallFuncGetNumericCVarReturnValue, double& CallFuncFMaxReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, float& CallFuncGetNumericCVarOutValue1, bool& CallFuncGetNumericCVarReturnValue1, double& CallFuncFMaxReturnValue1, float& CallFuncGetNumericCVarOutValue2, bool& CallFuncGetNumericCVarReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncFMaxReturnValue2, float& CallFuncGetNumericCVarOutValue3, bool& CallFuncGetNumericCVarReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue2, double& CallFuncFMaxReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue1, class UObject*& TempobjectVariable2, double& CallFuncMultiplyDoubleDoubleReturnValue2, class UParticleSystem*& K2NodeDynamicCastAsParticleSystem1, bool& K2NodeDynamicCastbSuccess13, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue4, class UObject*& K2NodeCustomEventLoaded, class UObject*& TempobjectVariable3, class UNiagaraSystem*& K2NodeDynamicCastAsNiagaraSystem1, bool& K2NodeDynamicCastbSuccess14, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, class UParticleSystem*& K2NodeDynamicCastAsParticleSystem2, bool& K2NodeDynamicCastbSuccess15, class UObject*& K2NodeCustomEventLoaded1, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FTransform& CallFuncGetSocketTransformReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue1, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, struct FVector& CallFuncBreakTransformLocation1, struct FRotator& CallFuncBreakTransformRotation1, struct FVector& CallFuncBreakTransformScale1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncGetSocketLocationReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue4, struct FVector& CallFuncGetSocketLocationReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue5, struct FVector& CallFuncSubtractVectorVectorReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue1, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, double& CallFuncVSizeReturnValue, bool& CallFuncDoesSocketExistReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue6, double& CallFuncDivideDoubleDoubleReturnValue5, double& CallFuncDivideDoubleDoubleReturnValue6, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncDivideDoubleDoubleReturnValue7, double& CallFuncDivideDoubleDoubleReturnValue8, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncMakeVectorReturnValue2, bool& CallFuncDoesSocketExistReturnValue1, bool& CallFuncBooleanANDReturnValue3, class APawn*& CallFuncGetInstigatorReturnValue9, class UObject*& TempobjectVariable4, class UNiagaraSystem*& K2NodeDynamicCastAsNiagaraSystem2, bool& K2NodeDynamicCastbSuccess16, class UParticleSystem*& K2NodeDynamicCastAsParticleSystem3, bool& K2NodeDynamicCastbSuccess17, class UNiagaraSystem*& CallFuncSetBeamNiagaraSystemReturnValue, class UParticleSystem*& CallFuncSetBeamParticleSystemReturnValue, bool& CallFuncIsValidReturnValue23, float& CallFuncRetriggerableDelayDurationImplicitCast, double& CallFuncSetPostProcessParamsInputPinImplicitCast, double& CallFuncFMaxAImplicitCast, double& CallFuncFMaxAImplicitCast1, double& CallFuncFMaxAImplicitCast2, double& CallFuncFMaxAImplicitCast3, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast1, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast2, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast3, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast2); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature (Has no native function)
	void OnPersistentFireStoppedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature (Has no native function)
	void OnStartFiringDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature (Has no native function)
	void onAimDownSightsChangedDelegateSignature(bool& AimDownsights); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

