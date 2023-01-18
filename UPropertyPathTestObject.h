// Class /Script/PropertyPath.PropertyPathTestObject
// Size: 0x150
class UPropertyPathTestObject : public UObject
{
	bool bool; // 0x28 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumOne; // 0x29 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumTwo; // 0x2a (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumThree; // 0x2b (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumFour; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	int Integer; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FString String; // 0x38 (0x10)
	float float; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct FPropertyPathTestStruct Struct; // 0x50 (0x50)
	struct FPropertyPathTestStruct StructRef; // 0xa0 (0x50)
	struct FPropertyPathTestStruct StructConstRef; // 0xf0 (0x50)
	class UPropertyPathTestObject* InnerObject; // 0x140 (0x8)
	unsigned char padding_148[0x8]; // 0x148 (0x8)

	/* Functions */

	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructRef (Underlying native function: SetStructRef 0x5faf2d0)
	void SetStructRef(struct FPropertyPathTestStruct& InStruct); // (Final | Native | Public)

	// Function /Script/PropertyPath.PropertyPathTestObject.SetStructConstRef (Underlying native function: SetStructConstRef 0x5faf210)
	void SetStructConstRef(struct FPropertyPathTestStruct& InStruct); // (Final | Native | Public)

	// Function /Script/PropertyPath.PropertyPathTestObject.SetStruct (Underlying native function: SetStruct 0x5faf150)
	void SetStruct(struct FPropertyPathTestStruct& InStruct); // (Final | Native | Public)

	// Function /Script/PropertyPath.PropertyPathTestObject.SetFloat (Underlying native function: SetFloat 0x5faf0b0)
	void SetFloat(float& InFloat); // (Final | Native | Public)

	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructRef (Underlying native function: GetStructRef 0x5faf080)
	struct FPropertyPathTestStruct GetStructRef(); // (Final | Native | Public | Const)

	// Function /Script/PropertyPath.PropertyPathTestObject.GetStructConstRef (Underlying native function: GetStructConstRef 0x5faf050)
	struct FPropertyPathTestStruct GetStructConstRef(); // (Final | Native | Public | Const)

	// Function /Script/PropertyPath.PropertyPathTestObject.GetStruct (Underlying native function: GetStruct 0x5faf000)
	struct FPropertyPathTestStruct GetStruct(); // (Final | Native | Public | Const)

	// Function /Script/PropertyPath.PropertyPathTestObject.GetFloat (Underlying native function: GetFloat 0x5faefd0)
	float GetFloat(); // (Final | Native | Public | Const)
};

