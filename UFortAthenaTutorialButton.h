// Class /Script/FortniteUI.FortAthenaTutorialButton
// Size: 0x290
class UFortAthenaTutorialButton : public UFortAthenaTutorialBaseInteraction
{
	enum ETutorialButtonInteractionType InteractionType; // 0x280 (0x1)
	unsigned char unreflected_281[0x7]; // 0x281 (0x7) 
	class UCommonButtonLegacy* ButtonTutorial; // 0x288 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaTutorialButton.OnTutorialButtonPressed (Underlying native function: OnTutorialButtonPressed 0xa954930)
	void OnTutorialButtonPressed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaTutorialButton.OnTutorialButtonClicked (Underlying native function: OnTutorialButtonClicked 0xa954904)
	void OnTutorialButtonClicked(); // (Final | Native | Public | BlueprintCallable)
};

