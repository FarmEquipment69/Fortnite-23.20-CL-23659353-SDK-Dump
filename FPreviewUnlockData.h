// ScriptStruct /Script/FortniteUI.PreviewUnlockData
// Size: 0xb0
struct FPreviewUnlockData
{
	struct FPreviewUnlockRewardData InstantRewards; // 0x0 (0x30)
	struct FPreviewUnlockRewardData EarnedRewards; // 0x30 (0x30)
	struct FText ChapterNumberText; // 0x60 (0x18)
	struct FText SeasonNumberText; // 0x78 (0x18)
	struct FText SummaryText; // 0x90 (0x18)
	bool bPaysForSelf; // 0xa8 (0x1)
	unsigned char padding_a9[0x7]; // 0xa9 (0x7)
};

