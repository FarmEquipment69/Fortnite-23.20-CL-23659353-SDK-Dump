// ScriptStruct /Script/Engine.BoneMirrorExport
// Size: 0xc
struct FBoneMirrorExport
{
	struct FName BoneName; // 0x0 (0x4)
	struct FName SourceBoneName; // 0x4 (0x4)
	struct TEnumAsByte<EAxis> BoneFlipAxis; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

