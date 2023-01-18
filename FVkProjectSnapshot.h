// ScriptStruct /Script/VkEngineTypes.VkProjectSnapshot
// Size: 0xe8
struct FVkProjectSnapshot
{
	struct FString UniqueId; // 0x0 (0x10)
	struct FString ProjectID; // 0x10 (0x10)
	struct FString AccountId; // 0x20 (0x10)
	struct FDateTime* CreatedAt; // 0x30 (0x8)
	int DeltaFileIndex; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVkResolvedContent Content; // 0x40 (0x68)
	struct TArray<struct FVkVersionedLinkCode> Palette; // 0xa8 (0x10)
	struct FString MapPath; // 0xb8 (0x10)
	struct FJsonObjectWrapper MatchmakingConfig; // 0xc8 (0x20)
};

