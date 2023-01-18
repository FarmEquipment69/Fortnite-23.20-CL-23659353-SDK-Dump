// ScriptStruct /Script/AnimGraphRuntime.PoseDriverTarget
// Size: 0xc0
struct FPoseDriverTarget
{
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x0 (0x10)
	struct FRotator TargetRotation; // 0x10 (0x18)
	float TargetScale; // 0x28 (0x4)
	enum ERBFDistanceMethod DistanceMethod; // 0x2c (0x1)
	enum ERBFFunctionType FunctionType; // 0x2d (0x1)
	bool bApplyCustomCurve; // 0x2e (0x1)
	unsigned char unreflected_2f[0x1]; // 0x2f (0x1) 
	struct FRichCurve CustomCurve; // 0x30 (0x80)
	struct FName DrivenName; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x8]; // 0xb4 (0x8) 
	bool bIsHidden; // 0xbc (0x1)
	unsigned char padding_bd[0x3]; // 0xbd (0x3)
};

