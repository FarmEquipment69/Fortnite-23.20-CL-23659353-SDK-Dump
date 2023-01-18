// Class /Script/Engine.UserInterfaceSettings
// Size: 0x268
class UUserInterfaceSettings : public UDeveloperSettings
{
	enum ERenderFocusRule RenderFocusRule; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TMap<struct TEnumAsByte<EMouseCursor>, struct FHardwareCursorReference> HardwareCursors; // 0x38 (0x50)
	struct TMap<struct TEnumAsByte<EMouseCursor>, struct FSoftClassPath> SoftwareCursors; // 0x88 (0x50)
	struct FSoftClassPath DefaultCursor; // 0xd8 (0x18)
	struct FSoftClassPath TextEditBeamCursor; // 0xf0 (0x18)
	struct FSoftClassPath CrosshairsCursor; // 0x108 (0x18)
	struct FSoftClassPath HandCursor; // 0x120 (0x18)
	struct FSoftClassPath GrabHandCursor; // 0x138 (0x18)
	struct FSoftClassPath GrabHandClosedCursor; // 0x150 (0x18)
	struct FSoftClassPath SlashedCircleCursor; // 0x168 (0x18)
	float ApplicationScale; // 0x180 (0x4)
	enum EUIScalingRule UIScaleRule; // 0x184 (0x1)
	unsigned char unreflected_185[0x3]; // 0x185 (0x3) 
	struct FSoftClassPath CustomScalingRuleClass; // 0x188 (0x18)
	struct FRuntimeFloatCurve UIScaleCurve; // 0x1a0 (0x88)
	bool bAllowHighDPIInGameMode; // 0x228 (0x1)
	unsigned char unreflected_229[0x3]; // 0x229 (0x3) 
	struct FIntPoint* DesignScreenSize; // 0x22c (0x8)
	bool bLoadWidgetsOnDedicatedServer; // 0x234 (0x1)
	unsigned char unreflected_235[0x3]; // 0x235 (0x3) 
	struct TArray<class UObject*> CursorClasses; // 0x238 (0x10)
	unsigned char CustomScalingRuleClassInstance_248[0x8]; // 0x248 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	class UDPICustomScalingRule* CustomScalingRule; // 0x250 (0x8)
	unsigned char padding_258[0x10]; // 0x258 (0x10)
};

