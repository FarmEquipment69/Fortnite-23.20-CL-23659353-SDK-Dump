// Class /Script/FortniteUI.FortReviewYourSettingsModal
// Size: 0x490
class UFortReviewYourSettingsModal : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xa8]; // 0x3a8 (0xa8) 
	class UFortGameSettingRegistry* Registry; // 0x450 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x458 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x460 (0x8)
	class UCommonTextBlock* TextTitle; // 0x468 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x470 (0x8)
	class UFortSettingsListView* ListViewSettings; // 0x478 (0x8)
	class UFortSettingDetailView* DetailsSettings; // 0x480 (0x8)
	class UScrollBox* ScrollBoxDetails; // 0x488 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortReviewYourSettingsModal.OnModalBackout (Has no native function)
	void OnModalBackout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortReviewYourSettingsModal.ExitModal (Underlying native function: ExitModal 0x1d01d9c)
	void ExitModal(); // (Native | Protected | BlueprintCallable)
};

