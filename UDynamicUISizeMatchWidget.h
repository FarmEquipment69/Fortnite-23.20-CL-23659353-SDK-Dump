// Class /Script/DynamicUI.DynamicUISizeMatchWidget
// Size: 0x128
class UDynamicUISizeMatchWidget : public UDynamicUISizeBase
{
	struct FDynamicUIWidgetTarget TargetWidget; // 0x80 (0x88)
	enum EDynamicUISizeMatch MatchType; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct TArray<class UDynamicUISizeBase*> Fallbacks; // 0x110 (0x10)
	unsigned char bUseFallbacks; // 0x120 (0x1)
	unsigned char padding_121[0x7]; // 0x121 (0x7)
};

