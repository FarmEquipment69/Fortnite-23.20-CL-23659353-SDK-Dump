// Class /Script/CrewUI.CrewPriceChangeAcknowledgeModal
// Size: 0x548
class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonButtonBase* ButtonAccept; // 0x3b0 (0x8)
	class UCommonButtonBase* ButtonCancelSubscription; // 0x3b8 (0x8)
	class UCommonButtonBase* ButtonMoreInfo; // 0x3c0 (0x8)
	class UCommonButtonBase* ButtonTextURL; // 0x3c8 (0x8)
	struct TWeakObjectPtr<class UClass> CancellationInfoModalClass; // 0x3d0 (0x28)
	unsigned char padding_3f8[0x150]; // 0x3f8 (0x150)

	/* Functions */

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle (Has no native function)
	void OnSetPriceChangeAcknowledgeTitle(struct FText& Title); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl (Has no native function)
	void OnSetPriceChangeAcknowledgeMoreInfoUrl(struct FText& MoreInfoUrl); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText (Has no native function)
	void OnSetPriceChangeAcknowledgeMoreInfoText(struct FText& ConfirmButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText (Has no native function)
	void OnSetPriceChangeAcknowledgeConfirmButtonText(struct FText& ConfirmButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText (Has no native function)
	void OnSetPriceChangeAcknowledgeCheckboxText(struct FText& CheckboxText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText (Has no native function)
	void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(struct FText& CancelSubscriptionButtonText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText (Has no native function)
	void OnSetPriceChangeAcknowledgeBodyText(struct FText& BodyText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable (Has no native function)
	void OnSetPriceChangeAcknowledgeBodyTable(struct TArray<struct FCrewTableRow>& PriceChangeByRegionRows); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout (Has no native function)
	void OnModalBackout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal (Underlying native function: ExitModal 0x6a4a708)
	void ExitModal(); // (Final | Native | Protected | BlueprintCallable)
};

