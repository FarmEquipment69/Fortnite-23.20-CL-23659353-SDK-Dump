// Class /Script/FortniteUI.FortAsyncAction_QueueModalWidget
// Size: 0x80
class UFortAsyncAction_QueueModalWidget : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnModalWidgetQueued; // 0x30 (0x10)
	unsigned char padding_40[0x40]; // 0x40 (0x40)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_QueueModalWidget.QueueModalWidgetSoftClassAsyncForPlayer (Underlying native function: QueueModalWidgetSoftClassAsyncForPlayer 0x616a150)
	static class UFortAsyncAction_QueueModalWidget* QueueModalWidgetSoftClassAsyncForPlayer(class APlayerController*& PlayerController, struct TWeakObjectPtr<class UClass>& SoftWidgetClass); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_QueueModalWidget.QueueModalWidgetSoftClassAsyncForLocalPlayer (Underlying native function: QueueModalWidgetSoftClassAsyncForLocalPlayer 0x616a010)
	static class UFortAsyncAction_QueueModalWidget* QueueModalWidgetSoftClassAsyncForLocalPlayer(class ULocalPlayer*& LocalPlayer, struct TWeakObjectPtr<class UClass>& SoftWidgetClass); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_QueueModalWidget.QueueModalWidgetSoftClassAsync (Underlying native function: QueueModalWidgetSoftClassAsync 0x6169ed0)
	static class UFortAsyncAction_QueueModalWidget* QueueModalWidgetSoftClassAsync(class UUserWidget*& ContextWidget, struct TWeakObjectPtr<class UClass>& SoftWidgetClass); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_QueueModalWidget.QueueModalWidgetClassAsyncForPlayer (Underlying native function: QueueModalWidgetClassAsyncForPlayer 0x6169de0)
	static class UFortAsyncAction_QueueModalWidget* QueueModalWidgetClassAsyncForPlayer(class APlayerController*& PlayerController, class UClass*& WidgetClass); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_QueueModalWidget.QueueModalWidgetClassAsyncForLocalPlayer (Underlying native function: QueueModalWidgetClassAsyncForLocalPlayer 0x6169cf0)
	static class UFortAsyncAction_QueueModalWidget* QueueModalWidgetClassAsyncForLocalPlayer(class ULocalPlayer*& LocalPlayer, class UClass*& WidgetClass); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_QueueModalWidget.QueueModalWidgetClassAsync (Underlying native function: QueueModalWidgetClassAsync 0x6169c00)
	static class UFortAsyncAction_QueueModalWidget* QueueModalWidgetClassAsync(class UUserWidget*& ContextWidget, class UClass*& WidgetClass); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortAsyncAction_QueueModalWidget.OnModalWidgetQueued__DelegateSignature (Has no native function)
	void OnModalWidgetQueuedDelegateSignature(class UCommonActivatableWidget*& ActivatableWidget); // (MulticastDelegate | Public | Delegate)
};

