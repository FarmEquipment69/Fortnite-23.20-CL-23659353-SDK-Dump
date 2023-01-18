// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C
// Size: 0x4d8
class UJoinablePartyActionMenu_C : public UFortJoinablePartyActionMenu
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4b0 (0x8)
	class UWidgetAnimation* ConfirmationOpened; // 0x4b8 (0x8)
	class UWidgetAnimation* Opened; // 0x4c0 (0x8)
	class UBorder* BorderOnlineStatusIndicator; // 0x4c8 (0x8)
	class UBorder* EntryBorder; // 0x4d0 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation (Has no native function)
	void OnToggleConfirmation(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened (Has no native function)
	void OnOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu (Has no native function)
	void ExecuteUbergraphJoinablePartyActionMenu(int& EntryPoint, bool& K2NodeEventbIsVisible, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Final | 0x00008000)
};

