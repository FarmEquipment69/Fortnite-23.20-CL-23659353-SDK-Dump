// ScriptStruct /Script/ControlRig.RigPoseElement
// Size: 0xf0
struct FRigPoseElement
{
	struct FCachedRigElement Index; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform GlobalTransform; // 0x20 (0x60)
	struct FTransform LocalTransform; // 0x80 (0x60)
	float CurveValue; // 0xe0 (0x4)
	unsigned char padding_e4[0xc]; // 0xe4 (0xc)
};

