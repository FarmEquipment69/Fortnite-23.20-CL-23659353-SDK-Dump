// Class /Script/FieldSystemEngine.RadialIntMask
// Size: 0xd0
class URadialIntMask : public UFieldNodeInt
{
	float Radius; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FVector Position; // 0xa8 (0x18)
	int InteriorValue; // 0xc0 (0x4)
	int ExteriorValue; // 0xc4 (0x4)
	struct TEnumAsByte<ESetMaskConditionType> SetMaskCondition; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)

	/* Functions */

	// Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask (Underlying native function: SetRadialIntMask 0x99a4888)
	class URadialIntMask* SetRadialIntMask(float& Radius, struct FVector& Position, int& InteriorValue, int& ExteriorValue, struct TEnumAsByte<ESetMaskConditionType>& SetMaskConditionIn); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

