// Class /Script/Engine.PointLightComponent
// Size: 0x420
class UPointLightComponent : public ULocalLightComponent
{
	unsigned char bUseInverseSquaredFalloff; // 0x408 (0x1)
	unsigned char unreflected_409[0x3]; // 0x409 (0x3) 
	float LightFalloffExponent; // 0x40c (0x4)
	float SourceRadius; // 0x410 (0x4)
	float SoftSourceRadius; // 0x414 (0x4)
	float SourceLength; // 0x418 (0x4)
	unsigned char padding_41c[0x4]; // 0x41c (0x4)

	/* Functions */

	// Function /Script/Engine.PointLightComponent.SetUseInverseSquaredFalloff (Underlying native function: SetUseInverseSquaredFalloff 0x9cfa968)
	void SetUseInverseSquaredFalloff(bool& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PointLightComponent.SetSourceRadius (Underlying native function: SetSourceRadius 0x9cfa544)
	void SetSourceRadius(float& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PointLightComponent.SetSourceLength (Underlying native function: SetSourceLength 0x9cfa4c0)
	void SetSourceLength(float& NewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PointLightComponent.SetSoftSourceRadius (Underlying native function: SetSoftSourceRadius 0x9cfa3b8)
	void SetSoftSourceRadius(float& bNewValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PointLightComponent.SetLightFalloffExponent (Underlying native function: SetLightFalloffExponent 0x9cf95b4)
	void SetLightFalloffExponent(float& NewLightFalloffExponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PointLightComponent.SetInverseExposureBlend (Underlying native function: SetInverseExposureBlend 0x26776ac)
	void SetInverseExposureBlend(float& NewInverseExposureBlend); // (Final | Native | Public | BlueprintCallable)
};

