// WidgetBlueprintGeneratedClass /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C
// Size: 0x167c
class USidebarSocialTagWidget_C : public USocialTagWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1440 (0x8)
	class UWidgetAnimation* StateChange; // 0x1448 (0x8)
	class UBorder* BorderTagBorder; // 0x1450 (0x8)
	class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C* BPSidebarCollectionScreenContainerTabButtonEditTags; // 0x1458 (0x8)
	class UGridPanel* GridPanelTagWidget; // 0x1460 (0x8)
	class UScaleBox* ScaleBoxTagCategoryIcon; // 0x1468 (0x8)
	class USidebarSocialAddingTagWidget_C* SidebarSocialAddingTagWidget; // 0x1470 (0x8)
	class USpacer* SpacerTagCategoryIcon; // 0x1478 (0x8)
	class UCommonVisibilitySwitcher* SwitcherSelectedState; // 0x1480 (0x8)
	class UCommonTextBlock* TextTagName; // 0x1488 (0x8)
	struct FName NameInnerColor; // 0x1490 (0x4)
	struct FName NameOuterColor; // 0x1494 (0x4)
	struct FName NameTagOpacity; // 0x1498 (0x4)
	unsigned char unreflected_149c[0x4]; // 0x149c (0x4) 
	struct FString TagCategoryDisabled; // 0x14a0 (0x10)
	struct FTimerHandle* StateChangeLerpTimerHandle; // 0x14b0 (0x8)
	double StateChangeLerpAlpha; // 0x14b8 (0x8)
	struct FSidebarSocialTagCategoryStructure TagCategoryStructureReference; // 0x14c0 (0x70)
	struct FSidebarSocialTagCategoryStructure DisabledTagCategoryStructureReference; // 0x1530 (0x70)
	double StateChangeLerpTimeStep; // 0x15a0 (0x8)
	class UMaterialInstanceDynamic* TagBorderMaterialReference; // 0x15a8 (0x8)
	struct FLinearColor CurrentInnerColorReference; // 0x15b0 (0x10)
	struct FLinearColor CurrentOuterColorReference; // 0x15c0 (0x10)
	struct FLinearColor TargetInnerColorReference; // 0x15d0 (0x10)
	struct FLinearColor TargetOuterColorReference; // 0x15e0 (0x10)
	struct FLinearColor TagContentColorWhite; // 0x15f0 (0x10)
	struct FLinearColor TagContentColorWhiteDisabled; // 0x1600 (0x10)
	struct FLinearColor TagContentColorBlack; // 0x1610 (0x10)
	struct FLinearColor CurrentTagContentColorReference; // 0x1620 (0x10)
	struct FLinearColor TargetTagContentColorReference; // 0x1630 (0x10)
	struct FLinearColor TagContentColorBlackDisabled; // 0x1640 (0x10)
	double EnabledTagOpacity; // 0x1650 (0x8)
	double DisabledTagOpacity; // 0x1658 (0x8)
	bool Highlighted; // 0x1660 (0x1)
	unsigned char unreflected_1661[0x7]; // 0x1661 (0x7) 
	class UMaterialInstanceDynamic* TagCategoryIconMaterialReference; // 0x1668 (0x8)
	struct FName NameGradientStartColor; // 0x1670 (0x4)
	struct FName NameGradientEndColor; // 0x1674 (0x4)
	struct FName NameIconColor; // 0x1678 (0x4)

	/* Functions */

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetUnhoverState (Has no native function)
	void SetUnhoverState(bool& bPlayAnimation, float& CallFuncGetEndTimeReturnValue, float& CallFuncGetStartTimeReturnValue, double& CallFuncSelectFloatReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& CallFuncIsMobileGameReturnValue, float& CallFuncGetEndTimeReturnValue1, bool& CallFuncIsAnimationPlayingReturnValue, float& CallFuncGetStartTimeReturnValue1, double& CallFuncSelectFloatReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncSelectFloatBImplicitCast, double& CallFuncSelectFloatAImplicitCast, float& CallFuncPlayAnimationStartAtTimeImplicitCast, double& CallFuncSelectFloatBImplicitCast1, double& CallFuncSelectFloatAImplicitCast1, float& CallFuncPlayAnimationStartAtTimeImplicitCast1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTagBorderColors (Has no native function)
	void FunctionSetTagBorderColors(struct FLinearColor& InnerColor, struct FLinearColor& OuterColor, struct FLinearColor& CallFuncSelectColorReturnValue, struct FLinearColor& CallFuncSelectColorReturnValue1, struct FLinearColor& CallFuncSelectColorReturnValue2, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryUnhovered (Has no native function)
	void OnTagListEntryUnhovered(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryHovered (Has no native function)
	void OnTagListEntryHovered(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& CallFuncIsAnimationPlayingReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.GetCurrentTagBorderColors (Has no native function)
	void GetCurrentTagBorderColors(bool& CallFuncIsValidReturnValue, struct FLinearColor& CallFuncK2GetVectorParameterValueReturnValue, struct FLinearColor& CallFuncK2GetVectorParameterValueReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnUnhovered (Has no native function)
	void FunctionOnUnhovered(class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& CallFuncIsAnimationPlayingReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnHovered (Has no native function)
	void FunctionOnHovered(bool& CallFuncIsAnimationPlayingReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetCategoryCustomizationVisibility (Has no native function)
	void FunctionSetCategoryCustomizationVisibility(enum ESlateVisibility& CategoryCustomizationVisibility, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTag (Has no native function)
	void FunctionSetTag(struct FText& InTagName, enum ESocialTagCategory& InTagCategory, bool& InIsSystemTag, struct FString& CallFuncGetEnumeratorUserFriendlyNameReturnValue, struct FSlateColor& K2NodeMakeStructSlateColor, struct FSidebarSocialTagCategoryStructure& CallFuncGetSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure, struct FSidebarSocialTagCategoryStructure& CallFuncGetSidebarSocialTagCategoryStructureSidebarSocialTagCategoryStructure1, struct TWeakObjectPtr<class UMaterialInstance>& CallFuncConvObjectToSoftObjectReferenceReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetCategoryCustomizationVisibility (Has no native function)
	void SetCategoryCustomizationVisibility(enum ESlateVisibility& CategoryCustomizationVisibility); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnDeselected (Has no native function)
	void BPOnDeselected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnSelected (Has no native function)
	void BPOnSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTag (Has no native function)
	void SetTag(struct FText& InTagName, enum ESocialTagCategory& InTagCategory, bool& bInIsSystemTag); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.InterpolateTagColors (Has no native function)
	void InterpolateTagColors(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetHighlightState (Has no native function)
	void SetHighlightState(bool& bHighlighted); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetFullColor (Has no native function)
	void SetFullColor(); // (Event | Public | BlueprintEvent)

	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.ExecuteUbergraph_SidebarSocialTagWidget (Has no native function)
	void ExecuteUbergraphSidebarSocialTagWidget(int& EntryPoint, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, enum ESlateVisibility& K2NodeEventCategoryCustomizationVisibility, struct FText& K2NodeEventInTagName, enum ESocialTagCategory& K2NodeEventInTagCategory, bool& K2NodeEventbInIsSystemTag, bool& TempboolVariable3, bool& CallFuncIsMobileGameReturnValue, bool& K2NodeEventbHighlighted, class UCommonButtonLegacy*& CallFuncFindParentWidgetOfTypeReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsHoveredReturnValue, struct FLinearColor& K2NodeSelectDefault, class UWidgetAnimation*& K2NodeSelectDefault1, struct FLinearColor& K2NodeSelectDefault2, bool& TempboolVariable4, bool& TempboolVariable5, struct FLinearColor& K2NodeSelectDefault3, class UWidgetAnimation*& K2NodeSelectDefault4, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, struct FLinearColor& K2NodeSelectDefault5, bool& CallFuncIsValidReturnValue1, struct FSlateColor& K2NodeMakeStructSlateColor); // (Final | 0x00008000 | HasDefaults)
};

