// Class /Script/DynamicUI.DynamicUIConstraintPosition
// Size: 0xa8
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{
	struct FVector2D Position; // 0x90 (0x10)
	enum EDynamicUIAnchor Anchor; // 0xa0 (0x4)
	unsigned char bUseSafeZone; // 0xa4 (0x1)
	unsigned char padding_a5[0x3]; // 0xa5 (0x3)
};

