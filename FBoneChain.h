// ScriptStruct /Script/IKRig.BoneChain
// Size: 0x20
struct FBoneChain
{
	struct FName ChainName; // 0x0 (0x4)
	struct FBoneReference StartBone; // 0x4 (0xc)
	struct FBoneReference EndBone; // 0x10 (0xc)
	struct FName IKGoalName; // 0x1c (0x4)
};

