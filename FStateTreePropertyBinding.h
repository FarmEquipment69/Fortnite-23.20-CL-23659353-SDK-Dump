// ScriptStruct /Script/StateTreeModule.StateTreePropertyBinding
// Size: 0x1c
struct FStateTreePropertyBinding
{
	struct FStateTreePropertySegment SourcePath; // 0x0 (0xc)
	struct FStateTreePropertySegment TargetPath; // 0xc (0xc)
	struct FStateTreeIndex16 SourceStructIndex; // 0x18 (0x2)
	enum EStateTreePropertyCopyType CopyType; // 0x1a (0x1)
	unsigned char padding_1b[0x1]; // 0x1b (0x1)
};

