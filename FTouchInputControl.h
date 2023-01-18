// ScriptStruct /Script/Engine.TouchInputControl
// Size: 0x90
struct FTouchInputControl
{
	class UTexture2D* Image1; // 0x0 (0x8)
	class UTexture2D* Image2; // 0x8 (0x8)
	struct FVector2D Center; // 0x10 (0x10)
	struct FVector2D VisualSize; // 0x20 (0x10)
	struct FVector2D ThumbSize; // 0x30 (0x10)
	struct FVector2D InteractionSize; // 0x40 (0x10)
	struct FVector2D InputScale; // 0x50 (0x10)
	struct FKey MainInputKey; // 0x60 (0x18)
	struct FKey AltInputKey; // 0x78 (0x18)
};

