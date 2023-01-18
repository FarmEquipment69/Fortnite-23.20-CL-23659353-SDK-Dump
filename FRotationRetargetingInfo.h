// ScriptStruct /Script/AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x1a0
struct FRotationRetargetingInfo
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0xf]; // 0x1 (0xf) 
	struct FTransform Source; // 0x10 (0x60)
	struct FTransform Target; // 0x70 (0x60)
	enum ERotationComponent RotationComponent; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct FVector TwistAxis; // 0xd8 (0x18)
	bool bUseAbsoluteAngle; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x3]; // 0xf1 (0x3) 
	float SourceMinimum; // 0xf4 (0x4)
	float SourceMaximum; // 0xf8 (0x4)
	float TargetMinimum; // 0xfc (0x4)
	float TargetMaximum; // 0x100 (0x4)
	enum EEasingFuncType EasingType; // 0x104 (0x1)
	unsigned char unreflected_105[0x3]; // 0x105 (0x3) 
	struct FRuntimeFloatCurve CustomCurve; // 0x108 (0x88)
	bool bFlipEasing; // 0x190 (0x1)
	unsigned char unreflected_191[0x3]; // 0x191 (0x3) 
	float EasingWeight; // 0x194 (0x4)
	bool bClamp; // 0x198 (0x1)
	unsigned char padding_199[0x7]; // 0x199 (0x7)
};

