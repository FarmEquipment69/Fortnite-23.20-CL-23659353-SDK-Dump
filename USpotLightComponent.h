// Class /Script/Engine.SpotLightComponent
// Size: 0x430
class USpotLightComponent : public UPointLightComponent
{
	float InnerConeAngle; // 0x420 (0x4)
	float OuterConeAngle; // 0x424 (0x4)
	unsigned char padding_428[0x8]; // 0x428 (0x8)

	/* Functions */

	// Function /Script/Engine.SpotLightComponent.SetOuterConeAngle (Underlying native function: SetOuterConeAngle 0x9d2cb74)
	void SetOuterConeAngle(float& NewOuterConeAngle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SpotLightComponent.SetInnerConeAngle (Underlying native function: SetInnerConeAngle 0x9d2c890)
	void SetInnerConeAngle(float& NewInnerConeAngle); // (Final | Native | Public | BlueprintCallable)
};

