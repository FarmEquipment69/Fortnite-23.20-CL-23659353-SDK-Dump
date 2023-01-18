// Class /Script/DynamicUI.DynamicUIConstraintContainer
// Size: 0xb8
class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase
{
	struct TArray<struct FDynamicUIWidgetTarget> WidgetsToContain; // 0x90 (0x10)
	struct FMargin Padding; // 0xa0 (0x10)
	unsigned char bMustMatchAllWidgets; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)
};

