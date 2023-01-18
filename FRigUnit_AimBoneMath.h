// ScriptStruct /Script/ControlRig.RigUnit_AimBoneMath
// Size: 0x210
struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform InputTransform; // 0x10 (0x60)
	struct FRigUnit_AimItem_Target Primary; // 0x70 (0x48)
	struct FRigUnit_AimItem_Target Secondary; // 0xb8 (0x48)
	float Weight; // 0x100 (0x4)
	unsigned char unreflected_104[0xc]; // 0x104 (0xc) 
	struct FTransform Result; // 0x110 (0x60)
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0x170 (0x70)
	struct FCachedRigElement PrimaryCachedSpace; // 0x1e0 (0x18)
	struct FCachedRigElement SecondaryCachedSpace; // 0x1f8 (0x18)
};

