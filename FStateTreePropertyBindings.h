// ScriptStruct /Script/StateTreeModule.StateTreePropertyBindings
// Size: 0x68
struct FStateTreePropertyBindings
{
	struct TArray<struct FStateTreeBindableStructDesc> SourceStructs; // 0x0 (0x10)
	struct TArray<struct FStateTreePropCopyBatch> CopyBatches; // 0x10 (0x10)
	struct TArray<struct FStateTreePropertyBinding> PropertyBindings; // 0x20 (0x10)
	struct TArray<struct FStateTreePropertySegment> PropertySegments; // 0x30 (0x10)
	struct TArray<struct FStateTreePropCopy> PropertyCopies; // 0x40 (0x10)
	struct TArray<struct FStateTreePropertyIndirection> PropertyIndirections; // 0x50 (0x10)
	unsigned char padding_60[0x8]; // 0x60 (0x8)
};

