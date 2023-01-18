// ScriptStruct /Script/Engine.MirrorTableRow
// Size: 0x18
struct FMirrorTableRow : FTableRowBase
{
	struct FName Name; // 0x8 (0x4)
	struct FName MirroredName; // 0xc (0x4)
	struct TEnumAsByte<EMirrorRowType> MirrorEntryType; // 0x10 (0x1)
	unsigned char padding_11[0x7]; // 0x11 (0x7)
};

