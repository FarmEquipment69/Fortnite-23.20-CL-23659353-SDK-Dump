// Class /Script/FortniteGame.ActorRegisterData_GameplayTagBased
// Size: 0x60
class UActorRegisterData_GameplayTagBased : public UObject
{
	struct FMulticastInlineDelegate OnActorRegistered; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnActorUnregistered; // 0x38 (0x10)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct TArray<class AActor*> RegisteredActors; // 0x50 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.RemoveIfNotUsed (Underlying native function: RemoveIfNotUsed 0x26daa0c)
	void RemoveIfNotUsed(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.RegisteredActorDestroyed (Underlying native function: RegisteredActorDestroyed 0x71a663c)
	void RegisteredActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.HandleListenerRemoved (Underlying native function: HandleListenerRemoved 0x26daa0c)
	void HandleListenerRemoved(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.GetRegisteredActors (Underlying native function: GetRegisteredActors 0x8545834)
	struct TArray<class AActor*> GetRegisteredActors(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.ActorRegisterData_GameplayTagBased.GetGameplayTag (Underlying native function: GetGameplayTag 0x2d00a38)
	struct FGameplayTag GetGameplayTag(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

