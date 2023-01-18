// ScriptStruct /Script/FortniteGame.FortRewardInfo
// Size: 0x30
struct FFortRewardInfo
{
	struct TArray<struct FFortSelectableRewardOption> SelectableRewards; // 0x0 (0x10)
	struct TArray<struct FFortItemQuantityPair> StandardRewards; // 0x10 (0x10)
	struct TArray<struct FFortHiddenRewardQuantityPair*> HiddenRewards; // 0x20 (0x10)
};

