// Class /Script/Engine.WorldPartitionSubsystem
// Size: 0xc0
class UWorldPartitionSubsystem : public UTickableWorldSubsystem
{
	unsigned char unreflected_c0[0xc0]; 

	/* Functions */

	// Function /Script/Engine.WorldPartitionSubsystem.IsStreamingCompleted (Underlying native function: IsStreamingCompleted 0x9fe4524)
	bool IsStreamingCompleted(enum EWorldPartitionRuntimeCellState& QueryState, struct TArray<struct FWorldPartitionStreamingQuerySource>& QuerySources, bool& bExactState); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.WorldPartitionSubsystem.IsAllStreamingCompleted (Underlying native function: IsAllStreamingCompleted 0x9fe44fc)
	bool IsAllStreamingCompleted(); // (Final | Native | Public | BlueprintCallable)
};

