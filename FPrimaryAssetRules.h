// ScriptStruct /Script/Engine.PrimaryAssetRules
// Size: 0xc
struct FPrimaryAssetRules
{
	int Priority; // 0x0 (0x4)
	int ChunkId; // 0x4 (0x4)
	bool bApplyRecursively; // 0x8 (0x1)
	enum EPrimaryAssetCookRule CookRule; // 0x9 (0x1)
	unsigned char padding_a[0x2]; // 0xa (0x2)
};

