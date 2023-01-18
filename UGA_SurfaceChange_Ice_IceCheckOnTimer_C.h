// BlueprintGeneratedClass /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C
// Size: 0xb40
class UGA_SurfaceChange_Ice_IceCheckOnTimer_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* FortPlayerPawn; // 0xb28 (0x8)
	struct FTimerHandle* TraceTimer; // 0xb30 (0x8)
	struct FTimerHandle* OffIceTimer; // 0xb38 (0x8)

	/* Functions */

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.TraceForTerrain (Has no native function)
	void TraceForTerrain(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.RemoveIceGE (Has no native function)
	void RemoveIceGE(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C.ExecuteUbergraph_GA_SurfaceChange_Ice_IceCheckOnTimer (Has no native function)
	void ExecuteUbergraphGASurfaceChangeIceIceCheckOnTimer(int& EntryPoint, struct TArray<class AActor*>& TempobjectVariable, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue1, struct FHitResult& CallFuncLineTraceSingleOutHit, bool& CallFuncLineTraceSingleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct TEnumAsByte<EPhysicalSurface>& CallFuncGetFortPhysicalSurfaceReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& K2NodeEventbWasCancelled, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2IsTimerActiveHandleReturnValue, struct TArray<class AActor*>& TempobjectVariable1, struct FHitResult& CallFuncLineTraceSingleOutHit1, bool& CallFuncLineTraceSingleReturnValue1, struct TEnumAsByte<EPhysicalSurface>& CallFuncGetFortPhysicalSurfaceReturnValue1, bool& K2NodeSwitchEnumCmpSuccess1); // (Final | 0x00008000 | HasDefaults)
};

