// ScriptStruct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
// Size: 0xa0
struct FRigUnit_GetRelativeBoneTransform : FRigUnit
{
	struct FName bone; // 0x8 (0x4)
	struct FName Space; // 0xc (0x4)
	struct FTransform Transform; // 0x10 (0x60)
	struct FCachedRigElement CachedBone; // 0x70 (0x18)
	struct FCachedRigElement CachedSpace; // 0x88 (0x18)
};

