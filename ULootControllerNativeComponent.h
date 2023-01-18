// Class /Script/LootController.LootControllerNativeComponent
// Size: 0xc0
class ULootControllerNativeComponent : public UActorComponent
{
	struct TArray<class AActor*> OutActors; // 0xa0 (0x10)
	struct FMulticastInlineDelegate OnAsyncGetActorsOfClassCompleted; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/LootController.LootControllerNativeComponent.PrintDebugString (Underlying native function: PrintDebugString 0x7308f5c)
	void PrintDebugString(struct FString& DebugString, bool& LogWarning); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/LootController.LootControllerNativeComponent.IsThrottleEnabled (Underlying native function: IsThrottleEnabled 0x7308f40)
	bool IsThrottleEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LootController.LootControllerNativeComponent.IsRemoveLootEnabled (Underlying native function: IsRemoveLootEnabled 0x7308f24)
	bool IsRemoveLootEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LootController.LootControllerNativeComponent.AsyncGetActorsOfClass (Underlying native function: AsyncGetActorsOfClass 0x7308dbc)
	void AsyncGetActorsOfClass(class UObject*& WorldContextObject, class UClass*& ActorClass); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/LootController.LootControllerNativeComponent.AddToArray (Underlying native function: AddToArray 0x7308c08)
	void AddToArray(struct TArray<struct FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int& InBuildingContainerFoundIndex, struct FBuildingContainersArrayEntry& InBuildingContainerToAdd); // (Final | Native | Protected | HasOutParms | BlueprintCallable)
};

