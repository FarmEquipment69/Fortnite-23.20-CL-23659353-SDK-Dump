// Class /Script/FortniteUI.FortCorrectiveActionDateOfBirthScreen
// Size: 0x3f8
class UFortCorrectiveActionDateOfBirthScreen : public UFortCorrectiveActionScreen
{
	class UFortInputField* InputFieldYear; // 0x3d0 (0x8)
	unsigned char unreflected_3d8[0x10]; // 0x3d8 (0x10) 
	class UFortComboBox* ComboBoxMonth; // 0x3e8 (0x8)
	class UFortComboBox* ComboBoxDay; // 0x3f0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCorrectiveActionDateOfBirthScreen.HandleYearChanged (Underlying native function: HandleYearChanged 0xa799b94)
	void HandleYearChanged(struct FText& Text, struct TEnumAsByte<ETextCommit>& CommitMethod); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortCorrectiveActionDateOfBirthScreen.HandleMonthChanged (Underlying native function: HandleMonthChanged 0xa799884)
	void HandleMonthChanged(struct FString& SelectedItem, struct TEnumAsByte<ESelectInfo>& SelectionType); // (Final | Native | Private)
};

