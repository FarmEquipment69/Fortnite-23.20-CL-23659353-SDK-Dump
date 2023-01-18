// ScriptStruct /Script/ControlRig.RigUnit_AimItem
// Size: 0x1a0
struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* Item; // 0x38 (0x8)
	struct FRigUnit_AimItem_Target Primary; // 0x40 (0x48)
	struct FRigUnit_AimItem_Target Secondary; // 0x88 (0x48)
	float Weight; // 0xd0 (0x4)
	unsigned char unreflected_d4[0xc]; // 0xd4 (0xc) 
	struct FRigUnit_AimBone_DebugSettings DebugSettings; // 0xe0 (0x70)
	struct FCachedRigElement CachedItem; // 0x150 (0x18)
	struct FCachedRigElement PrimaryCachedSpace; // 0x168 (0x18)
	struct FCachedRigElement SecondaryCachedSpace; // 0x180 (0x18)
	unsigned char padding_198[0x8]; // 0x198 (0x8)
};

