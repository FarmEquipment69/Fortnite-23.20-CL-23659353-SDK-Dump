// Class /Script/FortniteUI.FortPlayerFeedbackModalSubscreen_EpicQA
// Size: 0x410
class UFortPlayerFeedbackModalSubscreen_EpicQA : public UFortPlayerFeedbackModalSubscreenBase
{
	unsigned char unreflected_3d8[0x10]; // 0x3d8 (0x10) 
	class UComboBoxString* ComboBoxStringBugComponents; // 0x3e8 (0x8)
	class UEditableText* EditableTextUsername; // 0x3f0 (0x8)
	class UEditableText* EditableTextPassword; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonSignIn; // 0x400 (0x8)
	class UCommonButtonBase* ButtonConfirmComponent; // 0x408 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerFeedbackModalSubscreen_EpicQA.OnStateUpdated (Has no native function)
	void OnStateUpdated(enum EPlayerFeedback_EpicQAState& NewState); // (Event | Public | BlueprintEvent)
};

