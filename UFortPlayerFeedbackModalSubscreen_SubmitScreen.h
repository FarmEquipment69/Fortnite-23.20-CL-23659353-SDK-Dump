// Class /Script/FortniteUI.FortPlayerFeedbackModalSubscreen_SubmitScreen
// Size: 0x418
class UFortPlayerFeedbackModalSubscreen_SubmitScreen : public UFortPlayerFeedbackModalSubscreenBase
{
	class UWidget* SlotCommunityRulesURL; // 0x3d8 (0x8)
	class UCommonRichTextBlock* TextDescription; // 0x3e0 (0x8)
	class UCommonTextBlock* TextSummary; // 0x3e8 (0x8)
	class UCommonTextBlock* TextFailReason; // 0x3f0 (0x8)
	class UCommonTextBlock* TextReportNumber; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonBlockUser; // 0x400 (0x8)
	class UCommonButtonBase* ButtonCommunityRules; // 0x408 (0x8)
	class UCommonButtonBase* ButtonSubmit; // 0x410 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerFeedbackModalSubscreen_SubmitScreen.OnUpdateSubmitState (Has no native function)
	void OnUpdateSubmitState(enum EPlayerFeedbackSubmitState& NewState); // (Event | Public | BlueprintEvent)
};

