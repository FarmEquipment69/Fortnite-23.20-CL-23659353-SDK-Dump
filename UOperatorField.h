// Class /Script/FieldSystemEngine.OperatorField
// Size: 0xc0
class UOperatorField : public UFieldNodeBase
{
	float Magnitude; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	class UFieldNodeBase* RightField; // 0xa8 (0x8)
	class UFieldNodeBase* LeftField; // 0xb0 (0x8)
	struct TEnumAsByte<EFieldOperationType> Operation; // 0xb8 (0x1)
	unsigned char padding_b9[0x7]; // 0xb9 (0x7)

	/* Functions */

	// Function /Script/FieldSystemEngine.OperatorField.SetOperatorField (Underlying native function: SetOperatorField 0x2509d60)
	class UOperatorField* SetOperatorField(float& Magnitude, class UFieldNodeBase*& LeftField, class UFieldNodeBase*& RightField, struct TEnumAsByte<EFieldOperationType>& Operation); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

