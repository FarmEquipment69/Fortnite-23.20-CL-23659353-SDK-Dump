// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/SocialPanel.SocialPanel_C
// Size: 0x568
class USocialPanel_C : public UFortSocialPanel
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x538 (0x8)
	class UWidgetAnimation* OnOpened; // 0x540 (0x8)
	class UImage* ImageBack; // 0x548 (0x8)
	class ULightbox_C* Lightbox; // 0x550 (0x8)
	class USafeZone* SafeZone0; // 0x558 (0x8)
	class USocialPanel_TopBarExtension_C* SocialPanelTopBarExtension; // 0x560 (0x8)

	/* Functions */

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.Play Panel Animation Sound (Has no native function)
	void PlayPanelAnimationSound(bool& CallFuncIsAnimationPlayingReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.ClosePanelAfterAnimation (Has no native function)
	void ClosePanelAfterAnimation(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.OnMouseButtonDown_0 (Has no native function)
	struct FEventReply OnMouseButtonDown0(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature (Has no native function)
	void BndEvtSocialPanelTopBarExtensionK2NodeComponentBoundEvent0CommonButtonClickedDelegateSignature(class UCommonButtonLegacy*& Button); // (BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.ClosePanel (Has no native function)
	void ClosePanel(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.HandleOutroEnded (Has no native function)
	void HandleOutroEnded(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.OnBeginOutro (Has no native function)
	void OnBeginOutro(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.OnBeginIntro (Has no native function)
	void OnBeginIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.HandleIntroEnded (Has no native function)
	void HandleIntroEnded(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel (Has no native function)
	void ExecuteUbergraphSocialPanel(int& EntryPoint, class UCommonButtonLegacy*& K2NodeComponentBoundEventButton, bool& CallFuncIsAnySlideOutMenuOpenReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsAnimationPlayingReturnValue, bool& CallFuncIsAnimationPlayingForwardReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1); // (Final | 0x00008000)
};

