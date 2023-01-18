// Class /Script/CommonUILegacy.CommonWidgetStackLegacy
// Size: 0x1a8
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{
	struct FMulticastInlineDelegate OnActiveWidgetChangedLegacyEvent; // 0x198 (0x10)

	/* Functions */

	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PushWidget (Underlying native function: PushWidget 0x71825cc)
	void PushWidget(class UWidget*& InWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PopWidget (Underlying native function: PopWidget 0x7182494)
	class UWidget* PopWidget(); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature (Has no native function)
	void OnActiveWidgetChangedLegacyDelegateSignature(class UWidget*& InActiveWidget, int& InActiveWidgetIndex); // (MulticastDelegate | Public | Delegate)

	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget (Underlying native function: DeactivateWidget 0x71815e8)
	void DeactivateWidget(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget (Underlying native function: ActivateWidget 0x7180dc8)
	void ActivateWidget(); // (Final | Native | Protected | BlueprintCallable)
};

