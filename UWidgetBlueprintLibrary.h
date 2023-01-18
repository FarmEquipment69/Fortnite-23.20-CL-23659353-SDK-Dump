// Class /Script/UMG.WidgetBlueprintLibrary
// Size: 0x28
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse (Underlying native function: UnlockMouse 0x9b25e2c)
	static struct FEventReply UnlockMouse(struct FEventReply& Reply); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled (Underlying native function: Unhandled 0x9b25dc8)
	static struct FEventReply Unhandled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState (Underlying native function: SetWindowTitleBarState 0x9b24fcc)
	static void SetWindowTitleBarState(class UWidget*& TitleBarContent, enum EWindowTitleBarMode& Mode, bool& bTitleBarDragEnabled, bool& bWindowButtonsVisible, bool& bTitleBarVisible); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate (Underlying native function: SetWindowTitleBarOnCloseClickedDelegate 0x1a91944)
	static void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive (Underlying native function: SetWindowTitleBarCloseButtonActive 0x9b24f5c)
	static void SetWindowTitleBarCloseButtonActive(bool& bActive); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus (Underlying native function: SetUserFocus 0x9b1ebd0)
	static struct FEventReply SetUserFocus(struct FEventReply& Reply, class UWidget*& FocusWidget, bool& bInAllUsers); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition (Underlying native function: SetMousePosition 0x9b248fc)
	static struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D& NewMousePosition); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx (Underlying native function: SetInputMode_UIOnlyEx 0x9b246f0)
	static void SetInputModeUIOnlyEx(class APlayerController*& PlayerController, class UWidget*& InWidgetToFocus, enum EMouseLockMode& InMouseLockMode, bool& bFlushInput); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly (Underlying native function: SetInputMode_GameOnly 0x9b24604)
	static void SetInputModeGameOnly(class APlayerController*& PlayerController, bool& bFlushInput); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx (Underlying native function: SetInputMode_GameAndUIEx 0x9b243a0)
	static void SetInputModeGameAndUIEx(class APlayerController*& PlayerController, class UWidget*& InWidgetToFocus, enum EMouseLockMode& InMouseLockMode, bool& bHideCursorDuringCapture, bool& bFlushInput); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor (Underlying native function: SetHardwareCursor 0x9b240e8)
	static bool SetHardwareCursor(class UObject*& WorldContextObject, struct TEnumAsByte<EMouseCursor>& CursorShape, struct FName& CursorName, struct FVector2D& HotSpot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport (Underlying native function: SetFocusToGameViewport 0x9b24030)
	static void SetFocusToGameViewport(); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType (Underlying native function: SetColorVisionDeficiencyType 0x9b23d4c)
	static void SetColorVisionDeficiencyType(enum EColorVisionDeficiency& Type, float& Severity, bool& CorrectDeficiency, bool& ShowCorrectionWithDeficiency); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture (Underlying native function: SetBrushResourceToTexture 0x9b23c5c)
	static void SetBrushResourceToTexture(struct FSlateBrush& Brush, class UTexture2D*& Texture); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial (Underlying native function: SetBrushResourceToMaterial 0x9b23c5c)
	static void SetBrushResourceToMaterial(struct FSlateBrush& Brush, class UMaterialInterface*& Material); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState (Underlying native function: RestorePreviousWindowTitleBarState 0x9b23514)
	static void RestorePreviousWindowTitleBarState(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture (Underlying native function: ReleaseMouseCapture 0x9b23218)
	static struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture (Underlying native function: ReleaseJoystickCapture 0x9b230e8)
	static struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool& bInAllJoysticks); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// DelegateFunction /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature (Has no native function)
	void OnGameWindowCloseButtonClickedDelegateDelegateSignature(); // (Public | Delegate)

	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush (Underlying native function: NoResourceBrush 0x2d7cd9c)
	static struct FSlateBrush NoResourceBrush(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture (Underlying native function: MakeBrushFromTexture 0x23e51f8)
	static struct FSlateBrush MakeBrushFromTexture(class UTexture2D*& Texture, int& Width, int& Height); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial (Underlying native function: MakeBrushFromMaterial 0x2620c4c)
	static struct FSlateBrush MakeBrushFromMaterial(class UMaterialInterface*& Material, int& Width, int& Height); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset (Underlying native function: MakeBrushFromAsset 0x9b229f4)
	static struct FSlateBrush MakeBrushFromAsset(class USlateBrushAsset*& BrushAsset); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse (Underlying native function: LockMouse 0x9b22844)
	static struct FEventReply LockMouse(struct FEventReply& Reply, class UWidget*& CapturingWidget); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping (Underlying native function: IsDragDropping 0x9b220e4)
	static bool IsDragDropping(); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.Handled (Underlying native function: Handled 0x2a7ac94)
	static struct FEventReply Handled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding (Underlying native function: GetSafeZonePadding 0x27907f0)
	static void GetSafeZonePadding(class UObject*& WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent (Underlying native function: GetKeyEventFromAnalogInputEvent 0x9b2174c)
	static struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent (Underlying native function: GetInputEventFromPointerEvent 0x9b21664)
	static struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent (Underlying native function: GetInputEventFromNavigationEvent 0x9b21584)
	static struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent (Underlying native function: GetInputEventFromKeyEvent 0x9b2146c)
	static struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent (Underlying native function: GetInputEventFromCharacterEvent 0x9b21398)
	static struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial (Underlying native function: GetDynamicMaterial 0x15ee354)
	static class UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent (Underlying native function: GetDragDroppingContent 0x9b2121c)
	static class UDragDropOperation* GetDragDroppingContent(); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D (Underlying native function: GetBrushResourceAsTexture2D 0x9b21168)
	static class UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial (Underlying native function: GetBrushResourceAsMaterial 0x9b210b4)
	static class UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource (Underlying native function: GetBrushResource 0x235812c)
	static class UObject* GetBrushResource(struct FSlateBrush& Brush); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface (Underlying native function: GetAllWidgetsWithInterface 0x9b20dc4)
	static void GetAllWidgetsWithInterface(class UObject*& WorldContextObject, struct TArray<class UUserWidget*>& FoundWidgets, class UClass*& Interface, bool& TopLevelOnly); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass (Underlying native function: GetAllWidgetsOfClass 0x9b20b30)
	static void GetAllWidgetsOfClass(class UObject*& WorldContextObject, struct TArray<class UUserWidget*>& FoundWidgets, class UClass*& WidgetClass, bool& TopLevelOnly); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop (Underlying native function: EndDragDrop 0x9b2087c)
	static struct FEventReply EndDragDrop(struct FEventReply& Reply); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted (Underlying native function: DrawTextFormatted 0x9b20374)
	static void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D& Position, class UFont*& Font, int& FontSize, struct FName& FontTypeFace, struct FLinearColor& Tint); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText (Underlying native function: DrawText 0x9b20138)
	static void DrawText(struct FPaintContext& Context, struct FString& InString, struct FVector2D& Position, struct FLinearColor& Tint); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DrawSpline (Underlying native function: DrawSpline 0x9b1fee0)
	static void DrawSpline(struct FPaintContext& Context, struct FVector2D& Start, struct FVector2D& StartDir, struct FVector2D& End, struct FVector2D& EndDir, struct FLinearColor& Tint, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines (Underlying native function: DrawLines 0x9b1fd08)
	static void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor& Tint, bool& bAntiAlias, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine (Underlying native function: DrawLine 0x9b1fb08)
	static void DrawLine(struct FPaintContext& Context, struct FVector2D& PositionA, struct FVector2D& PositionB, struct FLinearColor& Tint, bool& bAntiAlias, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox (Underlying native function: DrawBox 0x9b1f7d8)
	static void DrawBox(struct FPaintContext& Context, struct FVector2D& Position, struct FVector2D& Size, class USlateBrushAsset*& Brush, struct FLinearColor& Tint); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus (Underlying native function: DismissAllMenus 0x9b1f61c)
	static void DismissAllMenus(); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed (Underlying native function: DetectDragIfPressed 0x9b1f450)
	static struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, class UWidget*& WidgetDetectingDrag, struct FKey& DragKey); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag (Underlying native function: DetectDrag 0x9b1f180)
	static struct FEventReply DetectDrag(struct FEventReply& Reply, class UWidget*& WidgetDetectingDrag, struct FKey& DragKey); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation (Underlying native function: CreateDragDropOperation 0x9b1f0b4)
	static class UDragDropOperation* CreateDragDropOperation(class UClass*& OperationClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.Create (Underlying native function: Create 0x120b218)
	static class UUserWidget* Create(class UObject*& WorldContextObject, class UClass*& WidgetType, class APlayerController*& OwningPlayer); // (Final | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus (Underlying native function: ClearUserFocus 0x9b1ef8c)
	static struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool& bInAllUsers); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse (Underlying native function: CaptureMouse 0x9b1eddc)
	static struct FEventReply CaptureMouse(struct FEventReply& Reply, class UWidget*& CapturingWidget); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick (Underlying native function: CaptureJoystick 0x9b1ebd0)
	static struct FEventReply CaptureJoystick(struct FEventReply& Reply, class UWidget*& CapturingWidget, bool& bInAllJoysticks); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop (Underlying native function: CancelDragDrop 0x9b1eba0)
	static void CancelDragDrop(); // (Final | Native | Static | Public | BlueprintCallable)
};

