// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C
// Size: 0xb84
class UGAB_CarryPlayer_C : public UFortGameplayAbility_CarryPlayer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb50 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb58 (0x8)
	struct FName DBNOCarryHolster; // 0xb60 (0x4)
	bool bCompletedPickup; // 0xb64 (0x1)
	unsigned char unreflected_b65[0x3]; // 0xb65 (0x3) 
	struct FVector PickupLocation; // 0xb68 (0x18)
	int CarryLongDistanceThreshold; // 0xb80 (0x4)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.OnCancelled_C4440F1640E9A8D79E44FD8C23525824 (Has no native function)
	void OnCancelledC4440F1640E9A8D79E44FD8C23525824(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.OnInterrupted_C4440F1640E9A8D79E44FD8C23525824 (Has no native function)
	void OnInterruptedC4440F1640E9A8D79E44FD8C23525824(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.OnBlendOut_C4440F1640E9A8D79E44FD8C23525824 (Has no native function)
	void OnBlendOutC4440F1640E9A8D79E44FD8C23525824(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.OnCompleted_C4440F1640E9A8D79E44FD8C23525824 (Has no native function)
	void OnCompletedC4440F1640E9A8D79E44FD8C23525824(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.OnFortPlayerHitByVehicle_Event (Has no native function)
	void OnFortPlayerHitByVehicleEvent(class AFortAthenaVehicle*& InstigatingVehicle); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C.ExecuteUbergraph_GAB_CarryPlayer (Has no native function)
	void ExecuteUbergraphGABCarryPlayer(int& EntryPoint, bool& CallFuncShouldCancelPickupOnVehicleImpactsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& K2NodeEventbWasCancelled, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& CallFuncIsValidReturnValue, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue1, double& CallFuncVectorDistanceReturnValue, int& CallFuncRoundReturnValue, int& CallFuncDivideIntIntReturnValue, bool& CallFuncIsServerReturnValue, bool& CallFuncIsValidReturnValue2, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsServerReturnValue1, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionQuestIsValid, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionQuestCompleted, bool& CallFuncAthenaCheckQuestAndObjectiveCompletionObjectiveCompleted, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncK2CommitAbilityReturnValue, class AFortAthenaVehicle*& K2NodeCustomEventInstigatingVehicle, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena1, bool& K2NodeDynamicCastbSuccess2); // (Final | 0x00008000 | HasDefaults)
};

