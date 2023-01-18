// WidgetBlueprintGeneratedClass /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C
// Size: 0x661
class UStoreMain_Root_Legacy_C : public UFortMtxStoreRootBase_Legacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5a0 (0x8)
	class UWidgetAnimation* Intro; // 0x5a8 (0x8)
	class UCommonBorder* CommonBorder0; // 0x5b0 (0x8)
	class UCommonTextBlock* CommonTextBlock3; // 0x5b8 (0x8)
	class UCommonBorder* ContainerAvailableAmount; // 0x5c0 (0x8)
	class UCommonBorder* CurrencyNotificationBorder; // 0x5c8 (0x8)
	class UCommonTextBlock* CurrencyNotificationText; // 0x5d0 (0x8)
	class UHorizontalBox* HorizontalBox0; // 0x5d8 (0x8)
	class UInfoFlag_C* InfoFlag; // 0x5e0 (0x8)
	class UGridPanel* NewLTMGrid; // 0x5e8 (0x8)
	class UVerticalBox* NEWLTMOfferSection; // 0x5f0 (0x8)
	class UCommonBorder* NewNoOffersBox; // 0x5f8 (0x8)
	class UCommonBorder* NewPurchasingDisabledBox; // 0x600 (0x8)
	class UImage* NewSpinner; // 0x608 (0x8)
	class UCommonWidgetSwitcherLegacy* NewSwitcherItemsProgress; // 0x610 (0x8)
	class UGridPanel* NewVBuckGrid; // 0x618 (0x8)
	class UVerticalBox* NewVbuckOffers; // 0x620 (0x8)
	class UVerticalBox* NewVBuckSection; // 0x628 (0x8)
	class UScaleBox* OfferScaleBoxRoot; // 0x630 (0x8)
	class UOverlay* Overlay0; // 0x638 (0x8)
	class USimpleMTXDisplay_C* SimpleMTXDisplay; // 0x640 (0x8)
	class UStore_BannerMessage_C* StoreBannerMessage; // 0x648 (0x8)
	class UAudioComponent* AmbientSound; // 0x650 (0x8)
	class UWidget* InitiallyFocusedOffer; // 0x658 (0x8)
	bool bShowingCampaignUpsell; // 0x660 (0x1)

	/* Functions */

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.BP_GetDesiredFocusTarget (Has no native function)
	class UWidget* BPGetDesiredFocusTarget(); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.GetVisibilityByChildrenPresence (Has no native function)
	void GetVisibilityByChildrenPresence(class UPanelWidget*& Panel, enum ESlateVisibility& NewParam, bool& TempboolVariable, bool& CallFuncHasAnyChildrenReturnValue, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& K2NodeSelectDefault); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleAllOffersGenerated (Has no native function)
	void HandleAllOffersGenerated(bool& BothOfferSectionsVisible, struct TEnumAsByte<EHorizontalAlignment>& TempbyteVariable, struct TEnumAsByte<EHorizontalAlignment>& TempbyteVariable1, struct FMargin& K2NodeMakeStructMargin, struct FMargin& K2NodeMakeStructMargin1, bool& TempboolVariable, class UOverlaySlot*& K2NodeDynamicCastAsOverlaySlot, bool& K2NodeDynamicCastbSuccess, enum ESlateVisibility& CallFuncGetVisibilityByChildrenPresenceNewParam, enum ESlateVisibility& CallFuncGetVisibilityByChildrenPresenceNewParam1, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& TempboolVariable1, bool& CallFuncIsActivatedReturnValue, struct FMargin& K2NodeSelectDefault, struct TEnumAsByte<EHorizontalAlignment>& K2NodeSelectDefault1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleGenerateOffer (Has no native function)
	void HandleGenerateOffer(class UFortStoreFrontOfferInfo*& OfferInfo, class UFortRealMoneyOffer*& StoreOfferWidget, struct FName& CallFuncGetStorefrontNameReturnValue, bool& CallFuncEqualEqualNameNameReturnValue, int& CallFuncGetChildrenCountReturnValue, int& CallFuncSubtractIntIntReturnValue, int& CallFuncGetChildrenCountReturnValue1, int& CallFuncSubtractIntIntReturnValue1, class UGridSlot*& CallFuncAddChildToGridReturnValue, class UGridSlot*& CallFuncAddChildToGridReturnValue1, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class UStoreMain_MTXOffer_C*& CallFuncCreateReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.PlayEquippedLockerMusic (Has no native function)
	void PlayEquippedLockerMusic(enum ESubGame& CallFuncGetSubGameReturnValue, struct TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFuncGetAllActorsOfClassOutActors, bool& CallFuncEqualEqualByteByteReturnValue, class AFort_Entry_Music_Controller_BP_C*& CallFuncArrayGetItem); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleBack (Has no native function)
	void HandleBack(bool& PassThrough); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleRedeem (Has no native function)
	void HandleRedeem(bool& bPassThrough, class APlayerController*& CallFuncGetOwningPlayerReturnValue, class URedeemFriendCodeWindow_C*& CallFuncCreateReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.SetupForCampaignUpsell (Has no native function)
	void SetupForCampaignUpsell(class UFortRuntimeOptions*& NewLocalVar0, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDataTableRowHandle& K2NodeMakeStructDataTableRowHandle, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsDesktopPlatformReturnValue, struct FDataTableRowHandle& K2NodeMakeStructDataTableRowHandle1, struct TArray<struct FString>& K2NodeMakeArrayArray); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.SetupFirstFocusableTile (Has no native function)
	void SetupFirstFocusableTile(class UWidget*& CallFuncGetChildAtReturnValue, class UWidget*& CallFuncGetChildAtReturnValue1, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.LayoutVBuckTiles (Has no native function)
	void LayoutVBuckTiles(class UWidget*& Child, int& Index, int& CallFuncDivideIntIntReturnValue, class UStoreMain_MTXOffer_C*& K2NodeDynamicCastAsStoreMainMTXOffer, bool& K2NodeDynamicCastbSuccess, class UGridSlot*& CallFuncSlotAsGridSlotReturnValue, class UWidget*& CallFuncGetChildAtReturnValue, int& CallFuncPercentIntIntReturnValue, int& CallFuncGetChildrenCountReturnValue, int& CallFuncGetChildrenCountReturnValue1, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue, int& TempintVariable, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Start Ambient Sound (Has no native function)
	void StartAmbientSound(bool& Condition, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue, class UAudioComponent*& CallFuncCreateSound2DReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.UpdateCurrencyNotification (Has no native function)
	void UpdateCurrencyNotification(enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable, struct FMtxBreakdown& CallFuncGetMtxBreakdownReturnValue, int64_t& CallFuncConvIntToInt64ReturnValue, bool& CallFuncGreaterIntIntReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, enum ESlateVisibility& K2NodeSelectDefault, struct FText& CallFuncFormatReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Focus (Has no native function)
	void Focus(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.NoOffersAvailable (Has no native function)
	void NoOffersAvailable(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnOffersGenerated (Has no native function)
	void OnOffersGenerated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.ClearOfferWidgets (Has no native function)
	void ClearOfferWidgets(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnUpdateOtherPlatformMTXMessage (Has no native function)
	void OnUpdateOtherPlatformMTXMessage(bool& HasOtherPlatformCurrency, struct FText& CurrencyMessageLocText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.GenerateOfferWidget (Has no native function)
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo*& OfferData); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnPurchasingDisabled (Has no native function)
	void OnPurchasingDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnTransitionedBySwitcher (Has no native function)
	void OnTransitionedBySwitcher(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnStartReadingOffers (Has no native function)
	void OnStartReadingOffers(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnMainTabSelected (Has no native function)
	void OnMainTabSelected(struct FName& TabName); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.ExecuteUbergraph_StoreMain_Root_Legacy (Has no native function)
	void ExecuteUbergraphStoreMainRootLegacy(int& EntryPoint, enum EFrontEndCamera& TempbyteVariable, class UFortFrontEndContext*& CallFuncGetContextReturnValue, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, class UFortFrontEndContext*& CallFuncGetLocalPlayerSubsystemReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& K2NodeEventHasOtherPlatformCurrency, struct FText& K2NodeEventCurrencyMessageLocText, class UFortStoreFrontOfferInfo*& K2NodeEventOfferData, bool& CallFuncIsActivatedReturnValue, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, enum EFrontEndCamera& TempbyteVariable3, enum ESlateVisibility& K2NodeSelectDefault, bool& TempboolVariable1, struct FName& K2NodeCustomEventTabName, bool& CallFuncEqualEqualNameNameReturnValue, enum EFrontEndCamera& K2NodeSelectDefault1, enum ESubGame& CallFuncGetSubGameReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Final | 0x00008000 | HasDefaults)
};

