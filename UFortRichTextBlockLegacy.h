// Class /Script/FortniteUI.FortRichTextBlockLegacy
// Size: 0xf50
class UFortRichTextBlockLegacy : public UWidget
{
	struct FText Text; // 0x148 (0x18)
	class UDataTable* StyleSet; // 0x160 (0x8)
	struct FMargin TextMargin; // 0x168 (0x10)
	float WrapTextAt; // 0x178 (0x4)
	bool AutoWrapText; // 0x17c (0x1)
	struct TEnumAsByte<ETextJustify> Justification; // 0x17d (0x1)
	unsigned char unreflected_17e[0x2]; // 0x17e (0x2) 
	struct FButtonStyle HyperlinkButtonStyle; // 0x180 (0x3b0)
	struct FScrollBarStyle ScrollBarStyle; // 0x530 (0x6e0)
	bool DisableTouchInput; // 0xc10 (0x1)
	bool AllowContextMenu; // 0xc11 (0x1)
	unsigned char unreflected_c12[0x6]; // 0xc12 (0x6) 
	class UClass* KeybindWidgetClass; // 0xc18 (0x8)
	unsigned char unreflected_c20[0x20]; // 0xc20 (0x20) 
	struct FTextBlockStyle DefaultTextStyle; // 0xc40 (0x310)

	/* Functions */

	// Function /Script/FortniteUI.FortRichTextBlockLegacy.SetText (Underlying native function: SetText 0xa702478)
	void SetText(struct FText& InText); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRichTextBlockLegacy.EscapeStringForRichText (Underlying native function: EscapeStringForRichText 0xa6fde04)
	static struct FString EscapeStringForRichText(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

