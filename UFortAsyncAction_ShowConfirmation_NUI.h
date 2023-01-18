// Class /Script/FortniteUI.FortAsyncAction_ShowConfirmation_NUI
// Size: 0x1c0
class UFortAsyncAction_ShowConfirmation_NUI : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate DialogResult; // 0x30 (0x10)
	class UObject* WorldContextObject; // 0x40 (0x8)
	class UFortLocalPlayer* TargetLocalPlayer; // 0x48 (0x8)
	struct FFortDialogDescription_NUI Description; // 0x50 (0x160)
	unsigned char padding_1b0[0x10]; // 0x1b0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowSimpleConfirmationDialog_NUI (Underlying native function: ShowSimpleConfirmationDialog_NUI 0xa47153c)
	static class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialogNUI(class UObject*& InWorldContextObject, struct FSlateBrush& Icon, struct FText& Title, struct FText& message, bool& bShowConfirm, bool& bShowDecline, class UWidget*& AdditionalContent, class UWidget*& LeftAdditionalContent, class ULocalPlayer*& TargetPlayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowSimpleConfirmationDialog_CustomInput (Underlying native function: ShowSimpleConfirmationDialog_CustomInput 0xa4711c4)
	static class UFortAsyncAction_ShowConfirmation_NUI* ShowSimpleConfirmationDialogCustomInput(class UObject*& InWorldContextObject, struct FSlateBrush& Icon, struct FText& Title, struct FText& message, struct FName& ConfirmAction, struct FName& DeclineAction, class UWidget*& AdditionalContent, class UWidget*& LeftAdditionalContent, bool& Cancelable, class ULocalPlayer*& TargetPlayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_ShowConfirmation_NUI.ShowConfirmationDialog_NUI (Underlying native function: ShowConfirmationDialog_NUI 0xa470dac)
	static class UFortAsyncAction_ShowConfirmation_NUI* ShowConfirmationDialogNUI(class UObject*& InWorldContextObject, struct FSlateBrush& Icon, struct FText& Title, struct FText& message, struct TArray<struct FConfirmationDialogAction>& ConfirmButtonInputActions, struct FName& DeclineButtonInputAction, class UWidget*& AdditionalContent, class UWidget*& LeftAdditionalContent, class ULocalPlayer*& TargetPlayer); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

