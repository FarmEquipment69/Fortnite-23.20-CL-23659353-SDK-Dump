// Class /Script/Engine.SkyLightComponent
// Size: 0x4b0
class USkyLightComponent : public ULightComponentBase
{
	bool bRealTimeCapture; // 0x2d8 (0x1)
	struct TEnumAsByte<ESkyLightSourceType> SourceType; // 0x2d9 (0x1)
	unsigned char unreflected_2da[0x6]; // 0x2da (0x6) 
	class UTextureCube* Cubemap; // 0x2e0 (0x8)
	float SourceCubemapAngle; // 0x2e8 (0x4)
	int CubemapResolution; // 0x2ec (0x4)
	float SkyDistanceThreshold; // 0x2f0 (0x4)
	bool bCaptureEmissiveOnly; // 0x2f4 (0x1)
	bool bLowerHemisphereIsBlack; // 0x2f5 (0x1)
	unsigned char unreflected_2f6[0x2]; // 0x2f6 (0x2) 
	struct FLinearColor LowerHemisphereColor; // 0x2f8 (0x10)
	float OcclusionMaxDistance; // 0x308 (0x4)
	float Contrast; // 0x30c (0x4)
	float OcclusionExponent; // 0x310 (0x4)
	float MinOcclusion; // 0x314 (0x4)
	struct FColor OcclusionTint; // 0x318 (0x4)
	unsigned char bCloudAmbientOcclusion; // 0x31c (0x1)
	unsigned char unreflected_31d[0x3]; // 0x31d (0x3) 
	float CloudAmbientOcclusionStrength; // 0x320 (0x4)
	float CloudAmbientOcclusionExtent; // 0x324 (0x4)
	float CloudAmbientOcclusionMapResolutionScale; // 0x328 (0x4)
	float CloudAmbientOcclusionApertureScale; // 0x32c (0x4)
	struct TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode; // 0x330 (0x1)
	unsigned char unreflected_331[0xa7]; // 0x331 (0xa7) 
	class UTextureCube* BlendDestinationCubemap; // 0x3d8 (0x8)
	unsigned char padding_3e0[0xd0]; // 0x3e0 (0xd0)

	/* Functions */

	// Function /Script/Engine.SkyLightComponent.SetVolumetricScatteringIntensity (Underlying native function: SetVolumetricScatteringIntensity 0x9c1cf50)
	void SetVolumetricScatteringIntensity(float& NewIntensity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetSourceCubemapAngle (Underlying native function: SetSourceCubemapAngle 0x9c1cde8)
	void SetSourceCubemapAngle(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetOcclusionTint (Underlying native function: SetOcclusionTint 0x9c1c844)
	void SetOcclusionTint(struct FColor& InTint); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetOcclusionExponent (Underlying native function: SetOcclusionExponent 0x9c1c7c0)
	void SetOcclusionExponent(float& InOcclusionExponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetOcclusionContrast (Underlying native function: SetOcclusionContrast 0x9c1c73c)
	void SetOcclusionContrast(float& InOcclusionContrast); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetMinOcclusion (Underlying native function: SetMinOcclusion 0x9c1c6b8)
	void SetMinOcclusion(float& InMinOcclusion); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetLowerHemisphereColor (Underlying native function: SetLowerHemisphereColor 0x9c1c4d4)
	void SetLowerHemisphereColor(struct FLinearColor& InLowerHemisphereColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetLightColor (Underlying native function: SetLightColor 0x9c1c44c)
	void SetLightColor(struct FLinearColor& NewLightColor); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetIntensity (Underlying native function: SetIntensity 0x4843528)
	void SetIntensity(float& NewIntensity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetIndirectLightingIntensity (Underlying native function: SetIndirectLightingIntensity 0x9c1c2bc)
	void SetIndirectLightingIntensity(float& NewIntensity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetCubemapBlend (Underlying native function: SetCubemapBlend 0x9c1c13c)
	void SetCubemapBlend(class UTextureCube*& SourceCubemap, class UTextureCube*& DestinationCubemap, float& InBlendFraction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.SetCubemap (Underlying native function: SetCubemap 0x9c1c0bc)
	void SetCubemap(class UTextureCube*& NewCubemap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkyLightComponent.RecaptureSky (Underlying native function: RecaptureSky 0x9c1bf6c)
	void RecaptureSky(); // (Final | Native | Public | BlueprintCallable)
};

