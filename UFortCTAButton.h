// Class /Script/FortniteUI.FortCTAButton
// Size: 0x1490
class UFortCTAButton : public UFortHoldableButton
{
	unsigned char unreflected_1490[0x1490]; 

	/* Functions */

	// Function /Script/FortniteUI.FortCTAButton.SetText (Underlying native function: SetText 0x22bf504)
	void SetText(struct FText& ButtonText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCTAButton.SetSecondaryText (Underlying native function: SetSecondaryText 0x2347260)
	void SetSecondaryText(struct FText& ButtonSecondaryText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCTAButton.BP_SetText (Has no native function)
	void BPSetText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCTAButton.BP_SetSecondaryText (Has no native function)
	void BPSetSecondaryText(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCTAButton.BP_OnInputActionUpdated (Has no native function)
	void BPOnInputActionUpdated(); // (Event | Protected | BlueprintEvent)
};

