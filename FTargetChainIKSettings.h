// ScriptStruct /Script/IKRig.TargetChainIKSettings
// Size: 0x78
struct FTargetChainIKSettings
{
	bool EnableIK; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float BlendToSource; // 0x4 (0x4)
	struct FVector BlendToSourceWeights; // 0x8 (0x18)
	struct FVector StaticOffset; // 0x20 (0x18)
	struct FVector StaticLocalOffset; // 0x38 (0x18)
	struct FRotator StaticRotationOffset; // 0x50 (0x18)
	float ScaleVertical; // 0x68 (0x4)
	float Extension; // 0x6c (0x4)
	bool bAffectedByIKWarping; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

