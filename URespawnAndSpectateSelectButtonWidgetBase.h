// Class /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase
// Size: 0x328
class URespawnAndSpectateSelectButtonWidgetBase : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnButtonSelected; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x2a0 (0x10)
	class USizeBox* TargetImageSizeBox; // 0x2b0 (0x8)
	class USizeBox* DefaultButtonImageSizeBox; // 0x2b8 (0x8)
	class UCommonButtonLegacy* TargetButton; // 0x2c0 (0x8)
	class UFortLazyImage* TargetImage; // 0x2c8 (0x8)
	class UImage* DefaultButtonImage; // 0x2d0 (0x8)
	class UCommonTextBlock* TargetNameTextWidget; // 0x2d8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherTargetState; // 0x2e0 (0x8)
	int ButtonIndex; // 0x2e8 (0x4)
	bool bIsSelectable; // 0x2ec (0x1)
	unsigned char padding_2ed[0x3b]; // 0x2ed (0x3b)

	/* Functions */

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.SetSelectionVisualsVisibility (Has no native function)
	void SetSelectionVisualsVisibility(bool& bNewVisibility); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.SetNavigationFocusOnButton (Has no native function)
	void SetNavigationFocusOnButton(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.SetHoverHighlightVisibility (Has no native function)
	void SetHoverHighlightVisibility(bool& bNewVisibility); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.SetButtonVisibility_BP (Has no native function)
	void SetButtonVisibilityBP(bool& bNewVisbility); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.OnSelectionMade (Underlying native function: OnSelectionMade 0xa57fc74)
	void OnSelectionMade(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.OnSelectionHovered (Underlying native function: OnSelectionHovered 0xa57f984)
	void OnSelectionHovered(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.OnRespawnAndSpectateSelectButtonSelected__DelegateSignature (Has no native function)
	void OnRespawnAndSpectateSelectButtonSelectedDelegateSignature(class URespawnAndSpectateSelectButtonWidgetBase*& Widget); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.OnRespawnAndSpectateSelectButtonHovered__DelegateSignature (Has no native function)
	void OnRespawnAndSpectateSelectButtonHoveredDelegateSignature(class URespawnAndSpectateSelectButtonWidgetBase*& Widget); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.OnIsEnabledUpdated_BP (Has no native function)
	void OnIsEnabledUpdatedBP(bool& bNewIsEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.RespawnAndSpectateSelectButtonWidgetBase.IsSelectableUpdated_BP (Has no native function)
	void IsSelectableUpdatedBP(); // (Event | Protected | BlueprintEvent)
};

