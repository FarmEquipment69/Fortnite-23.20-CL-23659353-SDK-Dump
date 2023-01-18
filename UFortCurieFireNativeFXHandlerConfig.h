// Class /Script/FortniteGame.FortCurieFireNativeFXHandlerConfig
// Size: 0x1a0
class UFortCurieFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{
	class UNiagaraSystem* WorldFireSystem; // 0x168 (0x8)
	class UTextureRenderTarget2D* LandscapeCharRenderTarget; // 0x170 (0x8)
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x178 (0x8)
	struct FName PlayerWorldFireSystemLightScalabilityParamName; // 0x180 (0x4)
	struct FName LandscapeBiasParameterName; // 0x184 (0x4)
	struct FName LandscapeDivisorParameterName; // 0x188 (0x4)
	float LandscapeFireRandomLocationRadius; // 0x18c (0x4)
	float MinLandscapeFireSphericalBounds; // 0x190 (0x4)
	float MaxLandscapeFireSphericalBounds; // 0x194 (0x4)
	float LandscapeCharInterpSpeed; // 0x198 (0x4)
	unsigned char padding_19c[0x4]; // 0x19c (0x4)
};

