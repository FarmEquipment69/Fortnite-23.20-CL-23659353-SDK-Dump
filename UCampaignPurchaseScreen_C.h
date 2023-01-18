// WidgetBlueprintGeneratedClass /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C
// Size: 0x474
class UCampaignPurchaseScreen_C : public UFortCampaignPurchaseScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x440 (0x8)
	class UWidgetAnimation* SwitchTextures; // 0x448 (0x8)
	class UMaterialInstanceDynamic* MIDKeyart; // 0x450 (0x8)
	struct FTimerHandle* CycleTimer; // 0x458 (0x8)
	struct TArray<class UTexture*> TextureCycle; // 0x460 (0x10)
	int TextureCycleIndex; // 0x470 (0x4)

	/* Functions */

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled (Has no native function)
	void IsMinorShutdownWarningEnabled(bool& Enabled, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, enum EFortUIFeatureState& CallFuncGetFeatureStateOutFeatureState, enum EFortUIFeatureStateReason& CallFuncGetFeatureStateOutReason, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton (Has no native function)
	void InitializeRedeemButton(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking (Has no native function)
	bool IsBusyMatchmaking(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update (Has no native function)
	void Update(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle (Has no native function)
	void AdvanceTextureCycle(int& NextTextureIndex, int& CurrentTextureIndex, int& CallFuncArrayLengthReturnValue, class UTexture*& CallFuncArrayGetItem, class UTexture*& CallFuncArrayGetItem1, bool& CallFuncGreaterEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle (Has no native function)
	void InitializeTextureCycle(class UTexture*& CallFuncArrayGetItem, int& CallFuncArrayLastIndexReturnValue, class UTexture*& CallFuncArrayGetItem1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer (Has no native function)
	void ToggleTimer(bool& Enabled, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonBackK2NodeComponentBoundEvent128CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed (Has no native function)
	void OnImageCycleTimeElapsed(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnStoreScreenCreated (Has no native function)
	void OnStoreScreenCreated(class UFortMtxStoreRootBase_Legacy*& StoreScreen); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen (Has no native function)
	void ExecuteUbergraphCampaignPurchaseScreen(int& EntryPoint, class UFortMtxStoreRootBase_Legacy*& K2NodeEventStoreScreen, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, class UStoreMain_Root_Legacy_C*& K2NodeDynamicCastAsStoreMainRootLegacy, bool& K2NodeDynamicCastbSuccess, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, class UFortFrontEndContext*& CallFuncGetContextReturnValue); // (Final | 0x00008000)
};

