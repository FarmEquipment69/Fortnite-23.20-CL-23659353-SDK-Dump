// WidgetBlueprintGeneratedClass /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C
// Size: 0x2a0
class USimpleMTXDisplay_C : public UFortSimpleMTXDisplay
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UCommonRichTextBlock* AvailableAmountText; // 0x298 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX (Has no native function)
	void OnUpdateAvailableMTX(int& AvailableBalance); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay (Has no native function)
	void ExecuteUbergraphSimpleMTXDisplay(int& EntryPoint, int& K2NodeEventAvailableBalance, int64_t& CallFuncConvIntToInt64ReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue); // (Final | 0x00008000 | HasDefaults)
};

