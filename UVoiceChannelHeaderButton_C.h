// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// Size: 0x1538
class UVoiceChannelHeaderButton_C : public UFortVoiceChannelHeaderButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1490 (0x8)
	class UWidgetAnimation* OnExpansion; // 0x1498 (0x8)
	class UWidgetAnimation* JoinSlideOut; // 0x14a0 (0x8)
	class UWidgetAnimation* ScaleUp; // 0x14a8 (0x8)
	class UFortMobileImage* ExpandDirectionTick; // 0x14b0 (0x8)
	class UHorizontalBox* HBoxJoin; // 0x14b8 (0x8)
	class UImage* ImageVoiceChatWarning; // 0x14c0 (0x8)
	class UCommonRichTextBlock* JoinText; // 0x14c8 (0x8)
	class UImage* NotTransmitting; // 0x14d0 (0x8)
	class UCommonRichTextBlock* OffText; // 0x14d8 (0x8)
	class UWidgetSwitcher* OnOffSwitcher; // 0x14e0 (0x8)
	class UCommonRichTextBlock* OnText; // 0x14e8 (0x8)
	class UOverlay* Overlay1; // 0x14f0 (0x8)
	class UImage* SelectionBackplate; // 0x14f8 (0x8)
	class UWidgetSwitcher* SimultaneousChannelSwitcher; // 0x1500 (0x8)
	class UWidgetSwitcher* SwitchTransmitting; // 0x1508 (0x8)
	class UImage* Transmitting; // 0x1510 (0x8)
	struct FLinearColor VoiceStatusActiveColor; // 0x1518 (0x10)
	struct FLinearColor VoiceStatusWarningColor; // 0x1528 (0x10)

	/* Functions */

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals (Has no native function)
	void OnUpdateVisuals(bool& bIsActiveAndListening, bool& bIsActiveOrAvailable, bool& bIsAvailableAndNotActive, bool& bIsListening, bool& bShowingRestriction); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled (Has no native function)
	void BPOnDisabled(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled (Has no native function)
	void BPOnEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnListItemObjectSet_1 (Has no native function)
	void OnListItemObjectSet1(class UObject*& ListItemObject); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnItemExpansionChanged (Has no native function)
	void BPOnItemExpansionChanged(bool& bIsExpanded); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton (Has no native function)
	void ExecuteUbergraphVoiceChannelHeaderButton(int& EntryPoint, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, bool& TempboolVariable1, struct FVector2D& TempstructVariable, struct FVector2D& TempstructVariable1, bool& TempboolVariable2, enum ESlateVisibility& TempbyteVariable2, enum ESlateVisibility& TempbyteVariable3, bool& TempboolVariable3, enum ESlateVisibility& TempbyteVariable4, enum ESlateVisibility& TempbyteVariable5, bool& TempboolVariable4, enum ESlateVisibility& TempbyteVariable6, enum ESlateVisibility& TempbyteVariable7, bool& K2NodeEventbIsActiveAndListening, bool& K2NodeEventbIsActiveOrAvailable, bool& K2NodeEventbIsAvailableAndNotActive, bool& K2NodeEventbIsListening, bool& K2NodeEventbShowingRestriction, int& CallFuncSelectIntReturnValue, enum ESlateVisibility& K2NodeSelectDefault, enum ESlateVisibility& K2NodeSelectDefault1, enum ESlateVisibility& K2NodeSelectDefault2, struct FVector2D& K2NodeSelectDefault3, double& CallFuncSelectFloatReturnValue, enum ESlateVisibility& K2NodeSelectDefault4, double& CallFuncSelectFloatReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue1, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue1, bool& CallFuncIsActiveChannelReturnValue, bool& CallFuncIsActiveChannelReturnValue1, struct TEnumAsByte<EUMGSequencePlayMode>& TempbyteVariable8, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, struct TEnumAsByte<EUMGSequencePlayMode>& TempbyteVariable9, int& CallFuncSelectIntReturnValue1, bool& TempboolVariable5, enum ESlateVisibility& TempbyteVariable10, enum ESlateVisibility& TempbyteVariable11, bool& CallFuncCanJoinChannelReturnValue, bool& CallFuncCanJoinChannelReturnValue1, float& CallFuncGetEndTimeReturnValue, bool& CallFuncIsListItemExpandedReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UObject*& K2NodeEventListItemObject, bool& K2NodeEventbIsExpanded, struct TEnumAsByte<EUMGSequencePlayMode>& K2NodeSelectDefault5, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, bool& TempboolVariable6, struct FLinearColor& CallFuncSelectColorReturnValue, struct FSlateColor& K2NodeMakeStructSlateColor, enum ESlateVisibility& K2NodeSelectDefault6, float& CallFuncSetRenderOpacityInOpacityImplicitCast, float& CallFuncSetRenderOpacityInOpacityImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

