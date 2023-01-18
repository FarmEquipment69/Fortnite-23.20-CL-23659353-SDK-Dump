// ScriptStruct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xa8
struct FAnimNode_RotateRootBone : FAnimNode_Base
{
	struct FPoseLink BasePose; // 0x10 (0x10)
	float Pitch; // 0x20 (0x4)
	float Yaw; // 0x24 (0x4)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28 (0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58 (0x30)
	struct FRotator MeshToComponent; // 0x88 (0x18)
	unsigned char padding_a0[0x8]; // 0xa0 (0x8)
};

