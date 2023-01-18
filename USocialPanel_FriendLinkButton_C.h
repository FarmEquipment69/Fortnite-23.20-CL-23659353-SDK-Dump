// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
// Size: 0x1488
class USocialPanel_FriendLinkButton_C : public UFortSocialPanelView_FriendLinkButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1440 (0x8)
	class UWidgetAnimation* OnCopied; // 0x1448 (0x8)
	class UWidgetAnimation* OnHovered; // 0x1450 (0x8)
	class UMenuAnchor* MenuAnchorActions; // 0x1458 (0x8)
	class UFortMobileImage* SharingIcon; // 0x1460 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherCopyState; // 0x1468 (0x8)
	class UCommonTextBlock* TextCopyConfirmed; // 0x1470 (0x8)
	class UCommonTextBlock* TextFriendLinkInstructions; // 0x1478 (0x8)
	class UCommonTextBlock* TextLinkPrompt; // 0x1480 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard (Has no native function)
	void OnCopiedToClipboard(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet (Has no native function)
	void OnShareButtonTypeSet(enum EFriendLinkShareButtonType& Type); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton (Has no native function)
	void ExecuteUbergraphSocialPanelFriendLinkButton(int& EntryPoint, enum EFriendLinkShareButtonType& TempbyteVariable, class UMaterialInterface*& TempobjectVariable, class UMaterialInterface*& TempobjectVariable1, class UMaterialInterface*& TempobjectVariable2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, enum EFriendLinkShareButtonType& K2NodeEventType, class UMaterialInterface*& K2NodeSelectDefault); // (Final | 0x00008000)
};

