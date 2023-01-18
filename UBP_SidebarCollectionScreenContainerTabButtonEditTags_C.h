// WidgetBlueprintGeneratedClass /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C
// Size: 0x1529
class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C : public UFortSidebarCollectionScreenContainerTabButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1480 (0x8)
	class UWidgetAnimation* SelectedTouch; // 0x1488 (0x8)
	class UWidgetAnimation* UnselectedTouch; // 0x1490 (0x8)
	class UWidgetAnimation* TagDisabledUnhover; // 0x1498 (0x8)
	class UWidgetAnimation* TagDisabledHover; // 0x14a0 (0x8)
	class UWidgetAnimation* TagDisabledUnhovered; // 0x14a8 (0x8)
	class UWidgetAnimation* TagDisabledHovered; // 0x14b0 (0x8)
	class UWidgetAnimation* TagEnabled; // 0x14b8 (0x8)
	class UWidgetAnimation* TagUnhovered; // 0x14c0 (0x8)
	class UWidgetAnimation* TagHovered; // 0x14c8 (0x8)
	class UWidgetAnimation* TagReset; // 0x14d0 (0x8)
	class UWidgetAnimation* Reset; // 0x14d8 (0x8)
	class UWidgetAnimation* Unhovered; // 0x14e0 (0x8)
	class UWidgetAnimation* Hovered; // 0x14e8 (0x8)
	class UWidgetAnimation* Unselected; // 0x14f0 (0x8)
	class UWidgetAnimation* Selected; // 0x14f8 (0x8)
	class UHorizontalBox* HorizontalBox0; // 0x1500 (0x8)
	class USpacer* MobileSpacer; // 0x1508 (0x8)
	class UCommonBorder* NewBang; // 0x1510 (0x8)
	class UOverlay* Overlay0; // 0x1518 (0x8)
	class UScaleBox* ScaleBoxMobileMultiplier; // 0x1520 (0x8)
	bool isTab; // 0x1528 (0x1)

	/* Functions */

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.HandleInputMethodChanged (Has no native function)
	void HandleInputMethodChanged(enum ECommonInputType& NewInputType, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, bool& TempboolVariable3, enum ECommonInputType& TempbyteVariable, bool& K2NodeSelectDefault, bool& CallFuncGetSelectedReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue2, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue3, bool& CallFuncGetSelectedReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Finished_D3AB39584598BB6DA7EE7C98805576AC (Has no native function)
	void FinishedD3AB39584598BB6DA7EE7C98805576AC(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnSelected (Has no native function)
	void BPOnSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnDeselected (Has no native function)
	void BPOnDeselected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_ShowBang (Has no native function)
	void BPShowBang(bool& bShow); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnTagCategoryChange (Has no native function)
	void BPOnTagCategoryChange(enum ESocialTagCategory& InTagCategory); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags (Has no native function)
	void ExecuteUbergraphBPSidebarCollectionScreenContainerTabButtonEditTags(int& EntryPoint, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UCommonInputSubsystem*& CallFuncGetLocalPlayerSubsystemReturnValue1, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, bool& K2NodeEventbShow, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue1, enum ESocialTagCategory& K2NodeEventInTagCategory, class UUMGSequencePlayer*& CallFuncCreatePlayAnimationProxyObjectResult, class UWidgetAnimationPlayCallbackProxy*& CallFuncCreatePlayAnimationProxyObjectReturnValue, struct FString& CallFuncGetEnumeratorUserFriendlyNameReturnValue, struct FSidebarSocialTagCategoryStructure& CallFuncGetSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure, bool& CallFuncIsValidReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue2, bool& CallFuncIsUsingTouchReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue3, bool& CallFuncIsUsingTouchReturnValue1, bool& CallFuncGetSelectedReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue4, bool& CallFuncIsUsingTouchReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsUsingTouchReturnValue3, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue5); // (Final | 0x00008000 | HasDefaults)
};

