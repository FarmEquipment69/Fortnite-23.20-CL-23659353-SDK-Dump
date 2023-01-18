// Class /Script/FortniteUI.FortAgeGateFlow
// Size: 0x5b8
class UFortAgeGateFlow : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	class UCommonWidgetSwitcherLegacy* SwitcherAgeGateScreens; // 0x4f0 (0x8)
	class UWidget* ContentAgeEntryScreen; // 0x4f8 (0x8)
	class UWidget* ContentGuardianEmailEntryScreen; // 0x500 (0x8)
	class UWidget* ContentGuardianConsentPendingScreen; // 0x508 (0x8)
	class UComboBoxString* ComboBoxMonth; // 0x510 (0x8)
	class UComboBoxString* ComboBoxDay; // 0x518 (0x8)
	class UComboBoxString* ComboBoxYear; // 0x520 (0x8)
	class UCommonButtonLegacy* ButtonAgeEntryContinue; // 0x528 (0x8)
	class UCommonButtonLegacy* ButtonAgeEntryPrivacyPolicy; // 0x530 (0x8)
	class UEditableText* EditableTextGuardianEmailEntry; // 0x538 (0x8)
	class UCommonTextBlock* TextInvalidEmail; // 0x540 (0x8)
	class UCommonButtonLegacy* ButtonGuardianEmailEntryContinue; // 0x548 (0x8)
	class UCommonButtonLegacy* ButtonGuardianEmailEntryPrivacyPolicy; // 0x550 (0x8)
	class UCommonButtonLegacy* ButtonGuardianEmailReEntry; // 0x558 (0x8)
	class UCommonRichTextBlock* RichTextTimerWarningEmailEntry; // 0x560 (0x8)
	class UCommonRichTextBlock* RichTextTimerWarningConsentPending; // 0x568 (0x8)
	class UCommonTextBlock* TextEmailEntryChallengeError; // 0x570 (0x8)
	class UCommonTextBlock* TextAgeEntryChallengeError; // 0x578 (0x8)
	unsigned char padding_580[0x38]; // 0x580 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortAgeGateFlow.HandleGuardianEmailCommitted (Underlying native function: HandleGuardianEmailCommitted 0xa799798)
	void HandleGuardianEmailCommitted(struct FText& InText, struct TEnumAsByte<ETextCommit>& CommitInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortAgeGateFlow.HandleGuardianEmailChanged (Underlying native function: HandleGuardianEmailChanged 0xa7996ec)
	void HandleGuardianEmailChanged(struct FText& InText); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortAgeGateFlow.HandleDateOfBirthYearChanged (Underlying native function: HandleDateOfBirthYearChanged 0xa799370)
	void HandleDateOfBirthYearChanged(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAgeGateFlow.HandleDateOfBirthMonthChanged (Underlying native function: HandleDateOfBirthMonthChanged 0xa7991c4)
	void HandleDateOfBirthMonthChanged(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAgeGateFlow.HandleDateOfBirthDayChanged (Underlying native function: HandleDateOfBirthDayChanged 0xa799018)
	void HandleDateOfBirthDayChanged(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (Final | Native | Private)
};

