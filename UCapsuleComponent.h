// Class /Script/Engine.CapsuleComponent
// Size: 0x570
class UCapsuleComponent : public UShapeComponent
{
	float CapsuleHalfHeight; // 0x560 (0x4)
	float CapsuleRadius; // 0x564 (0x4)
	unsigned char padding_568[0x8]; // 0x568 (0x8)

	/* Functions */

	// Function /Script/Engine.CapsuleComponent.SetCapsuleSize (Underlying native function: SetCapsuleSize 0x9ce1d50)
	void SetCapsuleSize(float& InRadius, float& InHalfHeight, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CapsuleComponent.SetCapsuleRadius (Underlying native function: SetCapsuleRadius 0x9ce1c7c)
	void SetCapsuleRadius(float& Radius, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CapsuleComponent.SetCapsuleHalfHeight (Underlying native function: SetCapsuleHalfHeight 0x9ce1ba8)
	void SetCapsuleHalfHeight(float& HalfHeight, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleSize_WithoutHemisphere (Underlying native function: GetUnscaledCapsuleSize_WithoutHemisphere 0x9ce0e98)
	void GetUnscaledCapsuleSizeWithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleSize (Underlying native function: GetUnscaledCapsuleSize 0x9ce0dbc)
	void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleRadius (Underlying native function: GetUnscaledCapsuleRadius 0x9ce0da4)
	float GetUnscaledCapsuleRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight_WithoutHemisphere (Underlying native function: GetUnscaledCapsuleHalfHeight_WithoutHemisphere 0x9ce0d80)
	float GetUnscaledCapsuleHalfHeightWithoutHemisphere(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetUnscaledCapsuleHalfHeight (Underlying native function: GetUnscaledCapsuleHalfHeight 0x9ce0d68)
	float GetUnscaledCapsuleHalfHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetShapeScale (Underlying native function: GetShapeScale 0x9ce0cd4)
	float GetShapeScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleSize_WithoutHemisphere (Underlying native function: GetScaledCapsuleSize_WithoutHemisphere 0x9ce0b84)
	void GetScaledCapsuleSizeWithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleSize (Underlying native function: GetScaledCapsuleSize 0x9ce0a60)
	void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleRadius (Underlying native function: GetScaledCapsuleRadius 0x9ce0a24)
	float GetScaledCapsuleRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleHalfHeight_WithoutHemisphere (Underlying native function: GetScaledCapsuleHalfHeight_WithoutHemisphere 0x9ce09c8)
	float GetScaledCapsuleHalfHeightWithoutHemisphere(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CapsuleComponent.GetScaledCapsuleHalfHeight (Underlying native function: GetScaledCapsuleHalfHeight 0x9ce098c)
	float GetScaledCapsuleHalfHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

