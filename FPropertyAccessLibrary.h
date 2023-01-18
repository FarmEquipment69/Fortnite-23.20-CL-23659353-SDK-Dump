// ScriptStruct /Script/Engine.PropertyAccessLibrary
// Size: 0x78
struct FPropertyAccessLibrary
{
	struct TArray<struct FPropertyAccessSegment> PathSegments; // 0x0 (0x10)
	struct TArray<struct FPropertyAccessPath*> SrcPaths; // 0x10 (0x10)
	struct TArray<struct FPropertyAccessPath*> DestPaths; // 0x20 (0x10)
	struct TArray<struct FPropertyAccessCopyBatch> CopyBatchArray; // 0x30 (0x10)
	unsigned char padding_40[0x38]; // 0x40 (0x38)
};

