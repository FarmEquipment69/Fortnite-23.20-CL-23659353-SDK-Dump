// ScriptStruct /Script/Engine.RootMotionMovementParams
// Size: 0x70
struct FRootMotionMovementParams
{
	bool bHasRootMotion; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float BlendWeight; // 0x4 (0x4)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform RootMotionTransform; // 0x10 (0x60)
};

