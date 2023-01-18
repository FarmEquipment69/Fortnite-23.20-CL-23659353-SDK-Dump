// Class /Script/Engine.PointLight
// Size: 0x2a0
class APointLight : public ALight
{
	class UPointLightComponent* PointLightComponent; // 0x298 (0x8)

	/* Functions */

	// Function /Script/Engine.PointLight.SetRadius (Underlying native function: SetRadius 0x9c167fc)
	void SetRadius(float& NewRadius); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.PointLight.SetLightFalloffExponent (Underlying native function: SetLightFalloffExponent 0x9c15ac0)
	void SetLightFalloffExponent(float& NewLightFalloffExponent); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

