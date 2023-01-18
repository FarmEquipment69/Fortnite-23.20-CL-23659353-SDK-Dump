// Class /Script/FortniteGameFramework.StateTreeManagerComponent
// Size: 0x1e0
class UStateTreeManagerComponent : public UActorComponent
{
	struct TArray<struct FStateTreeRuntimeData> StateTreeRuntimeDataList; // 0xa0 (0x10)
	struct TArray<struct FStateTreeClientSimulationData> SimulatedDataList; // 0xb0 (0x10)
	struct FStateChangeDataArray ReplicatedStateChanges; // 0xc0 (0x120)
};

