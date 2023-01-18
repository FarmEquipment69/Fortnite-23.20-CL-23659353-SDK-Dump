// ScriptStruct /Script/PropertyPath.PropertyPathTestInnerStruct
// Size: 0x20
struct FPropertyPathTestInnerStruct
{
	float float; // 0x0 (0x4)
	bool bool; // 0x4 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumOne; // 0x5 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumTwo; // 0x6 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumThree; // 0x7 (0x1)
	struct TEnumAsByte<EPropertyPathTestEnum> EnumFour; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	int Integer; // 0xc (0x4)
	struct FString String; // 0x10 (0x10)
};

