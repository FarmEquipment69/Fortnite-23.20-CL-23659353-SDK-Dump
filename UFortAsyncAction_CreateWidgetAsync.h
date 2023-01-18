// Class /Script/FortniteUI.FortAsyncAction_CreateWidgetAsync
// Size: 0x98
class UFortAsyncAction_CreateWidgetAsync : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnComplete; // 0x30 (0x10)
	unsigned char padding_40[0x58]; // 0x40 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_CreateWidgetAsync.CreateWidgetAsync (Underlying native function: CreateWidgetAsync 0x24dc320)
	static class UFortAsyncAction_CreateWidgetAsync* CreateWidgetAsync(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UClass>& UserWidgetSoftClass, class APlayerController*& OwningPlayer, bool& bSuspendInputUntilComplete); // (Final | Native | Static | Public | BlueprintCallable)
};

