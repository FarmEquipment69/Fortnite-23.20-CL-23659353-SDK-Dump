// BlueprintGeneratedClass /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C
// Size: 0xf78
class UGA_NPC_Parent_PlayMontage_Contagious_C : public UGA_NPC_Parent_PlayMontage_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xe60 (0x8)
	struct TArray<class AFortPawn*> PawnsOfSameClass; // 0xe68 (0x10)
	struct FGameplayTagContainer TCTagsRequiredToBroadcastGE; // 0xe78 (0x20)
	class UClass* NPCGEAppliedContagiousGE; // 0xe98 (0x8)
	struct TArray<class UClass*> NPCOtherTypesOfPawnClassesInAdditionToOurOwn; // 0xea0 (0x10)
	struct FGameplayTagContainer TCGEsWithGrantedTagsToRemoveAtEnd; // 0xeb0 (0x20)
	struct FScalableFloat NPCMontageDelayMinHF; // 0xed0 (0x28)
	struct FScalableFloat NPCMontageDelayMaxHF; // 0xef8 (0x28)
	struct FScalableFloat NPCContagiousGEApplicationRadiusHF; // 0xf20 (0x28)
	bool NPCShouldFocusOnGoalWhileAnimating; // 0xf48 (0x1)
	unsigned char unreflected_f49[0x7]; // 0xf49 (0x7) 
	struct FScalableFloat NPCRotationRateDuringMontage; // 0xf50 (0x28)

	/* Functions */

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.NPC PlayMontage (Has no native function)
	void NPCPlayMontage(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.NPC MontageTriggered (Has no native function)
	void NPCMontageTriggered(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.NPC PlayMontageStarted (Has no native function)
	void NPCPlayMontageStarted(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent_PlayMontage_Contagious.GA_NPC_Parent_PlayMontage_Contagious_C.ExecuteUbergraph_GA_NPC_Parent_PlayMontage_Contagious (Has no native function)
	void ExecuteUbergraphGANPCParentPlayMontageContagious(int& EntryPoint, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, bool& K2NodeEventbWasCancelled, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class AFortPawn*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncIsValidReturnValue2, class AActor*& CallFuncGetAIAbilityTargetReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool2, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded2, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat2, bool& CallFuncLessEqualDoubleDoubleReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, double& CallFuncRandomFloatInRangeReturnValue, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, bool& CallFuncIsValidReturnValue4, struct FGameplayAbilityTargetDataHandle& K2NodeEventTargetData, struct FGameplayTag& K2NodeEventApplicationTag, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, bool& CallFuncNotEqualObjectObjectReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& CallFuncIsValidClassReturnValue, bool& CallFuncIsValidReturnValue5, struct FVector& CallFuncK2GetActorLocationReturnValue, struct TArray<class AFortPawn*>& CallFuncGetFortPawnsInRangeOutFortPawns, class UClass*& CallFuncGetObjectClassReturnValue, class AFortPawn*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, int& CallFuncArrayAddUniqueReturnValue, bool& CallFuncLessIntIntReturnValue1, class UClass*& CallFuncGetObjectClassReturnValue1, bool& CallFuncArrayContainsReturnValue, bool& CallFuncEqualEqualClassClassReturnValue, bool& CallFuncBooleanORReturnValue, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, float& CallFuncGetFortPawnsInRangeRangeImplicitCast, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

