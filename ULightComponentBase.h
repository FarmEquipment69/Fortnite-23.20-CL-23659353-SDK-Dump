// Class /Script/Engine.LightComponentBase
// Size: 0x2e0
class ULightComponentBase : public USceneComponent
{
	struct FGuid LightGuid; // 0x2a0 (0x10)
	float Brightness; // 0x2b0 (0x4)
	float Intensity; // 0x2b4 (0x4)
	struct FColor LightColor; // 0x2b8 (0x4)
	unsigned char bAffectsWorld; // 0x2bc (0x1)
	unsigned char CastShadows; // 0x2bc (0x1)
	unsigned char CastStaticShadows; // 0x2bc (0x1)
	unsigned char CastDynamicShadows; // 0x2bc (0x1)
	unsigned char bAffectTranslucentLighting; // 0x2bc (0x1)
	unsigned char bTransmission; // 0x2bc (0x1)
	unsigned char bCastVolumetricShadow; // 0x2bc (0x1)
	unsigned char bCastDeepShadow; // 0x2bc (0x1)
	unsigned char bCastRaytracedShadow; // 0x2bd (0x1)
	unsigned char unreflected_2be[0x2]; // 0x2be (0x2) 
	struct TEnumAsByte<ECastRayTracedShadow> CastRaytracedShadow; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x3]; // 0x2c1 (0x3) 
	unsigned char bAffectReflection; // 0x2c4 (0x1)
	unsigned char bAffectGlobalIllumination; // 0x2c4 (0x1)
	unsigned char unreflected_2c5[0x3]; // 0x2c5 (0x3) 
	float DeepShadowLayerDistribution; // 0x2c8 (0x4)
	float IndirectLightingIntensity; // 0x2cc (0x4)
	float VolumetricScatteringIntensity; // 0x2d0 (0x4)
	int SamplesPerPixel; // 0x2d4 (0x4)
	unsigned char padding_2d8[0x8]; // 0x2d8 (0x8)

	/* Functions */

	// Function /Script/Engine.LightComponentBase.SetSamplesPerPixel (Underlying native function: SetSamplesPerPixel 0x9c0d2d0)
	void SetSamplesPerPixel(int& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetCastVolumetricShadow (Underlying native function: SetCastVolumetricShadow 0x9c0d250)
	void SetCastVolumetricShadow(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetCastShadows (Underlying native function: SetCastShadows 0x9c0d1d0)
	void SetCastShadows(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetCastRaytracedShadows (Underlying native function: SetCastRaytracedShadows 0x9c0d12c)
	void SetCastRaytracedShadows(struct TEnumAsByte<ECastRayTracedShadow>& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetCastRaytracedShadow (Underlying native function: SetCastRaytracedShadow 0x9c0d070)
	void SetCastRaytracedShadow(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetCastDeepShadow (Underlying native function: SetCastDeepShadow 0x9c0cfb0)
	void SetCastDeepShadow(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetAffectReflection (Underlying native function: SetAffectReflection 0x9c0cef8)
	void SetAffectReflection(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.SetAffectGlobalIllumination (Underlying native function: SetAffectGlobalIllumination 0x9c0ce3c)
	void SetAffectGlobalIllumination(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LightComponentBase.GetLightColor (Underlying native function: GetLightColor 0x9c0c4b8)
	struct FLinearColor GetLightColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

