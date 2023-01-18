// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C
// Size: 0x440
class UMissedInvitesActionMenu_C : public UFortMissedInvitesActionMenu
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3f0 (0x8)
	class UWidgetAnimation* ConfirmationOpened; // 0x3f8 (0x8)
	class UWidgetAnimation* Opened; // 0x400 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x408 (0x8)
	class UCommonRichTextBlock* CommonRichTextBlock; // 0x410 (0x8)
	class UCommonRichTextBlock* CommonRichTextBlock143; // 0x418 (0x8)
	class UBorder* EntryBorder; // 0x420 (0x8)
	class UImage* Image119; // 0x428 (0x8)
	class UImage* ImagePlatform; // 0x430 (0x8)
	class UCommonRichTextBlock* TextDisplayName; // 0x438 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp (Has no native function)
	struct FEventReply OnKeyUp(struct FGeometry& MyGeometry, struct FKeyEvent& InKeyEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened (Has no native function)
	void OnOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu (Has no native function)
	void ExecuteUbergraphMissedInvitesActionMenu(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Final | 0x00008000)
};

