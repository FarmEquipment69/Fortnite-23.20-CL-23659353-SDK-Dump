// ScriptStruct /Script/Engine.PropertyAccessSegment
// Size: 0x40
struct FPropertyAccessSegment
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UStruct* Struct; // 0x8 (0x8)
	unsigned char Property_10[0x20]; // 0x10 (0x20) (UNHANDLED PROPERTY TYPE: FieldPathProperty UID: 0)
	class UFunction* Function; // 0x30 (0x8)
	int ArrayIndex; // 0x38 (0x4)
	uint16_t Flags; // 0x3c (0x2)
	unsigned char padding_3e[0x2]; // 0x3e (0x2)
};

