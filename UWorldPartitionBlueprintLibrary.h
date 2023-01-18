// Class /Script/Engine.WorldPartitionBlueprintLibrary
// Size: 0x28
class UWorldPartitionBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.UnpinActors (Underlying native function: UnpinActors 0x9fd3ee4)
	static void UnpinActors(struct TArray<struct FGuid>& InActorsToUnpin); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.UnloadActors (Underlying native function: UnloadActors 0x9fd3ee4)
	static void UnloadActors(struct TArray<struct FGuid>& InActorsToUnload); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.PinActors (Underlying native function: PinActors 0x9fd3ee4)
	static void PinActors(struct TArray<struct FGuid>& InActorsToPin); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.LoadActors (Underlying native function: LoadActors 0x9fd3ee4)
	static void LoadActors(struct TArray<struct FGuid>& InActorsToLoad); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.GetRuntimeWorldBounds (Underlying native function: GetRuntimeWorldBounds 0x9fd3c88)
	static struct FBox GetRuntimeWorldBounds(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.GetIntersectingActorDescs (Underlying native function: GetIntersectingActorDescs 0x9fd3ce8)
	static bool GetIntersectingActorDescs(struct FBox& InBox, struct TArray<struct FActorDesc>& OutActorDescs); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.GetEditorWorldBounds (Underlying native function: GetEditorWorldBounds 0x9fd3c88)
	static struct FBox GetEditorWorldBounds(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionBlueprintLibrary.GetActorDescs (Underlying native function: GetActorDescs 0x9fd3c04)
	static bool GetActorDescs(struct TArray<struct FActorDesc>& OutActorDescs); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

