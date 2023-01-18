// ScriptStruct /Script/StateTreeModule.StateTreePropCopy
// Size: 0x38
struct FStateTreePropCopy
{
	struct FStateTreePropertyIndirection SourceIndirection; // 0x0 (0x10)
	struct FStateTreePropertyIndirection TargetIndirection; // 0x10 (0x10)
	unsigned char unreflected_20[0x10]; // 0x20 (0x10) 
	int CopySize; // 0x30 (0x4)
	struct FStateTreeIndex16 SourceStructIndex; // 0x34 (0x2)
	enum EStateTreePropertyCopyType Type; // 0x36 (0x1)
	unsigned char padding_37[0x1]; // 0x37 (0x1)
};

