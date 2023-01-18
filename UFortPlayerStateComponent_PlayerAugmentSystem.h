// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
// Size: 0x1a8
class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct FMulticastInlineDelegate OnAugmentListUpdated; // 0xb8 (0x10)
	struct FScalableFloat EnableAugmentsFeature; // 0xc8 (0x28)
	class UClass* DynamicTagGEClass; // 0xf0 (0x8)
	struct TMap<struct FPrimaryAssetId*, struct FPlayerAugmentTrackedData> AugmentToRuntimeDataMap; // 0xf8 (0x50)
	struct TArray<class UFortPlayerAugmentItemDefinition*> ActiveAugments; // 0x148 (0x10)
	struct TMap<struct FGameplayTag, double> RuntimeAugmentMatchDataCacheFloat; // 0x158 (0x50)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.SetAugmentMatchDataCacheFloat (Underlying native function: SetAugmentMatchDataCacheFloat 0x532e660)
	void SetAugmentMatchDataCacheFloat(struct FGameplayTag& TargetAugmentCacheTag, double& InData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnRep_ActiveAugments (Underlying native function: OnRep_ActiveAugments 0x729235c)
	void OnRepActiveAugments(); // (Final | Native | Private)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.OnAugmentListUpdatedEventDispatcher__DelegateSignature (Has no native function)
	void OnAugmentListUpdatedEventDispatcherDelegateSignature(class UFortPlayerStateComponent_PlayerAugmentSystem*& AugmentComponent); // (MulticastDelegate | Public | Delegate)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandlePlayerPawnSpawned (Underlying native function: HandlePlayerPawnSpawned 0x532e5a0)
	void HandlePlayerPawnSpawned(); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.HandleBotPlayerPawnSpawned (Underlying native function: HandleBotPlayerPawnSpawned 0x532e310)
	void HandleBotPlayerPawnSpawned(class AFortAthenaAIBotController*& BotController, class AFortPlayerPawnAthena*& BotPawn); // (Final | Native | Private)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentMatchDataCacheFloat (Underlying native function: GetAugmentMatchDataCacheFloat 0x532e200)
	double GetAugmentMatchDataCacheFloat(enum EAugmentExecResult& OutExec, struct FGameplayTag& TargetAugmentCacheTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponentValidated (Underlying native function: GetAugmentComponentValidated 0x532e110)
	static class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponentValidated(enum EAugmentExecResult& OutExec, class AActor*& PlayerContextActor); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetAugmentComponent (Underlying native function: GetAugmentComponent 0x7291910)
	static class UFortPlayerStateComponent_PlayerAugmentSystem* GetAugmentComponent(class AActor*& PlayerContextActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.GetActiveAugments (Underlying native function: GetActiveAugments 0x7291854)
	static struct TArray<class UFortPlayerAugmentItemDefinition*> GetActiveAugments(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem.ClientClearMatchAugmentDataCache (Underlying native function: ClientClearMatchAugmentDataCache 0x532e0f0)
	void ClientClearMatchAugmentDataCache(); // (Net | NetReliable | Native | Event | Public | NetClient)
};

