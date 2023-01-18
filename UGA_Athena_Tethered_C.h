// BlueprintGeneratedClass /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C
// Size: 0xbac
class UGA_Athena_Tethered_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FActiveGameplayEffectHandle* GETetheredHandle; // 0xb28 (0x8)
	class AFortPlayerPawn* OwningFortPlayerPawn; // 0xb30 (0x8)
	double maxSpeedToPlayGCN; // 0xb38 (0x8)
	struct FGameplayTag GCTagPlayerLand; // 0xb40 (0x4)
	unsigned char unreflected_b44[0x4]; // 0xb44 (0x4) 
	class UClass* StructureDamageGE; // 0xb48 (0x8)
	struct FGameplayTag SmashGC; // 0xb50 (0x4)
	unsigned char unreflected_b54[0x4]; // 0xb54 (0x4) 
	struct FScalableFloat BreakStructuresOnTetherEnabled; // 0xb58 (0x28)
	struct FScalableFloat BreakStructuresOnTetherRange; // 0xb80 (0x28)
	struct FGameplayTag EventFishingForceEnd; // 0xba8 (0x4)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C.BreakNearbyStructures (Has no native function)
	void BreakNearbyStructures(struct FVector& ForwardVector, double& OffsetForward, bool& wasAnyStructureBroken, int& TempintLoopCounterVariable, struct FVector& CallFuncMultiplyVectorFloatReturnValue, int& CallFuncAddIntIntReturnValue, float& CallFuncGetValueAtLevelReturnValue, struct TArray<class AActor*>& K2NodeMakeArrayArray, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, int& TempintArrayIndexVariable, float& CallFuncGetValueAtLevelReturnValue1, int& CallFuncFTruncReturnValue, bool& CallFuncConvIntToBoolReturnValue, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray1, struct TArray<class AActor*>& CallFuncBoxOverlapActorsOutActors, bool& CallFuncBoxOverlapActorsReturnValue, int& CallFuncArrayLengthReturnValue, class AActor*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, class AFortAthenaSupplyDropBalloon*& K2NodeDynamicCastAsFortAthenaSupplyDropBalloon, bool& K2NodeDynamicCastbSuccess, class ABuildingProp*& K2NodeDynamicCastAsBuildingProp, bool& K2NodeDynamicCastbSuccess1, class UFortHeldObjectComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, double& CallFuncMakeVectorXImplicitCast, double& CallFuncMakeVectorYImplicitCast, double& CallFuncMakeVectorZImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncFTruncAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C.MovementModeChangedDelegate_Event_0 (Has no native function)
	void MovementModeChangedDelegateEvent0(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C.BreakBuildingsAtPlayerInDirectionOfTether (Has no native function)
	void BreakBuildingsAtPlayerInDirectionOfTether(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C.ExecuteUbergraph_GA_Athena_Tethered (Has no native function)
	void ExecuteUbergraphGAAthenaTethered(int& EntryPoint, bool& CallFuncK2CommitAbilityReturnValue, bool& CallFuncIsValidReturnValue, class APawn*& CallFuncGetTetherPawnReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& CallFuncIsValidReturnValue1, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, bool& CallFuncEqualEqualByteByteReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncBooleanANDReturnValue, double& CallFuncSelectFloatReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FVector& CallFuncGetPreviousVelocityReturnValue, bool& K2NodeEventbWasCancelled, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue2, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, class APawn*& CallFuncGetTetherPawnReturnValue1, struct FRotator& CallFuncGetDirectionActorToActorReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2CommitAbilityReturnValue1, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, float& CallFuncMakeGameplayCueParametersNormalizedMagnitudeImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

