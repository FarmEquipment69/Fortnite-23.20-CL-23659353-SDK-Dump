// BlueprintGeneratedClass /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
// Size: 0x3c08
class ANPC_Pawn_Wildlife_Parent_C : public ANPC_Pawn_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3aa8 (0x8)
	class UNiagaraComponent* WildlifeFootDust; // 0x3ab0 (0x8)
	class UFortPawnComponent_Convert* ConvertComponent; // 0x3ab8 (0x8)
	struct TWeakObjectPtr<class UClass> LayerIdle; // 0x3ac0 (0x28)
	struct TWeakObjectPtr<class UClass> LayerLocomotion; // 0x3ae8 (0x28)
	struct TWeakObjectPtr<class UClass> LayerJump; // 0x3b10 (0x28)
	unsigned char LeaderTeam; // 0x3b38 (0x1)
	unsigned char unreflected_3b39[0x7]; // 0x3b39 (0x7) 
	class USoundEffectSourcePresetChain* VocalSourceEffectChainOverride; // 0x3b40 (0x8)
	bool bTamingEnabled; // 0x3b48 (0x1)
	unsigned char unreflected_3b49[0x7]; // 0x3b49 (0x7) 
	struct FMulticastInlineDelegate OnPickupGrabbedDestroyed; // 0x3b50 (0x10)
	bool bCanBeInteractedWithWhileTamed; // 0x3b60 (0x1)
	unsigned char unreflected_3b61[0x3]; // 0x3b61 (0x3) 
	struct FActiveGameplayEffectHandle* GEQuestConvertedHandle; // 0x3b64 (0x8)
	unsigned char unreflected_3b6c[0x4]; // 0x3b6c (0x4) 
	class UClass* GEQuestConvertedIrwin; // 0x3b70 (0x8)
	struct FMulticastInlineDelegate ConvertedDispatcher; // 0x3b78 (0x10)
	bool bIsBeingRidden; // 0x3b88 (0x1)
	bool NPCStatusWidgetShouldDisplayDamage; // 0x3b89 (0x1)
	unsigned char unreflected_3b8a[0x6]; // 0x3b8a (0x6) 
	class UClass* GEGoalSelectionWhileTamed; // 0x3b90 (0x8)
	struct FGameplayTagContainer TGoalSelectionWhileTamed; // 0x3b98 (0x20)
	double CurrentEnergy; // 0x3bb8 (0x8)
	struct FGameplayTag IrwinSlidingGC; // 0x3bc0 (0x4)
	bool bLeaderSetSuccess; // 0x3bc4 (0x1)
	unsigned char unreflected_3bc5[0x3]; // 0x3bc5 (0x3) 
	struct FGameplayTag JumpLandSoundLibTag; // 0x3bc8 (0x4)
	struct FGameplayTag TameSoundLibTag; // 0x3bcc (0x4)
	class USoundBase* SoundIndicatorSoundUnridden; // 0x3bd0 (0x8)
	class USoundBase* SoundIndicatorSoundRidden; // 0x3bd8 (0x8)
	bool OverrideIncomingDmg; // 0x3be0 (0x1)
	unsigned char unreflected_3be1[0x7]; // 0x3be1 (0x7) 
	double OverridenIncomingDmgAmount; // 0x3be8 (0x8)
	struct FMulticastInlineDelegate OnModifiedDamageReceived; // 0x3bf0 (0x10)
	double ColorVariation; // 0x3c00 (0x8)

	/* Functions */

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.TryShowHealthBar (Has no native function)
	void TryShowHealthBar(class UFortPawnComponent_Convert*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncOnLocalPlayersTeamReturnValue, bool& CallFuncIsLocallyControlledReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayStateChangeAudio (Has no native function)
	void PlayStateChangeAudio(struct TEnumAsByte<Enum_NPC_AlertLevel>& Index, struct FGameplayTag& TempstructVariable, struct FGameplayTag& TempstructVariable1, struct FGameplayTag& TempstructVariable2, struct FGameplayTag& TempstructVariable3, struct FGameplayTag& TempstructVariable4, struct TEnumAsByte<Enum_NPC_AlertLevel>& TempbyteVariable, struct FGameplayTag& K2NodeSelectDefault, bool& CallFuncIsGameplayTagValidReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayAdditiveHitReacts (Has no native function)
	void PlayAdditiveHitReacts(struct FVector& HitDirection, class UAnimMontage*& AnimMontage, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, bool& CallFuncHasTagReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintModifyIncomingDamage (Has no native function)
	float BlueprintModifyIncomingDamage(float& Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class AController*& EventInstigator, class AActor*& DamageCauser); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPCStatusWidget_UpdateKeepVisible (Has no native function)
	void NPCStatusWidgetUpdateKeepVisible(bool& ShouldKeepVisible, float& CallFuncGetMaxHealthReturnValue, float& CallFuncGetHealthReturnValue, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, class APawn*& CallFuncK2GetPawnReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget, bool& K2NodeDynamicCastbSuccess, double& CallFuncGetDistanceBetweenActorsDistance, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CanBeInteractedWithWhenTamed (Has no native function)
	void CanBeInteractedWithWhenTamed(bool& bCanInteract, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC PickupGrabbed_Destroyed (Has no native function)
	void NPCPickupGrabbedDestroyed(class AActor*& ActorGrabbed); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.SetTamingEnabled (Has no native function)
	void SetTamingEnabled(bool& EnableTaming, bool& CallFuncNPCCanBeInteractedWithCanInteract, class UFortPawnComponent_Convert*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC CanBeInteractedWith (Has no native function)
	void NPCCanBeInteractedWith(bool& CanInteract, bool& CallFuncNPCCanBeInteractedWithCanInteract, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX (Has no native function)
	void AttachAndApplyVocalFX(struct FSoundLibraryPlaySoundResult& SoundLibraryResult, int& TempintArrayIndexVariable, int& CallFuncArrayLengthReturnValue, class UAudioComponent*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, bool& CallFuncMatchesTagReturnValue, int& TempintLoopCounterVariable, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface (Has no native function)
	void PlayWaterSplashatWaterSurface(class AFortWaterBodyActor*& WaterBody, bool& EnterWater); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget (Has no native function)
	bool IsValidAutoFireTarget(class AActor*& Attacker); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib (Has no native function)
	void PlaySoundLib(struct FGameplayTag& EventName, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, struct FSoundLibrarySimpleContextSettings& K2NodeMakeStructSoundLibrarySimpleContextSettings, bool& CallFuncIsValidReturnValue, class UB_CreatureSoundLibraryContext_C*& CallFuncSpawnObjectReturnValue, bool& CallFuncIsValidReturnValue1, struct FSoundLibraryPlaySoundResult& CallFuncPlaySoundOutResults); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator (Has no native function)
	void UpdateTamingIndicator(bool& CallFuncHasAuthorityReturnValue, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, unsigned char& CallFuncGetActorTeamReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam (Has no native function)
	void OnRepLeaderTeam(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06 (Has no native function)
	void OnLoaded9DC5FDA543FAF13BB29E95AA78B28A06(class UClass*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers (Has no native function)
	void LinkAnimationLayers(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer (Has no native function)
	void AsyncLinkAnimationLayer(struct TWeakObjectPtr<class UClass>& AnimationLayer); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP (Has no native function)
	void OnCustomizationsLoadedBP(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith (Has no native function)
	void OnNPCPawnInteractedWith(class AActor*& AIPawn, class AFortPlayerPawn*& InteractingPlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature (Has no native function)
	void BndEvtConvertComponentK2NodeComponentBoundEvent0ConvertedEventDelegateSignature(class AFortPawn*& InstigatorPawn, class AFortPawn*& ConvertedPawn); // (BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature (Has no native function)
	void BndEvtConvertComponentK2NodeComponentBoundEvent1UnconvertedEventDelegateSignature(class AFortPawn*& UnconvertedPawn, enum EUnconvertReason& UnconvertReason); // (BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer (Has no native function)
	void NPCAlertLevelChangedServer(struct TEnumAsByte<Enum_NPC_AlertLevel>& NPCAlertLevel); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet (Has no native function)
	void NPCLeaderSet(bool& Success, class AActor*& Leader, enum EUnconvertReason& UnconvertReason); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature (Has no native function)
	void BndEvtSoundLibraryComponentK2NodeComponentBoundEvent2OnSoundLibraryPlayEventDelegateSignature(struct FSoundLibraryPlaySoundResult& Results, class USoundLibraryContext*& Context); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnBeingControlledChanged (Has no native function)
	void OnBeingControlledChanged(bool& bControlled); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnApplyEffectOptimization (Has no native function)
	void OnApplyEffectOptimization(int& NewBudgetValue); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC UpdateHealthBarComponentVisibility (Has no native function)
	void NPCUpdateHealthBarComponentVisibility(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPawnHealthChanged_Event_0 (Has no native function)
	void OnPawnHealthChangedEvent0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On Pawn Focused (Has no native function)
	void OnPawnFocused(class AFortPawn*& FocusedPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.HideStatus (Has no native function)
	void HideStatus(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnSlidingStateChanged (Has no native function)
	void OnSlidingStateChanged(bool& bNewSlidingState); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLanded (Has no native function)
	void OnLanded(struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLandedMulticast (Has no native function)
	void OnLandedMulticast(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnTamedMulticast (Has no native function)
	void OnTamedMulticast(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent (Has no native function)
	void ExecuteUbergraphNPCPawnWildlifeParent(int& EntryPoint, float& CallFuncGetMaxHealthReturnValue, bool& TempwildcardToallowthepreviousvaluetobereturnedVariable, struct TWeakObjectPtr<class UClass>& K2NodeCustomEventAnimationLayer, bool& CallFuncIsValidSoftClassReferenceReturnValue, bool& CallFuncIsValidReturnValue, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventAIPawn, class AFortPlayerPawn*& K2NodeEventInteractingPlayerPawn, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, class AFortPawn*& K2NodeComponentBoundEventInstigatorPawn, class AFortPawn*& K2NodeComponentBoundEventConvertedPawn, class AFortPawn*& K2NodeComponentBoundEventUnconvertedPawn, enum EUnconvertReason& K2NodeComponentBoundEventUnconvertReason, unsigned char& CallFuncGetActorTeamReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeEventNPCAlertLevel, bool& CallFuncIsDedicatedServerReturnValue, bool& K2NodeSwitchEnumCmpSuccess, float& K2NodeEventDamage2, struct FGameplayTagContainer& K2NodeEventDamageTags2, struct FVector& K2NodeEventMomentum2, struct FHitResult& K2NodeEventHitInfo2, class AController*& K2NodeEventInstigatedBy2, class AActor*& K2NodeEventDamageCauser2, struct FGameplayEffectContextHandle& K2NodeEventEffectContext2, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& K2NodeEventSuccess, class AActor*& K2NodeEventLeader, enum EUnconvertReason& K2NodeEventUnconvertReason, int& CallFuncGetConsoleVariableIntValueReturnValue, struct FSoundLibraryPlaySoundResult& K2NodeComponentBoundEventResults, class USoundLibraryContext*& K2NodeComponentBoundEventContext, bool& CallFuncEqualEqualIntIntReturnValue, bool& K2NodeEventbControlled, bool& CallFuncNPCCanBeInteractedWithCanInteract, bool& CallFuncNPCUpdateInteractEnabledInteract, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncCanBeInteractedWithWhenTamedbCanInteract, int& K2NodeEventNewBudgetValue, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncIsDeadReturnValue, float& K2NodeEventDamage1, struct FGameplayTagContainer& K2NodeEventDamageTags1, struct FVector& K2NodeEventMomentum1, struct FHitResult& K2NodeEventHitInfo1, class AFortPawn*& K2NodeEventInstigatedBy1, class AActor*& K2NodeEventDamageCauser1, struct FGameplayEffectContextHandle& K2NodeEventEffectContext1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess2, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, enum ESubGame& CallFuncGetSubGameReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue1, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue, bool& CallFuncIsValidReturnValue3, class UFortHUDContext*& CallFuncGetContextReturnValue, bool& CallFuncHasAuthorityReturnValue1, bool& CallFuncIsValidReturnValue4, enum ESubGame& CallFuncGetSubGameReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue1, bool& CallFuncIsValidReturnValue5, struct TArray<bool>& TempwildcardAvoidcreatingarrayeverytimeVariable, class AFortPawn*& K2NodeCustomEventFocusedPawn, bool& CallFuncIsValidReturnValue6, bool& CallFuncEqualEqualObjectObjectReturnValue, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue1, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget1, bool& K2NodeDynamicCastbSuccess3, class UFortPawnComponent_Convert*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue7, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue2, bool& CallFuncIsValidReturnValue8, class AFortPlayerStateAthena*& K2NodeDynamicCastAsFortPlayerStateAthena, bool& K2NodeDynamicCastbSuccess4, unsigned char& CallFuncGetSquadIdReturnValue, class UClass*& TempclassVariable, class UClass*& K2NodeClassDynamicCastAsAnimInstance, bool& K2NodeClassDynamicCastbSuccess, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, bool& CallFuncIsValidReturnValue9, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, bool& CallFuncIsValidReturnValue10, bool& CallFuncIsValidReturnValue11, int& CallFuncRemoveActiveEffectsWithTagsReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1, class UUserWidget*& CallFuncGetUserWidgetObjectReturnValue2, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, class UNPCStatusWidget_C*& K2NodeDynamicCastAsNPCStatusWidget2, bool& K2NodeDynamicCastbSuccess5, class AFortPlayerStateAthena*& K2NodeDynamicCastAsFortPlayerStateAthena1, bool& K2NodeDynamicCastbSuccess6, unsigned char& CallFuncGetSquadIdReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue3, bool& K2NodeEventbNewSlidingState, struct FGameplayEffectContextHandle& CallFuncMakeSimpleFortEffectContextReturnValue, class UClass*& K2NodeCustomEventLoaded, bool& CallFuncArrayContainsReturnValue, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AFortPawn*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, struct FHitResult& K2NodeEventHit, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncHasAuthorityReturnValue2, float& CallFuncGetHealthReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnModifiedDamageReceived__DelegateSignature (Has no native function)
	void OnModifiedDamageReceivedDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ConvertedDispatcher__DelegateSignature (Has no native function)
	void ConvertedDispatcherDelegateSignature(bool& Converted, class AFortPawn*& InstigatorPawn); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPickupGrabbed_Destroyed__DelegateSignature (Has no native function)
	void OnPickupGrabbedDestroyedDelegateSignature(class ANPC_Pawn_Wildlife_Parent_C*& WildlifePawn, class AActor*& ActorGrabbed); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

