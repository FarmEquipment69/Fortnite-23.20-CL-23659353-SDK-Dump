// ScriptStruct /Script/AnimGraphRuntime.AnimNode_LookAt
// Size: 0x240
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase
{
	struct FBoneReference BoneToModify; // 0xc8 (0xc)
	unsigned char unreflected_d4[0xc]; // 0xd4 (0xc) 
	struct FBoneSocketTarget LookAtTarget; // 0xe0 (0x80)
	struct FVector LookAtLocation; // 0x160 (0x18)
	struct FAxis LookAtAxis; // 0x178 (0x20)
	bool bUseLookUpAxis; // 0x198 (0x1)
	struct TEnumAsByte<EInterpolationBlend> InterpolationType; // 0x199 (0x1)
	unsigned char unreflected_19a[0x6]; // 0x19a (0x6) 
	struct FAxis LookUpAxis; // 0x1a0 (0x20)
	float LookAtClamp; // 0x1c0 (0x4)
	float InterpolationTime; // 0x1c4 (0x4)
	float InterpolationTriggerThreashold; // 0x1c8 (0x4)
	unsigned char padding_1cc[0x74]; // 0x1cc (0x74)
};

