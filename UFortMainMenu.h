// Class /Script/FortniteUI.FortMainMenu
// Size: 0x308
class UFortMainMenu : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnMainMenuRequestCloseDynamic; // 0x290 (0x10)
	struct FText DefaultHelpText; // 0x2a0 (0x18)
	unsigned char unreflected_2b8[0x18]; // 0x2b8 (0x18) 
	class UCommonTextBlock* TextCountDownTimer; // 0x2d0 (0x8)
	class UCommonButtonLegacy* ButtonLeaveExperience; // 0x2d8 (0x8)
	class UCommonUserWidget* LeaveButton; // 0x2e0 (0x8)
	class UCommonTextBlock* ContextualHelpText; // 0x2e8 (0x8)
	unsigned char padding_2f0[0x18]; // 0x2f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortMainMenu.ShouldShowLeaveExperienceButton (Underlying native function: ShouldShowLeaveExperienceButton 0xa7c42a4)
	bool ShouldShowLeaveExperienceButton(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortMainMenu.RequestCloseMainMenu (Underlying native function: RequestCloseMainMenu 0xa7c3984)
	void RequestCloseMainMenu(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortMainMenu.OnOpenSettings (Has no native function)
	void OnOpenSettings(struct FName& TabNameID, struct FString& SettingToSelect); // (Event | Protected | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.FortMainMenu.OnMainMenuRequestCloseDynamic__DelegateSignature (Has no native function)
	void OnMainMenuRequestCloseDynamicDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortMainMenu.OnGetMainMenuFocusWidget (Has no native function)
	class UWidget* OnGetMainMenuFocusWidget(); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/FortniteUI.FortMainMenu.NeedsCenterWidget (Underlying native function: NeedsCenterWidget 0xa7c38f0)
	bool NeedsCenterWidget(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

