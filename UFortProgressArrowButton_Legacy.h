// Class /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy
// Size: 0x1470
class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy
{
	struct FSlateColor ArrowColor; // 0x1430 (0x14)
	struct FSlateColor HoverColor; // 0x1444 (0x14)
	struct FSlateColor ShadowColor; // 0x1458 (0x14)
	unsigned char padding_146c[0x4]; // 0x146c (0x4)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor (Underlying native function: UpdateArrowColor 0x759b734)
	void UpdateArrowColor(struct FSlateColor& Color, struct FSlateColor& HoverColor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet (Has no native function)
	void OnShadowColorSet(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet (Has no native function)
	void OnIsInteractiveSet(bool& bIsInteractive); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet (Has no native function)
	void OnArrowColorSet(); // (Event | Public | BlueprintEvent)
};

