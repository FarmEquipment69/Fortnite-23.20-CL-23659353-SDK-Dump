// Class /Script/FortniteUI.FortPostGameScreen
// Size: 0x420
class UFortPostGameScreen : public UCommonActivatableWidget
{
	struct FFortPostGameScreenConfig PostGameScreenConfig; // 0x3a8 (0x5)
	bool bCanGoBackToThisScreen; // 0x3ad (0x1)
	unsigned char padding_3ae[0x72]; // 0x3ae (0x72)

	/* Functions */

	// Function /Script/FortniteUI.FortPostGameScreen.GoToPreviousScreen (Underlying native function: GoToPreviousScreen 0xa530984)
	void GoToPreviousScreen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameScreen.GoToNextScreen (Underlying native function: GoToNextScreen 0xa530970)
	void GoToNextScreen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameScreen.BP_ShouldDisplay (Underlying native function: BP_ShouldDisplay 0x900cf54)
	bool BPShouldDisplay(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPostGameScreen.BP_OnToggleBlurRequest (Underlying native function: BP_OnToggleBlurRequest 0xa5307e0)
	void BPOnToggleBlurRequest(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortPostGameScreen.BP_OnFadeOutOverlayRequest (Underlying native function: BP_OnFadeOutOverlayRequest 0xa5307c4)
	void BPOnFadeOutOverlayRequest(); // (Final | Native | Protected | BlueprintCallable)
};

