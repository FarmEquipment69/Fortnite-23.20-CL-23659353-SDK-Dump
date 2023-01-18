// ScriptStruct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x1c
struct FBlendBoneByChannelEntry
{
	struct FBoneReference SourceBone; // 0x0 (0xc)
	struct FBoneReference TargetBone; // 0xc (0xc)
	bool bBlendTranslation; // 0x18 (0x1)
	bool bBlendRotation; // 0x19 (0x1)
	bool bBlendScale; // 0x1a (0x1)
	unsigned char padding_1b[0x1]; // 0x1b (0x1)
};

