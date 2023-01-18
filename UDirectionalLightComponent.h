// Class /Script/Engine.DirectionalLightComponent
// Size: 0x4c0
class UDirectionalLightComponent : public ULightComponent
{
	float ShadowCascadeBiasDistribution; // 0x3e8 (0x4)
	unsigned char bEnableLightShaftOcclusion; // 0x3ec (0x1)
	unsigned char unreflected_3ed[0x3]; // 0x3ed (0x3) 
	float OcclusionMaskDarkness; // 0x3f0 (0x4)
	float OcclusionDepthRange; // 0x3f4 (0x4)
	struct FVector LightShaftOverrideDirection; // 0x3f8 (0x18)
	float WholeSceneDynamicShadowRadius; // 0x410 (0x4)
	float DynamicShadowDistanceMovableLight; // 0x414 (0x4)
	float DynamicShadowDistanceStationaryLight; // 0x418 (0x4)
	int DynamicShadowCascades; // 0x41c (0x4)
	float CascadeDistributionExponent; // 0x420 (0x4)
	float CascadeTransitionFraction; // 0x424 (0x4)
	float ShadowDistanceFadeoutFraction; // 0x428 (0x4)
	unsigned char bUseInsetShadowsForMovableObjects; // 0x42c (0x1)
	unsigned char unreflected_42d[0x3]; // 0x42d (0x3) 
	int FarShadowCascadeCount; // 0x430 (0x4)
	float FarShadowDistance; // 0x434 (0x4)
	float DistanceFieldShadowDistance; // 0x438 (0x4)
	int ForwardShadingPriority; // 0x43c (0x4)
	float LightSourceAngle; // 0x440 (0x4)
	float LightSourceSoftAngle; // 0x444 (0x4)
	float ShadowSourceAngleFactor; // 0x448 (0x4)
	float TraceDistance; // 0x44c (0x4)
	unsigned char bUsedAsAtmosphereSunLight; // 0x450 (0x1)
	unsigned char bAtmosphereSunLight; // 0x450 (0x1)
	unsigned char unreflected_451[0x3]; // 0x451 (0x3) 
	int AtmosphereSunLightIndex; // 0x454 (0x4)
	struct FLinearColor AtmosphereSunDiskColorScale; // 0x458 (0x10)
	unsigned char bPerPixelAtmosphereTransmittance; // 0x468 (0x1)
	unsigned char bCastShadowsOnClouds; // 0x468 (0x1)
	unsigned char bCastShadowsOnAtmosphere; // 0x468 (0x1)
	unsigned char bCastCloudShadows; // 0x468 (0x1)
	unsigned char unreflected_469[0x3]; // 0x469 (0x3) 
	float CloudShadowStrength; // 0x46c (0x4)
	float CloudShadowOnAtmosphereStrength; // 0x470 (0x4)
	float CloudShadowOnSurfaceStrength; // 0x474 (0x4)
	float CloudShadowDepthBias; // 0x478 (0x4)
	float CloudShadowExtent; // 0x47c (0x4)
	float CloudShadowMapResolutionScale; // 0x480 (0x4)
	float CloudShadowRaySampleCountScale; // 0x484 (0x4)
	struct FLinearColor CloudScatteredLuminanceScale; // 0x488 (0x10)
	struct FLightmassDirectionalLightSettings LightmassSettings; // 0x498 (0x10)
	unsigned char bCastModulatedShadows; // 0x4a8 (0x1)
	unsigned char unreflected_4a9[0x3]; // 0x4a9 (0x3) 
	struct FColor ModulatedShadowColor; // 0x4ac (0x4)
	float ShadowAmount; // 0x4b0 (0x4)
	unsigned char padding_4b4[0xc]; // 0x4b4 (0xc)

	/* Functions */

	// Function /Script/Engine.DirectionalLightComponent.SetShadowSourceAngleFactor (Underlying native function: SetShadowSourceAngleFactor 0x9cfa334)
	void SetShadowSourceAngleFactor(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetShadowDistanceFadeoutFraction (Underlying native function: SetShadowDistanceFadeoutFraction 0x9cfa218)
	void SetShadowDistanceFadeoutFraction(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetShadowCascadeBiasDistribution (Underlying native function: SetShadowCascadeBiasDistribution 0x9cfa180)
	void SetShadowCascadeBiasDistribution(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetShadowAmount (Underlying native function: SetShadowAmount 0x9cfa078)
	void SetShadowAmount(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetOcclusionMaskDarkness (Underlying native function: SetOcclusionMaskDarkness 0x9cf9bbc)
	void SetOcclusionMaskDarkness(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetOcclusionDepthRange (Underlying native function: SetOcclusionDepthRange 0x9cf9b38)
	void SetOcclusionDepthRange(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetLightSourceSoftAngle (Underlying native function: SetLightSourceSoftAngle 0x9cf9964)
	void SetLightSourceSoftAngle(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetLightSourceAngle (Underlying native function: SetLightSourceAngle 0x9cf98e0)
	void SetLightSourceAngle(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetLightShaftOverrideDirection (Underlying native function: SetLightShaftOverrideDirection 0x9cf9850)
	void SetLightShaftOverrideDirection(struct FVector& NewValue); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetEnableLightShaftOcclusion (Underlying native function: SetEnableLightShaftOcclusion 0x9cf9018)
	void SetEnableLightShaftOcclusion(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetDynamicShadowDistanceStationaryLight (Underlying native function: SetDynamicShadowDistanceStationaryLight 0x9cf8e10)
	void SetDynamicShadowDistanceStationaryLight(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetDynamicShadowDistanceMovableLight (Underlying native function: SetDynamicShadowDistanceMovableLight 0x9cf8d78)
	void SetDynamicShadowDistanceMovableLight(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetDynamicShadowCascades (Underlying native function: SetDynamicShadowCascades 0x9cf8cec)
	void SetDynamicShadowCascades(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetCascadeTransitionFraction (Underlying native function: SetCascadeTransitionFraction 0x9cf8c54)
	void SetCascadeTransitionFraction(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetCascadeDistributionExponent (Underlying native function: SetCascadeDistributionExponent 0x9cf8bbc)
	void SetCascadeDistributionExponent(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetAtmosphereSunLightIndex (Underlying native function: SetAtmosphereSunLightIndex 0x9cf834c)
	void SetAtmosphereSunLightIndex(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DirectionalLightComponent.SetAtmosphereSunLight (Underlying native function: SetAtmosphereSunLight 0x9cf82cc)
	void SetAtmosphereSunLight(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)
};

