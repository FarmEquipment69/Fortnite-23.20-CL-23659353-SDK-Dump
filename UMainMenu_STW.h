// Class /Script/SaveTheWorldUI.MainMenu_STW
// Size: 0x4c8
class UMainMenu_STW : public UCommonActivatableWidget
{
	struct FText DefaultHelpText; // 0x3a8 (0x18)
	class UCommonTextBlock* TextCountDownTimer; // 0x3c0 (0x8)
	class UCommonButtonBase* ButtonLeaveExperience; // 0x3c8 (0x8)
	class UCommonUserWidget* ButtonLeave; // 0x3d0 (0x8)
	class UCommonTextBlock* ContextualHelpText; // 0x3d8 (0x8)
	class UCommonButtonBase* ButtonBackBoard; // 0x3e0 (0x8)
	class UBackgroundBlur* BackgroundBlur; // 0x3e8 (0x8)
	class UBorder* BackgroundDarkener; // 0x3f0 (0x8)
	class UCommonButtonBase* ButtonReportPlayer; // 0x3f8 (0x8)
	class UCommonButtonBase* ButtonLogout; // 0x400 (0x8)
	class UCommonButtonBase* ButtonSupport; // 0x408 (0x8)
	class UCommonButtonBase* ButtonExit; // 0x410 (0x8)
	class UCommonButtonBase* ButtonSettings; // 0x418 (0x8)
	struct FDataTableRowHandle CloseMenuAction; // 0x420 (0x10)
	struct FDataTableRowHandle SwitchProfileAction; // 0x430 (0x10)
	class UClass* SettingsScreenClass; // 0x440 (0x8)
	struct FText LogoutTitle; // 0x448 (0x18)
	struct FText LogoutDescription; // 0x460 (0x18)
	struct FText ExitTitle; // 0x478 (0x18)
	struct FText ExitDescription; // 0x490 (0x18)
	unsigned char padding_4a8[0x20]; // 0x4a8 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent (Underlying native function: TryShowPrimaryContent 0x759b54c)
	void TryShowPrimaryContent(struct TWeakObjectPtr<class UClass>& ContentWidgetClass); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowModal (Underlying native function: TryShowModal 0x759b420)
	void TryShowModal(struct TWeakObjectPtr<class UClass>& ModalWidgetClass); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton (Underlying native function: ShouldShowLeaveExperienceButton 0x759b100)
	bool ShouldShowLeaveExperienceButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop (Underlying native function: IsActiveTabMainShop 0x7598d98)
	bool IsActiveTabMainShop(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

