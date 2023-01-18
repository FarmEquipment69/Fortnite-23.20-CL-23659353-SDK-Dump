// ScriptStruct /Script/FortniteUI.FortMissionRewardInfo
// Size: 0xf0
struct FFortMissionRewardInfo
{
	struct FSlateBrush Icon; // 0x0 (0xc0)
	struct FText DisplayName; // 0xc0 (0x18)
	class UFortItem* Item; // 0xd8 (0x8)
	bool bIsMissionAlertReward; // 0xe0 (0x1)
	unsigned char padding_e1[0xf]; // 0xe1 (0xf)
};

