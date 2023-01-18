// ScriptStruct /Script/UMG.WidgetNavigationData
// Size: 0x1c
struct FWidgetNavigationData
{
	enum EUINavigationRule Rule; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName WidgetToFocus; // 0x4 (0x4)
	struct TWeakObjectPtr<class UWidget> Widget; // 0x8 (0x8)
	struct FDelegate CustomDelegate; // 0x10 (0xc)
};

