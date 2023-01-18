// ScriptStruct /Script/FortniteGame.AthenaExtendedXPCurveEntry
// Size: 0x40
struct FAthenaExtendedXPCurveEntry : FTableRowBase
{
	int XpPerLevel; // 0x8 (0x4)
	int UntilLevel; // 0xc (0x4)
	struct TWeakObjectPtr<class UFortItemDefinition> RewardItemAssetPerLevel; // 0x10 (0x28)
	int RewardItemCountPerLevel; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

