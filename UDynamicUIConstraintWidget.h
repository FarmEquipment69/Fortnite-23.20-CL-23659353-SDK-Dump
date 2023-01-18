// Class /Script/DynamicUI.DynamicUIConstraintWidget
// Size: 0x140
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{
	enum EDynamicUIAnchor Anchor; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	struct FDynamicUIWidgetTarget TargetWidget; // 0x98 (0x88)
	enum EDynamicUIAnchor TargetAnchor; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct TArray<class UDynamicUIConstraintBase*> Fallbacks; // 0x128 (0x10)
	unsigned char bConstrainToUnallowedWidgets; // 0x138 (0x1)
	unsigned char bUseFallbacks; // 0x138 (0x1)
	unsigned char padding_139[0x7]; // 0x139 (0x7)
};

