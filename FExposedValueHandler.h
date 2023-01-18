// ScriptStruct /Script/Engine.ExposedValueHandler
// Size: 0x28
struct FExposedValueHandler
{
	struct TArray<struct FExposedValueCopyRecord*> CopyRecords; // 0x0 (0x10)
	class UFunction* Function; // 0x10 (0x8)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FName BoundFunction; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

