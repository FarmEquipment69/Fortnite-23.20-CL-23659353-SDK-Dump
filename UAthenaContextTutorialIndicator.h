// Class /Script/FortniteUI.AthenaContextTutorialIndicator
// Size: 0x608
class UAthenaContextTutorialIndicator : public UAthenaMarkedActorIndicator
{
	float OffscreenMaxTreshold; // 0x5c8 (0x4)
	unsigned char unreflected_5cc[0x4]; // 0x5cc (0x4) 
	class UOverlay* OverlayIcon1; // 0x5d0 (0x8)
	unsigned char unreflected_5d8[0x4]; // 0x5d8 (0x4) 
	float ScreenEdgePaddingSizePercent; // 0x5dc (0x4)
	unsigned char padding_5e0[0x28]; // 0x5e0 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.SwitchIndicatorSize (Underlying native function: SwitchIndicatorSize 0xa471b38)
	void SwitchIndicatorSize(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.SetScreenPercent (Has no native function)
	void SetScreenPercent(float& Percent); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.SetIndicatorText (Has no native function)
	void SetIndicatorText(struct FText& Text); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.PlayOutAnimation (Has no native function)
	void PlayOutAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.PlayInAnimation (Has no native function)
	void PlayInAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.PlayBounceAnimation (Has no native function)
	void PlayBounceAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.GetMinTreshold (Underlying native function: GetMinTreshold 0xa46fe8c)
	float GetMinTreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.GetMaxTreshold (Underlying native function: GetMaxTreshold 0xa46fe74)
	float GetMaxTreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.GetMaxOffscreenTreshold (Underlying native function: GetMaxOffscreenTreshold 0xa46fe5c)
	float GetMaxOffscreenTreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaContextTutorialIndicator.GetCurrentDotProduct (Underlying native function: GetCurrentDotProduct 0xa46fe44)
	float GetCurrentDotProduct(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

