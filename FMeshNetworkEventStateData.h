// ScriptStruct /Script/FortniteGame.MeshNetworkEventStateData
// Size: 0x48
struct FMeshNetworkEventStateData : FFastArraySerializerItem
{
	struct FName EventName; // 0xc (0x4)
	struct FDateTime* EventStartTime; // 0x10 (0x8)
	struct FString EventParameters; // 0x18 (0x10)
	struct FGameplayTagContainer EventFilters; // 0x28 (0x20)
};

