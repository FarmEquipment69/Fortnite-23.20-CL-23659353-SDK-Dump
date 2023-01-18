// ScriptStruct /Script/Engine.PropertyAccessIndirection
// Size: 0x40
struct FPropertyAccessIndirection
{
	unsigned char Property_0[0x20]; // 0x0 (0x20) (UNHANDLED PROPERTY TYPE: FieldPathProperty UID: 0)
	class UFunction* Function; // 0x20 (0x8)
	int ReturnBufferSize; // 0x28 (0x4)
	int ReturnBufferAlignment; // 0x2c (0x4)
	int ArrayIndex; // 0x30 (0x4)
	uint32_t Offset; // 0x34 (0x4)
	enum EPropertyAccessObjectType ObjectType; // 0x38 (0x1)
	enum EPropertyAccessIndirectionType Type; // 0x39 (0x1)
	unsigned char padding_3a[0x6]; // 0x3a (0x6)
};

