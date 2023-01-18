// ScriptStruct /Script/Engine.FormatArgumentData
// Size: 0x50
struct FFormatArgumentData
{
	struct FString ArgumentName; // 0x0 (0x10)
	struct TEnumAsByte<EFormatArgumentType> ArgumentValueType; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FText ArgumentValue; // 0x18 (0x18)
	int64_t ArgumentValueInt; // 0x30 (0x8)
	float ArgumentValueFloat; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	double ArgumentValueDouble; // 0x40 (0x8)
	enum ETextGender ArgumentValueGender; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

