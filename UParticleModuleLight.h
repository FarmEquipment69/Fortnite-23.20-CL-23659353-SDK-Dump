// Class /Script/Engine.ParticleModuleLight
// Size: 0x140
class UParticleModuleLight : public UParticleModuleLightBase
{
	bool bUseInverseSquaredFalloff; // 0x30 (0x1)
	bool bAffectsTranslucency; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	unsigned char bOverrideInverseExposureBlend; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	bool bPreviewLightRadius; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float SpawnFraction; // 0x3c (0x4)
	struct FRawDistributionVector ColorScaleOverLife; // 0x40 (0x60)
	struct FRawDistributionFloat BrightnessOverLife; // 0xa0 (0x30)
	struct FRawDistributionFloat RadiusScale; // 0xd0 (0x30)
	struct FRawDistributionFloat LightExponent; // 0x100 (0x30)
	float InverseExposureBlend; // 0x130 (0x4)
	struct FLightingChannels LightingChannels; // 0x134 (0x1)
	unsigned char unreflected_135[0x3]; // 0x135 (0x3) 
	float VolumetricScatteringIntensity; // 0x138 (0x4)
	bool bHighQualityLights; // 0x13c (0x1)
	bool bShadowCastingLights; // 0x13d (0x1)
	unsigned char padding_13e[0x2]; // 0x13e (0x2)
};

