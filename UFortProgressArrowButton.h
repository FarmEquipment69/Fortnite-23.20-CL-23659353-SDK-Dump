// Class /Script/SaveTheWorldUI.FortProgressArrowButton
// Size: 0x1420
class UFortProgressArrowButton : public UCommonButtonBase
{
	struct FSlateColor ArrowColor; // 0x13e0 (0x14)
	struct FSlateColor HoverColor; // 0x13f4 (0x14)
	struct FSlateColor ShadowColor; // 0x1408 (0x14)
	unsigned char padding_141c[0x4]; // 0x141c (0x4)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor (Underlying native function: UpdateArrowColor 0x759b630)
	void UpdateArrowColor(struct FSlateColor& Color, struct FSlateColor& HoverColor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet (Has no native function)
	void OnShadowColorSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet (Has no native function)
	void OnIsInteractiveSet(bool& bIsInteractive); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet (Has no native function)
	void OnArrowColorSet(); // (Event | Public | BlueprintEvent)
};

