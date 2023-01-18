// ScriptStruct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x110
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase
{
	struct FBoneReference RightHandFK; // 0xc8 (0xc)
	struct FBoneReference LeftHandFK; // 0xd4 (0xc)
	struct FBoneReference RightHandIK; // 0xe0 (0xc)
	struct FBoneReference LeftHandIK; // 0xec (0xc)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0xf8 (0x10)
	float HandFKWeight; // 0x108 (0x4)
	unsigned char padding_10c[0x4]; // 0x10c (0x4)
};

