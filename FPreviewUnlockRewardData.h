// ScriptStruct /Script/FortniteUI.PreviewUnlockRewardData
// Size: 0x30
struct FPreviewUnlockRewardData
{
	int Currency; // 0x0 (0x4)
	int NumAdditionalRewards; // 0x4 (0x4)
	int TotalRewards; // 0x8 (0x4)
	int NumCharacters; // 0xc (0x4)
	struct TArray<struct FPreviewRewardData> Characters; // 0x10 (0x10)
	struct TArray<struct FPreviewRewardData> AdditionalRewards; // 0x20 (0x10)
};

