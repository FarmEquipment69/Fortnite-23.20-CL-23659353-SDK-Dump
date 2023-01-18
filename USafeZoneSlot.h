// Class /Script/UMG.SafeZoneSlot
// Size: 0x60
class USafeZoneSlot : public UPanelSlot
{
	bool bIsTitleSafe; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FMargin SafeAreaScale; // 0x3c (0x10)
	struct TEnumAsByte<EHorizontalAlignment> HAlign; // 0x4c (0x1)
	struct TEnumAsByte<EVerticalAlignment> VAlign; // 0x4d (0x1)
	unsigned char unreflected_4e[0x2]; // 0x4e (0x2) 
	struct FMargin Padding; // 0x50 (0x10)
};

