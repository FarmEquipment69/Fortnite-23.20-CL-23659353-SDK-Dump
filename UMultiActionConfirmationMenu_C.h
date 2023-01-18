// WidgetBlueprintGeneratedClass /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C
// Size: 0x420
class UMultiActionConfirmationMenu_C : public UFortMultiFriendActionMenu
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x400 (0x8)
	class UWidgetAnimation* Opened; // 0x408 (0x8)
	class UHorizontalBox* ConfirmationButtons; // 0x410 (0x8)
	class UCommonRichTextBlock* TextActionText; // 0x418 (0x8)

	/* Functions */

	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.UpdateText (Has no native function)
	void UpdateText(struct FText& CallFuncGetTextText); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.GetText (Has no native function)
	void GetText(enum EMultiFriendAction& InAction, struct FText& Text, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnOpened (Has no native function)
	void OnOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnActionUpdated (Has no native function)
	void OnActionUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.ExecuteUbergraph_MultiActionConfirmationMenu (Has no native function)
	void ExecuteUbergraphMultiActionConfirmationMenu(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Final | 0x00008000)
};

