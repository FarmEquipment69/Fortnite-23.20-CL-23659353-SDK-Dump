// Class /Script/Engine.LightComponent
// Size: 0x3f0
class ULightComponent : public ULightComponentBase
{
	float Temperature; // 0x2d8 (0x4)
	float MaxDrawDistance; // 0x2dc (0x4)
	float MaxDistanceFadeRange; // 0x2e0 (0x4)
	unsigned char bUseTemperature; // 0x2e4 (0x1)
	unsigned char unreflected_2e5[0x3]; // 0x2e5 (0x3) 
	int ShadowMapChannel; // 0x2e8 (0x4)
	unsigned char unreflected_2ec[0x4]; // 0x2ec (0x4) 
	float MinRoughness; // 0x2f0 (0x4)
	float SpecularScale; // 0x2f4 (0x4)
	float ShadowResolutionScale; // 0x2f8 (0x4)
	float ShadowBias; // 0x2fc (0x4)
	float ShadowSlopeBias; // 0x300 (0x4)
	float ShadowSharpen; // 0x304 (0x4)
	float ContactShadowLength; // 0x308 (0x4)
	unsigned char ContactShadowLengthInWS; // 0x30c (0x1)
	unsigned char unreflected_30d[0x3]; // 0x30d (0x3) 
	float ContactShadowCastingIntensity; // 0x310 (0x4)
	float ContactShadowNonCastingIntensity; // 0x314 (0x4)
	unsigned char InverseSquaredFalloff; // 0x318 (0x1)
	unsigned char CastTranslucentShadows; // 0x318 (0x1)
	unsigned char bCastShadowsFromCinematicObjectsOnly; // 0x318 (0x1)
	unsigned char bAffectDynamicIndirectLighting; // 0x318 (0x1)
	unsigned char bForceCachedShadowsForMovablePrimitives; // 0x318 (0x1)
	unsigned char unreflected_319[0x3]; // 0x319 (0x3) 
	struct FLightingChannels LightingChannels; // 0x31c (0x1)
	unsigned char unreflected_31d[0x3]; // 0x31d (0x3) 
	class UMaterialInterface* LightFunctionMaterial; // 0x320 (0x8)
	struct FVector LightFunctionScale; // 0x328 (0x18)
	class UTextureLightProfile* IESTexture; // 0x340 (0x8)
	unsigned char bUseIESBrightness; // 0x348 (0x1)
	unsigned char unreflected_349[0x3]; // 0x349 (0x3) 
	float IESBrightnessScale; // 0x34c (0x4)
	float LightFunctionFadeDistance; // 0x350 (0x4)
	float DisabledBrightness; // 0x354 (0x4)
	unsigned char bEnableLightShaftBloom; // 0x358 (0x1)
	unsigned char unreflected_359[0x3]; // 0x359 (0x3) 
	float BloomScale; // 0x35c (0x4)
	float BloomThreshold; // 0x360 (0x4)
	float BloomMaxBrightness; // 0x364 (0x4)
	struct FColor BloomTint; // 0x368 (0x4)
	bool bUseRayTracedDistanceFieldShadows; // 0x36c (0x1)
	unsigned char unreflected_36d[0x3]; // 0x36d (0x3) 
	float RayStartOffsetDepthScale; // 0x370 (0x4)
	unsigned char padding_374[0x7c]; // 0x374 (0x7c)

	/* Functions */

	// Function /Script/Engine.LightComponent.SetVolumetricScatteringIntensity (Underlying native function: SetVolumetricScatteringIntensity 0x9cfab34)
	void SetVolumetricScatteringIntensity(float& NewIntensity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetUseTemperature (Underlying native function: SetUseTemperature 0x9cfaa20)
	void SetUseTemperature(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetUseIESBrightness (Underlying native function: SetUseIESBrightness 0x9cfa8b0)
	void SetUseIESBrightness(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetTransmission (Underlying native function: SetTransmission 0x9cfa7f4)
	void SetTransmission(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetTemperature (Underlying native function: SetTemperature 0x9cfa770)
	void SetTemperature(float& NewTemperature); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetSpecularScale (Underlying native function: SetSpecularScale 0x9cfa6ec)
	void SetSpecularScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetShadowSlopeBias (Underlying native function: SetShadowSlopeBias 0x9cfa2b0)
	void SetShadowSlopeBias(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetShadowBias (Underlying native function: SetShadowBias 0x9cfa0fc)
	void SetShadowBias(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetLightingChannels (Underlying native function: SetLightingChannels 0x9cf99e8)
	void SetLightingChannels(bool& bChannel0, bool& bChannel1, bool& bChannel2); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetLightFunctionScale (Underlying native function: SetLightFunctionScale 0x9cf97c0)
	void SetLightFunctionScale(struct FVector& NewLightFunctionScale); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetLightFunctionMaterial (Underlying native function: SetLightFunctionMaterial 0x9cf9740)
	void SetLightFunctionMaterial(class UMaterialInterface*& NewLightFunctionMaterial); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetLightFunctionFadeDistance (Underlying native function: SetLightFunctionFadeDistance 0x9cf96bc)
	void SetLightFunctionFadeDistance(float& NewLightFunctionFadeDistance); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetLightFunctionDisabledBrightness (Underlying native function: SetLightFunctionDisabledBrightness 0x9cf9638)
	void SetLightFunctionDisabledBrightness(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetLightFColor (Underlying native function: SetLightFColor 0x9cf9538)
	void SetLightFColor(struct FColor& NewLightColor); // (Final | Native | Public | HasDefaults)

	// Function /Script/Engine.LightComponent.SetLightColor (Underlying native function: SetLightColor 0x2721d80)
	void SetLightColor(struct FLinearColor& NewLightColor, bool& bSRGB); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetIntensity (Underlying native function: SetIntensity 0x16ae88c)
	void SetIntensity(float& NewIntensity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetIndirectLightingIntensity (Underlying native function: SetIndirectLightingIntensity 0x9cf9418)
	void SetIndirectLightingIntensity(float& NewIntensity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetIESTexture (Underlying native function: SetIESTexture 0x9cf9378)
	void SetIESTexture(class UTextureLightProfile*& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetIESBrightnessScale (Underlying native function: SetIESBrightnessScale 0x9cf92f4)
	void SetIESBrightnessScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetForceCachedShadowsForMovablePrimitives (Underlying native function: SetForceCachedShadowsForMovablePrimitives 0x22f9f84)
	void SetForceCachedShadowsForMovablePrimitives(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetEnableLightShaftBloom (Underlying native function: SetEnableLightShaftBloom 0x9cf8f60)
	void SetEnableLightShaftBloom(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetBloomTint (Underlying native function: SetBloomTint 0x9cf8690)
	void SetBloomTint(struct FColor& NewValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetBloomThreshold (Underlying native function: SetBloomThreshold 0x9cf860c)
	void SetBloomThreshold(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetBloomScale (Underlying native function: SetBloomScale 0x9cf8588)
	void SetBloomScale(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetBloomMaxBrightness (Underlying native function: SetBloomMaxBrightness 0x9cf8504)
	void SetBloomMaxBrightness(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetAffectTranslucentLighting (Underlying native function: SetAffectTranslucentLighting 0x9cf824c)
	void SetAffectTranslucentLighting(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponent.SetAffectDynamicIndirectLighting (Underlying native function: SetAffectDynamicIndirectLighting 0x9cf818c)
	void SetAffectDynamicIndirectLighting(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)
};

