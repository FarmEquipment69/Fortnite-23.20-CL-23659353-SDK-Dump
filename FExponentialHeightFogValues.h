// ScriptStruct /Script/FortniteGame.ExponentialHeightFogValues
// Size: 0x60
struct FExponentialHeightFogValues
{
	float FogDensity; // 0x0 (0x4)
	float FogHeightFalloff; // 0x4 (0x4)
	float FogMaxOpacity; // 0x8 (0x4)
	float StartDistance; // 0xc (0x4)
	float DirectionalInscatteringExponent; // 0x10 (0x4)
	float DirectionalInscatteringStartDistance; // 0x14 (0x4)
	struct FLinearColor DirectionalInscatteringColor; // 0x18 (0x10)
	struct FLinearColor FogInscatteringColor; // 0x28 (0x10)
	float VolumetricFogScatteringDistribution; // 0x38 (0x4)
	struct FLinearColor VolumetricFogAlbedo; // 0x3c (0x10)
	float VolumetricFogExtinctionScale; // 0x4c (0x4)
	float VolumetricFogDistance; // 0x50 (0x4)
	struct FExponentialHeightFogData SecondFogData; // 0x54 (0xc)
};

