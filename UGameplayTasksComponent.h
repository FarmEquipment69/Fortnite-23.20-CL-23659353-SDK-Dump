// Class /Script/GameplayTasks.GameplayTasksComponent
// Size: 0x118
class UGameplayTasksComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x14]; // 0xa0 (0x14) 
	unsigned char bIsNetDirty; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	struct TArray<class UGameplayTask*> TaskPriorityQueue; // 0xb8 (0x10)
	unsigned char unreflected_c8[0x10]; // 0xc8 (0x10) 
	struct TArray<class UGameplayTask*> TickingTasks; // 0xd8 (0x10)
	struct TArray<class UGameplayTask*> KnownTasks; // 0xe8 (0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0xf8 (0x10)
	struct TArray<class UGameplayTask*> SimulatedTasks; // 0x108 (0x10)

	/* Functions */

	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks (Underlying native function: OnRep_SimulatedTasks 0x224dc98)
	void OnRepSimulatedTasks(struct TArray<class UGameplayTask*>& PreviousSimulatedTasks); // (Final | Native | Public | HasOutParms)

	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask (Underlying native function: K2_RunGameplayTask 0xa03f364)
	static enum EGameplayTaskRunResult K2RunGameplayTask(struct TScriptInterface<class IGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask*& Task, unsigned char& Priority, struct TArray<class UClass*>& AdditionalRequiredResources, struct TArray<class UClass*>& AdditionalClaimedResources); // (Final | Native | Static | Public | BlueprintCallable)
};

