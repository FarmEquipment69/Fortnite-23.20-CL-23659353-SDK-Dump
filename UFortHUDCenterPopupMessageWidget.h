// Class /Script/FortniteUI.FortHUDCenterPopupMessageWidget
// Size: 0x308
class UFortHUDCenterPopupMessageWidget : public UFortHUDElementWidget
{
	struct TWeakObjectPtr<class UClass> CenterPopupModalWidgetClass; // 0x2d0 (0x28)
	unsigned char unreflected_2f8[0x8]; // 0x2f8 (0x8) 
	class UCommonActivatablePanelLegacy* CenterPopupModalWidget; // 0x300 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDCenterPopupMessageWidget.UpdateState (Underlying native function: UpdateState 0xa6dc8d8)
	void UpdateState(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortHUDCenterPopupMessageWidget.OnModalDisplayed (Has no native function)
	void OnModalDisplayed(enum ECenterPopupMessageStateEnum& NewState, class UCommonActivatablePanelLegacy*& ModalPopup); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDCenterPopupMessageWidget.GetCenterPopupMessageState (Underlying native function: GetCenterPopupMessageState 0x9d7b048)
	enum ECenterPopupMessageStateEnum GetCenterPopupMessageState(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

