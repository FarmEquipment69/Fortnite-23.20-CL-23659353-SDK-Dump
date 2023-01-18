// ScriptStruct /Script/FortniteUI.AthenaMOTDBase
// Size: 0xd0
struct FAthenaMOTDBase
{
	enum EAthenaNewsEntryType EntryType; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FString Title; // 0x10 (0x10)
	struct FString Body; // 0x20 (0x10)
	struct TArray<struct FImageRef> Images; // 0x30 (0x10)
	struct TArray<struct FImageRef> TileImages; // 0x40 (0x10)
	struct FColor CustomDarkColor; // 0x50 (0x4)
	struct FColor CustomLightColor; // 0x54 (0x4)
	struct FString AdSpace; // 0x58 (0x10)
	struct FString TabTitleOverride; // 0x68 (0x10)
	struct FString ButtonTextOverride; // 0x78 (0x10)
	bool bHasCustomColor; // 0x88 (0x1)
	bool bIsFtueMotd; // 0x89 (0x1)
	unsigned char padding_8a[0x46]; // 0x8a (0x46)
};

