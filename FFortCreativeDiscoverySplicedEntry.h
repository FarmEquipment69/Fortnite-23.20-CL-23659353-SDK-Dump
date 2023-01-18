// ScriptStruct /Script/FortniteGame.FortCreativeDiscoverySplicedEntry
// Size: 0x28
struct FFortCreativeDiscoverySplicedEntry
{
	struct FName EntryName; // 0x0 (0x4)
	int EntryIndex; // 0x4 (0x4)
	struct FString LinkCode; // 0x8 (0x10)
	enum EFortCreativeDiscoveryDeterminism VisibilitySelector; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float VisibilityChance; // 0x1c (0x4)
	bool bPushDownExistingEntry; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

