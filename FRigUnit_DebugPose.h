// ScriptStruct /Script/ControlRig.RigUnit_DebugPose
// Size: 0x130
struct FRigUnit_DebugPose : FRigUnit_DebugBaseMutable
{
	struct FRigPose Pose; // 0x38 (0x70)
	float Scale; // 0xa8 (0x4)
	struct FLinearColor Color; // 0xac (0x10)
	float Thickness; // 0xbc (0x4)
	struct FTransform WorldOffset; // 0xc0 (0x60)
	bool bEnabled; // 0x120 (0x1)
	unsigned char padding_121[0xf]; // 0x121 (0xf)
};

