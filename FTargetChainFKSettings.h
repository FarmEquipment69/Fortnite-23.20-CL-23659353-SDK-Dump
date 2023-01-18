// ScriptStruct /Script/IKRig.TargetChainFKSettings
// Size: 0x18
struct FTargetChainFKSettings
{
	bool EnableFK; // 0x0 (0x1)
	enum ERetargetRotationMode RotationMode; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float RotationAlpha; // 0x4 (0x4)
	enum ERetargetTranslationMode TranslationMode; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float TranslationAlpha; // 0xc (0x4)
	float PoleVectorMatching; // 0x10 (0x4)
	float PoleVectorOffset; // 0x14 (0x4)
};

