// ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
// Size: 0x1a0
struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Root; // 0x10 (0x60)
	struct FVector PoleVector; // 0x70 (0x18)
	unsigned char unreflected_88[0x8]; // 0x88 (0x8) 
	struct FTransform Effector; // 0x90 (0x60)
	struct FVector PrimaryAxis; // 0xf0 (0x18)
	struct FVector SecondaryAxis; // 0x108 (0x18)
	float SecondaryAxisWeight; // 0x120 (0x4)
	bool bEnableStretch; // 0x124 (0x1)
	unsigned char unreflected_125[0x3]; // 0x125 (0x3) 
	float StretchStartRatio; // 0x128 (0x4)
	float StretchMaximumRatio; // 0x12c (0x4)
	float BoneALength; // 0x130 (0x4)
	float BoneBLength; // 0x134 (0x4)
	unsigned char unreflected_138[0x8]; // 0x138 (0x8) 
	struct FTransform Elbow; // 0x140 (0x60)
};

