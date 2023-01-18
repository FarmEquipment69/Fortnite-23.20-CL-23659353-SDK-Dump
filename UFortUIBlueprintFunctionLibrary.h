// Class /Script/FortniteUI.FortUIBlueprintFunctionLibrary
// Size: 0x28
class UFortUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.UnregisterActiveCinematic (Underlying native function: UnregisterActiveCinematic 0xa728050)
	static void UnregisterActiveCinematic(class UObject*& Context); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.TryPushWidgetAsModalPanelForPlayer (Underlying native function: TryPushWidgetAsModalPanelForPlayer 0xa727f9c)
	static void TryPushWidgetAsModalPanelForPlayer(class AFortPlayerController*& LocalPlayerController, class UUserWidget*& PushWidget); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.TryPushWidgetAsModalPanel (Underlying native function: TryPushWidgetAsModalPanel 0xa727ee8)
	static void TryPushWidgetAsModalPanel(class UUserWidget*& Context, class UUserWidget*& PushWidget); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.TryPushWidgetAsActivatablePanelForPlayer (Underlying native function: TryPushWidgetAsActivatablePanelForPlayer 0xa727d6c)
	static void TryPushWidgetAsActivatablePanelForPlayer(class APlayerController*& OwningPlayer, class UUserWidget*& PushWidget, enum EActivatePanelOption& Header, enum EActivatePanelOption& Footer, enum EActivatePanelOption& ChatWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.TryPushWidgetAsActivatablePanel (Underlying native function: TryPushWidgetAsActivatablePanel 0xa727bf0)
	static void TryPushWidgetAsActivatablePanel(class UUserWidget*& Context, class UUserWidget*& PushWidget, enum EActivatePanelOption& Header, enum EActivatePanelOption& Footer, enum EActivatePanelOption& ChatWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.TryPopActivatablePanel (Underlying native function: TryPopActivatablePanel 0xa727b3c)
	static void TryPopActivatablePanel(class UUserWidget*& Context, class UCommonActivatablePanelLegacy*& Panel); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.ToOrdinal (Underlying native function: ToOrdinal 0xa7279d8)
	static struct FString ToOrdinal(int& Number); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.SortActorArray (Underlying native function: SortActorArray 0xa727888)
	static void SortActorArray(struct TArray<class AActor*>& InActors, struct TArray<class AActor*>& OutSortedActors); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.ShowErrorDialog (Underlying native function: ShowErrorDialog 0xa727668)
	static void ShowErrorDialog(class UUserWidget*& Context, struct FText& DisplayMessage, struct FString& ErrorCode, enum EFortErrorSeverity& ErrorSeverity); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.SetWidgetCZonesAutomation (Underlying native function: SetWidgetCZonesAutomation 0xa72756c)
	static void SetWidgetCZonesAutomation(class UUserWidget*& Context, bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.SetScrollWidget (Underlying native function: SetScrollWidget 0xa727188)
	static void SetScrollWidget(class UUserWidget*& Context, class UWidget*& ToScroll); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.SetInputAllowedForPlayer (Underlying native function: SetInputAllowedForPlayer 0xa726ec4)
	static void SetInputAllowedForPlayer(bool& bEnabled, struct FName& Reason, class AFortPlayerController*& FortPC); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.SetInputAllowedForAllLocalPlayers (Underlying native function: SetInputAllowedForAllLocalPlayers 0xa726dc0)
	static void SetInputAllowedForAllLocalPlayers(class UObject*& WorldContextObject, bool& bEnabled, struct FName& Reason); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.RoundFloat (Underlying native function: RoundFloat 0xa726c44)
	static float RoundFloat(float& Value, struct TEnumAsByte<ERoundingMode>& RoundingMode); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.ResetKeyboardMousePlayerBindingsToPreset (Underlying native function: ResetKeyboardMousePlayerBindingsToPreset 0xa726a4c)
	static void ResetKeyboardMousePlayerBindingsToPreset(class AFortPlayerController*& LocalPlayerController, int& PresetToSet); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.RequestToOpenSpecificPlayerFeedbackModal (Underlying native function: RequestToOpenSpecificPlayerFeedbackModal 0xa7268e8)
	static void RequestToOpenSpecificPlayerFeedbackModal(class UUserWidget*& Context, class USocialUser*& UserToReport, struct TMap<struct FString, struct FString>& InAnalyticsContext); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.RequestToOpenPlayerFeedbackModalWithReportOrigin (Underlying native function: RequestToOpenPlayerFeedbackModalWithReportOrigin 0xa726754)
	static void RequestToOpenPlayerFeedbackModalWithReportOrigin(class UUserWidget*& Context, struct FString& ReportOrigin); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.RequestToOpenPlayerFeedbackModal (Underlying native function: RequestToOpenPlayerFeedbackModal 0xa7265c8)
	static void RequestToOpenPlayerFeedbackModal(class UUserWidget*& Context, class USocialUser*& UserToReport); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.RegisterActiveCinematic (Underlying native function: RegisterActiveCinematic 0xa726558)
	static void RegisterActiveCinematic(class UObject*& Context); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PushContentWidgetForPlayer (Underlying native function: PushContentWidgetForPlayer 0xa725ec4)
	static void PushContentWidgetForPlayer(class AFortPlayerController*& LocalPlayerController, class UWidget*& PushWidget); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PushContentWidgetAdvancedForPlayer (Underlying native function: PushContentWidgetAdvancedForPlayer 0xa725d34)
	static void PushContentWidgetAdvancedForPlayer(class AFortPlayerController*& LocalPlayerController, class UWidget*& PushWidget, bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PushContentWidgetAdvanced (Underlying native function: PushContentWidgetAdvanced 0xa725ba4)
	static void PushContentWidgetAdvanced(class UUserWidget*& Context, class UWidget*& PushWidget, bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PushContentWidget (Underlying native function: PushContentWidget 0xa725af0)
	static void PushContentWidget(class UUserWidget*& Context, class UWidget*& PushWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PushActivatablePanel (Underlying native function: PushActivatablePanel 0xa725a3c)
	static void PushActivatablePanel(class UUserWidget*& Context, class UCommonActivatablePanelLegacy*& Panel); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PopCurrentModal (Underlying native function: PopCurrentModal 0xa7259b4)
	static void PopCurrentModal(class UUserWidget*& Context); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PopContentWidgetForPlayer (Underlying native function: PopContentWidgetForPlayer 0xa725944)
	static void PopContentWidgetForPlayer(class AFortPlayerController*& LocalPlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PopContentWidget (Underlying native function: PopContentWidget 0xa7258d4)
	static void PopContentWidget(class UUserWidget*& Context); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PopAllContentWidgets (Underlying native function: PopAllContentWidgets 0xa725864)
	static void PopAllContentWidgets(class UUserWidget*& Context); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PopActivatablePanelInModalLayer (Underlying native function: PopActivatablePanelInModalLayer 0xa7257b0)
	static void PopActivatablePanelInModalLayer(class UUserWidget*& Context, class UCommonActivatablePanelLegacy*& Panel); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.PopActivatablePanel (Underlying native function: PopActivatablePanel 0xa7256fc)
	static void PopActivatablePanel(class UUserWidget*& Context, class UCommonActivatablePanelLegacy*& Panel); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.NotEqual_FFortDialogWaitingForLatentActionHandle (Underlying native function: NotEqual_FFortDialogWaitingForLatentActionHandle 0x6ae6e1c)
	static bool NotEqualFFortDialogWaitingForLatentActionHandle(struct FFortDialogExternalLatentActionHandle& A, struct FFortDialogExternalLatentActionHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.NavigateToFeature (Underlying native function: NavigateToFeature 0xa7253c4)
	static void NavigateToFeature(class UUserWidget*& Context, enum EFortUIFeature& Feature); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.NavigateForGift (Underlying native function: NavigateForGift 0xa725310)
	static void NavigateForGift(class UUserWidget*& Context, class UFortGiftBoxItem*& Item); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.KillConfirmation (Underlying native function: KillConfirmation 0xa7252a0)
	static void KillConfirmation(class UUserWidget*& Context); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.IsUIInputAllowed (Underlying native function: IsUIInputAllowed 0xa7251d4)
	static bool IsUIInputAllowed(class APlayerController*& LocalPlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.IsUIAddedToViewport (Underlying native function: IsUIAddedToViewport 0xa725154)
	static bool IsUIAddedToViewport(class AFortPlayerController*& LocalPlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.IsLatentActionHandleValid (Underlying native function: IsLatentActionHandleValid 0xa725094)
	static bool IsLatentActionHandleValid(struct FFortDialogExternalLatentActionHandle& Handle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.IsContentOnStack (Underlying native function: IsContentOnStack 0xa724f4c)
	static bool IsContentOnStack(class AFortPlayerController*& LocalPlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.InvalidateLatentActionHandle (Underlying native function: InvalidateLatentActionHandle 0xa724ed0)
	static void InvalidateLatentActionHandle(struct FFortDialogExternalLatentActionHandle& Handle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetTimespanAsSimpleString (Underlying native function: GetTimespanAsSimpleString 0xa724c04)
	static struct FText GetTimespanAsSimpleString(struct FTimespan*& Timespan); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetStandardBrushSize (Underlying native function: GetStandardBrushSize 0xa724b60)
	static struct FVector2D GetStandardBrushSize(struct TEnumAsByte<EFortBrushSize>& BrushSize); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetShorthandQuantityWithLimitedDigits (Underlying native function: GetShorthandQuantityWithLimitedDigits 0xa724a04)
	static struct FText GetShorthandQuantityWithLimitedDigits(int& Score, int& MaxDigits); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetShorthandQuantity (Underlying native function: GetShorthandQuantity 0xa724878)
	static struct FText GetShorthandQuantity(int& Quantity, int& MinimumFractionalDigits, int& MaximumFractionalDigits, bool& bShouldRoundDown); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetOrLoadSynchronously (Underlying native function: GetOrLoadSynchronously 0xa7246ec)
	static class UTexture2D* GetOrLoadSynchronously(struct TWeakObjectPtr<class UTexture2D>& SoftTexture2D); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaStringOnOffer (Underlying native function: GetMetaStringOnOffer 0xa7243d4)
	static struct FString GetMetaStringOnOffer(struct FCardPackOffer& Offer, struct FString& Key); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaIntOnOffer (Underlying native function: GetMetaIntOnOffer 0xa7241c8)
	static int GetMetaIntOnOffer(struct FCardPackOffer& Offer, struct FString& Key, int& DefaultValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetMetaBoolOnOffer (Underlying native function: GetMetaBoolOnOffer 0xa723fb8)
	static bool GetMetaBoolOnOffer(struct FCardPackOffer& Offer, struct FString& Key, bool& bDefaultValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageMultiSizeBrush (Underlying native function: GetItemSmallPreviewImageMultiSizeBrush 0xa723ecc)
	static struct FFortMultiSizeBrush GetItemSmallPreviewImageMultiSizeBrush(class UFortItem*& Item); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetItemSmallPreviewImageBrush (Underlying native function: GetItemSmallPreviewImageBrush 0xa723dd4)
	static struct FSlateBrush GetItemSmallPreviewImageBrush(class UFortItem*& Item, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageMultiSizeBrush (Underlying native function: GetItemDefinitionSmallPreviewImageMultiSizeBrush 0xa723d2c)
	static struct FFortMultiSizeBrush GetItemDefinitionSmallPreviewImageMultiSizeBrush(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetItemDefinitionSmallPreviewImageBrush (Underlying native function: GetItemDefinitionSmallPreviewImageBrush 0xa723c34)
	static struct FSlateBrush GetItemDefinitionSmallPreviewImageBrush(class UFortItemDefinition*& ItemDefinition, struct TEnumAsByte<EFortBrushSize>& BrushSize); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetInfinitySymbolText (Underlying native function: GetInfinitySymbolText 0xa723b94)
	static struct FText GetInfinitySymbolText(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetCurrentStateWidget (Underlying native function: GetCurrentStateWidget 0xa72395c)
	static class UCommonActivatableWidget* GetCurrentStateWidget(class APlayerController*& PlayerController); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetCurrentModal (Underlying native function: GetCurrentModal 0xa7238dc)
	static class UCommonActivatablePanelLegacy* GetCurrentModal(class UUserWidget*& Context); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetContainedImages (Underlying native function: GetContainedImages 0x61e8580)
	static struct TArray<class UImage*> GetContainedImages(class UWidget*& InWidget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetCachedWidgetForPlayer (Underlying native function: GetCachedWidgetForPlayer 0xa7237f4)
	static class UUserWidget* GetCachedWidgetForPlayer(class AFortPlayerController*& LocalPlayerController, class UClass*& WidgetClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetCachedWidget (Underlying native function: GetCachedWidget 0xa723730)
	static class UUserWidget* GetCachedWidget(class UUserWidget*& Context, class UClass*& WidgetClass); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.GetAssetFromTemplateId (Underlying native function: GetAssetFromTemplateId 0xa7235d4)
	static class UObject* GetAssetFromTemplateId(struct FString& TemplateId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.EqualEqual_FFortDialogWaitingForLatentActionHandle (Underlying native function: EqualEqual_FFortDialogWaitingForLatentActionHandle 0x6adfac4)
	static bool EqualEqualFFortDialogWaitingForLatentActionHandle(struct FFortDialogExternalLatentActionHandle& A, struct FFortDialogExternalLatentActionHandle& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.EndWaitForConfirmationDialog (Underlying native function: EndWaitForConfirmationDialog 0xa7234c8)
	static void EndWaitForConfirmationDialog(class UObject*& WorldContextObject, struct FFortDialogExternalLatentActionHandle& Handle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.DrawWidgetToRenderTarget (Underlying native function: DrawWidgetToRenderTarget 0x16bf5a8)
	static void DrawWidgetToRenderTarget(class UUserWidget*& Widget, class UTextureRenderTarget2D*& RenderTarget); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.CenterWidget (Underlying native function: CenterWidget 0xa72326c)
	static void CenterWidget(class UUserWidget*& Context, class UWidget*& ToCenter); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.CanNavigateToQuestObjective (Underlying native function: CanNavigateToQuestObjective 0x61e82c0)
	static bool CanNavigateToQuestObjective(class UFortQuestItem*& QuestItem); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.AreModalsConfirmationsErrorsActive (Underlying native function: AreModalsConfirmationsErrorsActive 0xa722fd0)
	static bool AreModalsConfirmationsErrorsActive(class AFortPlayerController*& LocalPlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortUIBlueprintFunctionLibrary.AreModalsActive (Underlying native function: AreModalsActive 0xa722f50)
	static bool AreModalsActive(class AFortPlayerController*& LocalPlayerController); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

