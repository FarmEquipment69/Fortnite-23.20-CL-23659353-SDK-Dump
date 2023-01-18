// ScriptStruct /Script/ControlRig.RigControlCopy
// Size: 0x2a0
struct FRigControlCopy
{
	struct FName Name; // 0x10 (0x4)
	enum ERigControlType ControlType; // 0x14 (0x1)
	unsigned char unreflected_15[0xb]; // 0x15 (0xb) 
	struct FRigControlValue Value; // 0x20 (0xf0)
	struct FRigElementKey* ParentKey; // 0x110 (0x8)
	unsigned char unreflected_118[0x8]; // 0x118 (0x8) 
	struct FTransform OffsetTransform; // 0x120 (0x60)
	struct FTransform ParentTransform; // 0x180 (0x60)
	struct FTransform LocalTransform; // 0x1e0 (0x60)
	struct FTransform GlobalTransform; // 0x240 (0x60)
};

