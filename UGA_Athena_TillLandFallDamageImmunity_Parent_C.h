// BlueprintGeneratedClass /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
// Size: 0xb80
class UGA_Athena_TillLandFallDamageImmunity_Parent_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UClass* GEFallDamageImmunity; // 0xb28 (0x8)
	struct FActiveGameplayEffectHandle* GEHFallDamageImmunity; // 0xb30 (0x8)
	double DelayPostLand; // 0xb38 (0x8)
	struct FGameplayTag TagSurfaceSwimming; // 0xb40 (0x4)
	unsigned char unreflected_b44[0x4]; // 0xb44 (0x4) 
	struct FGameplayTagContainer TCIgnoreApplication; // 0xb48 (0x20)
	struct FGameplayTag TagInVehicle; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x4]; // 0xb6c (0x4) 
	double DelayWaterSwimBind; // 0xb70 (0x8)
	bool ApplyInAirOnly; // 0xb78 (0x1)
	unsigned char unreflected_b79[0x3]; // 0xb79 (0x3) 
	struct FGameplayTag TagIsRiding; // 0xb7c (0x4)

	/* Functions */

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_3DBE819D4ED6A0A0909A7690321F9B09 (Has no native function)
	void Added3DBE819D4ED6A0A0909A7690321F9B09(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_15DBA1504E74C72F22BBCBAD8E3CD31E (Has no native function)
	void Added15DBA1504E74C72F22BBCBAD8E3CD31E(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.Added_052C8416489756AFAF2C5391148ABB52 (Has no native function)
	void Added052C8416489756AFAF2C5391148ABB52(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.CallEnd (Has no native function)
	void CallEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.SetUpWaits (Has no native function)
	void SetUpWaits(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.SetUpBinds (Has no native function)
	void SetUpBinds(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.PawnLanded (Has no native function)
	void PawnLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C.ExecuteUbergraph_GA_Athena_TillLandFallDamageImmunity_Parent (Has no native function)
	void ExecuteUbergraphGAAthenaTillLandFallDamageImmunityParent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& K2NodeEventbWasCancelled, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& TempboolIsClosedVariable, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, struct FHitResult& K2NodeCustomEventHit, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue1, bool& CallFuncIsValidReturnValue2, bool& TempboolHasBeenInitdVariable, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue2, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess2, bool& TempboolVariable, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncNotEqualByteByteReturnValue1, bool& CallFuncNotEqualByteByteReturnValue2, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue2, bool& CallFuncIsValidReturnValue3, float& CallFuncDelayDurationImplicitCast, float& CallFuncDelayDurationImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

