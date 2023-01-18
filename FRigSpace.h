// ScriptStruct /Script/ControlRig.RigSpace
// Size: 0xe0
struct FRigSpace : FRigElement
{
	enum ERigSpaceType SpaceType; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FName ParentName; // 0x14 (0x4)
	int ParentIndex; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct FTransform InitialTransform; // 0x20 (0x60)
	struct FTransform LocalTransform; // 0x80 (0x60)
};

