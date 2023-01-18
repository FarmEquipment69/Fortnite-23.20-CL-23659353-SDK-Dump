// Class /Script/Engine.WindDirectionalSourceComponent
// Size: 0x2c0
class UWindDirectionalSourceComponent : public USceneComponent
{
	float Strength; // 0x2a0 (0x4)
	float Speed; // 0x2a4 (0x4)
	float MinGustAmount; // 0x2a8 (0x4)
	float MaxGustAmount; // 0x2ac (0x4)
	float Radius; // 0x2b0 (0x4)
	unsigned char bPointWind; // 0x2b4 (0x1)
	unsigned char padding_2b5[0xb]; // 0x2b5 (0xb)

	/* Functions */

	// Function /Script/Engine.WindDirectionalSourceComponent.SetWindType (Underlying native function: SetWindType 0x9c2076c)
	void SetWindType(enum EWindSourceType& InNewType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.WindDirectionalSourceComponent.SetStrength (Underlying native function: SetStrength 0x9c20384)
	void SetStrength(float& InNewStrength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.WindDirectionalSourceComponent.SetSpeed (Underlying native function: SetSpeed 0x9c202f8)
	void SetSpeed(float& InNewSpeed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.WindDirectionalSourceComponent.SetRadius (Underlying native function: SetRadius 0x9c2026c)
	void SetRadius(float& InNewRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.WindDirectionalSourceComponent.SetMinimumGustAmount (Underlying native function: SetMinimumGustAmount 0x9c20050)
	void SetMinimumGustAmount(float& InNewMinGust); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.WindDirectionalSourceComponent.SetMaximumGustAmount (Underlying native function: SetMaximumGustAmount 0x9c1ffc4)
	void SetMaximumGustAmount(float& InNewMaxGust); // (Final | Native | Public | BlueprintCallable)
};

