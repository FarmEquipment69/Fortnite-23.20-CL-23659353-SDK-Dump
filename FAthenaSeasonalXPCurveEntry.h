// ScriptStruct /Script/FortniteGame.AthenaSeasonalXPCurveEntry
// Size: 0x48
struct FAthenaSeasonalXPCurveEntry : FTableRowBase
{
	int Level; // 0x8 (0x4)
	int XpToNextLevel; // 0xc (0x4)
	int XpTotal; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TWeakObjectPtr<class UFortItemDefinition> RewardItemAsset; // 0x18 (0x28)
	int RewardItemCount; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

