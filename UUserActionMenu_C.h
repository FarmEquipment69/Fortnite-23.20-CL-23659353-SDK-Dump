// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C
// Size: 0x4d0
class UUserActionMenu_C : public UFortSocialInteractionMenu
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4a0 (0x8)
	class UWidgetAnimation* ConfirmationOpened; // 0x4a8 (0x8)
	class UWidgetAnimation* Opened; // 0x4b0 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x4b8 (0x8)
	class UBorder* EntryBorder; // 0x4c0 (0x8)
	class UFortMobileImage* ImagePlatform; // 0x4c8 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C.OnToggleConfirmation (Has no native function)
	void OnToggleConfirmation(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C.OnOpened (Has no native function)
	void OnOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu (Has no native function)
	void ExecuteUbergraphUserActionMenu(int& EntryPoint, bool& K2NodeEventbIsVisible, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Final | 0x00008000)
};

