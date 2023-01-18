// Class /Script/DynamicUI.DynamicUIConstraintAlignment
// Size: 0xa8
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x90 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x91 (0x1)
	unsigned char unreflected_92[0x2]; // 0x92 (0x2) 
	enum EDynamicUIAnchor Anchor; // 0x94 (0x4)
	struct FDynamicUIAspectRatio* MaxAspectRatio; // 0x98 (0x8)
	unsigned char bUseSafeZone; // 0xa0 (0x1)
	unsigned char bUseMaxAspectRatio; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)
};

