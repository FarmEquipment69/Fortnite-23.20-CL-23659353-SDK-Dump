// ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x250
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase
{
	struct FBoneReference IKBone; // 0xc8 (0xc)
	float StartStretchRatio; // 0xd4 (0x4)
	float MaxStretchScale; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FVector EffectorLocation; // 0xe0 (0x18)
	unsigned char unreflected_f8[0x8]; // 0xf8 (0x8) 
	struct FBoneSocketTarget EffectorTarget; // 0x100 (0x80)
	struct FVector JointTargetLocation; // 0x180 (0x18)
	unsigned char unreflected_198[0x8]; // 0x198 (0x8) 
	struct FBoneSocketTarget JointTarget; // 0x1a0 (0x80)
	struct FAxis TwistAxis; // 0x220 (0x20)
	struct TEnumAsByte<EBoneControlSpace> EffectorLocationSpace; // 0x240 (0x1)
	struct TEnumAsByte<EBoneControlSpace> JointTargetLocationSpace; // 0x241 (0x1)
	unsigned char bAllowStretching; // 0x242 (0x1)
	unsigned char bTakeRotationFromEffectorSpace; // 0x242 (0x1)
	unsigned char bMaintainEffectorRelRot; // 0x242 (0x1)
	unsigned char bAllowTwist; // 0x242 (0x1)
	unsigned char padding_243[0xd]; // 0x243 (0xd)
};

