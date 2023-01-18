// Class /Script/GameplayTasks.GameplayTask_ClaimResource
// Size: 0x60
class UGameplayTask_ClaimResource : public UGameplayTask
{

	/* Functions */

	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources (Underlying native function: ClaimResources 0xa03ef3c)
	static class UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<class IGameplayTaskOwnerInterface>& InTaskOwner, struct TArray<class UClass*>& ResourceClasses, unsigned char& Priority, struct FName& TaskInstanceName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource (Underlying native function: ClaimResource 0xa03ede4)
	static class UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<class IGameplayTaskOwnerInterface>& InTaskOwner, class UClass*& ResourceClass, unsigned char& Priority, struct FName& TaskInstanceName); // (Final | Native | Static | Public | BlueprintCallable)
};

