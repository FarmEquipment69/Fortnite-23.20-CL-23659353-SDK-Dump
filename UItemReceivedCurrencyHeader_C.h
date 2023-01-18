// WidgetBlueprintGeneratedClass /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C
// Size: 0x311
class UItemReceivedCurrencyHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{
	unsigned char unreflected_2b1[0x7]; // 0x2b1 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b8 (0x8)
	class UCommonTextBlock* BattlepassTier; // 0x2c0 (0x8)
	class UCommonTextBlock* BattlepassUpgraded; // 0x2c8 (0x8)
	class UCommonWidgetSwitcherLegacy* CommonWidgetSwitcherIcon; // 0x2d0 (0x8)
	class UCommonWidgetSwitcherLegacy* CommonWidgetSwitcherTitle; // 0x2d8 (0x8)
	class UCurrencyListView_C* CurrencyListView82; // 0x2e0 (0x8)
	class UImage* ImageBattlePassIconGold; // 0x2e8 (0x8)
	class UImage* ImageBattlePassIconSilver; // 0x2f0 (0x8)
	class UItemReceivedAccountWidget_C* ItemReceivedAccountWidget; // 0x2f8 (0x8)
	struct FMulticastInlineDelegate ActivateWidgetFromPresentationScreen; // 0x300 (0x10)
	bool AlreadyActivated; // 0x310 (0x1)

	/* Functions */

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActiveFromPresentation (Has no native function)
	void ActiveFromPresentation(struct FCurrencyDataWithGiftBox& CurrencyDataArray); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ExecuteUbergraph_ItemReceivedCurrencyHeader (Has no native function)
	void ExecuteUbergraphItemReceivedCurrencyHeader(int& EntryPoint, bool& TempboolVariable, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct FCurrencyDataWithGiftBox& K2NodeCustomEventCurrencyDataArray, class UFortMcpContext*& CallFuncGetContextReturnValue, struct FCurrencyData& CallFuncArrayGetItem, class UFortMcpProfileAthena*& CallFuncGetAthenaProfileReturnValue, bool& CallFuncHasPurchasedSeasonBookReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class UImage*& K2NodeSelectDefault); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActivateWidgetFromPresentationScreen__DelegateSignature (Has no native function)
	void ActivateWidgetFromPresentationScreenDelegateSignature(class UFortGiftBoxItem*& GiftBox, struct TArray<struct FCurrencyData>& CurrencyArray); // (Public | Delegate | HasOutParms | BlueprintCallable | BlueprintEvent)
};

