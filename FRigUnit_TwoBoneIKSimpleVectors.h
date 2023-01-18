// ScriptStruct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
// Size: 0x80
struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase
{
	struct FVector Root; // 0x8 (0x18)
	struct FVector PoleVector; // 0x20 (0x18)
	struct FVector Effector; // 0x38 (0x18)
	bool bEnableStretch; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float StretchStartRatio; // 0x54 (0x4)
	float StretchMaximumRatio; // 0x58 (0x4)
	float BoneALength; // 0x5c (0x4)
	float BoneBLength; // 0x60 (0x4)
	unsigned char unreflected_64[0x4]; // 0x64 (0x4) 
	struct FVector Elbow; // 0x68 (0x18)
};

