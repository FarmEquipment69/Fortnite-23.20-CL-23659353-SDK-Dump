// ScriptStruct /Script/IKRig.TargetRootSettings
// Size: 0x68
struct FTargetRootSettings
{
	float RotationAlpha; // 0x0 (0x4)
	float TranslationAlpha; // 0x4 (0x4)
	float BlendToSource; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector BlendToSourceWeights; // 0x10 (0x18)
	float ScaleHorizontal; // 0x28 (0x4)
	float ScaleVertical; // 0x2c (0x4)
	struct FVector TranslationOffset; // 0x30 (0x18)
	struct FRotator RotationOffset; // 0x48 (0x18)
	float AffectIKHorizontal; // 0x60 (0x4)
	float AffectIKVertical; // 0x64 (0x4)
};

