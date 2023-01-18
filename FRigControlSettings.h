// ScriptStruct /Script/ControlRig.RigControlSettings
// Size: 0x280
struct FRigControlSettings
{
	enum ERigControlAnimationType AnimationType; // 0x0 (0x1)
	enum ERigControlType ControlType; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	struct FName DisplayName; // 0x4 (0x4)
	enum ERigControlAxis PrimaryAxis; // 0x8 (0x1)
	bool bIsCurve; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	struct TArray<struct FRigControlLimitEnabled> LimitEnabled; // 0x10 (0x10)
	bool bDrawLimits; // 0x20 (0x1)
	unsigned char unreflected_21[0xf]; // 0x21 (0xf) 
	struct FRigControlValue MinimumValue; // 0x30 (0xf0)
	struct FRigControlValue MaximumValue; // 0x120 (0xf0)
	bool bShapeVisible; // 0x210 (0x1)
	enum ERigControlVisibility ShapeVisibility; // 0x211 (0x1)
	unsigned char unreflected_212[0x2]; // 0x212 (0x2) 
	struct FName ShapeName; // 0x214 (0x4)
	struct FLinearColor ShapeColor; // 0x218 (0x10)
	bool bIsTransientControl; // 0x228 (0x1)
	unsigned char unreflected_229[0x7]; // 0x229 (0x7) 
	class UEnum* ControlEnum; // 0x230 (0x8)
	struct FRigControlElementCustomization Customization; // 0x238 (0x20)
	struct TArray<struct FRigElementKey*> DrivenControls; // 0x258 (0x10)
	unsigned char unreflected_268[0x10]; // 0x268 (0x10) 
	bool bGroupWithParentControl; // 0x278 (0x1)
	bool bAnimatable; // 0x279 (0x1)
	bool bShapeEnabled; // 0x27a (0x1)
	unsigned char padding_27b[0x5]; // 0x27b (0x5)
};

