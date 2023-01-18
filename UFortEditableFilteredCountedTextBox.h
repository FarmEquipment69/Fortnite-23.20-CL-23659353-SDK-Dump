// Class /Script/FortniteUI.FortEditableFilteredCountedTextBox
// Size: 0x3a0
class UFortEditableFilteredCountedTextBox : public UUserWidget
{
	int EntryCharLimit; // 0x268 (0x4)
	enum EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x26c (0x1)
	unsigned char unreflected_26d[0x3]; // 0x26d (0x3) 
	int EnforcedEntryCharLimit; // 0x270 (0x4)
	unsigned char unreflected_274[0x4]; // 0x274 (0x4) 
	struct FText SuggestionText; // 0x278 (0x18)
	unsigned char unreflected_290[0x1]; // 0x290 (0x1) 
	bool bShouldValidatePersistentID; // 0x291 (0x1)
	bool bAllowLineBreaks; // 0x292 (0x1)
	bool bAllowStyleEditing; // 0x293 (0x1)
	bool bReplaceUserTextWithSanitizedString; // 0x294 (0x1)
	bool bAllowSanitizedStrings; // 0x295 (0x1)
	bool bUseToxicityServiceSanitization; // 0x296 (0x1)
	unsigned char unreflected_297[0x1]; // 0x297 (0x1) 
	struct FText DefaultSanitizationErrorText; // 0x298 (0x18)
	struct FText AdditionalValidationErrorText; // 0x2b0 (0x18)
	bool bCurrentlyValid; // 0x2c8 (0x1)
	unsigned char unreflected_2c9[0xbf]; // 0x2c9 (0xbf) 
	class UEditableTextBox* EditText; // 0x388 (0x8)
	class UCommonTextBlock* TextCharCount; // 0x390 (0x8)
	unsigned char padding_398[0x8]; // 0x398 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.ValidatePersistentID (Has no native function)
	void ValidatePersistentID(struct FText& Text); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.SetTextWithForcedSanitization (Underlying native function: SetTextWithForcedSanitization 0xa702548)
	void SetTextWithForcedSanitization(struct FText& Text); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.SetEntryCharLimit (Underlying native function: SetEntryCharLimit 0x87b08d8)
	void SetEntryCharLimit(int& InCharLimit); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.OnDirtyTextAttempted (Has no native function)
	void OnDirtyTextAttempted(bool& bIsBadText, bool& bAdditionalValidationFailed); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.HandleTextCommitted (Underlying native function: HandleTextCommitted 0xa6ff3e0)
	void HandleTextCommitted(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.HandleTextChanged (Underlying native function: HandleTextChanged 0xa6ff324)
	void HandleTextChanged(struct FText& Text); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.GetEntryCharLimit (Underlying native function: GetEntryCharLimit 0xa6fe20c)
	int GetEntryCharLimit(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.GetAllowStyleEditing (Underlying native function: GetAllowStyleEditing 0xa6fdfcc)
	bool GetAllowStyleEditing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortEditableFilteredCountedTextBox.GetAllowLineBreaks (Underlying native function: GetAllowLineBreaks 0xa6fdfb4)
	bool GetAllowLineBreaks(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

