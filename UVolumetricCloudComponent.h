// Class /Script/Engine.VolumetricCloudComponent
// Size: 0x310
class UVolumetricCloudComponent : public USceneComponent
{
	float LayerBottomAltitude; // 0x2a0 (0x4)
	float LayerHeight; // 0x2a4 (0x4)
	float TracingStartMaxDistance; // 0x2a8 (0x4)
	enum EVolumetricCloudTracingMaxDistanceMode TracingMaxDistanceMode; // 0x2ac (0x1)
	unsigned char unreflected_2ad[0x3]; // 0x2ad (0x3) 
	float TracingMaxDistance; // 0x2b0 (0x4)
	float PlanetRadius; // 0x2b4 (0x4)
	struct FColor GroundAlbedo; // 0x2b8 (0x4)
	unsigned char unreflected_2bc[0x4]; // 0x2bc (0x4) 
	class UMaterialInterface* Material; // 0x2c0 (0x8)
	unsigned char bUsePerSampleAtmosphericLightTransmittance; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0x3]; // 0x2c9 (0x3) 
	float SkyLightCloudBottomOcclusion; // 0x2cc (0x4)
	float ViewSampleCountScale; // 0x2d0 (0x4)
	float ReflectionViewSampleCountScaleValue; // 0x2d4 (0x4)
	float ReflectionViewSampleCountScale; // 0x2d8 (0x4)
	float ReflectionSampleCountScale; // 0x2dc (0x4)
	float ShadowViewSampleCountScale; // 0x2e0 (0x4)
	float ShadowReflectionViewSampleCountScaleValue; // 0x2e4 (0x4)
	float ShadowReflectionViewSampleCountScale; // 0x2e8 (0x4)
	float ShadowReflectionSampleCountScale; // 0x2ec (0x4)
	float ShadowTracingDistance; // 0x2f0 (0x4)
	float StopTracingTransmittanceThreshold; // 0x2f4 (0x4)
	float AerialPespectiveRayleighScatteringStartDistance; // 0x2f8 (0x4)
	float AerialPespectiveRayleighScatteringFadeDistance; // 0x2fc (0x4)
	float AerialPespectiveMieScatteringStartDistance; // 0x300 (0x4)
	float AerialPespectiveMieScatteringFadeDistance; // 0x304 (0x4)
	unsigned char padding_308[0x8]; // 0x308 (0x8)

	/* Functions */

	// Function /Script/Engine.VolumetricCloudComponent.SetViewSampleCountScale (Underlying native function: SetViewSampleCountScale 0x9d2e290)
	void SetViewSampleCountScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetTracingStartMaxDistance (Underlying native function: SetTracingStartMaxDistance 0x9d2e0b4)
	void SetTracingStartMaxDistance(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetTracingMaxDistance (Underlying native function: SetTracingMaxDistance 0x9d0d670)
	void SetTracingMaxDistance(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetStopTracingTransmittanceThreshold (Underlying native function: SetStopTracingTransmittanceThreshold 0x9cfa6ec)
	void SetStopTracingTransmittanceThreshold(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetSkyLightCloudBottomOcclusion (Underlying native function: SetSkyLightCloudBottomOcclusion 0x9d2d214)
	void SetSkyLightCloudBottomOcclusion(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetShadowViewSampleCountScale (Underlying native function: SetShadowViewSampleCountScale 0x9d2d190)
	void SetShadowViewSampleCountScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetShadowTracingDistance (Underlying native function: SetShadowTracingDistance 0x9d2d10c)
	void SetShadowTracingDistance(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetShadowReflectionViewSampleCountScale (Underlying native function: SetShadowReflectionViewSampleCountScale 0x9d0d468)
	void SetShadowReflectionViewSampleCountScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetShadowReflectionSampleCountScale (Underlying native function: SetShadowReflectionSampleCountScale 0x9d2d088)
	void SetShadowReflectionSampleCountScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetReflectionViewSampleCountScale (Underlying native function: SetReflectionViewSampleCountScale 0x9d2cd00)
	void SetReflectionViewSampleCountScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetReflectionSampleCountScale (Underlying native function: SetReflectionSampleCountScale 0x9d2cc7c)
	void SetReflectionSampleCountScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetPlanetRadius (Underlying native function: SetPlanetRadius 0x9d2cbf8)
	void SetPlanetRadius(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetMaterial (Underlying native function: SetMaterial 0x2b70140)
	void SetMaterial(class UMaterialInterface*& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetLayerHeight (Underlying native function: SetLayerHeight 0x9d2c998)
	void SetLayerHeight(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetLayerBottomAltitude (Underlying native function: SetLayerBottomAltitude 0x9d2c914)
	void SetLayerBottomAltitude(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetGroundAlbedo (Underlying native function: SetGroundAlbedo 0x9d2c60c)
	void SetGroundAlbedo(struct FColor& NewValue); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.VolumetricCloudComponent.SetbUsePerSampleAtmosphericLightTransmittance (Underlying native function: SetbUsePerSampleAtmosphericLightTransmittance 0x9d2e3e8)
	void SetbUsePerSampleAtmosphericLightTransmittance(bool& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

