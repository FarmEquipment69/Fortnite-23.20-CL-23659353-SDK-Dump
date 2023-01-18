// Class /Script/Engine.SkyAtmosphereComponent
// Size: 0x3a0
class USkyAtmosphereComponent : public USceneComponent
{
	enum ESkyAtmosphereTransformMode TransformMode; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	float BottomRadius; // 0x2a4 (0x4)
	struct FColor GroundAlbedo; // 0x2a8 (0x4)
	float AtmosphereHeight; // 0x2ac (0x4)
	float MultiScatteringFactor; // 0x2b0 (0x4)
	float TraceSampleCountScale; // 0x2b4 (0x4)
	float RayleighScatteringScale; // 0x2b8 (0x4)
	struct FLinearColor RayleighScattering; // 0x2bc (0x10)
	float RayleighExponentialDistribution; // 0x2cc (0x4)
	float MieScatteringScale; // 0x2d0 (0x4)
	struct FLinearColor MieScattering; // 0x2d4 (0x10)
	float MieAbsorptionScale; // 0x2e4 (0x4)
	struct FLinearColor MieAbsorption; // 0x2e8 (0x10)
	float MieAnisotropy; // 0x2f8 (0x4)
	float MieExponentialDistribution; // 0x2fc (0x4)
	float OtherAbsorptionScale; // 0x300 (0x4)
	struct FLinearColor OtherAbsorption; // 0x304 (0x10)
	struct FTentDistribution OtherTentDistribution; // 0x314 (0xc)
	struct FLinearColor SkyLuminanceFactor; // 0x320 (0x10)
	float AerialPespectiveViewDistanceScale; // 0x330 (0x4)
	float HeightFogContribution; // 0x334 (0x4)
	float TransmittanceMinLightElevationAngle; // 0x338 (0x4)
	float AerialPerspectiveStartDepth; // 0x33c (0x4)
	unsigned char unreflected_340[0x40]; // 0x340 (0x40) 
	struct FGuid bStaticLightingBuiltGUID; // 0x380 (0x10)
	unsigned char padding_390[0x10]; // 0x390 (0x10)

	/* Functions */

	// Function /Script/Engine.SkyAtmosphereComponent.SetSkyLuminanceFactor (Underlying native function: SetSkyLuminanceFactor 0x217c7f4)
	void SetSkyLuminanceFactor(struct FLinearColor& NewValue); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetRayleighScatteringScale (Underlying native function: SetRayleighScatteringScale 0x218a1a4)
	void SetRayleighScatteringScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetRayleighScattering (Underlying native function: SetRayleighScattering 0x16af4c4)
	void SetRayleighScattering(struct FLinearColor& NewValue); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetRayleighExponentialDistribution (Underlying native function: SetRayleighExponentialDistribution 0x218c704)
	void SetRayleighExponentialDistribution(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetOtherAbsorptionScale (Underlying native function: SetOtherAbsorptionScale 0x217e7ac)
	void SetOtherAbsorptionScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetOtherAbsorption (Underlying native function: SetOtherAbsorption 0x9d0d7f4)
	void SetOtherAbsorption(struct FLinearColor& NewValue); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMultiScatteringFactor (Underlying native function: SetMultiScatteringFactor 0x9d0d670)
	void SetMultiScatteringFactor(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMieScatteringScale (Underlying native function: SetMieScatteringScale 0x218bac0)
	void SetMieScatteringScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMieScattering (Underlying native function: SetMieScattering 0x16af6c0)
	void SetMieScattering(struct FLinearColor& NewValue); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMieExponentialDistribution (Underlying native function: SetMieExponentialDistribution 0x9cfa0fc)
	void SetMieExponentialDistribution(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMieAnisotropy (Underlying native function: SetMieAnisotropy 0x9d0d4ec)
	void SetMieAnisotropy(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMieAbsorptionScale (Underlying native function: SetMieAbsorptionScale 0x9d0d468)
	void SetMieAbsorptionScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetMieAbsorption (Underlying native function: SetMieAbsorption 0x16af638)
	void SetMieAbsorption(struct FLinearColor& NewValue); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetHeightFogContribution (Underlying native function: SetHeightFogContribution 0x9d0d3e4)
	void SetHeightFogContribution(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetAtmosphereHeight (Underlying native function: SetAtmosphereHeight 0x9d0cc70)
	void SetAtmosphereHeight(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.SetAerialPespectiveViewDistanceScale (Underlying native function: SetAerialPespectiveViewDistanceScale 0x218c7b8)
	void SetAerialPespectiveViewDistanceScale(float& NewValue); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.OverrideAtmosphereLightDirection (Underlying native function: OverrideAtmosphereLightDirection 0x9d0b7c8)
	void OverrideAtmosphereLightDirection(int& AtmosphereLightIndex, struct FVector& LightDirection); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.IsAtmosphereLightDirectionOverriden (Underlying native function: IsAtmosphereLightDirectionOverriden 0x9d0b194)
	bool IsAtmosphereLightDirectionOverriden(int& AtmosphereLightIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.GetOverridenAtmosphereLightDirection (Underlying native function: GetOverridenAtmosphereLightDirection 0x9d0a18c)
	struct FVector GetOverridenAtmosphereLightDirection(int& AtmosphereLightIndex); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyAtmosphereComponent.GetAtmosphereTransmitanceOnGroundAtPlanetTop (Underlying native function: GetAtmosphereTransmitanceOnGroundAtPlanetTop 0x9d08c60)
	struct FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(class UDirectionalLightComponent*& DirectionalLight); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable)
};

