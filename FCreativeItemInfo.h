// ScriptStruct /Script/FortniteGame.CreativeItemInfo
// Size: 0x20
struct FCreativeItemInfo
{
	class UFortItemDefinition* ItemDefinition; // 0x0 (0x8)
	struct FGuid Guid; // 0x8 (0x10)
	int DesiredSlot; // 0x18 (0x4)
	bool bUseVolumeToSpawn; // 0x1c (0x1)
	unsigned char padding_1d[0x3]; // 0x1d (0x3)
};

