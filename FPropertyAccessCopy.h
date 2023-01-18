// ScriptStruct /Script/Engine.PropertyAccessCopy
// Size: 0x10
struct FPropertyAccessCopy
{
	int AccessIndex; // 0x0 (0x4)
	int DestAccessStartIndex; // 0x4 (0x4)
	int DestAccessEndIndex; // 0x8 (0x4)
	enum EPropertyAccessCopyType Type; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

