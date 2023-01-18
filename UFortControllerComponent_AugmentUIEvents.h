// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
// Size: 0x138
class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x20]; // 0xa0 (0x20) 
	struct FMulticastInlineDelegate OnAugmentSelectorHighlightedChoice; // 0xc0 (0x10)
	struct FMulticastInlineDelegate OnAugmentStartedSelectionOfChoice; // 0xd0 (0x10)
	struct FMulticastInlineDelegate OnAugmentGrantingTimersFinishedForMatch; // 0xe0 (0x10)
	unsigned char unreflected_f0[0x18]; // 0xf0 (0x18) 
	struct FMulticastInlineDelegate AugmentHoldInputRerollChanged; // 0x108 (0x10)
	struct FMulticastInlineDelegate OnAugmentToolViewSwap; // 0x118 (0x10)
	int NumAugmentGrantRoundsForPlaylist; // 0x128 (0x4)
	unsigned char padding_12c[0xc]; // 0x12c (0xc)

	/* Functions */

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.UpdatedTimerProgress (Underlying native function: UpdatedTimerProgress 0x72925b4)
	void UpdatedTimerProgress(float& TimeRemaining, float& TimePercentage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.SetNumGrantableAugmentsForPlaylist (Underlying native function: SetNumGrantableAugmentsForPlaylist 0x72924e4)
	void SetNumGrantableAugmentsForPlaylist(int& NewNumRounds); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnGrantTimerProgressUpdatedDelegate__DelegateSignature (Has no native function)
	void OnGrantTimerProgressUpdatedDelegateDelegateSignature(float& TimeRemaining, float& TimePercentage); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentToolViewSwapDelegate__DelegateSignature (Has no native function)
	void OnAugmentToolViewSwapDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentStartedSelectionOfChoiceDelegate__DelegateSignature (Has no native function)
	void OnAugmentStartedSelectionOfChoiceDelegateDelegateSignature(int& ChoiceIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorOpenedStatusChangedDelegate__DelegateSignature (Has no native function)
	void OnAugmentSelectorOpenedStatusChangedDelegateDelegateSignature(bool& bIsOpened); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentSelectorHighlightedChoiceDelegate__DelegateSignature (Has no native function)
	void OnAugmentSelectorHighlightedChoiceDelegateDelegateSignature(int& ChoiceIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.OnAugmentGrantingTimersFinishedForMatchDelegate__DelegateSignature (Has no native function)
	void OnAugmentGrantingTimersFinishedForMatchDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.NotifyGrantingTimersFinished (Underlying native function: NotifyGrantingTimersFinished 0x7292338)
	void NotifyGrantingTimersFinished(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.HandleAugmentSelectorOpenedStatusChanged (Underlying native function: HandleAugmentSelectorOpenedStatusChanged 0x7291ec4)
	void HandleAugmentSelectorOpenedStatusChanged(bool& bIsOpened); // (Final | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents.AugmentHoldInputRerollChangedDelegate__DelegateSignature (Has no native function)
	void AugmentHoldInputRerollChangedDelegateDelegateSignature(enum EAugmentHoldInputRerollState& HoldState, float& HoldDurationSeconds); // (MulticastDelegate | Public | Delegate)
};

