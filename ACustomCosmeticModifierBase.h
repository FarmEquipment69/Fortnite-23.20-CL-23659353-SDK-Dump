// Class /Script/FortniteGame.CustomCosmeticModifierBase
// Size: 0x460
class ACustomCosmeticModifierBase : public AActor
{
	struct FGameplayTagContainer CurieElementsToCareAbout; // 0x288 (0x20)
	enum EVehicleEnteredCosmeticReaction EnteredVehicleSeatsToCareAbout; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x3]; // 0x2a9 (0x3) 
	struct TWeakObjectPtr<class AFortPlayerPawn> FortPlayerPawnPtr; // 0x2ac (0x8)
	unsigned char unreflected_2b4[0x4]; // 0x2b4 (0x4) 
	struct TArray<class UPrimitiveComponent*> SpawnedComponents; // 0x2b8 (0x10)
	unsigned char unreflected_2c8[0x10]; // 0x2c8 (0x10) 
	unsigned char bUsesCharacterCustomizationFinished; // 0x2d8 (0x1)
	unsigned char bUsesDayPhaseChange; // 0x2d8 (0x1)
	unsigned char bUsesWeaponChangeDelegate; // 0x2d8 (0x1)
	unsigned char bUsesWeaponFire; // 0x2d8 (0x1)
	unsigned char bUsesNewWeapon; // 0x2d8 (0x1)
	unsigned char bUsesWeaponChange; // 0x2d8 (0x1)
	unsigned char bUsesCurieWhatsoever; // 0x2d8 (0x1)
	unsigned char bUsesCurieAttach; // 0x2d8 (0x1)
	unsigned char bUsesCurieDetach; // 0x2d9 (0x1)
	unsigned char bUsesEnteredVehicle; // 0x2d9 (0x1)
	unsigned char bUsesExitVehicle; // 0x2d9 (0x1)
	unsigned char bUsesTargetingOrFirstPersonCameraChange; // 0x2d9 (0x1)
	unsigned char bUsesOnHitPawn; // 0x2d9 (0x1)
	unsigned char bUsesOnBeginSkydiving; // 0x2d9 (0x1)
	unsigned char bUsesOnEndSkydiving; // 0x2d9 (0x1)
	unsigned char bUsesPawnJumped; // 0x2d9 (0x1)
	unsigned char bUsesPawnLanded; // 0x2da (0x1)
	unsigned char bUsesBeginSwimming; // 0x2da (0x1)
	unsigned char bUsesEndSwimming; // 0x2da (0x1)
	unsigned char bUsesBeginSliding; // 0x2da (0x1)
	unsigned char bUsesEndSliding; // 0x2da (0x1)
	unsigned char bRegisteredForDayPhaseChange; // 0x2da (0x1)
	unsigned char bRegisteredForSkydiving; // 0x2da (0x1)
	unsigned char bRegisteredForTargetingOrFirstPersonCamera; // 0x2da (0x1)
	unsigned char bRegisteredForWeaponChanges; // 0x2db (0x1)
	unsigned char bRegisteredForCurieChanges; // 0x2db (0x1)
	unsigned char bRegisteredForNewWeapons; // 0x2db (0x1)
	unsigned char bRegisteredForEnterVehicle; // 0x2db (0x1)
	unsigned char bRegisteredForExitVehicle; // 0x2db (0x1)
	unsigned char bRegisteredOnHitPawn; // 0x2db (0x1)
	unsigned char bInVehicle; // 0x2db (0x1)
	unsigned char padding_2dc[0x184]; // 0x2dc (0x184)

	/* Functions */

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.SpawnSystemAttachedPartModifier (Underlying native function: SpawnSystemAttachedPartModifier 0x882e668)
	class UNiagaraComponent* SpawnSystemAttachedPartModifier(enum ECosmeticModifierOutExec& OutExec, class UNiagaraSystem*& SystemTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, bool& bAutoActivate, bool& bOwnedByModifier, enum ENCPoolMethod& PoolingMethod, bool& bPreCullCheck, bool& bMatchPawnCustomDepth, bool& bDebounce, float& DebounceTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.SpawnSystemAtLocationPartModifier (Underlying native function: SpawnSystemAtLocationPartModifier 0x882e234)
	class UNiagaraComponent* SpawnSystemAtLocationPartModifier(enum ECosmeticModifierOutExec& OutExec, class UNiagaraSystem*& SystemTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, bool& bAutoActivate, bool& bOwnedByModifier, enum ENCPoolMethod& PoolingMethod, bool& bPreCullCheck, bool& bMatchPawnCustomDepth, bool& bDebounce, float& DebounceTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.SpawnEmitterAttachedPartModifier (Underlying native function: SpawnEmitterAttachedPartModifier 0x882ddc4)
	class UParticleSystemComponent* SpawnEmitterAttachedPartModifier(enum ECosmeticModifierOutExec& OutExec, class UParticleSystem*& EmitterTemplate, class USceneComponent*& AttachToComponent, struct FName& AttachPointName, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, struct TEnumAsByte<EAttachLocation>& LocationType, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivate, bool& bMatchPawnCustomDepth, bool& bDebounce, float& DebounceTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.SpawnEmitterAtLocationPartModifier (Underlying native function: SpawnEmitterAtLocationPartModifier 0x882da40)
	class UParticleSystemComponent* SpawnEmitterAtLocationPartModifier(enum ECosmeticModifierOutExec& OutExec, class UParticleSystem*& EmitterTemplate, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale, bool& bAutoDestroy, enum EPSCPoolMethod& PoolingMethod, bool& bAutoActivateSystem, bool& bMatchPawnCustomDepth, bool& bDebounce, float& DebounceTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.SetCosmeticActiveVariant (Underlying native function: SetCosmeticActiveVariant 0x882d880)
	void SetCosmeticActiveVariant(struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition>& SoftCosmetic, struct FGameplayTag& ChannelTag, struct FGameplayTag& VariantTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.PreDestruction (Has no native function)
	void PreDestruction(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnWeaponFired (Has no native function)
	void OnWeaponFired(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnWeaponChanged (Has no native function)
	void OnWeaponChanged(class AFortWeapon*& NewWeapon, class AFortWeapon*& OldWeapon); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnTargetingOrFirstPersonCameraChanged (Has no native function)
	void OnTargetingOrFirstPersonCameraChanged(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnPostResIn (Underlying native function: OnPostResIn 0x22c0e58)
	void OnPostResIn(); // (BlueprintCosmetic | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnPlayerWeaponChanged (Underlying native function: OnPlayerWeaponChanged 0x2a35cb4)
	void OnPlayerWeaponChanged(class AFortWeapon*& NewWeapon, class AFortWeapon*& OldWeapon); // (Final | Native | Private)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnPawnUpdated (Has no native function)
	void OnPawnUpdated(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnPawnSet (Has no native function)
	void OnPawnSet(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnPawnLanded (Has no native function)
	void OnPawnLanded(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnPawnJumped (Has no native function)
	void OnPawnJumped(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnNewWeapons (Has no native function)
	void OnNewWeapons(struct TArray<class UFortItem*>& WeaponsAsItems); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnNewPlayerWeaponType (Has no native function)
	void OnNewPlayerWeaponType(enum EFortItemType& NewType, enum EFortItemType& OldType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnNativeCurieDetached (Underlying native function: OnNativeCurieDetached 0x882d4c4)
	void OnNativeCurieDetached(class UObject*& CurieOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& tag); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnNativeCurieAttached (Underlying native function: OnNativeCurieAttached 0x882d3c0)
	void OnNativeCurieAttached(class UObject*& CurieOwner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& tag); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnHitPawn (Has no native function)
	void OnHitPawn(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnExternalDependencyActorDestroyed (Underlying native function: OnExternalDependencyActorDestroyed 0x882d340)
	void OnExternalDependencyActorDestroyed(class AActor*& OtherActor); // (Final | Native | Public)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnExitVehicle (Has no native function)
	void OnExitVehicle(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnEnterVehicle (Has no native function)
	void OnEnterVehicle(struct TScriptInterface<class IFortVehicleInterface>& VehicleEntered); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnEndSwimming (Has no native function)
	void OnEndSwimming(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnEndSliding (Has no native function)
	void OnEndSliding(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnEndSkydiving (Has no native function)
	void OnEndSkydiving(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnDayPhaseChanged (Has no native function)
	void OnDayPhaseChanged(enum EFortDayPhase& CurrentDayPhase, enum EFortDayPhase& PreviousDayPhase, bool& bAtCreation); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnCurieStateDetached (Has no native function)
	void OnCurieStateDetached(struct FGameplayTag& tag); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnCurieStateAttached (Has no native function)
	void OnCurieStateAttached(struct FGameplayTag& tag); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnCharacterCustomizationFinished (Has no native function)
	void OnCharacterCustomizationFinished(struct TArray<struct FAppliedCharacterPartInfo>& CharacterPartInfo); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnBeginSwimming (Has no native function)
	void OnBeginSwimming(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnBeginSliding (Has no native function)
	void OnBeginSliding(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.OnBeginSkydiving (Has no native function)
	void OnBeginSkydiving(); // (BlueprintCosmetic | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.NativeWeaponFired (Underlying native function: NativeWeaponFired 0x26b2ac8)
	void NativeWeaponFired(class AFortWeapon*& FiringWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.NativePawnCustomizationFinished (Underlying native function: NativePawnCustomizationFinished 0x854642c)
	void NativePawnCustomizationFinished(class AFortPlayerPawn*& PlayerPawn); // (Native | Protected)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.NativeOnHitPawn (Underlying native function: NativeOnHitPawn 0x882d1c0)
	void NativeOnHitPawn(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.NativeExitedVehicle (Underlying native function: NativeExitedVehicle 0x882d1ac)
	void NativeExitedVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.NativeEnteredVehicle (Underlying native function: NativeEnteredVehicle 0x882d198)
	void NativeEnteredVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.IsInFrontEnd (Underlying native function: IsInFrontEnd 0x2e29de4)
	bool IsInFrontEnd(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.HandleSetFirstPersonCameraOrPawnTargetingChanged (Underlying native function: HandleSetFirstPersonCameraOrPawnTargetingChanged 0x882d11c)
	void HandleSetFirstPersonCameraOrPawnTargetingChanged(bool& bChanged); // (Final | Native | Private)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.HandlePawnLanded (Underlying native function: HandlePawnLanded 0x882d088)
	void HandlePawnLanded(struct FHitResult& Hit); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.HandlePawnJumped (Underlying native function: HandlePawnJumped 0x882d064)
	void HandlePawnJumped(); // (Final | Native | Private)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.HandleMovementModeChanged (Underlying native function: HandleMovementModeChanged 0x882cf68)
	void HandleMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.GetLoadout (Underlying native function: GetLoadout 0x2d0525c)
	struct FFortAthenaLoadout GetLoadout(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CustomCosmeticModifierBase.GetAssociatedPlayerPawn (Underlying native function: GetAssociatedPlayerPawn 0x281fbe0)
	class AFortPlayerPawn* GetAssociatedPlayerPawn(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

