// Class /Script/FieldSystemEngine.RadialFalloff
// Size: 0xd8
class URadialFalloff : public UFieldNodeFloat
{
	float Magnitude; // 0xa0 (0x4)
	float MinRange; // 0xa4 (0x4)
	float MaxRange; // 0xa8 (0x4)
	float Default; // 0xac (0x4)
	float Radius; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct FVector Position; // 0xb8 (0x18)
	struct TEnumAsByte<EFieldFalloffType> Falloff; // 0xd0 (0x1)
	unsigned char padding_d1[0x7]; // 0xd1 (0x7)

	/* Functions */

	// Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff (Underlying native function: SetRadialFalloff 0x25feca0)
	class URadialFalloff* SetRadialFalloff(float& Magnitude, float& MinRange, float& MaxRange, float& Default, float& Radius, struct FVector& Position, struct TEnumAsByte<EFieldFalloffType>& Falloff); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

