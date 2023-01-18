// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C
// Size: 0x548
class UPurchaseUnavailable_C : public UFortPurchaseUnavailableModal
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	class UWidgetAnimation* Intro; // 0x530 (0x8)
	class UCommonRichTextBlock* RichTextDetails; // 0x538 (0x8)
	class UCommonRichTextBlock* RichTextHeaderText; // 0x540 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle (Has no native function)
	void OnUpdateTextStyle(struct FText& OfferDisplayName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable (Has no native function)
	void ExecuteUbergraphPurchaseUnavailable(int& EntryPoint, struct FText& K2NodeEventOfferDisplayName, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue); // (Final | 0x00008000 | HasDefaults)
};

