// WidgetBlueprintGeneratedClass /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C
// Size: 0x719
class UContextTutorialIndicator_C : public UAthenaContextTutorialIndicator
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x608 (0x8)
	class UWidgetAnimation* STinbounce; // 0x610 (0x8)
	class UWidgetAnimation* STTextOutFast; // 0x618 (0x8)
	class UWidgetAnimation* STMarkerOut02; // 0x620 (0x8)
	class UWidgetAnimation* STMarkerOut01; // 0x628 (0x8)
	class UWidgetAnimation* STTextOut; // 0x630 (0x8)
	class UWidgetAnimation* STTextin; // 0x638 (0x8)
	class UWidgetAnimation* STArrowDisappear; // 0x640 (0x8)
	class UWidgetAnimation* STArrowBounce; // 0x648 (0x8)
	class UWidgetAnimation* STArrowTransition; // 0x650 (0x8)
	class UWidgetAnimation* STOutArrowMarker; // 0x658 (0x8)
	class UWidgetAnimation* STMarkerFadeIN; // 0x660 (0x8)
	class UWidgetAnimation* STArrowFade; // 0x668 (0x8)
	class UWidgetAnimation* STinSpinArrowMarker; // 0x670 (0x8)
	class UWidgetAnimation* STDiamondBoxFade; // 0x678 (0x8)
	class UWidgetAnimation* STDiamondDisappear; // 0x680 (0x8)
	class UWidgetAnimation* STMarkerMoveReaction; // 0x688 (0x8)
	class UWidgetAnimation* STinDiamondBoxSpin; // 0x690 (0x8)
	class UWidgetAnimation* STMarkerIdle; // 0x698 (0x8)
	class UWidgetAnimation* STinDiamondSpin; // 0x6a0 (0x8)
	class UWidgetAnimation* STborder; // 0x6a8 (0x8)
	class UWidgetAnimation* STin; // 0x6b0 (0x8)
	class UImage* Circle; // 0x6b8 (0x8)
	class UImage* Circle1; // 0x6c0 (0x8)
	class UCommonTextBlock* Description; // 0x6c8 (0x8)
	class UEditableTextBox* DescriptionOLD; // 0x6d0 (0x8)
	class UImage* Icon; // 0x6d8 (0x8)
	class UImage* Icon1; // 0x6e0 (0x8)
	class UImage* ImageSmallIndicator; // 0x6e8 (0x8)
	class UImage* ImageSmallIndicatorChild; // 0x6f0 (0x8)
	class UImage* Sign; // 0x6f8 (0x8)
	class UImage* Sign1; // 0x700 (0x8)
	class UImage* WhiteBoxChild; // 0x708 (0x8)
	class UImage* WhiteBoxSolo; // 0x710 (0x8)
	bool bIntroAnimationDone; // 0x718 (0x1)

	/* Functions */

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_FBBD6B5248E73C61005758B21F90D160 (Has no native function)
	void FinishedFBBD6B5248E73C61005758B21F90D160(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_191D6D204EA6EF5125923CB749C84A4A (Has no native function)
	void Finished191D6D204EA6EF5125923CB749C84A4A(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_5FDAD1724A4ABC34EC3B7F9D90839344 (Has no native function)
	void Finished5FDAD1724A4ABC34EC3B7F9D90839344(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.Finished_6F1BBAF94537A4D7945ED5A452FC1188 (Has no native function)
	void Finished6F1BBAF94537A4D7945ED5A452FC1188(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.PlayOutAnimation (Has no native function)
	void PlayOutAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.SetIndicatorText (Has no native function)
	void SetIndicatorText(struct FText& Text); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.PlayBounceAnimation (Has no native function)
	void PlayBounceAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.PlayInAnimation (Has no native function)
	void PlayInAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C.ExecuteUbergraph_ContextTutorialIndicator (Has no native function)
	void ExecuteUbergraphContextTutorialIndicator(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsAnimationPlayingReturnValue, struct FText& K2NodeEventText, class UUMGSequencePlayer*& CallFuncCreatePlayAnimationProxyObjectResult, class UWidgetAnimationPlayCallbackProxy*& CallFuncCreatePlayAnimationProxyObjectReturnValue, bool& CallFuncIsValidReturnValue, class UUMGSequencePlayer*& CallFuncCreatePlayAnimationProxyObjectResult1, class UWidgetAnimationPlayCallbackProxy*& CallFuncCreatePlayAnimationProxyObjectReturnValue1, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsVisibleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UUMGSequencePlayer*& CallFuncCreatePlayAnimationProxyObjectResult2, class UWidgetAnimationPlayCallbackProxy*& CallFuncCreatePlayAnimationProxyObjectReturnValue2, bool& CallFuncIsValidReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncCreatePlayAnimationProxyObjectResult3, class UWidgetAnimationPlayCallbackProxy*& CallFuncCreatePlayAnimationProxyObjectReturnValue3, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, bool& CallFuncIsValidReturnValue3, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue3, bool& CallFuncIsAnimationPlayingReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue4); // (Final | 0x00008000 | HasDefaults)
};

