// ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
// Size: 0x200
struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* ItemA; // 0x38 (0x8)
	struct FRigElementKey* ItemB; // 0x40 (0x8)
	struct FRigElementKey* EffectorItem; // 0x48 (0x8)
	struct FTransform Effector; // 0x50 (0x60)
	struct FVector PrimaryAxis; // 0xb0 (0x18)
	struct FVector SecondaryAxis; // 0xc8 (0x18)
	float SecondaryAxisWeight; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct FVector PoleVector; // 0xe8 (0x18)
	enum EControlRigVectorKind PoleVectorKind; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	struct FRigElementKey* PoleVectorSpace; // 0x104 (0x8)
	bool bEnableStretch; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	float StretchStartRatio; // 0x110 (0x4)
	float StretchMaximumRatio; // 0x114 (0x4)
	float Weight; // 0x118 (0x4)
	float ItemALength; // 0x11c (0x4)
	float ItemBLength; // 0x120 (0x4)
	bool bPropagateToChildren; // 0x124 (0x1)
	unsigned char unreflected_125[0xb]; // 0x125 (0xb) 
	struct FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x130 (0x70)
	struct FCachedRigElement CachedItemAIndex; // 0x1a0 (0x18)
	struct FCachedRigElement CachedItemBIndex; // 0x1b8 (0x18)
	struct FCachedRigElement CachedEffectorItemIndex; // 0x1d0 (0x18)
	struct FCachedRigElement CachedPoleVectorSpaceIndex; // 0x1e8 (0x18)
};

