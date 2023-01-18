// ScriptStruct /Script/VkEngineTypes.VkSnapshotSaveRequest
// Size: 0xa8
struct FVkSnapshotSaveRequest
{
	struct FVkResolvedContent Content; // 0x0 (0x68)
	struct TArray<struct FVkVersionedLinkCode> Palette; // 0x68 (0x10)
	struct FString MapPath; // 0x78 (0x10)
	struct FJsonObjectWrapper MatchmakingConfig; // 0x88 (0x20)
};

