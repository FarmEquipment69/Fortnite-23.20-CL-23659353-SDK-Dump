// ScriptStruct /Script/PropertyPath.CachedPropertyPath
// Size: 0x38
struct FCachedPropertyPath
{
	struct TArray<struct FPropertyPathSegment> Segments; // 0x0 (0x10)
	unsigned char unreflected_10[0x8]; // 0x10 (0x8) 
	class UFunction* CachedFunction; // 0x18 (0x8)
	unsigned char padding_20[0x18]; // 0x20 (0x18)
};

