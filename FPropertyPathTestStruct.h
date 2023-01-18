// ScriptStruct /Script/PropertyPath.PropertyPathTestStruct
// Size: 0x50
struct FPropertyPathTestStruct
{
	bool bool; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int Integer; // 0x4 (0x4)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumOne; // 0x8 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumTwo; // 0x9 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumThree; // 0xa (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumFour; // 0xb (0x1)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString String; // 0x10 (0x10)
	float float; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FPropertyPathTestInnerStruct InnerStruct; // 0x28 (0x20)
	class UPropertyPathTestObject* InnerObject; // 0x48 (0x8)
};

