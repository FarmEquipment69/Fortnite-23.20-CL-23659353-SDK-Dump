// WidgetBlueprintGeneratedClass /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C
// Size: 0x2d8
class UItemReceivedAccountWidget_C : public UFortAccountWidgetBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2c8 (0x8)
	class UCommonTextBlock* CommonTextBlockUserMessage; // 0x2d0 (0x8)

	/* Functions */

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged (Has no native function)
	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget (Has no native function)
	void ExecuteUbergraphItemReceivedAccountWidget(int& EntryPoint, struct FFortPublicAccountInfo& K2NodeEventResult, int64_t& CallFuncConvIntToInt64ReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue); // (Final | 0x00008000 | HasDefaults)
};

