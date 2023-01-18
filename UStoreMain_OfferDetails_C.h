// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C
// Size: 0x9b1
class UStoreMain_OfferDetails_C : public UFortRealMoneyOfferDetails
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x888 (0x8)
	class UImage* BaseColor; // 0x890 (0x8)
	class UImage* BaseColorDetails; // 0x898 (0x8)
	class UHorizontalBox* BonusMTXArea; // 0x8a0 (0x8)
	class UCommonBorder* BorderDisclaimer; // 0x8a8 (0x8)
	class UCommonTextBlock* CommonTextBaseQuantity; // 0x8b0 (0x8)
	class UCommonTextBlock* CommonTextBonusQuantity; // 0x8b8 (0x8)
	class UImage* Highlight; // 0x8c0 (0x8)
	class UFortLazyImage* ImageCurrencyIcon; // 0x8c8 (0x8)
	class UCommonLazyImage* KeyArt; // 0x8d0 (0x8)
	class USizeBox* MTXArea; // 0x8d8 (0x8)
	class USizeBox* MTXButtonBox; // 0x8e0 (0x8)
	class UOverlay* OverlayVBucks; // 0x8e8 (0x8)
	class UImage* OverlayGradient; // 0x8f0 (0x8)
	class UImage* OverlayGradientDetails; // 0x8f8 (0x8)
	class UOverlay* OverlaySalePrice; // 0x900 (0x8)
	class USafeZone* SafeZoneCloseButton; // 0x908 (0x8)
	class USafeZone* SafeZoneMTX; // 0x910 (0x8)
	class UStoreMain_OfferDetailsAttribute_C* StoreMainOfferDetailsAttribute1; // 0x918 (0x8)
	class UStoreMain_OfferDetailsAttribute_C* StoreMainOfferDetailsAttribute2; // 0x920 (0x8)
	class UCommonTextBlock* TextDescription; // 0x928 (0x8)
	class UCommonTextBlock* TextName; // 0x930 (0x8)
	class UCommonTextBlock* TextOfferDisplayPrice; // 0x938 (0x8)
	class UCommonTextBlock* TextOriginalPrice; // 0x940 (0x8)
	class UVerticalBox* VBoxOfferInfo; // 0x948 (0x8)
	class UImage* VBuckHighlight; // 0x950 (0x8)
	class UWBP_ContentPurchaseBlocker_C* WBPContentPurchaseBlocker; // 0x958 (0x8)
	struct TMap<int, class UFortMtxOfferData*> ABAssetCollection; // 0x960 (0x50)
	bool isContentBlocked; // 0x9b0 (0x1)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.ContentBlocked (Has no native function)
	void ContentBlocked(bool& isContentBlocked, struct FText& ContentBlockedText, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable1, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum ESlateVisibility& K2NodeSelectDefault1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage (Has no native function)
	void SetupCurrencyImage(class UFortAccountItemDefinition*& PriceItem, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetSmallPreviewImageReturnValue, bool& CallFuncIsValidReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, int& CallFuncGetPriceItemRequiredItemCount, class UFortAccountItemDefinition*& CallFuncGetPriceItemReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue1, bool& CallFuncIsPriceInRealMoneyReturnValue, enum ESlateVisibility& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton (Has no native function)
	void UpdatePurchaseButton(struct FText& TemptextVariable, struct FText& TemptextVariable1, bool& TempboolVariable, class UFortHoldableButton*& CallFuncGetPurchaseButtonCurrentReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, class UWBP_UIKit_ButtonCTA_Base_C*& K2NodeDynamicCastAsWBPUIKitButtonCTABase, bool& K2NodeDynamicCastbSuccess, bool& CallFuncAreGrantedItemsOwnedReturnValue, bool& CallFuncNotPreBoolReturnValue, struct FText& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes (Has no native function)
	void InitDetailAttributes(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, class UFortMtxOfferData*& CallFuncGetOfferDisplayAssetReturnValue, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class UStoreMain_OfferDetailsAttribute_C*& CallFuncCreateReturnValue, struct FFortMtxDetailsAttribute& CallFuncArrayGetItem, class UVerticalBoxSlot*& CallFuncAddChildToVerticalBoxReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText (Has no native function)
	void SetPurchaseButtonText(struct FText& ButtonText, class UFortHoldableButton*& CallFuncGetPurchaseButtonCurrentReturnValue, class UWBP_UIKit_ButtonCTA_Base_C*& K2NodeDynamicCastAsWBPUIKitButtonCTABase, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer (Has no native function)
	bool IsGiftingStorefrontOffer(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity (Has no native function)
	void GetCurrencyABAssetFromQuantity(int& Quantity, class UFortMtxOfferData*& DataAsset, class UFortMtxOfferData*& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency (Has no native function)
	void InitCurrency(enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable1, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, bool& TempboolVariable2, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue1, int& CallFuncGetBonusQuantityReturnValue, int& CallFuncGetTotalQuantityReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue1, bool& CallFuncBooleanANDReturnValue, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& K2NodeSelectDefault1, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue2, struct FText& CallFuncGetDescriptionReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue3, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue4, int& CallFuncGetBonusQuantityReturnValue1, int& CallFuncGetTotalQuantityReturnValue1, struct FText& CallFuncConvIntToTextReturnValue, bool& CallFuncGreaterIntIntReturnValue2, int& CallFuncGetBaseQuantityReturnValue, struct FText& CallFuncConvIntToTextReturnValue1, enum ESlateVisibility& K2NodeSelectDefault2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals (Has no native function)
	void InitStoreTypeVisuals(bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, enum EFortMtxStoreOfferType& CallFuncGetFortStoreOfferTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, enum ESlateVisibility& K2NodeSelectDefault); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput (Has no native function)
	void UnregisterInput(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput (Has no native function)
	void RegisterInput(struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDataTableRowHandle& K2NodeMakeStructDataTableRowHandle); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails (Has no native function)
	void PopDetails(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init (Has no native function)
	void Init(class UFortMtxOfferData*& DisplayAsset, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue, class UFortMtxOfferData*& CallFuncGetOfferDisplayAssetReturnValue, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue1, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue2, int& CallFuncGetTotalQuantityReturnValue, int& CallFuncGetTotalQuantityReturnValue1, class UFortMtxOfferData*& CallFuncGetCurrencyABAssetFromQuantityDataAsset, class UFortMtxOfferData*& CallFuncGetCurrencyABAssetFromQuantityDataAsset1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, enum EFortMtxStoreOfferType& CallFuncGetFortStoreOfferTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, enum EFortMtxStoreOfferType& CallFuncGetFortStoreOfferTypeReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue1, struct FText& CallFuncGetSalePriceFromLastAppStoreSalePrice, bool& CallFuncGetSalePriceFromLastAppStoreReturnValue, enum ESlateVisibility& TempbyteVariable, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue1, enum ESlateVisibility& TempbyteVariable1, class UFortExperimentContext*& CallFuncGetContextReturnValue, bool& CallFuncShouldShowNewVBuckColorsJuly2019ReturnValue, class UFortExperimentContext*& CallFuncGetContextReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncShouldShowNewVBuckColorsJuly2019ReturnValue1, bool& TempboolVariable, enum ESlateVisibility& K2NodeSelectDefault, class UFortStoreFrontOfferInfo*& CallFuncGetOfferInfoReturnValue3, struct FText& CallFuncGetNormalPriceReturnValue, struct FText& CallFuncGetNameReturnValue, class UMaterialInterface*& TempobjectVariable, class UMaterialInterface*& TempobjectVariable1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue2, bool& TempboolVariable1, class UFortExperimentContext*& CallFuncGetContextReturnValue2, bool& CallFuncShouldShowNewVBuckCoinAssetsJuly2019ReturnValue, class UMaterialInterface*& K2NodeSelectDefault1, bool& CallFuncBooleanANDReturnValue1, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue3); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack (Has no native function)
	void HandleBack(bool& PassThrough); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText (Has no native function)
	void ResetPurchaseButtonText(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted (Has no native function)
	void OnPurchasingStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet (Has no native function)
	void BPOnOfferSet(); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseBlocked (Has no native function)
	void UpdatePurchaseBlocked(bool& bIsBlocked, struct FText& PurchaseNotAllowedReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails (Has no native function)
	void ExecuteUbergraphStoreMainOfferDetails(int& EntryPoint, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, bool& K2NodeEventbIsBlocked, struct FText& K2NodeEventPurchaseNotAllowedReason); // (Final | 0x00008000 | HasDefaults)
};

