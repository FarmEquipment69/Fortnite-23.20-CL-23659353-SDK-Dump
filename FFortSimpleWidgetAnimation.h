// ScriptStruct /Script/FortniteUI.FortSimpleWidgetAnimation
// Size: 0x68
struct FFortSimpleWidgetAnimation
{
	struct FName TargetName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UCurveVector* Translation; // 0x8 (0x8)
	class UCurveVector* Scale; // 0x10 (0x8)
	class UCurveFloat* Alpha; // 0x18 (0x8)
	bool bResetOnFinish; // 0x20 (0x1)
	bool bShouldAnimateTranslation; // 0x21 (0x1)
	bool bShouldAnimateScale; // 0x22 (0x1)
	bool bShouldAnimateAlpha; // 0x23 (0x1)
	unsigned char unreflected_24[0xc]; // 0x24 (0xc) 
	struct TWeakObjectPtr<class UWorld> WeakWorld; // 0x30 (0x8)
	unsigned char padding_38[0x30]; // 0x38 (0x30)
};

