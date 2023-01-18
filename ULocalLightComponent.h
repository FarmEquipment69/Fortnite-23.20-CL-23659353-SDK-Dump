// Class /Script/Engine.LocalLightComponent
// Size: 0x410
class ULocalLightComponent : public ULightComponent
{
	enum ELightUnits IntensityUnits; // 0x3e8 (0x1)
	unsigned char unreflected_3e9[0x3]; // 0x3e9 (0x3) 
	float InverseExposureBlend; // 0x3ec (0x4)
	float Radius; // 0x3f0 (0x4)
	float AttenuationRadius; // 0x3f4 (0x4)
	struct FLightmassPointLightSettings LightmassSettings; // 0x3f8 (0xc)
	unsigned char padding_404[0xc]; // 0x404 (0xc)

	/* Functions */

	// Function /Script/Engine.LocalLightComponent.SetIntensityUnits (Underlying native function: SetIntensityUnits 0x9cf949c)
	void SetIntensityUnits(enum ELightUnits& NewIntensityUnits); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LocalLightComponent.SetAttenuationRadius (Underlying native function: SetAttenuationRadius 0x22548c8)
	void SetAttenuationRadius(float& NewRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.LocalLightComponent.GetUnitsConversionFactor (Underlying native function: GetUnitsConversionFactor 0x9cf762c)
	static float GetUnitsConversionFactor(enum ELightUnits& SrcUnits, enum ELightUnits& TargetUnits, float& CosHalfConeAngle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

