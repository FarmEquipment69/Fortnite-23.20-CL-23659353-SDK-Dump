// ScriptStruct /Script/ControlRig.RigUnit_SpringIK
// Size: 0x1f0
struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable
{
	struct FName StartBone; // 0x38 (0x4)
	struct FName EndBone; // 0x3c (0x4)
	float HierarchyStrength; // 0x40 (0x4)
	float EffectorStrength; // 0x44 (0x4)
	float EffectorRatio; // 0x48 (0x4)
	float RootStrength; // 0x4c (0x4)
	float RootRatio; // 0x50 (0x4)
	float Damping; // 0x54 (0x4)
	struct FVector PoleVector; // 0x58 (0x18)
	bool bFlipPolePlane; // 0x70 (0x1)
	enum EControlRigVectorKind PoleVectorKind; // 0x71 (0x1)
	unsigned char unreflected_72[0x2]; // 0x72 (0x2) 
	struct FName PoleVectorSpace; // 0x74 (0x4)
	struct FVector PrimaryAxis; // 0x78 (0x18)
	struct FVector SecondaryAxis; // 0x90 (0x18)
	bool bLiveSimulation; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	int Iterations; // 0xac (0x4)
	bool bLimitLocalPosition; // 0xb0 (0x1)
	bool bPropagateToChildren; // 0xb1 (0x1)
	unsigned char unreflected_b2[0xe]; // 0xb2 (0xe) 
	struct FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xc0 (0x80)
	struct FRigUnit_SpringIK_WorkData WorkData; // 0x140 (0xb0)
};

