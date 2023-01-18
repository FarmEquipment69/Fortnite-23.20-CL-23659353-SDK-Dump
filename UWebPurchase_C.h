// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C
// Size: 0x518
class UWebPurchase_C : public UFortWebPurchaseScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4f8 (0x8)
	class UCircularThrobber* Throbber; // 0x500 (0x8)
	struct FDataTableRowHandle BackAction; // 0x508 (0x10)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C.HandleBack (Has no native function)
	void HandleBack(bool& bPassThrough, class UFortMcpContext*& CallFuncGetContextReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C.BindDelegates (Has no native function)
	void BindDelegates(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase (Has no native function)
	void ExecuteUbergraphWebPurchase(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncHasInputActionHandlerReturnValue); // (Final | 0x00008000)
};

