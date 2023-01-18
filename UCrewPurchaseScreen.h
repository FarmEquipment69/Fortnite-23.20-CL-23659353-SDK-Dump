// Class /Script/CrewUI.CrewPurchaseScreen
// Size: 0x580
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{
	unsigned char unreflected_3e8[0x68]; // 0x3e8 (0x68) 
	bool bManagementModeEnabled; // 0x450 (0x1)
	unsigned char unreflected_451[0x7]; // 0x451 (0x7) 
	class UWidget* ContentPurchasedFocusWidget; // 0x458 (0x8)
	class UWidget* FocusWidget; // 0x460 (0x8)
	class UCommonButtonGroupBase* ButtonGroupBenefitsTiles; // 0x468 (0x8)
	struct TWeakObjectPtr<class UClass> CancellationInfoModalClass; // 0x470 (0x28)
	struct TWeakObjectPtr<class UClass> LegalInfoModalClass; // 0x498 (0x28)
	struct TWeakObjectPtr<class UClass> ResolveIssueModalClass; // 0x4c0 (0x28)
	struct TWeakObjectPtr<class UClass> RejoinModalClass; // 0x4e8 (0x28)
	class UCommonButtonBase* ButtonToBattlePass; // 0x510 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonPurchase; // 0x518 (0x8)
	class UBattlePassCrewPurchaseButton* ButtonRejoin; // 0x520 (0x8)
	class UCommonButtonBase* ButtonResolvePayment; // 0x528 (0x8)
	class UCommonButtonBase* ButtonWatchTrailer; // 0x530 (0x8)
	class UCommonButtonBase* ButtonTerms; // 0x538 (0x8)
	class UCommonButtonBase* ButtonCancellationInfo; // 0x540 (0x8)
	class UDynamicEntryBox* EntryBoxRecurringRewards; // 0x548 (0x8)
	class UDynamicEntryBox* EntryBoxLimitedTimeRewards; // 0x550 (0x8)
	class UCrewTileDetails* DetailsCurrentCrewTile; // 0x558 (0x8)
	class UCommonTextBlock* TextLimitedTime; // 0x560 (0x8)
	class UOverlay* OverlayUserInformation; // 0x568 (0x8)
	class UCommonTextBlock* TextUserInformation; // 0x570 (0x8)
	class UCommonTextBlock* TextCrewDisclaimer; // 0x578 (0x8)

	/* Functions */

	// Function /Script/CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated (Has no native function)
	void OnUserInformationTextsUpdated(struct FText& UserInformationText1, struct FText& UserInformationText2, enum EMcpSubscriptionState& SubscriptionState); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility (Has no native function)
	void OnUpdateVBuckRefundVisibility(bool& bVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState (Has no native function)
	void OnUpdatePurchaseButtonState(enum ECrewPurchaseButtonState& ButtonState); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification (Has no native function)
	void OnShowNavButtonNotification(bool& bShowNotification); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText (Has no native function)
	void OnSetNavButtonNotificationText(struct FText& NotificationText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated (Has no native function)
	void OnContainerTabVisibilityUpdated(bool& bTabsVisible, float& SpacingAdjustmentForTabs); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.EndProgress (Has no native function)
	void EndProgress(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.BlockScreenContent (Has no native function)
	void BlockScreenContent(bool& bBlockScreen, struct FText& ContentBlockedText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPurchaseScreen.BeginProgress (Has no native function)
	void BeginProgress(struct FText& ProgressLabel); // (Event | Protected | HasOutParms | BlueprintEvent)
};

