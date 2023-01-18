// ScriptStruct /Script/LiveLinkInterface.LiveLinkLightStaticData
// Size: 0x28
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData
{
	bool bIsTemperatureSupported; // 0x18 (0x1)
	bool bIsIntensitySupported; // 0x19 (0x1)
	bool bIsLightColorSupported; // 0x1a (0x1)
	bool bIsInnerConeAngleSupported; // 0x1b (0x1)
	bool bIsOuterConeAngleSupported; // 0x1c (0x1)
	bool bIsAttenuationRadiusSupported; // 0x1d (0x1)
	bool bIsSourceLenghtSupported; // 0x1e (0x1)
	bool bIsSourceRadiusSupported; // 0x1f (0x1)
	bool bIsSoftSourceRadiusSupported; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

