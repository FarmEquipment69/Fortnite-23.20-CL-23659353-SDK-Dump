// ScriptStruct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
// Size: 0x300
struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable
{
	struct FRigElementKey* ChainRoot; // 0x38 (0x8)
	struct FVector Speed; // 0x40 (0x18)
	struct FRigUnit_ChainHarmonics_Reach Reach; // 0x58 (0x48)
	struct FRigUnit_ChainHarmonics_Wave Wave; // 0xa0 (0x78)
	struct FRuntimeFloatCurve WaveCurve; // 0x118 (0x88)
	struct FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x1a0 (0x58)
	bool bDrawDebug; // 0x1f8 (0x1)
	unsigned char unreflected_1f9[0x7]; // 0x1f9 (0x7) 
	struct FTransform DrawWorldOffset; // 0x200 (0x60)
	struct FRigUnit_ChainHarmonics_WorkData WorkData; // 0x260 (0x98)
	unsigned char padding_2f8[0x8]; // 0x2f8 (0x8)
};

