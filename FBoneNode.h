// ScriptStruct /Script/Engine.BoneNode
// Size: 0xc
struct FBoneNode
{
	struct FName Name; // 0x0 (0x4)
	int ParentIndex; // 0x4 (0x4)
	struct TEnumAsByte<EBoneTranslationRetargetingMode> TranslationRetargetingMode; // 0x8 (0x1)
	unsigned char padding_9[0x3]; // 0x9 (0x3)
};

