// ScriptStruct /Script/FortniteGame.MeshNetworkEventStateDataArray
// Size: 0x120
struct FMeshNetworkEventStateDataArray : FFastArraySerializer
{
	class AFortMeshNetworkEventsLoader* OwningLoader; // 0x108 (0x8)
	struct TArray<struct FMeshNetworkEventStateData> StateData; // 0x110 (0x10)
};

