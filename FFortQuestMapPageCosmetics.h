// ScriptStruct /Script/FortniteGame.FortQuestMapPageCosmetics
// Size: 0x30
struct FFortQuestMapPageCosmetics : FTableRowBase
{
	bool bUseNodeArrowColorOverride; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	struct FSlateColor NodeArrowColorOverride; // 0xc (0x14)
	struct TArray<struct FFortQuestMapCosmetic> CosmeticList; // 0x20 (0x10)
};

