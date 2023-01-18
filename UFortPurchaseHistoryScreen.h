// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen
// Size: 0x610
class UFortPurchaseHistoryScreen : public UFortActivatablePanel
{
	struct FDataTableRowHandle BackAction; // 0x518 (0x10)
	unsigned char unreflected_528[0x18]; // 0x528 (0x18) 
	struct TWeakObjectPtr<class UClass> RefundConfirmationClass; // 0x540 (0x28)
	struct TWeakObjectPtr<class UClass> DirectPurchaseInfoModalClass; // 0x568 (0x28)
	class UCommonAnimatedSwitcher* SwitcherMainContent; // 0x590 (0x8)
	class UFortPurchaseHistoryListView* ListViewPurchases; // 0x598 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x5a0 (0x8)
	class UCommonButtonBase* ButtonPostApproval; // 0x5a8 (0x8)
	class UCommonTextBlock* TextDesc; // 0x5b0 (0x8)
	class UCommonTextBlock* TextRefundCount; // 0x5b8 (0x8)
	class UCommonTextBlock* TextResultHeader; // 0x5c0 (0x8)
	class UCommonTextBlock* TextResultTitle; // 0x5c8 (0x8)
	class UCommonTextBlock* TextResultDesc; // 0x5d0 (0x8)
	class UFortAnnualRefundTicket* RefundTicketLeft; // 0x5d8 (0x8)
	class UFortAnnualRefundTicket* RefundTicketCenter; // 0x5e0 (0x8)
	class UFortAnnualRefundTicket* RefundTicketRight; // 0x5e8 (0x8)
	class UWidget* WidgetCancelPurchaseInfo; // 0x5f0 (0x8)
	class UWidget* WidgetReturnTicketInfo; // 0x5f8 (0x8)
	class UWidget* WidgetTokenlessRefundInfo; // 0x600 (0x8)
	class UWidget* WidgetNonRefundableInfo; // 0x608 (0x8)

	/* Functions */

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnPopulateView (Has no native function)
	void OnPopulateView(); // (Event | Protected | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnNoPurchasesAvailable (Has no native function)
	void OnNoPurchasesAvailable(); // (Event | Protected | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnEndRefundSubmission (Has no native function)
	void OnEndRefundSubmission(); // (Event | Protected | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.OnBeginRefundSubmission (Has no native function)
	void OnBeginRefundSubmission(); // (Event | Protected | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen.BP_IsShowingPurchases (Has no native function)
	bool BPIsShowingPurchases(); // (Event | Protected | BlueprintEvent)
};

