// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C
// Size: 0xcf4
class UGAB_GenericDeath_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UAnimMontage* DeathMontage; // 0xb28 (0x8)
	struct FName DeathMontageSectionName; // 0xb30 (0x4)
	unsigned char unreflected_b34[0x4]; // 0xb34 (0x4) 
	struct FVector DeathHitDirection; // 0xb38 (0x18)
	struct FHitResult DeathHitResult; // 0xb50 (0xe0)
	struct FGameplayTagContainer DamageTags; // 0xc30 (0x20)
	struct FGameplayTagContainer SpawnDroneTags; // 0xc50 (0x20)
	class UAnimMontage* Front; // 0xc70 (0x8)
	class UAnimMontage* Left; // 0xc78 (0x8)
	class UAnimMontage* Right; // 0xc80 (0x8)
	class UAnimMontage* Back; // 0xc88 (0x8)
	class UAnimMontage* HeadFront; // 0xc90 (0x8)
	class UAnimMontage* HeadLeft; // 0xc98 (0x8)
	class UAnimMontage* HeadRight; // 0xca0 (0x8)
	class UAnimMontage* HeadBack; // 0xca8 (0x8)
	int FrontSectionNameCount; // 0xcb0 (0x4)
	int LeftSectionNameCount; // 0xcb4 (0x4)
	int RightSectionNameCount; // 0xcb8 (0x4)
	int BackSectionNameCount; // 0xcbc (0x4)
	int HeadFrontSectionNameCount; // 0xcc0 (0x4)
	int HeadLeftSectionNameCount; // 0xcc4 (0x4)
	int HeadRightSectionNameCount; // 0xcc8 (0x4)
	int HeadBackSectionNameCount; // 0xccc (0x4)
	struct FName FrontMontageSectionPrefix; // 0xcd0 (0x4)
	struct FName BackMontageSectionPrefix; // 0xcd4 (0x4)
	struct FName LeftMontageSectionPrefix; // 0xcd8 (0x4)
	struct FName RightMontageSectionPrefix; // 0xcdc (0x4)
	struct FName HeadFrontMontageSectionPrefix; // 0xce0 (0x4)
	struct FName HeadBackMontageSectionPrefix; // 0xce4 (0x4)
	struct FName HeadLeftMontageSectionPrefix; // 0xce8 (0x4)
	struct FName HeadRightMontageSectionPrefix; // 0xcec (0x4)
	struct FGameplayTag TeleportOutCue; // 0xcf0 (0x4)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName (Has no native function)
	void GetRandomSectionName(int& MaxNumberOfSections, struct FName& OriginalSectionName, struct FName& SectionName, int& CallFuncRandomIntegerReturnValue, struct FString& CallFuncConvNameToStringReturnValue, struct FString& CallFuncConvIntToStringReturnValue, struct FString& CallFuncConcatStrStrReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct FString& CallFuncMakeLiteralStringReturnValue, struct FName& CallFuncConvStringToNameReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection (Has no native function)
	void InitializeDeathHitDirection(struct FGameplayEventData& EventHitData, struct FVector& CallFuncGetImpulseDataImpulseDirection, float& CallFuncGetImpulseDataKnockbackMagnitude, float& CallFuncGetImpulseDataKnockbackZAngle, struct FHitResult& CallFuncEffectContextGetHitResultReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4 (Has no native function)
	void OnCancelledCD8A514040DDA2A4EF94DD913E1B01E4(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4 (Has no native function)
	void OnInterruptedCD8A514040DDA2A4EF94DD913E1B01E4(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4 (Has no native function)
	void OnBlendOutCD8A514040DDA2A4EF94DD913E1B01E4(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4 (Has no native function)
	void OnCompletedCD8A514040DDA2A4EF94DD913E1B01E4(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection (Has no native function)
	void PickDeathMontageSection(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath (Has no native function)
	void ExecuteUbergraphGABGenericDeath(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, bool& K2NodeEventbWasCancelled, class AFortPawn*& CallFuncGetActivatingPawnReturnValue1, bool& CallFuncHasAuthorityReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, class ABP_VictoryDrone_C*& CallFuncFinishSpawningActorReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncEqualEqualNameNameReturnValue, bool& CallFuncEqualEqualNameNameReturnValue1, bool& CallFuncEqualEqualNameNameReturnValue2, bool& CallFuncEqualEqualNameNameReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FName& CallFuncGetRandomSectionNameSectionName, struct FName& CallFuncGetRandomSectionNameSectionName1, struct FName& CallFuncGetRandomSectionNameSectionName2, struct FName& CallFuncGetRandomSectionNameSectionName3, bool& CallFuncEqualEqualNameNameReturnValue4, bool& CallFuncEqualEqualNameNameReturnValue5, bool& CallFuncEqualEqualNameNameReturnValue6, bool& CallFuncEqualEqualNameNameReturnValue7, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, bool& CallFuncIsValidReturnValue, struct FName& CallFuncGetRandomSectionNameSectionName4, struct FName& CallFuncGetRandomSectionNameSectionName5, struct FName& CallFuncGetRandomSectionNameSectionName6, struct FName& CallFuncGetRandomSectionNameSectionName7, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class AFortPawn*& CallFuncGetActivatingPawnReturnValue2, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess1, struct TEnumAsByte<EFortDamageZone>& CallFuncGetDamageZoneReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct FGameplayEventData& K2NodeEventEventData, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FName& CallFuncSetFNameBasedOnHitDirectionNameResult, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FName& CallFuncSetFNameBasedOnHitDirectionNameResult1); // (Final | 0x00008000 | HasDefaults)
};

