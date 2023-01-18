// ScriptStruct /Script/FortniteGame.FortLightAnimSet
// Size: 0x20
struct FFortLightAnimSet
{
	struct TWeakObjectPtr<class ULightComponent> LightComp; // 0x0 (0x8)
	struct TArray<struct FFortFloatAnimationInfo> IntensityAnims; // 0x8 (0x10)
	unsigned char padding_18[0x8]; // 0x18 (0x8)
};

