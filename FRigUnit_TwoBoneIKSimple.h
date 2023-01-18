// ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimple
// Size: 0x200
struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable
{
	struct FName BoneA; // 0x38 (0x4)
	struct FName BoneB; // 0x3c (0x4)
	struct FName EffectorBone; // 0x40 (0x4)
	unsigned char unreflected_44[0xc]; // 0x44 (0xc) 
	struct FTransform Effector; // 0x50 (0x60)
	struct FVector PrimaryAxis; // 0xb0 (0x18)
	struct FVector SecondaryAxis; // 0xc8 (0x18)
	float SecondaryAxisWeight; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct FVector PoleVector; // 0xe8 (0x18)
	enum EControlRigVectorKind PoleVectorKind; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	struct FName PoleVectorSpace; // 0x104 (0x4)
	bool bEnableStretch; // 0x108 (0x1)
	unsigned char unreflected_109[0x3]; // 0x109 (0x3) 
	float StretchStartRatio; // 0x10c (0x4)
	float StretchMaximumRatio; // 0x110 (0x4)
	float Weight; // 0x114 (0x4)
	float BoneALength; // 0x118 (0x4)
	float BoneBLength; // 0x11c (0x4)
	bool bPropagateToChildren; // 0x120 (0x1)
	unsigned char unreflected_121[0xf]; // 0x121 (0xf) 
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x130 (0x70)
	struct FCachedRigElement CachedBoneAIndex; // 0x1a0 (0x18)
	struct FCachedRigElement CachedBoneBIndex; // 0x1b8 (0x18)
	struct FCachedRigElement CachedEffectorBoneIndex; // 0x1d0 (0x18)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x1e8 (0x18)
};

