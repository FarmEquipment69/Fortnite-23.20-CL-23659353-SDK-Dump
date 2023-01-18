// ScriptStruct /Script/FortniteGame.FortMIDAnimSet
// Size: 0x40
struct FFortMIDAnimSet
{
	struct TWeakObjectPtr<class UMaterialInstanceDynamic> Mid; // 0x0 (0x8)
	struct TArray<struct FFortFloatParamAnimationInfo> FloatParamAnims; // 0x8 (0x10)
	struct TArray<struct FFortLinearColorParamAnimationInfo> ColorParamAnims; // 0x18 (0x10)
	struct TArray<struct FFortLinearColorCurveParamAnimationInfo> ColorCurveParamAnims; // 0x28 (0x10)
	unsigned char padding_38[0x8]; // 0x38 (0x8)
};

