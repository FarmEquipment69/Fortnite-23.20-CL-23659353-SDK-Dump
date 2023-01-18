// Class /Script/FieldSystemEngine.PlaneFalloff
// Size: 0xf0
class UPlaneFalloff : public UFieldNodeFloat
{
	float Magnitude; // 0xa0 (0x4)
	float MinRange; // 0xa4 (0x4)
	float MaxRange; // 0xa8 (0x4)
	float Default; // 0xac (0x4)
	float Distance; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct FVector Position; // 0xb8 (0x18)
	struct FVector Normal; // 0xd0 (0x18)
	struct TEnumAsByte<EFieldFalloffType> Falloff; // 0xe8 (0x1)
	unsigned char padding_e9[0x7]; // 0xe9 (0x7)

	/* Functions */

	// Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff (Underlying native function: SetPlaneFalloff 0x99a4604)
	class UPlaneFalloff* SetPlaneFalloff(float& Magnitude, float& MinRange, float& MaxRange, float& Default, float& Distance, struct FVector& Position, struct FVector& Normal, struct TEnumAsByte<EFieldFalloffType>& Falloff); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

