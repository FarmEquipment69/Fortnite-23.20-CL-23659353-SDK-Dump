// Class /Script/InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
// Size: 0x1c0
class UFortCurieVoxelFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{
	class UNiagaraSystem* WorldFireSystem; // 0x168 (0x8)
	class UNiagaraSystem* WorldFireDebugSystem; // 0x170 (0x8)
	class UTextureRenderTarget2D* LandscapeCharRenderTarget; // 0x178 (0x8)
	class UMaterialParameterCollection* MaterialParameterCollection; // 0x180 (0x8)
	struct FName PlayerWorldFireSystemLightScalabilityParamName; // 0x188 (0x4)
	struct FName LandscapeBiasParameterName; // 0x18c (0x4)
	struct FName LandscapeDivisorParameterName; // 0x190 (0x4)
	float LandscapeFireRandomLocationRadius; // 0x194 (0x4)
	float MinLandscapeFireSphericalBounds; // 0x198 (0x4)
	float MaxLandscapeFireSphericalBounds; // 0x19c (0x4)
	float LandscapeCharInterpSpeed; // 0x1a0 (0x4)
	float LandscapeIgnitionParticleMovementSpeed; // 0x1a4 (0x4)
	bool bUseVoxelFireAmbientAudio; // 0x1a8 (0x1)
	unsigned char unreflected_1a9[0x7]; // 0x1a9 (0x7) 
	class USoundBase* StructureFireAmbientSound; // 0x1b0 (0x8)
	class USoundBase* GrassFireAmbientSound; // 0x1b8 (0x8)
};

