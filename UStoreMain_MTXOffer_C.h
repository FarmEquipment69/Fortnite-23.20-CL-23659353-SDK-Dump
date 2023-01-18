// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C
// Size: 0x15a0
class UStoreMain_MTXOffer_C : public UFortRealMoneyOffer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1470 (0x8)
	class UWidgetAnimation* HoverLinear; // 0x1478 (0x8)
	class UWidgetAnimation* UnhoverNew; // 0x1480 (0x8)
	class UWidgetAnimation* HoverNew; // 0x1488 (0x8)
	class UWidgetAnimation* Intro; // 0x1490 (0x8)
	class UWidgetAnimation* OnHover; // 0x1498 (0x8)
	class UMTXOffer_SpecialBanner_C* AthenaDirectAcquisitionOfferSpecialBanner; // 0x14a0 (0x8)
	class UImage* BaseColor; // 0x14a8 (0x8)
	class UBorder* BonusTag; // 0x14b0 (0x8)
	class UCommonTextBlock* BonusText; // 0x14b8 (0x8)
	class UBorder* BorderFooter; // 0x14c0 (0x8)
	class UBorder* BorderAll; // 0x14c8 (0x8)
	class UCommonTextBlock* BundleTotalQuantity; // 0x14d0 (0x8)
	class UCommonTextBlock* BundleVBucksText; // 0x14d8 (0x8)
	class UCommonTextBlock* CurrencyTotalQuantity; // 0x14e0 (0x8)
	class UHorizontalBox* HBoxPrice; // 0x14e8 (0x8)
	class UImage* HoverBorder; // 0x14f0 (0x8)
	class UImage* KeyArt; // 0x14f8 (0x8)
	class UImage* OverlayGradient; // 0x1500 (0x8)
	class UOverlay* OverlaySalePrice; // 0x1508 (0x8)
	class UImage* PlayStationStoreLogo; // 0x1510 (0x8)
	class UCommonTextBlock* Plus; // 0x1518 (0x8)
	class UVerticalBox* RMTBundle; // 0x1520 (0x8)
	class UVerticalBox* RMTCurrency; // 0x1528 (0x8)
	class UWidgetSwitcher* RMTTypeSwitcher; // 0x1530 (0x8)
	class UHorizontalBox* RMTVBucksHB; // 0x1538 (0x8)
	class UScaleBox* ScaleBoxKeyArt; // 0x1540 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherPrice; // 0x1548 (0x8)
	class UCommonTextBlock* TextOfferDisplayPrice; // 0x1550 (0x8)
	class UCommonTextBlock* TextOfferName; // 0x1558 (0x8)
	class UCommonTextBlock* TextOfferPurchaseUnvailable; // 0x1560 (0x8)
	class UCommonTextBlock* TextOriginalPrice; // 0x1568 (0x8)
	class USizeBox* TileSize; // 0x1570 (0x8)
	class UCommonTextBlock* VBucksText; // 0x1578 (0x8)
	struct FMulticastInlineDelegate AboutToShowDetails; // 0x1580 (0x10)
	bool bCanSetPrice; // 0x1590 (0x1)
	unsigned char unreflected_1591[0x7]; // 0x1591 (0x7) 
	class UCatalogMessaging* CatalogMessaging; // 0x1598 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText (Has no native function)
	void GetBonusText(class UFortStoreFrontOfferInfo*& OfferInfo, struct FText& BonusText, int& CallFuncGetBonusQuantityReturnValue, int& CallFuncGetBaseQuantityReturnValue, float& CallFuncConvIntToFloatReturnValue, float& CallFuncConvIntToFloatReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, int& CallFuncFTruncReturnValue, int64_t& CallFuncConvIntToInt64ReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue, double& CallFuncDivideDoubleDoubleAImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor (Has no native function)
	void SetTextOutlineColor(class UTextBlock*& Text, struct FFortMtxGradient& Gradient, class UMaterialInstanceDynamic*& CallFuncGetDynamicOutlineMaterialReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize (Has no native function)
	void SetTileSize(enum EFortMtxOfferDisplaySize& DisplaySize, bool& K2NodeSwitchEnumCmpSuccess, struct FSlateFontInfo& K2NodeMakeStructSlateFontInfo, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset (Has no native function)
	void TriggerReset(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset (Has no native function)
	void InitialReset(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro (Has no native function)
	void TriggerIntro(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer (Has no native function)
	void InitOffer(class UFortMtxOfferData*& DisplayAsset, struct FFortMtxGradient& Gradient, struct FSlateBrush& TileImage, int& TotalQuantity, int& BonusQuantity, class UFortStoreFrontOfferInfo*& OfferInfo, struct FText& BonusMTX, struct FText& BaseMtx, class UMaterial*& OfferMaterial, enum ESlateVisibility& TempbyteVariable, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& TempbyteVariable4, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, struct FString& CallFuncGetBannerOverrideTagReturnValue, struct FText& CallFuncGetSalePriceFromLastAppStoreSalePrice, bool& CallFuncGetSalePriceFromLastAppStoreReturnValue, struct FText& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& TempbyteVariable5, struct FName& CallFuncGetStorefrontNameReturnValue, bool& CallFuncNotEqualNameNameReturnValue, bool& CallFuncIsPurchasingAvailableReturnValue, struct FSlateBrush& K2NodeMakeStructSlateBrush, class UTexture2D*& CallFuncGetBrushResourceAsTexture2DReturnValue, struct FText& CallFuncGetNormalPriceReturnValue, struct FText& CallFuncConvIntToTextReturnValue, bool& CallFuncGreaterIntIntReturnValue, struct FText& CallFuncConvIntToTextReturnValue1, enum ESlateVisibility& K2NodeSelectDefault1, struct FText& CallFuncGetNameReturnValue, bool& CallFuncGreaterIntIntReturnValue1, bool& CallFuncBooleanANDReturnValue, int& CallFuncGetBonusQuantityReturnValue, bool& CallFuncBooleanORReturnValue, struct FText& CallFuncGetBonusTextBonusText, enum EFortMtxStoreOfferType& CallFuncGetFortStoreOfferTypeReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class UFortMtxOfferData*& CallFuncGetOfferDisplayAssetReturnValue, bool& TempboolVariable2, enum ESlateVisibility& K2NodeSelectDefault2, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue1, enum EFortMtxOfferDisplaySize& CallFuncGetOfferDisplaySizeReturnValue, int& CallFuncGetTotalQuantityReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue2, bool& TempboolVariable3, struct FString& CallFuncGetMetaValueReturnValue, struct FText& CallFuncMapFindValue1, bool& CallFuncMapFindReturnValue1, class UWidget*& K2NodeSelectDefault3, struct FString& CallFuncGetBannerOverrideTagReturnValue1, bool& TempboolVariable4, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, struct FText& K2NodeSelectDefault4, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet (Has no native function)
	void OnOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice (Has no native function)
	void OnUpdateStorePrice(struct FText& InStorePrice); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet (Has no native function)
	void OnStoreSelectionOfferSet(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded (Has no native function)
	void OnOfferTileBrushLoaded(struct FSlateBrush& OfferBrush); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer (Has no native function)
	void ExecuteUbergraphStoreMainMTXOffer(int& EntryPoint, bool& K2NodeEventIsDesignTime, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, enum EFortMtxOfferDisplaySize& CallFuncGetOfferDisplaySizeReturnValue, struct FText& K2NodeEventInStorePrice, struct FSlateBrush& K2NodeEventOfferBrush, class UAudioComponent*& CallFuncSpawnSound2DReturnValue); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature (Has no native function)
	void AboutToShowDetailsDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

