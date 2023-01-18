// BlueprintGeneratedClass /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C
// Size: 0xb78
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	double PostTriggerCancelDelay; // 0xb30 (0x8)
	bool HideReticle; // 0xb38 (0x1)
	unsigned char unreflected_b39[0x7]; // 0xb39 (0x7) 
	struct FGameplayTagContainer ReticleHUDElementTags; // 0xb40 (0x20)
	struct FName MontageOverrideSection; // 0xb60 (0x4)
	bool bAbilityStopped; // 0xb64 (0x1)
	unsigned char unreflected_b65[0x3]; // 0xb65 (0x3) 
	struct FName EmoteHolsterId; // 0xb68 (0x4)
	bool bHolstered; // 0xb6c (0x1)
	unsigned char unreflected_b6d[0x3]; // 0xb6d (0x3) 
	struct FName HUDElementVisibilityReasonName; // 0xb70 (0x4)
	int WaitForLoadedCount; // 0xb74 (0x4)

	/* Functions */

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.ShouldPlayFailedMontage (Has no native function)
	bool ShouldPlayFailedMontage(struct FGameplayTagContainer& FailedReason); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.IsMontagePlaying (Has no native function)
	void IsMontagePlaying(class UAnimMontage*& Montage, bool& Result, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, bool& CallFuncMontageIsPlayingReturnValue, bool& CallFuncIsValidReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.ForceStopMontage (Has no native function)
	void ForceStopMontage(class AFortPawn*& CallFuncGetActivatingPawnReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, float& CallFuncGetDefaultBlendOutTimeReturnValue, class UAnimInstance*& CallFuncGetAnimInstanceReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.SetReticleVisibility (Has no native function)
	void SetReticleVisibility(bool& ShouldHide, bool& CallFuncIsServerReturnValue, class AController*& CallFuncGetInstigatorControllerReturnValue, class AFortPlayerControllerZone*& K2NodeDynamicCastAsFortPlayerControllerZone, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay (Has no native function)
	struct TWeakObjectPtr<class UAnimMontage> GetMontageToPlay(class UFortMontageItemDefinitionBase*& EmoteAsset, struct TEnumAsByte<EFortCustomBodyType>& BodyType, struct TEnumAsByte<EFortCustomGender>& Gender); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender (Has no native function)
	void GetBodyTypeAndGender(struct TEnumAsByte<EFortCustomBodyType>& BodyType, struct TEnumAsByte<EFortCustomGender>& Gender, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<EFortCustomBodyType>& CallFuncGetCharacterBodyTypeReturnValue, struct TEnumAsByte<EFortCustomGender>& CallFuncGetCharacterGenderReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled, class UObject*& CallFuncGetCurrentSourceObjectReturnValue, class UFortMontageItemDefinitionBase*& K2NodeDynamicCastAsFortMontageItemDefinitionBase, bool& K2NodeDynamicCastbSuccess, class AFortPawn*& CallFuncGetActivatingPawnReturnValue); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2 (Has no native function)
	void CompletedDE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2 (Has no native function)
	void CancelledDE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2 (Has no native function)
	void TriggeredDE7019AA4E006879EDD264899869FEE2(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D (Has no native function)
	void OnLoadedD5C2B0D14DEB9277D15965B97800FD1D(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_DA96775D40CD998BF2FF0085FE5AB126 (Has no native function)
	void OnLoadedDA96775D40CD998BF2FF0085FE5AB126(class UObject*& Loaded); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying (Has no native function)
	void OnMontageStartedPlaying(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.PlayInitialEmoteMontage (Has no native function)
	void PlayInitialEmoteMontage(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.NonMontageAsyncAssetsReady (Has no native function)
	void NonMontageAsyncAssetsReady(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic (Has no native function)
	void ExecuteUbergraphGABEmoteGeneric(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, bool& CallFuncIsValidReturnValue, float& CallFuncGetDefaultBlendOutTimeReturnValue, bool& CallFuncIsValidReturnValue1, class UObject*& CallFuncGetCurrentSourceObjectReturnValue, class UObject*& TempobjectVariable, class UFortMontageItemDefinitionBase*& K2NodeDynamicCastAsFortMontageItemDefinitionBase, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<EFortCustomBodyType>& CallFuncGetBodyTypeAndGenderBodyType, struct TEnumAsByte<EFortCustomGender>& CallFuncGetBodyTypeAndGenderGender, class UObject*& K2NodeCustomEventLoaded, struct TWeakObjectPtr<class UAnimMontage>& CallFuncGetMontageToPlayReturnValue, bool& CallFuncIsAssetNullReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, int& TempintVariable, bool& CallFuncIsValidReturnValue2, bool& CallFuncEqualEqualIntIntReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess1, class UObject*& CallFuncGetCurrentSourceObjectReturnValue1, class UFortMontageItemDefinitionBase*& K2NodeDynamicCastAsFortMontageItemDefinitionBase1, bool& K2NodeDynamicCastbSuccess2, class UObject*& TempobjectVariable1, struct FString& CallFuncGetPersistentNameReturnValue, class UAnimMontage*& K2NodeDynamicCastAsAnimMontage, bool& K2NodeDynamicCastbSuccess3, struct FName& CallFuncConvStringToNameReturnValue, bool& CallFuncIsMontagePlayingResult, class UObject*& K2NodeCustomEventLoaded1, struct FGameplayAbilityTargetDataHandle& TempstructVariable, bool& CallFuncShouldHolsterWeaponReturnValue, struct FGameplayTag& TempstructVariable1, struct FName& CallFuncPickMontageSectionReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue2, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess4, int& CallFuncSubtractIntIntReturnValue, struct TArray<struct FSoftObjectPath>& CallFuncGatherVariantAssetsVariantAssetsNeeded, struct FSoftObjectPath& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, struct TWeakObjectPtr<class UObject>& CallFuncConvSoftObjPathToSoftObjRefReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncConvIntToBoolReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate4); // (Final | 0x00008000 | HasDefaults)
};

