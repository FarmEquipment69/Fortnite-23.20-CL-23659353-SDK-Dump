// Class /Script/Engine.SpotLight
// Size: 0x2a0
class ASpotLight : public ALight
{
	class USpotLightComponent* SpotLightComponent; // 0x298 (0x8)

	/* Functions */

	// Function /Script/Engine.SpotLight.SetOuterConeAngle (Underlying native function: SetOuterConeAngle 0x9f85ccc)
	void SetOuterConeAngle(float& NewOuterConeAngle); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SpotLight.SetInnerConeAngle (Underlying native function: SetInnerConeAngle 0x9f85b9c)
	void SetInnerConeAngle(float& NewInnerConeAngle); // (Final | Native | Public | BlueprintCallable)
};

