// Class /Script/CrewUI.BattlePassPurchaseScreen
// Size: 0x500
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{
	unsigned char unreflected_3e8[0xa0]; // 0x3e8 (0xa0) 
	class UClass* PurchaseCompleteModal; // 0x488 (0x8)
	class UCommonButtonBase* ButtonToCrew; // 0x490 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonPurchase; // 0x498 (0x8)
	class UCommonButtonBase* ButtonMoreInfo; // 0x4a0 (0x8)
	class UCommonButtonBase* ButtonGiftBattlePass; // 0x4a8 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonConfirmBase; // 0x4b0 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonConfirmBundle; // 0x4b8 (0x8)
	class UBattlePassSeasonHeading* HeadingPrimary; // 0x4c0 (0x8)
	class UBattlePassSeasonHeading* HeadingSecondary; // 0x4c8 (0x8)
	class UCommonRichTextBlock* RichTextDisclaimer; // 0x4d0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x4d8 (0x8)
	class UCommonAnimatedSwitcher* SwitcherPurchaseState; // 0x4e0 (0x8)
	unsigned char padding_4e8[0x18]; // 0x4e8 (0x18)

	/* Functions */

	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification (Has no native function)
	void OnShowNavButtonNotification(bool& bShowNotification); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable (Has no native function)
	void OnSetScreenInteractable(bool& bInteractable); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText (Has no native function)
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged (Has no native function)
	void OnPurchaseStateChanged(enum EBattlePassPurchaseState& InCurrentState); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed (Has no native function)
	void OnPurchaseConfirmed(); // (Event | Protected | BlueprintEvent)
};

