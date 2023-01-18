// ScriptStruct /Script/Engine.WorldPartitionDestructibleHLODState
// Size: 0x148
struct FWorldPartitionDestructibleHLODState : FFastArraySerializer
{
	struct TArray<struct FWorldPartitionDestructibleHLODDamagedActorState> DamagedActors; // 0x108 (0x10)
	class UWorldPartitionDestructibleHLODComponent* OwnerComponent; // 0x118 (0x8)
	unsigned char padding_120[0x28]; // 0x120 (0x28)
};

