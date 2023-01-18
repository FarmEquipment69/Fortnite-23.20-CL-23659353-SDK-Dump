// Class /Script/Engine.HealthSnapshotBlueprintLibrary
// Size: 0x28
class UHealthSnapshotBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.HealthSnapshotBlueprintLibrary.StopPerformanceSnapshots (Underlying native function: StopPerformanceSnapshots 0x9f1968c)
	static void StopPerformanceSnapshots(); // (Final | Exec | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.HealthSnapshotBlueprintLibrary.StartPerformanceSnapshots (Underlying native function: StartPerformanceSnapshots 0x9f19678)
	static void StartPerformanceSnapshots(); // (Final | Exec | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.HealthSnapshotBlueprintLibrary.LogPerformanceSnapshot (Underlying native function: LogPerformanceSnapshot 0x9f194d4)
	static void LogPerformanceSnapshot(struct FString& SnapshotTitle, bool& bResetStats); // (Final | Exec | Native | Static | Public | BlueprintCallable)
};

