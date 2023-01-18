// BlueprintGeneratedClass /Game/Abilities/Player/Sliding/GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C
// Size: 0xb28
class UGA_Athena_Player_PreSlideFeedback_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.CustomEvent_0 (Has no native function)
	void CustomEvent0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C.ExecuteUbergraph_GA_Athena_Player_PreSlideFeedback (Has no native function)
	void ExecuteUbergraphGAAthenaPlayerPreSlideFeedback(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, struct FVector& CallFuncGetLastUpdateVelocityReturnValue, double& CallFuncVSizeReturnValue, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo); // (Final | 0x00008000 | HasDefaults)
};

