// Class /Script/FortniteUI.FortDynamicEntryBox
// Size: 0x268
class UFortDynamicEntryBox : public UDynamicEntryBox
{
	int MaximumEntries; // 0x230 (0x4)
	enum EDynamicEntryPatternDirection PatternDirection; // 0x234 (0x1)
	unsigned char unreflected_235[0x3]; // 0x235 (0x3) 
	struct TArray<float> RenderOpacityPattern; // 0x238 (0x10)
	struct TArray<struct FWidgetTransform> RenderTransformPattern; // 0x248 (0x10)
	struct TArray<struct FVector2D> RenderTransformPivotPattern; // 0x258 (0x10)
};

