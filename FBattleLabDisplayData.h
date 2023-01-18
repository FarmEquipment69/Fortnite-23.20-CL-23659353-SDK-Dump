// ScriptStruct /Script/FortniteUI.BattleLabDisplayData
// Size: 0x68
struct FBattleLabDisplayData
{
	struct FText TitleText; // 0x0 (0x18)
	struct FText DescriptionText; // 0x18 (0x18)
	enum EBattleLabAlertType AlertType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int RewardCount; // 0x34 (0x4)
	int RewardCountTotal; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TWeakObjectPtr<class UTexture2D> MainIconTexture; // 0x40 (0x28)
};

