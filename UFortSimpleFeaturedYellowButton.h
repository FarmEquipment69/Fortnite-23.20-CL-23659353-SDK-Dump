// Class /Script/FortniteUI.FortSimpleFeaturedYellowButton
// Size: 0x1450
class UFortSimpleFeaturedYellowButton : public UCommonButtonLegacy
{
	int FontSize; // 0x1430 (0x4)
	struct FMargin PaddingOverrideMargin; // 0x1434 (0x10)
	float DelayShine; // 0x1444 (0x4)
	bool bFontSizeOverride; // 0x1448 (0x1)
	bool bPaddingOverride; // 0x1449 (0x1)
	bool bUseShineSwipe; // 0x144a (0x1)
	bool bShearText; // 0x144b (0x1)
	unsigned char padding_144c[0x4]; // 0x144c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.FortSimpleFeaturedYellowButton.SetText (Has no native function)
	void SetText(struct FText& NewText); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortSimpleFeaturedYellowButton.RefreshUI (Has no native function)
	void RefreshUI(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortSimpleFeaturedYellowButton.ChangeSecondaryText (Has no native function)
	void ChangeSecondaryText(struct FText& NewText); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)
};

