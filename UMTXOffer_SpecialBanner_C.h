// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C
// Size: 0x2d0
class UMTXOffer_SpecialBanner_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UCommonBorder* BorderSaleInfo; // 0x270 (0x8)
	class UHorizontalBox* HBBattlePassStarsSupplemental; // 0x278 (0x8)
	class UImage* ImageBattleStarSupplemental; // 0x280 (0x8)
	class UCommonTextBlock* TBattleStarInfoSupplemental; // 0x288 (0x8)
	class UCommonTextBlock* TSaleInfo; // 0x290 (0x8)
	class UWidgetSwitcher* WidgetSwitcherMain; // 0x298 (0x8)
	bool bShowBanner; // 0x2a0 (0x1)
	bool bHasBattlePassStars; // 0x2a1 (0x1)
	unsigned char unreflected_2a2[0x6]; // 0x2a2 (0x6) 
	struct FText SalesInfoText; // 0x2a8 (0x18)
	int NumOfBattlePassStars; // 0x2c0 (0x4)
	unsigned char unreflected_2c4[0x4]; // 0x2c4 (0x4) 
	class UCatalogMessaging* CatalogMessaging; // 0x2c8 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.SetupSpecialOfferBanner (Has no native function)
	void SetupSpecialOfferBanner(bool& bHasSale, struct FText& SaleText, struct FString& BannerOverrideTag, bool& bHasBattlePassStars, int& iNumOfBattlePassStars); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.ExecuteUbergraph_MTXOffer_SpecialBanner (Has no native function)
	void ExecuteUbergraphMTXOfferSpecialBanner(int& EntryPoint, enum ESlateVisibility& TempbyteVariable, bool& CallFuncTextIsEmptyReturnValue, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, struct FText& TemptextVariable, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable2, double& TemprealVariable, double& TemprealVariable1, bool& TempboolVariable3, bool& CallFuncEqualEqualBoolBoolReturnValue, bool& CallFuncEqualEqualBoolBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncTextIsEmptyReturnValue1, enum ESlateVisibility& K2NodeSelectDefault, bool& CallFuncGreaterIntIntReturnValue, int64_t& CallFuncConvIntToInt64ReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, bool& TempboolVariable4, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue, enum ESlateVisibility& K2NodeSelectDefault1, struct FText& K2NodeSelectDefault2, bool& K2NodeCustomEventbHasSale, struct FText& K2NodeCustomEventSaleText, struct FString& K2NodeCustomEventBannerOverrideTag, bool& K2NodeCustomEventbHasBattlePassStars, int& K2NodeCustomEventiNumOfBattlePassStars, struct FText& TemptextVariable1, class UVerticalBoxSlot*& CallFuncSlotAsVerticalBoxSlotReturnValue, double& K2NodeSelectDefault3, struct FMargin& K2NodeMakeStructMargin, struct FText& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, bool& TempboolVariable5, struct FText& K2NodeSelectDefault4, struct FText& K2NodeSelectDefault5, struct FText& CallFuncTextToUpperReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanANDReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue3, float& K2NodeMakeStructTopImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

