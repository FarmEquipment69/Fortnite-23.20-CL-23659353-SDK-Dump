// Class /Script/FortniteGame.FortPrerollDataItem
// Size: 0x138
class UFortPrerollDataItem : public UFortAccountItem
{
	struct FString OfferId; // 0x108 (0x10)
	struct FDateTime* Expiration; // 0x118 (0x8)
	struct TArray<struct FMcpLootEntry> Items; // 0x120 (0x10)
	int HighestRarity; // 0x130 (0x4)
	unsigned char padding_134[0x4]; // 0x134 (0x4)
};

