// ScriptStruct /Script/FortniteUI.FortSimpleWidgetAnimations
// Size: 0x30
struct FFortSimpleWidgetAnimations
{
	struct FName Name; // 0x0 (0x4)
	bool bIsEnabled; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FFortSimpleWidgetAnimation> Targets; // 0x8 (0x10)
	struct FMulticastInlineDelegate OnAnimationsFinished; // 0x18 (0x10)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

