// ScriptStruct /Script/VkEngineTypes.VkSnapshotDeltaFiles
// Size: 0x60
struct FVkSnapshotDeltaFiles
{
	struct FString SnapshotId; // 0x0 (0x10)
	struct TMap<struct FString, struct FString> DeltaFileLinks; // 0x10 (0x50)
};

