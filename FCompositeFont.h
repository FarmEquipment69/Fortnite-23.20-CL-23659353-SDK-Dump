// ScriptStruct /Script/SlateCore.CompositeFont
// Size: 0x38
struct FCompositeFont
{
	struct FTypeface DefaultTypeface; // 0x0 (0x10)
	struct FCompositeFallbackFont FallbackTypeface; // 0x10 (0x18)
	struct TArray<struct FCompositeSubFont> SubTypefaces; // 0x28 (0x10)
};

