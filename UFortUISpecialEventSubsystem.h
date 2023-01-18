// Class /Script/FortniteUI.FortUISpecialEventSubsystem
// Size: 0x58
class UFortUISpecialEventSubsystem : public UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnNewUISpecialEventState; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnTemporarySpecialUIEvent; // 0x40 (0x10)
	unsigned char padding_50[0x8]; // 0x50 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.FortUISpecialEventSubsystem.SpecialUIEventDelegate__DelegateSignature (Has no native function)
	void SpecialUIEventDelegateDelegateSignature(struct TEnumAsByte<EFortUISpecialEvents>& InEventName); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortUISpecialEventSubsystem.SetCurrentUISpecialEventState (Underlying native function: SetCurrentUISpecialEventState 0xa4555f0)
	void SetCurrentUISpecialEventState(struct TEnumAsByte<EFortUISpecialEvents>& InNewEventState); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUISpecialEventSubsystem.GetCurrentUIEventState (Underlying native function: GetCurrentUIEventState 0x731e94c)
	struct TEnumAsByte<EFortUISpecialEvents> GetCurrentUIEventState(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUISpecialEventSubsystem.CallTemporarySpecialUIEvent (Underlying native function: CallTemporarySpecialUIEvent 0xa455568)
	void CallTemporarySpecialUIEvent(struct TEnumAsByte<EFortUISpecialEvents>& InNewTemporaryEvent); // (Final | Native | Public | BlueprintCallable)
};

