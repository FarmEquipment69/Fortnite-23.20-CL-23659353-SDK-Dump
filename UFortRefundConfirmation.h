// Class /Script/AnnualRefundTokenUI.FortRefundConfirmation
// Size: 0x570
class UFortRefundConfirmation : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x10]; // 0x518 (0x10) 
	class UCommonTextBlock* TextRefundsRemaining; // 0x528 (0x8)
	class UCommonTextBlock* TextRefundCount; // 0x530 (0x8)
	class UCommonTextBlock* TextAreYouSure; // 0x538 (0x8)
	class UCommonButtonBase* ButtonYes; // 0x540 (0x8)
	class UCommonButtonBase* ButtonNo; // 0x548 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x550 (0x8)
	class UFortAnnualRefundTicket* RefundTicketLeft; // 0x558 (0x8)
	class UFortAnnualRefundTicket* RefundTicketCenter; // 0x560 (0x8)
	class UFortAnnualRefundTicket* RefundTicketRight; // 0x568 (0x8)

	/* Functions */

	// Function /Script/AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateRefundType (Has no native function)
	void BPUpdateRefundType(enum EFortPurchaseHistoryRefundType& RefundType); // (Event | Protected | BlueprintEvent)

	// Function /Script/AnnualRefundTokenUI.FortRefundConfirmation.BP_UpdateItemsList (Has no native function)
	void BPUpdateItemsList(struct TArray<class UFortItemDefinition*>& SelectedItemDefs, int& TotalMtxPaid); // (Event | Protected | HasOutParms | BlueprintEvent)
};

