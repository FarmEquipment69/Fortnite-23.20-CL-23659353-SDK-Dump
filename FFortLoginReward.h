// ScriptStruct /Script/FortniteGame.FortLoginReward
// Size: 0x58
struct FFortLoginReward : FTableRowBase
{
	struct TWeakObjectPtr<class UFortAccountItemDefinition> ItemDefinition; // 0x8 (0x28)
	int ItemCount; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText Description; // 0x38 (0x18)
	bool bIsMajorReward; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

