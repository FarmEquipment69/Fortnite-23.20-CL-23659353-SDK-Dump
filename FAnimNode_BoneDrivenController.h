// ScriptStruct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x110
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase
{
	struct FBoneReference SourceBone; // 0xc8 (0xc)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	class UCurveFloat* DrivingCurve; // 0xd8 (0x8)
	float Multiplier; // 0xe0 (0x4)
	float RangeMin; // 0xe4 (0x4)
	float RangeMax; // 0xe8 (0x4)
	float RemappedMin; // 0xec (0x4)
	float RemappedMax; // 0xf0 (0x4)
	struct FName ParameterName; // 0xf4 (0x4)
	struct FBoneReference TargetBone; // 0xf8 (0xc)
	enum EDrivenDestinationMode DestinationMode; // 0x104 (0x1)
	enum EDrivenBoneModificationMode ModificationMode; // 0x105 (0x1)
	struct TEnumAsByte<EComponentType> SourceComponent; // 0x106 (0x1)
	unsigned char bUseRange; // 0x107 (0x1)
	unsigned char bAffectTargetTranslationX; // 0x107 (0x1)
	unsigned char bAffectTargetTranslationY; // 0x107 (0x1)
	unsigned char bAffectTargetTranslationZ; // 0x107 (0x1)
	unsigned char bAffectTargetRotationX; // 0x107 (0x1)
	unsigned char bAffectTargetRotationY; // 0x107 (0x1)
	unsigned char bAffectTargetRotationZ; // 0x107 (0x1)
	unsigned char bAffectTargetScaleX; // 0x107 (0x1)
	unsigned char bAffectTargetScaleY; // 0x108 (0x1)
	unsigned char bAffectTargetScaleZ; // 0x108 (0x1)
	unsigned char padding_109[0x7]; // 0x109 (0x7)
};

