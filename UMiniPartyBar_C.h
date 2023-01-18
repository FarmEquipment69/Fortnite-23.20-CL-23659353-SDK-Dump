// WidgetBlueprintGeneratedClass /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C
// Size: 0x2d0
class UMiniPartyBar_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UIconTextButton_C* ButtonLocalPlayer; // 0x298 (0x8)
	class UImage* LineSeparator; // 0x2a0 (0x8)
	class UTeamMemberBanner_C* LocalPlayer; // 0x2a8 (0x8)
	class UTeamMemberBanner_C* RemotePlayer1; // 0x2b0 (0x8)
	class UTeamMemberBanner_C* RemotePlayer2; // 0x2b8 (0x8)
	class UTeamMemberBanner_C* RemotePlayer3; // 0x2c0 (0x8)
	class UTeamMemberManage_C* NewLocalPlayerWidget; // 0x2c8 (0x8)

	/* Functions */

	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget (Has no native function)
	class UWidget* GetBannersTooltipWidget(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged (Has no native function)
	void HandlePartybarUIFeatureChanged(enum EFortUIFeature& Feature, enum EFortUIFeatureState& FeatureState, enum ESlateVisibility& TempbyteVariable, bool& CallFuncEqualEqualByteByteReturnValue, enum ESlateVisibility& TempbyteVariable1, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, enum EFortUIFeatureState& TempbyteVariable4, class UFortUIDataConfigurationContext*& CallFuncGetContextReturnValue, enum ESlateVisibility& K2NodeSelectDefault, bool& CallFuncArePartyFeaturesEnabledReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtButtonLocalPlayerK2NodeComponentBoundEvent81CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar (Has no native function)
	void ExecuteUbergraphMiniPartyBar(int& EntryPoint, int& TempintArrayIndexVariable, bool& CallFuncIsActivatedReturnValue, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, class APlayerController*& CallFuncGetOwningPlayerReturnValue, bool& CallFuncIsValidReturnValue, class UTeamMemberManage_C*& CallFuncCreateReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class UFortUIDataConfigurationContext*& CallFuncGetContextReturnValue, bool& CallFuncArePartyFeaturesEnabledReturnValue, struct TArray<class UWidget*>& K2NodeMakeArrayArray, class UWidget*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

