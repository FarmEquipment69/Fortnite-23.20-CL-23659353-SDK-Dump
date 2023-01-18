// ScriptStruct /Script/ControlRig.RigUnit_AimBone
// Size: 0x190
struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable
{
	struct FName bone; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FRigUnit_AimBone_Target Primary; // 0x40 (0x40)
	struct FRigUnit_AimBone_Target Secondary; // 0x80 (0x40)
	float Weight; // 0xc0 (0x4)
	bool bPropagateToChildren; // 0xc4 (0x1)
	unsigned char unreflected_c5[0xb]; // 0xc5 (0xb) 
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0 (0x70)
	struct FCachedRigElement CachedBoneIndex; // 0x140 (0x18)
	struct FCachedRigElement PrimaryCachedSpace; // 0x158 (0x18)
	struct FCachedRigElement SecondaryCachedSpace; // 0x170 (0x18)
	unsigned char padding_188[0x8]; // 0x188 (0x8)
};

