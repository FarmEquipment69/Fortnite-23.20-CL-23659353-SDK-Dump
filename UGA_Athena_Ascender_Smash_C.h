// BlueprintGeneratedClass /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C
// Size: 0xc41
class UGA_Athena_Ascender_Smash_C : public UGA_Athena_ZipLine_SmashParent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xbe8 (0x8)
	class UPrimitiveComponent* ZiplineInteractComponent0; // 0xbf0 (0x8)
	class AB_Athena_Zipline_Ascender_C* AscenderZipline; // 0xbf8 (0x8)
	struct FGameplayTag DescendingTag; // 0xc00 (0x4)
	unsigned char unreflected_c04[0x4]; // 0xc04 (0x4) 
	class UAnimMontage* MAscendingAnim; // 0xc08 (0x8)
	class UAnimMontage* MDescendingAnim; // 0xc10 (0x8)
	struct FActiveGameplayEffectHandle* DescendingGEHandle; // 0xc18 (0x8)
	struct FActiveGameplayEffectHandle* AscendingGEHandle; // 0xc20 (0x8)
	class UAnimMontage* FAscendingAnim; // 0xc28 (0x8)
	class UAnimMontage* FDescendingAnim; // 0xc30 (0x8)
	struct FActiveGameplayEffectHandle* ZiplinePassiveGE; // 0xc38 (0x8)
	bool bHolsterApplied; // 0xc40 (0x1)

	/* Functions */

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoFailSafeUnholster (Has no native function)
	void DoFailSafeUnholster(bool& CallFuncGetConsoleVariableBoolValueReturnValue, bool& CallFuncGetConsoleVariableBoolValueReturnValue1, bool& CallFuncBooleanANDReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoUnholster (Has no native function)
	void DoUnholster(bool& CallFuncGetConsoleVariableBoolValueReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.DoHolster (Has no native function)
	void DoHolster(bool& CallFuncGetConsoleVariableBoolValueReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.IsPlayerUsingHandle (Has no native function)
	bool IsPlayerUsingHandle(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCancelled_899182BF4C098785CCBCFD85AA84455F (Has no native function)
	void OnCancelled899182BF4C098785CCBCFD85AA84455F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnInterrupted_899182BF4C098785CCBCFD85AA84455F (Has no native function)
	void OnInterrupted899182BF4C098785CCBCFD85AA84455F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnBlendOut_899182BF4C098785CCBCFD85AA84455F (Has no native function)
	void OnBlendOut899182BF4C098785CCBCFD85AA84455F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.OnCompleted_899182BF4C098785CCBCFD85AA84455F (Has no native function)
	void OnCompleted899182BF4C098785CCBCFD85AA84455F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ZipliningComplete (Has no native function)
	void ZipliningComplete(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_SmashObjects (Has no native function)
	void SurroundingsCheckSmashObjects(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.SurroundingsCheck_MotorCheck (Has no native function)
	void SurroundingsCheckMotorCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineEnter (Has no native function)
	void GameplayTagEventZiplineEnter(struct FGameplayEventData& EventData); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.GameplayTagEvent_ZiplineExit (Has no native function)
	void GameplayTagEventZiplineExit(struct FGameplayEventData& EventData); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.FallingTagRemoved (Has no native function)
	void FallingTagRemoved(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Pre_BeginZiplinging (Has no native function)
	void PreBeginZiplinging(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.Post_BeginZiplining (Has no native function)
	void PostBeginZiplining(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.HandleGameplayEventTag (Has no native function)
	void HandleGameplayEventTag(struct FGameplayEventData& EventData); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C.ExecuteUbergraph_GA_Athena_Ascender_Smash (Has no native function)
	void ExecuteUbergraphGAAthenaAscenderSmash(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& TempboolVariable, struct TEnumAsByte<EFortCustomGender>& TempbyteVariable, bool& TempboolVariable1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsPlayerUsingHandleReturnValue, bool& CallFuncIsPlayerUsingHandleReturnValue1, bool& CallFuncIsPlayerUsingHandleReturnValue2, class UAnimMontage*& K2NodeSelectDefault, bool& CallFuncIsPlayerUsingHandleReturnValue3, class UAnimMontage*& K2NodeSelectDefault1, struct FGameplayEventData& K2NodeEventEventData2, struct FGameplayEventData& K2NodeEventEventData1, class AB_Athena_Zipline_Ascender_C*& K2NodeDynamicCastAsBAthenaZiplineAscender, bool& K2NodeDynamicCastbSuccess, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue1, struct TEnumAsByte<EFortCustomGender>& CallFuncGetCharacterGenderReturnValue, class UAnimMontage*& K2NodeSelectDefault2, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3); // (Final | 0x00008000 | HasDefaults)
};

