// ScriptStruct /Script/UIFramework.UIFrameworkCanvasBoxSlot
// Size: 0x70
struct FUIFrameworkCanvasBoxSlot : FUIFrameworkSlotBase
{
	struct FAnchors Anchors; // 0x28 (0x20)
	struct FMargin Offsets; // 0x48 (0x10)
	struct FVector2D Alignment; // 0x58 (0x10)
	int ZOrder; // 0x68 (0x4)
	bool bSizeToContent; // 0x6c (0x1)
	unsigned char padding_6d[0x3]; // 0x6d (0x3)
};

