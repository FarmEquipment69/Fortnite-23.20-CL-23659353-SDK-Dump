// Class /Script/UMG.UserWidget
// Size: 0x268
class UUserWidget : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FLinearColor ColorAndOpacity; // 0x150 (0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x160 (0xc)
	struct FSlateColor ForegroundColor; // 0x16c (0x14)
	struct FDelegate ForegroundColorDelegate; // 0x180 (0xc)
	unsigned char unreflected_18c[0x4]; // 0x18c (0x4) 
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x190 (0x10)
	unsigned char unreflected_1a0[0x18]; // 0x1a0 (0x18) 
	struct FMargin Padding; // 0x1b8 (0x10)
	struct TArray<class UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1c8 (0x10)
	class UUMGSequenceTickManager* AnimationTickManager; // 0x1d8 (0x8)
	struct TArray<class UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1e0 (0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x1f0 (0x10)
	struct TArray<class UUserWidgetExtension*> Extensions; // 0x200 (0x10)
	class UWidgetTree* WidgetTree; // 0x210 (0x8)
	int Priority; // 0x218 (0x4)
	unsigned char bIsFocusable; // 0x21c (0x1)
	unsigned char bStopAction; // 0x21c (0x1)
	unsigned char bHasScriptImplementedTick; // 0x21c (0x1)
	unsigned char bHasScriptImplementedPaint; // 0x21c (0x1)
	unsigned char unreflected_21d[0x13]; // 0x21d (0x13) 
	enum EWidgetTickFrequency TickFrequency; // 0x230 (0x1)
	unsigned char unreflected_231[0x7]; // 0x231 (0x7) 
	class UInputComponent* InputComponent; // 0x238 (0x8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x240 (0x10)
	unsigned char padding_250[0x18]; // 0x250 (0x18)

	/* Functions */

	// Function /Script/UMG.UserWidget.UnregisterInputComponent (Underlying native function: UnregisterInputComponent 0x9b25f50)
	void UnregisterInputComponent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.UnbindFromAnimationStarted (Underlying native function: UnbindFromAnimationStarted 0x2934d84)
	void UnbindFromAnimationStarted(class UWidgetAnimation*& Animation, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.UnbindFromAnimationFinished (Underlying native function: UnbindFromAnimationFinished 0x2369b38)
	void UnbindFromAnimationFinished(class UWidgetAnimation*& Animation, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationStarted (Underlying native function: UnbindAllFromAnimationStarted 0x9b25d38)
	void UnbindAllFromAnimationStarted(class UWidgetAnimation*& Animation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.UnbindAllFromAnimationFinished (Underlying native function: UnbindAllFromAnimationFinished 0x9b25ca8)
	void UnbindAllFromAnimationFinished(class UWidgetAnimation*& Animation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.Tick (Has no native function)
	void Tick(struct FGeometry& MyGeometry, float& InDeltaTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.StopListeningForInputAction (Underlying native function: StopListeningForInputAction 0x9b256b4)
	void StopListeningForInputAction(struct FName& ActionName, struct TEnumAsByte<EInputEvent>& EventType); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions (Underlying native function: StopListeningForAllInputActions 0x9b256a0)
	void StopListeningForAllInputActions(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions (Underlying native function: StopAnimationsAndLatentActions 0x15208d4)
	void StopAnimationsAndLatentActions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.StopAnimation (Underlying native function: StopAnimation 0x152070c)
	void StopAnimation(class UWidgetAnimation*& InAnimation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.StopAllAnimations (Underlying native function: StopAllAnimations 0x151f5b4)
	void StopAllAnimations(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetPositionInViewport (Underlying native function: SetPositionInViewport 0x9b24e10)
	void SetPositionInViewport(struct FVector2D& Position, bool& bRemoveDPIScale); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetPlaybackSpeed (Underlying native function: SetPlaybackSpeed 0x9b24d18)
	void SetPlaybackSpeed(class UWidgetAnimation*& InAnimation, float& PlaybackSpeed); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetPadding (Underlying native function: SetPadding 0x2d94238)
	void SetPadding(struct FMargin& InPadding); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetOwningPlayer (Underlying native function: SetOwningPlayer 0x9b24bf0)
	void SetOwningPlayer(class APlayerController*& LocalPlayerController); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay (Underlying native function: SetNumLoopsToPlay 0x9b24af0)
	void SetNumLoopsToPlay(class UWidgetAnimation*& InAnimation, int& NumLoopsToPlay); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetInputActionPriority (Underlying native function: SetInputActionPriority 0x277b8fc)
	void SetInputActionPriority(int& NewPriority); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetInputActionBlocking (Underlying native function: SetInputActionBlocking 0x9b24300)
	void SetInputActionBlocking(bool& bShouldBlock); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetForegroundColor (Underlying native function: SetForegroundColor 0x9b2404c)
	void SetForegroundColor(struct FSlateColor& InForegroundColor); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport (Underlying native function: SetDesiredSizeInViewport 0x9b23e8c)
	void SetDesiredSizeInViewport(struct FVector2D& Size); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetColorAndOpacity (Underlying native function: SetColorAndOpacity 0x207c4b0)
	void SetColorAndOpacity(struct FLinearColor& InColorAndOpacity); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetAnimationCurrentTime (Underlying native function: SetAnimationCurrentTime 0x9b23b48)
	void SetAnimationCurrentTime(class UWidgetAnimation*& InAnimation, float& InTime); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetAnchorsInViewport (Underlying native function: SetAnchorsInViewport 0x9b23aa8)
	void SetAnchorsInViewport(struct FAnchors& Anchors); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.SetAlignmentInViewport (Underlying native function: SetAlignmentInViewport 0x9b23a20)
	void SetAlignmentInViewport(struct FVector2D& Alignment); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.UserWidget.ReverseAnimation (Underlying native function: ReverseAnimation 0x9b23528)
	void ReverseAnimation(class UWidgetAnimation*& InAnimation); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.RemoveFromViewport (Underlying native function: RemoveFromViewport 0x14f9024)
	void RemoveFromViewport(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.RemoveExtensions (Underlying native function: RemoveExtensions 0x9b23494)
	void RemoveExtensions(class UClass*& InExtensionType); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.RemoveExtension (Underlying native function: RemoveExtension 0x9b233a8)
	void RemoveExtension(class UUserWidgetExtension*& InExtension); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.RegisterInputComponent (Underlying native function: RegisterInputComponent 0x9b230a0)
	void RegisterInputComponent(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.PlaySound (Underlying native function: PlaySound 0x9b22dfc)
	void PlaySound(class USoundBase*& SoundToPlay); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.PlayAnimationTimeRange (Underlying native function: PlayAnimationTimeRange 0x9b22bf0)
	class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation*& InAnimation, float& StartAtTime, float& EndAtTime, int& NumLoopsToPlay, struct TEnumAsByte<EUMGSequencePlayMode>& PlayMode, float& PlaybackSpeed, bool& bRestoreState); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.PlayAnimationReverse (Underlying native function: PlayAnimationReverse 0x205784c)
	class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation*& InAnimation, float& PlaybackSpeed, bool& bRestoreState); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.PlayAnimationForward (Underlying native function: PlayAnimationForward 0x20576c4)
	class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation*& InAnimation, float& PlaybackSpeed, bool& bRestoreState); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.PlayAnimation (Underlying native function: PlayAnimation 0x1fe4640)
	class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation*& InAnimation, float& StartAtTime, int& NumLoopsToPlay, struct TEnumAsByte<EUMGSequencePlayMode>& PlayMode, float& PlaybackSpeed, bool& bRestoreState); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.PauseAnimation (Underlying native function: PauseAnimation 0x9b22ad0)
	float PauseAnimation(class UWidgetAnimation*& InAnimation); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.OnTouchStarted (Has no native function)
	struct FEventReply OnTouchStarted(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnTouchMoved (Has no native function)
	struct FEventReply OnTouchMoved(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnTouchGesture (Has no native function)
	struct FEventReply OnTouchGesture(struct FGeometry& MyGeometry, struct FPointerEvent& GestureEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnTouchForceChanged (Has no native function)
	struct FEventReply OnTouchForceChanged(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnTouchEnded (Has no native function)
	struct FEventReply OnTouchEnded(struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath (Has no native function)
	void OnRemovedFromFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown (Has no native function)
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnPreviewKeyDown (Has no native function)
	struct FEventReply OnPreviewKeyDown(struct FGeometry& MyGeometry, struct FKeyEvent& InKeyEvent); // (Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnPaint (Has no native function)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/UMG.UserWidget.OnMouseWheel (Has no native function)
	struct FEventReply OnMouseWheel(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseMove (Has no native function)
	struct FEventReply OnMouseMove(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseCaptureLost (Has no native function)
	void OnMouseCaptureLost(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseButtonUp (Has no native function)
	struct FEventReply OnMouseButtonUp(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseButtonDown (Has no native function)
	struct FEventReply OnMouseButtonDown(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick (Has no native function)
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnMotionDetected (Has no native function)
	struct FEventReply OnMotionDetected(struct FGeometry& MyGeometry, struct FMotionEvent& InMotionEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnKeyUp (Has no native function)
	struct FEventReply OnKeyUp(struct FGeometry& MyGeometry, struct FKeyEvent& InKeyEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnKeyDown (Has no native function)
	struct FEventReply OnKeyDown(struct FGeometry& MyGeometry, struct FKeyEvent& InKeyEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnKeyChar (Has no native function)
	struct FEventReply OnKeyChar(struct FGeometry& MyGeometry, struct FCharacterEvent& InCharacterEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnFocusReceived (Has no native function)
	struct FEventReply OnFocusReceived(struct FGeometry& MyGeometry, struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnFocusLost (Has no native function)
	void OnFocusLost(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnDrop (Has no native function)
	bool OnDrop(struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation*& Operation); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnDragOver (Has no native function)
	bool OnDragOver(struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation*& Operation); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnDragLeave (Has no native function)
	void OnDragLeave(struct FPointerEvent& PointerEvent, class UDragDropOperation*& Operation); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnDragEnter (Has no native function)
	void OnDragEnter(struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation*& Operation); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnDragDetected (Has no native function)
	void OnDragDetected(struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation*& Operation); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnDragCancelled (Has no native function)
	void OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation*& Operation); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnAnimationStarted (Underlying native function: OnAnimationStarted 0x212172c)
	void OnAnimationStarted(class UWidgetAnimation*& Animation); // (BlueprintCosmetic | Native | Event | Protected | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnAnimationFinished (Underlying native function: OnAnimationFinished 0x228ddac)
	void OnAnimationFinished(class UWidgetAnimation*& Animation); // (BlueprintCosmetic | Native | Event | Protected | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnAnalogValueChanged (Has no native function)
	struct FEventReply OnAnalogValueChanged(struct FGeometry& MyGeometry, struct FAnalogInputEvent& InAnalogInputEvent); // (Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.OnAddedToFocusPath (Has no native function)
	void OnAddedToFocusPath(struct FFocusEvent*& InFocusEvent); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.ListenForInputAction (Underlying native function: ListenForInputAction 0x9b2236c)
	void ListenForInputAction(struct FName& ActionName, struct TEnumAsByte<EInputEvent>& EventType, bool& bConsume, struct FDelegate& Callback); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/UMG.UserWidget.IsPlayingAnimation (Underlying native function: IsPlayingAnimation 0x9b220c8)
	bool IsPlayingAnimation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.IsListeningForInputAction (Underlying native function: IsListeningForInputAction 0x9b22108)
	bool IsListeningForInputAction(struct FName& ActionName); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.IsInteractable (Has no native function)
	bool IsInteractable(); // (BlueprintCosmetic | Event | Public | BlueprintEvent | Const)

	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying (Underlying native function: IsAnyAnimationPlaying 0x9b220c8)
	bool IsAnyAnimationPlaying(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward (Underlying native function: IsAnimationPlayingForward 0x9b2200c)
	bool IsAnimationPlayingForward(class UWidgetAnimation*& InAnimation); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.IsAnimationPlaying (Underlying native function: IsAnimationPlaying 0x9b21f34)
	bool IsAnimationPlaying(class UWidgetAnimation*& InAnimation); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn (Underlying native function: GetOwningPlayerPawn 0x2a88fd8)
	class APawn* GetOwningPlayerPawn(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetOwningPlayerCameraManager (Underlying native function: GetOwningPlayerCameraManager 0x9b21c8c)
	class APlayerCameraManager* GetOwningPlayerCameraManager(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetIsVisible (Underlying native function: GetIsVisible 0x9b0b7d4)
	bool GetIsVisible(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetExtensions (Underlying native function: GetExtensions 0x9b212d0)
	struct TArray<class UUserWidgetExtension*> GetExtensions(class UClass*& ExtensionType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetExtension (Underlying native function: GetExtension 0x9b21240)
	class UUserWidgetExtension* GetExtension(class UClass*& ExtensionType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime (Underlying native function: GetAnimationCurrentTime 0x9b20fa0)
	float GetAnimationCurrentTime(class UWidgetAnimation*& InAnimation); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetAnchorsInViewport (Underlying native function: GetAnchorsInViewport 0x9b20f1c)
	struct FAnchors GetAnchorsInViewport(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.GetAlignmentInViewport (Underlying native function: GetAlignmentInViewport 0x9b20ab8)
	struct FVector2D GetAlignmentInViewport(); // (Final | BlueprintCosmetic | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.UserWidget.FlushAnimations (Underlying native function: FlushAnimations 0x9b20974)
	void FlushAnimations(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/UMG.UserWidget.CancelLatentActions (Underlying native function: CancelLatentActions 0x9b1ebbc)
	void CancelLatentActions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.BindToAnimationStarted (Underlying native function: BindToAnimationStarted 0x19c9b80)
	void BindToAnimationStarted(class UWidgetAnimation*& Animation, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.BindToAnimationFinished (Underlying native function: BindToAnimationFinished 0x19c9cbc)
	void BindToAnimationFinished(class UWidgetAnimation*& Animation, struct FDelegate& Delegate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.BindToAnimationEvent (Underlying native function: BindToAnimationEvent 0x9b1ea50)
	void BindToAnimationEvent(class UWidgetAnimation*& Animation, struct FDelegate& Delegate, enum EWidgetAnimationEvent& AnimationEvent, struct FName& UserTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.AddToViewport (Underlying native function: AddToViewport 0x9b1e9d0)
	void AddToViewport(int& ZOrder); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.AddToPlayerScreen (Underlying native function: AddToPlayerScreen 0x9b1e944)
	bool AddToPlayerScreen(int& ZOrder); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/UMG.UserWidget.AddExtension (Underlying native function: AddExtension 0x9b1e8b4)
	class UUserWidgetExtension* AddExtension(class UClass*& InExtensionType); // (Final | Native | Public | BlueprintCallable)
};

