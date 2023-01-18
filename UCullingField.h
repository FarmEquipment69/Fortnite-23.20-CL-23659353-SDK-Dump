// Class /Script/FieldSystemEngine.CullingField
// Size: 0xb8
class UCullingField : public UFieldNodeBase
{
	class UFieldNodeBase* Culling; // 0xa0 (0x8)
	class UFieldNodeBase* Field; // 0xa8 (0x8)
	struct TEnumAsByte<EFieldCullingOperationType> Operation; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)

	/* Functions */

	// Function /Script/FieldSystemEngine.CullingField.SetCullingField (Underlying native function: SetCullingField 0x99a4134)
	class UCullingField* SetCullingField(class UFieldNodeBase*& Culling, class UFieldNodeBase*& Field, struct TEnumAsByte<EFieldCullingOperationType>& Operation); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

