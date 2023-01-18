// Class /Script/FortniteUI.FortAsyncAction_PushPrimaryContent
// Size: 0x78
class UFortAsyncAction_PushPrimaryContent : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnPrimaryContentPushed; // 0x30 (0x10)
	unsigned char padding_40[0x38]; // 0x40 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_PushPrimaryContent.PushPrimaryContentSoftClassAsyncForPlayer (Underlying native function: PushPrimaryContentSoftClassAsyncForPlayer 0xa470a84)
	static class UFortAsyncAction_PushPrimaryContent* PushPrimaryContentSoftClassAsyncForPlayer(class APlayerController*& ContextPC, struct TWeakObjectPtr<class UClass>& SoftWidgetClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_PushPrimaryContent.PushPrimaryContentSoftClassAsync (Underlying native function: PushPrimaryContentSoftClassAsync 0xa470928)
	static class UFortAsyncAction_PushPrimaryContent* PushPrimaryContentSoftClassAsync(class UUserWidget*& ContextWidget, struct TWeakObjectPtr<class UClass>& SoftWidgetClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_PushPrimaryContent.PushPrimaryContentClassAsyncForPlayer (Underlying native function: PushPrimaryContentClassAsyncForPlayer 0xa470864)
	static class UFortAsyncAction_PushPrimaryContent* PushPrimaryContentClassAsyncForPlayer(class APlayerController*& ContextPC, class UClass*& WidgetClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAsyncAction_PushPrimaryContent.PushPrimaryContentClassAsync (Underlying native function: PushPrimaryContentClassAsync 0xa4707a0)
	static class UFortAsyncAction_PushPrimaryContent* PushPrimaryContentClassAsync(class UUserWidget*& ContextWidget, class UClass*& WidgetClass); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortAsyncAction_PushPrimaryContent.OnPrimaryContentPushed__DelegateSignature (Has no native function)
	void OnPrimaryContentPushedDelegateSignature(class UCommonActivatableWidget*& ActivatableWidget); // (MulticastDelegate | Public | Delegate)
};

