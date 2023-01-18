// ScriptStruct /Script/FortniteUI.AthenaCustomizationParams
// Size: 0x48
struct FAthenaCustomizationParams
{
	enum EAthenaCustomizationCategory category; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int CategorySubslotIndex; // 0x4 (0x4)
	struct FText CategoryDisplayName; // 0x8 (0x18)
	struct FText ItemDisplayTypeName; // 0x20 (0x18)
	bool bAllowUnownedItems; // 0x38 (0x1)
	bool bOneItemPerSlot; // 0x39 (0x1)
	unsigned char unreflected_3a[0x6]; // 0x3a (0x6) 
	class UMaterialInstance* OverrideSlotImage; // 0x40 (0x8)
};

