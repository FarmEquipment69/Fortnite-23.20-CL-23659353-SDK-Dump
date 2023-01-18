// WidgetBlueprintGeneratedClass /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C
// Size: 0x590
class URejoinWindow_C : public UFortRejoinWindowBase
{
	class UCommonTextBlock* AutorejoinText; // 0x558 (0x8)
	class UHorizontalBox* ButtonBox; // 0x560 (0x8)
	class UCommonTextBlock* Title; // 0x568 (0x8)
	struct FMulticastInlineDelegate OnRequestAbandon; // 0x570 (0x10)
	struct FMulticastInlineDelegate OnRequestRejoinRetry; // 0x580 (0x10)

	/* Functions */

	// Function /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature (Has no native function)
	void OnRequestRejoinRetryDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature (Has no native function)
	void OnRequestAbandonDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

