// ScriptStruct /Script/FortniteUI.FortItemListFilter
// Size: 0x18
struct FFortItemListFilter
{
	struct FString SearchText; // 0x0 (0x10)
	enum EFortInventoryFilter FilterType; // 0x10 (0x1)
	bool bInStorageVault; // 0x11 (0x1)
	bool bIncludeVaultOverflow; // 0x12 (0x1)
	unsigned char padding_13[0x5]; // 0x13 (0x5)
};

