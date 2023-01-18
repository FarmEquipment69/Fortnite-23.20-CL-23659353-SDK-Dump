// Class /Script/GameplayTasks.GameplayTask_SpawnActor
// Size: 0xb8
class UGameplayTask_SpawnActor : public UGameplayTask
{
	struct FMulticastInlineDelegate Success; // 0x60 (0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x70 (0x10)
	unsigned char unreflected_80[0x30]; // 0x80 (0x30) 
	class UClass* ClassToSpawn; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor (Underlying native function: SpawnActor 0xa03f720)
	static class UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<class IGameplayTaskOwnerInterface>& TaskOwner, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, class UClass*& Class, bool& bSpawnOnlyOnAuthority); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor (Underlying native function: FinishSpawningActor 0xa03f29c)
	void FinishSpawningActor(class UObject*& WorldContextObject, class AActor*& SpawnedActor); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor (Underlying native function: BeginSpawningActor 0xa03ed0c)
	bool BeginSpawningActor(class UObject*& WorldContextObject, class AActor*& SpawnedActor); // (Native | Public | HasOutParms | BlueprintCallable)
};

