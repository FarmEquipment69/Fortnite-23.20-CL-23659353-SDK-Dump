// WidgetBlueprintGeneratedClass /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C
// Size: 0x290
class UCurrencyListViewItem_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UCommonRichTextBlock* CurrencyMessage; // 0x270 (0x8)
	struct FText DisplayMessage; // 0x278 (0x18)

	/* Functions */

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.SetQuantityAndType (Has no native function)
	void SetQuantityAndType(int& inInt, struct FText& To, struct FString& CallFuncConvTextToStringReturnValue, struct FText& CallFuncGetTextReturnValue, struct FString& CallFuncConvIntToStringReturnValue, struct FString& CallFuncConvTextToStringReturnValue1, struct FString& CallFuncReplaceReturnValue, struct FString& CallFuncReplaceReturnValue1, struct FText& CallFuncConvStringToTextReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.BP_OnEntryReleased (Has no native function)
	void BPOnEntryReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemExpansionChanged (Has no native function)
	void BPOnItemExpansionChanged(bool& bIsExpanded); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemSelectionChanged (Has no native function)
	void BPOnItemSelectionChanged(bool& bIsSelected); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.OnListItemObjectSet (Has no native function)
	void OnListItemObjectSet(class UObject*& ListItemObject); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.ExecuteUbergraph_CurrencyListViewItem (Has no native function)
	void ExecuteUbergraphCurrencyListViewItem(int& EntryPoint, bool& K2NodeEventbIsExpanded, bool& K2NodeEventbIsSelected, class UObject*& K2NodeEventListItemObject, class UCurrencyListObject_C*& K2NodeDynamicCastAsCurrencyListObject, bool& K2NodeDynamicCastbSuccess, struct FString& CallFuncConvTextToStringReturnValue, struct FString& CallFuncConvTextToStringReturnValue1, struct FString& CallFuncReplaceReturnValue, bool& CallFuncIsEmptyReturnValue, struct FText& CallFuncConvStringToTextReturnValue, struct FString& CallFuncConvTextToStringReturnValue2, bool& CallFuncIsEmptyReturnValue1, struct FString& CallFuncConvTextToStringReturnValue3, struct FString& CallFuncReplaceReturnValue1, struct FText& CallFuncConvStringToTextReturnValue1, struct FString& CallFuncConvTextToStringReturnValue4, struct FString& CallFuncReplaceReturnValue2, struct FText& CallFuncConvStringToTextReturnValue2); // (Final | 0x00008000 | HasDefaults)
};

