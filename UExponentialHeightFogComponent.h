// Class /Script/Engine.ExponentialHeightFogComponent
// Size: 0x380
class UExponentialHeightFogComponent : public USceneComponent
{
	float FogDensity; // 0x2a0 (0x4)
	float FogHeightFalloff; // 0x2a4 (0x4)
	struct FExponentialHeightFogData SecondFogData; // 0x2a8 (0xc)
	struct FLinearColor FogInscatteringColor; // 0x2b4 (0x10)
	struct FLinearColor FogInscatteringLuminance; // 0x2c4 (0x10)
	struct FLinearColor SkyAtmosphereAmbientContributionColorScale; // 0x2d4 (0x10)
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	class UTextureCube* InscatteringColorCubemap; // 0x2e8 (0x8)
	float InscatteringColorCubemapAngle; // 0x2f0 (0x4)
	struct FLinearColor InscatteringTextureTint; // 0x2f4 (0x10)
	float FullyDirectionalInscatteringColorDistance; // 0x304 (0x4)
	float NonDirectionalInscatteringColorDistance; // 0x308 (0x4)
	float DirectionalInscatteringExponent; // 0x30c (0x4)
	float DirectionalInscatteringStartDistance; // 0x310 (0x4)
	struct FLinearColor DirectionalInscatteringColor; // 0x314 (0x10)
	struct FLinearColor DirectionalInscatteringLuminance; // 0x324 (0x10)
	float FogMaxOpacity; // 0x334 (0x4)
	float StartDistance; // 0x338 (0x4)
	float FogCutoffDistance; // 0x33c (0x4)
	bool bEnableVolumetricFog; // 0x340 (0x1)
	unsigned char unreflected_341[0x3]; // 0x341 (0x3) 
	float VolumetricFogScatteringDistribution; // 0x344 (0x4)
	struct FColor VolumetricFogAlbedo; // 0x348 (0x4)
	struct FLinearColor VolumetricFogEmissive; // 0x34c (0x10)
	float VolumetricFogExtinctionScale; // 0x35c (0x4)
	float VolumetricFogDistance; // 0x360 (0x4)
	float VolumetricFogStartDistance; // 0x364 (0x4)
	float VolumetricFogNearFadeInDistance; // 0x368 (0x4)
	float VolumetricFogStaticLightingScatteringIntensity; // 0x36c (0x4)
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x370 (0x1)
	unsigned char padding_371[0xf]; // 0x371 (0xf)

	/* Functions */

	// Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogScatteringDistribution (Underlying native function: SetVolumetricFogScatteringDistribution 0x9c06e34)
	void SetVolumetricFogScatteringDistribution(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogExtinctionScale (Underlying native function: SetVolumetricFogExtinctionScale 0x9c06d9c)
	void SetVolumetricFogExtinctionScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogEmissive (Underlying native function: SetVolumetricFogEmissive 0x9c06ce0)
	void SetVolumetricFogEmissive(struct FLinearColor& NewValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogDistance (Underlying native function: SetVolumetricFogDistance 0x9c06c48)
	void SetVolumetricFogDistance(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFogAlbedo (Underlying native function: SetVolumetricFogAlbedo 0x22649e0)
	void SetVolumetricFogAlbedo(struct FColor& NewValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetVolumetricFog (Underlying native function: SetVolumetricFog 0x9c06bb8)
	void SetVolumetricFog(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetStartDistance (Underlying native function: SetStartDistance 0x9c06760)
	void SetStartDistance(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetSecondFogHeightOffset (Underlying native function: SetSecondFogHeightOffset 0x9c066c8)
	void SetSecondFogHeightOffset(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetSecondFogHeightFalloff (Underlying native function: SetSecondFogHeightFalloff 0x9c06630)
	void SetSecondFogHeightFalloff(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetSecondFogDensity (Underlying native function: SetSecondFogDensity 0x9c06598)
	void SetSecondFogDensity(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetSecondFogData (Underlying native function: SetSecondFogData 0x9c064e4)
	void SetSecondFogData(struct FExponentialHeightFogData& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetNonDirectionalInscatteringColorDistance (Underlying native function: SetNonDirectionalInscatteringColorDistance 0x9c06380)
	void SetNonDirectionalInscatteringColorDistance(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetInscatteringTextureTint (Underlying native function: SetInscatteringTextureTint 0x9c062c4)
	void SetInscatteringTextureTint(struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemapAngle (Underlying native function: SetInscatteringColorCubemapAngle 0x9c0622c)
	void SetInscatteringColorCubemapAngle(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetInscatteringColorCubemap (Underlying native function: SetInscatteringColorCubemap 0x9c0619c)
	void SetInscatteringColorCubemap(class UTextureCube*& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetFullyDirectionalInscatteringColorDistance (Underlying native function: SetFullyDirectionalInscatteringColorDistance 0x9c06104)
	void SetFullyDirectionalInscatteringColorDistance(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetFogMaxOpacity (Underlying native function: SetFogMaxOpacity 0x2239354)
	void SetFogMaxOpacity(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetFogInscatteringColor (Underlying native function: SetFogInscatteringColor 0x9c05f78)
	void SetFogInscatteringColor(struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetFogHeightFalloff (Underlying native function: SetFogHeightFalloff 0x2232a28)
	void SetFogHeightFalloff(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetFogDensity (Underlying native function: SetFogDensity 0x22e1a7c)
	void SetFogDensity(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetFogCutoffDistance (Underlying native function: SetFogCutoffDistance 0x9c05ee0)
	void SetFogCutoffDistance(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringStartDistance (Underlying native function: SetDirectionalInscatteringStartDistance 0x9c05e48)
	void SetDirectionalInscatteringStartDistance(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringExponent (Underlying native function: SetDirectionalInscatteringExponent 0x22372c8)
	void SetDirectionalInscatteringExponent(float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ExponentialHeightFogComponent.SetDirectionalInscatteringColor (Underlying native function: SetDirectionalInscatteringColor 0x9c05d8c)
	void SetDirectionalInscatteringColor(struct FLinearColor& Value); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

