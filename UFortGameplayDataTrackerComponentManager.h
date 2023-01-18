// Class /Script/FortniteGame.FortGameplayDataTrackerComponentManager
// Size: 0x128
class UFortGameplayDataTrackerComponentManager : public UGameStateComponent
{
	struct FMulticastInlineDelegate OnDataTrackerComponentRegistered; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnDataTrackerComponentUnRegistered; // 0xb0 (0x10)
	unsigned char padding_c0[0x68]; // 0xc0 (0x68)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.UnRegisterTrackedStateActor (Underlying native function: UnRegisterTrackedStateActor 0x21be4c0)
	void UnRegisterTrackedStateActor(class AActor*& Actor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.SetTrackedActorState (Underlying native function: SetTrackedActorState 0x21bde80)
	void SetTrackedActorState(class AActor*& Actor, struct FGameplayTag& CurrentState); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.RegisterTrackedStateActor (Underlying native function: RegisterTrackedStateActor 0x21be040)
	void RegisterTrackedStateActor(class AActor*& Actor, struct FGameplayTag& InitialState); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.OnTrackedActorDestroyed (Underlying native function: OnTrackedActorDestroyed 0x8a1cd50)
	void OnTrackedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.GetRegisteredDataTrackerComponents (Underlying native function: GetRegisteredDataTrackerComponents 0x8a1c4c4)
	void GetRegisteredDataTrackerComponents(struct TArray<class UFortGameplayDataTrackerComponent*>& OutDataTrackerComponents); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayDataTrackerComponentManager.GetCurrent (Underlying native function: GetCurrent 0x21bdcec)
	static class UFortGameplayDataTrackerComponentManager* GetCurrent(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)
};

