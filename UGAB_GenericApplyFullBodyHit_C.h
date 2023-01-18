// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
// Size: 0xb90
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UClass* GEFullBodyHitActiveEffect; // 0xb28 (0x8)
	struct FVector HitImpulse; // 0xb30 (0x18)
	class UClass* GERestoreControlResistance; // 0xb48 (0x8)
	struct FActiveGameplayEffectHandle* ActiveImpactImmunity; // 0xb50 (0x8)
	class UClass* GEImpactImmunity; // 0xb58 (0x8)
	struct FActiveGameplayEffectHandle* ActiveFullBodyHit; // 0xb60 (0x8)
	struct FGameplayTag EventTriggeredFullBodyHit; // 0xb68 (0x4)
	struct FGameplayTag EventControlEnded; // 0xb6c (0x4)
	class UClass* GETransferFullBodyHit; // 0xb70 (0x8)
	class UAnimMontage* FullBodyHitMontage; // 0xb78 (0x8)
	struct FName FullBodyHitMontageSection; // 0xb80 (0x4)
	bool EndAbilityOnBlendOut; // 0xb84 (0x1)
	unsigned char unreflected_b85[0x3]; // 0xb85 (0x3) 
	double DurationNoAnim; // 0xb88 (0x8)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCancelled_25E5E66442E815EB40A6DB8205FE0D98 (Has no native function)
	void OnCancelled25E5E66442E815EB40A6DB8205FE0D98(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98 (Has no native function)
	void OnInterrupted25E5E66442E815EB40A6DB8205FE0D98(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98 (Has no native function)
	void OnBlendOut25E5E66442E815EB40A6DB8205FE0D98(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCompleted_25E5E66442E815EB40A6DB8205FE0D98 (Has no native function)
	void OnCompleted25E5E66442E815EB40A6DB8205FE0D98(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn (Has no native function)
	void OnHitPawn(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.PickFullBodyHitMontageSection (Has no native function)
	void PickFullBodyHitMontageSection(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit (Has no native function)
	void ExecuteUbergraphGABGenericApplyFullBodyHit(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, bool& K2NodeEventbWasCancelled, class AActor*& K2NodeCustomEventSelfActor, class AActor*& K2NodeCustomEventOtherActor, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, struct FGameplayEventData& K2NodeEventEventData, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromHitResultReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FVector& CallFuncGetImpulseDataImpulseDirection, float& CallFuncGetImpulseDataKnockbackMagnitude, float& CallFuncGetImpulseDataKnockbackZAngle, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& CallFuncGetPawnFromPlayerStateZoneOutPawn, bool& CallFuncGetPawnFromPlayerStateZonePawnReturned, bool& CallFuncNotEqualClassClassReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, class UFortAbilitySystemComponent*& CallFuncGetActivatingAbilityComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& CallFuncNotEqualClassClassReturnValue1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FName& CallFuncSetFNameBasedOnHitDirectionNameResult, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, bool& K2NodeSwitchEnumCmpSuccess, class AFortPawn*& CallFuncGetActivatingPawnReturnValue3, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UFortAbilitySystemComponent*& CallFuncGetActivatingAbilityComponentReturnValue1, bool& CallFuncRemoveActiveGameplayEffectReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AFortPawn*& CallFuncGetActivatingPawnReturnValue4, bool& K2NodeSwitchEnumCmpSuccess1, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue2, bool& CallFuncBooleanANDReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class AFortPawn*& CallFuncGetActivatingPawnReturnValue5, bool& CallFuncIsValidReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

