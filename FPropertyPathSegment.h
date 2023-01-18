// ScriptStruct /Script/PropertyPath.PropertyPathSegment
// Size: 0x20
struct FPropertyPathSegment
{
	struct FName Name; // 0x0 (0x4)
	int ArrayIndex; // 0x4 (0x4)
	class UStruct* Struct; // 0x8 (0x8)
	unsigned char padding_10[0x10]; // 0x10 (0x10)
};

