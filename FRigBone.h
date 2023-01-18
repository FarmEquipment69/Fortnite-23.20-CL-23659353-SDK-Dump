// ScriptStruct /Script/ControlRig.RigBone
// Size: 0x160
struct FRigBone : FRigElement
{
	struct FName ParentName; // 0x10 (0x4)
	int ParentIndex; // 0x14 (0x4)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FTransform InitialTransform; // 0x20 (0x60)
	struct FTransform GlobalTransform; // 0x80 (0x60)
	struct FTransform LocalTransform; // 0xe0 (0x60)
	struct TArray<int> Dependents; // 0x140 (0x10)
	enum ERigBoneType Type; // 0x150 (0x1)
	unsigned char padding_151[0xf]; // 0x151 (0xf)
};

