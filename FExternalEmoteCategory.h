// ScriptStruct /Script/FortniteGame.ExternalEmoteCategory
// Size: 0x50
struct FExternalEmoteCategory
{
	struct FName CategoryName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText CategoryTitle; // 0x8 (0x18)
	struct FText CategoryTitleMultipage; // 0x20 (0x18)
	struct TArray<struct FEmoteActionBinding> Emotes; // 0x38 (0x10)
	unsigned char bExclusive; // 0x48 (0x1)
	unsigned char bForceUIFocusWhenAdded; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

