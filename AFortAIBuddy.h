// Class /Script/FortniteGame.FortAIBuddy
// Size: 0x33a0
class AFortAIBuddy : public AFortAIPawn
{
	class UFortWorldItemDefinition* ConsumableItem; // 0x32f8 (0x8)
	struct FScalableFloat ConsumableItemCount; // 0x3300 (0x28)
	class AFortPlayerPawn* DrainPawn; // 0x3328 (0x8)
	class UFortWorldItemDefinition* DrainItem; // 0x3330 (0x8)
	struct FScalableFloat DrainItemCount; // 0x3338 (0x28)
	struct FScalableFloat DrainItemTick; // 0x3360 (0x28)
	unsigned char unreflected_3388[0x8]; // 0x3388 (0x8) 
	struct TArray<struct FFortBuddyTagListener> TagListeners; // 0x3390 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortAIBuddy.StopItemDrain (Underlying native function: StopItemDrain 0x8cf50f8)
	void StopItemDrain(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIBuddy.StartItemDrain (Underlying native function: StartItemDrain 0x8cf4e68)
	bool StartItemDrain(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIBuddy.RemoveTagListener (Underlying native function: RemoveTagListener 0x8cf0f14)
	void RemoveTagListener(class AActor*& TargetActor, struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAIBuddy.OnListenTagRemoved (Has no native function)
	void OnListenTagRemoved(class AActor*& TargetActor, struct FGameplayTag& tag); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.OnListenTagAdded (Has no native function)
	void OnListenTagAdded(class AActor*& TargetActor, struct FGameplayTag& tag); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.OnItemsDrained (Has no native function)
	void OnItemsDrained(class AFortPlayerPawn*& PlayerPawn, int& ItemsDrained); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.OnItemsConsumed (Has no native function)
	void OnItemsConsumed(class AFortPlayerPawn*& PlayerPawn, int& ItemsConsumed); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortAIBuddy.GetInteractionString (Has no native function)
	struct FText GetInteractionString(class AFortPlayerPawn*& PlayerPawn); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortAIBuddy.AddTagListener (Underlying native function: AddTagListener 0x8ceb9d4)
	void AddTagListener(class AActor*& TargetActor, struct FGameplayTag& tag); // (Final | Native | Public | BlueprintCallable)
};

