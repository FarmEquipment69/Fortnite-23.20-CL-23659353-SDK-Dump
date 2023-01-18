// ScriptStruct /Script/FortniteUI.FortTabListRegistrationInfo
// Size: 0x110
struct FFortTabListRegistrationInfo
{
	struct FName TabNameID; // 0x0 (0x4)
	bool bHidden; // 0x4 (0x1)
	bool bAllowedInZone; // 0x5 (0x1)
	unsigned char unreflected_6[0xa]; // 0x6 (0xa) 
	struct FFortTabButtonLabelInfo TabLabelInfo; // 0x10 (0xe0)
	class UClass* TabButtonType; // 0xf0 (0x8)
	class UClass* TabContentType; // 0xf8 (0x8)
	class UWidget* CreatedTabContentWidget; // 0x100 (0x8)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};

