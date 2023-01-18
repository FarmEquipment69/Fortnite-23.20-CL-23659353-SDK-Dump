// Class /Script/Engine.WorldPartitionStreamingSourceComponent
// Size: 0xf8
class UWorldPartitionStreamingSourceComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	enum EStreamingSourceTargetBehavior TargetBehavior; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x7]; // 0xa9 (0x7) 
	struct TArray<struct FName> TargetGrids; // 0xb0 (0x10)
	struct FName TargetGrid; // 0xc0 (0x4)
	struct FColor DebugColor; // 0xc4 (0x4)
	struct TArray<class UHLODLayer*> TargetHLODLayers; // 0xc8 (0x10)
	class UHLODLayer* TargetHLODLayer; // 0xd8 (0x8)
	struct TArray<struct FStreamingSourceShape> Shapes; // 0xe0 (0x10)
	enum EStreamingSourcePriority Priority; // 0xf0 (0x1)
	bool bStreamingSourceEnabled; // 0xf1 (0x1)
	enum EStreamingSourceTargetState TargetState; // 0xf2 (0x1)
	unsigned char padding_f3[0x5]; // 0xf3 (0x5)

	/* Functions */

	// Function /Script/Engine.WorldPartitionStreamingSourceComponent.IsStreamingSourceEnabled (Underlying native function: IsStreamingSourceEnabled 0x9d2b444)
	bool IsStreamingSourceEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.WorldPartitionStreamingSourceComponent.IsStreamingCompleted (Underlying native function: IsStreamingCompleted 0x9d2b3e4)
	bool IsStreamingCompleted(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.WorldPartitionStreamingSourceComponent.EnableStreamingSource (Underlying native function: EnableStreamingSource 0x9d268e4)
	void EnableStreamingSource(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.WorldPartitionStreamingSourceComponent.DisableStreamingSource (Underlying native function: DisableStreamingSource 0x9d26500)
	void DisableStreamingSource(); // (Final | Native | Public | BlueprintCallable)
};

